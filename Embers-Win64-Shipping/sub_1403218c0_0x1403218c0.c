// 函数: sub_1403218c0
// 地址: 0x1403218c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s> 0)
    int32_t r8_2 = arg2 & 3
    uint64_t rax
    int64_t r9_1
    int128_t zmm0
    
    if (arg2 - 1 u>= 3)
        rax = arg1 + 0xa0
        r9_1 = 0
        zmm0 = data_142d3f660
        arg3.o = __vxorps_xmmdq_xmmdq_xmmdq(arg3.o, arg3.o)
        
        do
            *(rax - 0xa0) = zmm0
            *(rax - 0x90) = arg3
            *(rax - 0x70) = zmm0
            *(rax - 0x60) = arg3
            *(rax - 0x40) = zmm0
            *(rax - 0x30) = arg3
            *(rax - 0x10) = zmm0
            r9_1 += 4
            *rax = arg3
            rax += 0xc0
        while (arg2 - r8_2 != r9_1.d)
        
        if (r8_2 != 0)
            goto label_14032194c
    else
        r9_1 = 0
        
        if (r8_2 != 0)
        label_14032194c:
            rax = r9_1 * 0x30 + arg1 + 0x10
            int32_t i_1 = neg.d(r8_2)
            zmm0 = data_142d3f660
            arg3.o = __vxorps_xmmdq_xmmdq_xmmdq(arg3.o, arg3.o)
            int32_t i
            
            do
                *(rax - 0x10) = zmm0
                *rax = arg3
                rax += 0x30
                i = i_1
                i_1 += 1
            while (i != 0xffffffff)

_mm256_zeroupper()
