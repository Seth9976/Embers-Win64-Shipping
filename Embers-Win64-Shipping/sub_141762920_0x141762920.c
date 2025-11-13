// 函数: sub_141762920
// 地址: 0x141762920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    int32_t r8_1 = *(arg1 + 0xc)
    int32_t i_1 = arg2[1].d
    int64_t* rdi_1 = *arg2
    arg1[1].d = i_1
    
    if (i_1 == 0 && r8_1 == 0)
        *(arg1 + 0xc) = i_1
        return arg1
    
    sub_1407c3650(arg1, i_1, r8_1)
    int64_t* rcx = *arg1
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t zmm0_1 = *rdi_1
            rdi_1 += 0xc
            *rcx = zmm0_1
            rcx += 0xc
            *(rcx - 4) = *(rdi_1 - 4)
            i = i_1
            i_1 -= 1
        while (i != 1)

return arg1
