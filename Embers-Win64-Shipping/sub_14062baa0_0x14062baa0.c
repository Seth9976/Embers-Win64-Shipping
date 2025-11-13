// 函数: sub_14062baa0
// 地址: 0x14062baa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t result

if (arg1 != 0)
    int64_t* rcx = *(arg1 + 0x220)
    
    if (rcx != 0)
        int64_t rax = *rcx
        float __saved_zmm6[0x4] = arg4
        arg4 = 0xbf800000
        int32_t arg_8 = 0xbf800000
        
        if ((*(rax + 0x6b0))(rcx, arg2, &arg_8, arg3, __saved_zmm6) != 0)
            arg4 = __sqrtss_xmmss_memss(0xbf800000, arg_8)
        
        result.o = arg4
        return result

result.o = 0xbf800000
return result
