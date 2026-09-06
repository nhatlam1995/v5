if(CONFIG_ZMK_DISPLAY AND CONFIG_ZMK_DISPLAY_STATUS_SCREEN_CUSTOM)
    zephyr_library_named(aug1st_display)

    zephyr_include_directories(${CMAKE_CURRENT_SOURCE_DIR})

    zephyr_library_sources(custom_status_screen.c)
    zephyr_library_sources(widgets/output_status.c)
    zephyr_library_sources(widgets/layer_status.c)
    zephyr_library_sources(widgets/os_mode.c)
    zephyr_library_sources(widgets/custom_icon.c)
    zephyr_library_sources(widgets/icon.c)
    
endif()