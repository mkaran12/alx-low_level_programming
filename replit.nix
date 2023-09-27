{ pkgs }: {
	deps = [
		pkgs.nasm
  pkgs.udis86.bin
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}