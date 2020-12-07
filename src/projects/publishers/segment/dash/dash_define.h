//==============================================================================
//
//  OvenMediaEngine
//
//  Created by Hyunjun Jang
//  Copyright (c) 2019 AirenSoft. All rights reserved.
//
//==============================================================================
#pragma once

#define DASH_CORS_FILE_NAME					"crossdomain.xml"

#define DASH_INIT_FILE_PREFIX				"init"
#define DASH_PLAYLIST_FILE_NAME				"manifest"
#define DASH_MPD_VIDEO_SUFFIX				/* <prefix>					*/	"_video"
#define DASH_MPD_AUDIO_SUFFIX				/* <prefix>					*/	"_audio"
#define DASH_LOW_LATENCY_SUFFIX				/* <prefix>					*/	"_ll"
#define DASH_SEGMENT_EXT					/* <prefix>					*/								"m4s"
#define DASH_PLAYLIST_EXT					/* <prefix>					*/								"mpd"

#define DASH_MPD_VIDEO_FULL_SUFFIX			/* <prefix>					*/	DASH_MPD_VIDEO_SUFFIX	"."	DASH_SEGMENT_EXT
#define DASH_MPD_AUDIO_FULL_SUFFIX			/* <prefix>					*/	DASH_MPD_AUDIO_SUFFIX	"."	DASH_SEGMENT_EXT
#define DASH_MPD_VIDEO_INIT_FILE_NAME		DASH_INIT_FILE_PREFIX			DASH_MPD_VIDEO_SUFFIX	"."	DASH_SEGMENT_EXT
#define DASH_MPD_AUDIO_INIT_FILE_NAME		DASH_INIT_FILE_PREFIX			DASH_MPD_AUDIO_SUFFIX	"."	DASH_SEGMENT_EXT
#define DASH_PLAYLIST_FULL_FILE_NAME		DASH_PLAYLIST_FILE_NAME									"."	DASH_PLAYLIST_EXT

#define CMAF_MPD_VIDEO_FULL_SUFFIX			DASH_MPD_VIDEO_SUFFIX			DASH_LOW_LATENCY_SUFFIX	"."	DASH_SEGMENT_EXT
#define CMAF_MPD_AUDIO_FULL_SUFFIX			DASH_MPD_AUDIO_SUFFIX			DASH_LOW_LATENCY_SUFFIX	"."	DASH_SEGMENT_EXT
#define CMAF_MPD_VIDEO_FULL_INIT_FILE_NAME	DASH_MPD_VIDEO_INIT_FILE_NAME	DASH_LOW_LATENCY_SUFFIX	"."	DASH_SEGMENT_EXT
#define CMAF_MPD_AUDIO_FULL_INIT_FILE_NAME	DASH_MPD_AUDIO_INIT_FILE_NAME	DASH_LOW_LATENCY_SUFFIX	"."	DASH_SEGMENT_EXT
#define CMAF_PLAYLIST_FULL_FILE_NAME		DASH_PLAYLIST_FILE_NAME			DASH_LOW_LATENCY_SUFFIX	"."	DASH_PLAYLIST_EXT
