// 函数: sub_140eecc70
// 地址: 0x140eecc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm0 = sub_140f6bf30(*(arg1 + 0x2c0), arg2, arg3, arg4)

if (*(arg1 + 0x4a0) != 0)
    int64_t* rcx_1 = *(arg1 + 0x498)
    
    if (rcx_1 != 0 && (*(*rcx_1 + 0x28))(rcx_1) != 0)
        int64_t* rcx_2
        
        if (*(arg1 + 0x4a0) == 0)
            rcx_2 = nullptr
        else
            rcx_2 = *(arg1 + 0x498)
        
        (*(*rcx_2 + 0x48))(rcx_2)
        *(arg1 + 0x490) = zmm0

*arg2 = __maxss_xmmss_memss(*(arg1 + 0x490), *arg2)
return arg2
