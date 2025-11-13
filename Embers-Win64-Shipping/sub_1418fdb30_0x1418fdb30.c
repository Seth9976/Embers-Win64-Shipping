// 函数: sub_1418fdb30
// 地址: 0x1418fdb30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

HMODULE rax = LoadLibraryW(u"vulkan-1.dll")
data_143efbcc8 = rax

if (rax != 0)
    int64_t rax_1 = sub_140b67a40(rax, u"vkCreateInstance")
    HMODULE rcx_2 = data_143efbcc8
    data_143efb640 = rax_1
    int64_t rax_2 = sub_140b67a40(rcx_2, u"vkGetInstanceProcAddr")
    HMODULE rcx_3 = data_143efbcc8
    data_143efb648 = rax_2
    int64_t rax_3 = sub_140b67a40(rcx_3, u"vkGetDeviceProcAddr")
    HMODULE rcx_4 = data_143efbcc8
    data_143efb650 = rax_3
    int64_t rax_4 = sub_140b67a40(rcx_4, u"vkEnumerateInstanceExtensionProperties")
    HMODULE rcx_5 = data_143efbcc8
    data_143efb658 = rax_4
    rax = sub_140b67a40(rcx_5, u"vkEnumerateInstanceLayerProperties")
    data_143efb660 = rax
    char rcx_6 = 1
    
    if (data_143efb640 == 0)
        rcx_6 = 0
    
    if (data_143efb648 == 0)
        rcx_6 = 0
    
    char rdx_1 = rcx_6
    
    if (data_143efb650 == 0)
        rdx_1 = 0
    
    char rcx_7 = rdx_1
    
    if (data_143efb658 == 0)
        rcx_7 = 0
    
    if (rax != 0 && rcx_7 != 0)
        int64_t rax_5 = sub_140b67a40(data_143efbcc8, u"vkGetPhysicalDeviceDisplayPropertiesKHR")
        HMODULE rcx_9 = data_143efbcc8
        data_143efb668 = rax_5
        int64_t rax_6 = sub_140b67a40(rcx_9, u"vkGetPhysicalDeviceDisplayPlanePropertiesKHR")
        HMODULE rcx_10 = data_143efbcc8
        data_143efb670 = rax_6
        int64_t rax_7 = sub_140b67a40(rcx_10, u"vkGetDisplayPlaneSupportedDisplaysKHR")
        HMODULE rcx_11 = data_143efbcc8
        data_143efb678 = rax_7
        int64_t rax_8 = sub_140b67a40(rcx_11, u"vkGetDisplayModePropertiesKHR")
        HMODULE rcx_12 = data_143efbcc8
        data_143efb680 = rax_8
        int64_t rax_9 = sub_140b67a40(rcx_12, u"vkCreateDisplayModeKHR")
        HMODULE rcx_13 = data_143efbcc8
        data_143efb688 = rax_9
        data_143efb690 = sub_140b67a40(rcx_13, u"vkGetDisplayPlaneCapabilitiesKHR")
        int64_t rax_10
        rax_10.b = 1
        return rax_10
    
    HMODULE hLibModule = data_143efbcc8
    
    if (hLibModule != 0)
        FreeLibrary(hLibModule)
        data_143efbcc8 = 0

rax.b = 0
return rax
