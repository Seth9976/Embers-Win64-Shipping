// 函数: sub_141962e50
// 地址: 0x141962e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    *arg1 = *arg2
    arg1[0x6e] = arg2[0x6e]
    int32_t rcx = *arg1
    
    if (rcx == 0)
        *(arg1 + 4) = *(arg2 + 4)
        arg1[5] = arg2[5]
    else if (rcx == 1)
        void* rcx_1 = &arg2[6]
        int64_t i_1 = 3
        void* rax_3 = &arg1[6]
        int64_t i
        
        do
            rax_3 += 0x80
            int128_t zmm0 = *rcx_1
            rcx_1 += 0x80
            *(rax_3 - 0x80) = zmm0
            *(rax_3 - 0x70) = *(rcx_1 - 0x70)
            *(rax_3 - 0x60) = *(rcx_1 - 0x60)
            *(rax_3 - 0x50) = *(rcx_1 - 0x50)
            *(rax_3 - 0x40) = *(rcx_1 - 0x40)
            *(rax_3 - 0x30) = *(rcx_1 - 0x30)
            *(rax_3 - 0x20) = *(rcx_1 - 0x20)
            *(rax_3 - 0x10) = *(rcx_1 - 0x10)
            i = i_1
            i_1 -= 1
        while (i != 1)
        *rax_3 = *rcx_1
        *(rax_3 + 0x10) = *(rcx_1 + 0x10)

return arg1
