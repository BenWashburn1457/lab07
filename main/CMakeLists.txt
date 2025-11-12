idf_component_register(SRCS main.c game.c course.c bloons.c bullet.c tower.c
                       INCLUDE_DIRS .
                       PRIV_REQUIRES esp_timer config lcd cursor pin sound)
# target_compile_options(${COMPONENT_LIB} PRIVATE "-Wno-format")