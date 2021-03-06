#pragma once

#include  <cstdint>

typedef enum {
	IMAGE_FORMAT_COLOR_MJPG,
	IMAGE_FORMAT_COLOR_NV12,
	IMAGE_FORMAT_COLOR_YUY2,
	IMAGE_FORMAT_COLOR_BGRA32,
	IMAGE_FORMAT_DEPTH16,
	IMAGE_FORMAT_IR16,
	IMAGE_FORMAT_CUSTOM
}ImageFormat;
typedef enum {
	COLOR_RESOLUTION_OFF = 0,
	COLOR_RESOLUTION_720P,
	COLOR_RESOLUTION_1080P,
	COLOR_RESOLUTION_1440P,
	COLOR_RESOLUTION_1536P,
	COLOR_RESOLUTION_2160P,
	COLOR_RESOLUTION_3072P
}ColorResolution;
typedef enum {
	DEPTH_MODE_OFF = 0,
	DEPTH_MODE_NFOV_2X2BINNED,
	DEPTH_MODE_NFOV_UNBINNED,
	DEPTH_MODE_WFOV_2X2BINNED,
	DEPTH_MODE_WFOV_UNBINNED,
	DEPTH_MODE_PASSIVE_IR
}DepthMode;
typedef enum {
	WIRED_SYNC_MODE_STANDALONE,
	WIRED_SYNC_MODE_MASTER,
	WIRED_SYNC_MODE_SUBORDINATE
}WiredSyncMode;
typedef enum {
	FRAMES_PER_SECOND_5,
	FRAMES_PER_SECOND_15,
	FRAMES_PER_SECOND_30
}Fps;

struct K4aConfig {
	ImageFormat image_format;
	ColorResolution color_resolution;
	DepthMode depth_mode;
	Fps fps;
	bool capture_sync_only = true;
	int32_t depth_delay_off_color_usec = 0;
	WiredSyncMode wired_sync_mode;
};