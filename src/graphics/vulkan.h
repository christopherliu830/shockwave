#pragma once

#if !defined(VULKAN_HPP_DISPATCH_LOADER_DYNAMIC)
    #define VULKAN_HPP_DISPATCH_LOADER_DYNAMIC 1
#endif

#define VULKAN_HPP_NO_EXCEPTIONS

#if defined(_WIN32)
#  define VK_USE_PLATFORM_WIN32_KHR
#elif defined(__APPLE__)
#  define VK_USE_PLATFORM_MACOS_KHR
#endif

#include <vulkan/vulkan.h>
#include <vulkan/vulkan_macos.h>
#include <vulkan/vulkan.hpp>
#include <vk_mem_alloc.h>