#pragma once

#include <string>
#include <Windows.h>

class c_console {
public:
	const char* name = "tekno's blur";

	const int console_w = 650;
	const int console_h = 400;
	const short font_w = 8;
	const short font_h = 16;

	int console_max_chars = 0;
	int console_max_lines = 0;

	int current_line = 0;

public:
	void setup();

	void print_center(std::string_view string);
	void print_blank_line(int amount = 1);
	void print_line(int pad = 1);

	void set_font();

	RECT get_console_position();

	void center_console();

	void show_cursor(bool showing);
	void center_cursor();
	void reset_cursor();

	char get_char();

	std::string wait_for_dropped_file();
};

extern c_console console;