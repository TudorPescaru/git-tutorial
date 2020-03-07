/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	char *cmd;
	if (argc > 2) {
		fprintf(stderr, "Usage: %s [command]\n", argv[0]);
		exit(-1);
	}

	if (argc == 1)
		system("man git");
	else {
		cmd = malloc(7 + strlen(argv[argc - 1]));
		if (!cmd) {
			fprintf(stderr, "not enought memory to create command!\n");
			exit(-1);
		}
		strcpy(cmd, "man git-");
		strcat(cmd, argv[argc - 1]);
		system(cmd);
	}

	return 0;
}
