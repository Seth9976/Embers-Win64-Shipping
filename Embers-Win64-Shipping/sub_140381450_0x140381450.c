// 函数: sub_140381450
// 地址: 0x140381450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9_2 = arg3.d s/ 0x190

if (arg1 s>= r9_2)
    int32_t r9_3
    
    if (arg2 == 0x1388)
        r9_3 = arg1
    label_140381504:
        int32_t rcx_3
        
        if (r9_3 * 0x190 != arg3.d && r9_3 * 0xc8 != arg3.d && r9_3 * 0x64 != arg3.d)
            rcx_3 = r9_3 * 0x32
        
        if (r9_3 * 0x190 == arg3.d || r9_3 * 0xc8 == arg3.d || r9_3 * 0x64 == arg3.d
                || rcx_3 == arg3.d || r9_3 * 0x19 == arg3.d || rcx_3 == (arg3 * 3).d)
            return zx.q(r9_3)
    else if (arg2 == 0x1392)
        r9_3 = arg3.d s/ 0x32
    label_1403814da:
        
        if (r9_3 s<= arg1)
            goto label_140381504
    else if (arg2 - 0x1389 u<= 5)
        r9_3 = r9_2 << (arg2.b + 0x77)
        int32_t rdx_4 = (arg3 * 3).d s/ 0x32
        
        if (rdx_4 s< r9_3)
            r9_3 = rdx_4
        
        goto label_1403814da

return 0xffffffff
