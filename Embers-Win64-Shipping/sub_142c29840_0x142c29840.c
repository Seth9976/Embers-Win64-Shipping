// 函数: sub_142c29840
// 地址: 0x142c29840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rdi = arg4
uint32_t r11_2 = (zx.d(*arg1) << 8) + zx.d(arg1[1])
int32_t r10_2 = r11_2 u>> 1 & 0x5b6db6db
int32_t rcx_2 = r11_2 - (r10_2 u>> 1 & 0x5b6db6db) - r10_2
int32_t rdx_3 = r11_2 u>> 1 & 0x5b6db6db
int32_t r11_4 = r11_2 - (rdx_3 u>> 1 & 0x5b6db6db) - rdx_3
int32_t r8_4 = (((r11_4 u>> 3) + r11_4) & 0xc71c71c7) u% 0x3f
int32_t r8_5 = r8_4 * 2
uint32_t result

if (r8_4 == neg.d(r8_4) || arg5 u< divu.dp.d(0:0xffffffff, r8_5))
    if (sub_142bf7510(arg2, arg4, r8_5 * arg5).b == 0)
        result.b = 0
    else if ((arg1[1] & 0xf0) != 0)
        int32_t rbx_1 = 0
        
        if (arg5 == 0)
        label_142c29972:
            result.b = 1
        else
            while (true)
                if (sub_142c29760(arg1, arg2, arg3, rdi).b == 0)
                    result.b = 0
                    break
                
                rbx_1 += 1
                rdi = &rdi[zx.q((((rcx_2 u>> 3) + rcx_2) & 0xc71c71c7) u% 0x3f) << 1]
                
                if (rbx_1 u>= arg5)
                    goto label_142c29972
    else
        result.b = 1
else
    result.b = 0

return result
