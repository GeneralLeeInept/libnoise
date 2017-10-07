#pragma once

#ifdef LIBNOISE_EXPORTS
#define LIBNOISE_API __declspec(dllexport)
#else
#define LIBNOISE_API __declspec(dllimport)
#endif
