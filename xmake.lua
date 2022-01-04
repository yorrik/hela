add_rules("mode.debug", "mode.release")

target("hela")
    set_kind("binary")
    set_languages("c++20")
    -- set_warnings("all", "error")

    add_files("src/**.cpp", "src/**.mpp")
    add_syslinks("raylib")

    if is_mode("debug") then
        set_symbols("debug")
        set_optimize("none")
    elseif is_mode("release") then
        set_symbols("hidden")
        set_strip("all")
        set_optimize("fastest")
    end