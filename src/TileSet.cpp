#include "TileSet.h"

TileSet::TileSet (int tileWidth, int tileHeight, string file,
		GameObject& associated) :
		tileSet(associated, file), tileWidth(tileWidth), tileHeight(tileHeight) {
	columns = tileSet.GetWidth() / tileWidth;
	rows = tileSet.GetHeight() / tileHeight;
}

void TileSet::RenderTile (unsigned int index, float x, float y) {
	if (index < (rows * columns) - 1) {
		tileSet.Render(x, y);
	}
}

int TileSet::GetTileHeight () const {
	return tileHeight;
}

int TileSet::GetTileWidth () const {
	return tileWidth;
}
