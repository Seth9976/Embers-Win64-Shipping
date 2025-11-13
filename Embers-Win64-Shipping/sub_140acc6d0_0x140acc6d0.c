// 函数: sub_140acc6d0
// 地址: 0x140acc6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = 0
int64_t r9 = sx.q(arg3)
__builtin_memset(arg1, 0, 0x19)

if (r9 s>= 4)
    float rax
    rax.b = 0
    void* rdx = arg2 + 0x14
    int64_t i_2 = ((r9 - 4) u>> 2) + 1
    r10 = i_2 << 2
    int64_t i
    
    do
        float zmm3
        float zmm4
        float zmm5
        
        if (rax.b == 0)
            *(arg1 + 0xc) = *(rdx - 0x14)
            rax = *(rdx - 0xc)
            (*arg1)[5] = rax
            zmm4 = arg1[1][0]
            zmm5 = (*arg1)[5]
            *arg1 = *(arg1 + 0xc)
            (*arg1)[2] = rax
            rax.b = 1
            zmm3 = *arg1
            (*arg1)[6].b = 1
        else
            zmm3 = __minss_xmmss_memss(*(rdx - 0x14), *arg1)
            zmm4 = arg1[1][0]
            *arg1 = zmm3
            (*arg1)[1] = __minss_xmmss_memss((*(rdx - 0x10)).d, (*arg1)[1]).d
            (*arg1)[2] = __minss_xmmss_memss(*(rdx - 0xc), (*arg1)[2])
            (*arg1)[3] = __maxss_xmmss_memss((*(rdx - 0x14)).d, (*arg1)[3]).d
            zmm4 = __maxss_xmmss_memss(zmm4, *(rdx - 0x10))
            arg1[1][0] = zmm4
            zmm5 = __maxss_xmmss_memss(*(rdx - 0xc), (*arg1)[5])
            (*arg1)[5] = zmm5
        
        float temp0_7 = __minss_xmmss_memss(zmm3, *(rdx - 8))
        float zmm2 = (*arg1)[2]
        *arg1 = temp0_7
        float temp0_8 = __minss_xmmss_memss(*(rdx - 4), (*arg1)[1])
        (*arg1)[1] = temp0_8
        float temp0_9 = __minss_xmmss_memss(zmm2, *rdx)
        (*arg1)[2] = temp0_9
        int64_t temp0_10 = __maxss_xmmss_memss((*(rdx - 8)).d, (*arg1)[3])
        (*arg1)[3] = temp0_10.d
        float temp0_11 = __maxss_xmmss_memss(zmm4, *(rdx - 4))
        arg1[1][0] = temp0_11
        float temp0_12 = __maxss_xmmss_memss(zmm5, *rdx)
        (*arg1)[5] = temp0_12
        float temp0_13 = __minss_xmmss_memss(temp0_7, *(rdx + 4))
        *arg1 = temp0_13
        float temp0_14 = __minss_xmmss_memss(temp0_8, *(rdx + 8))
        (*arg1)[1] = temp0_14
        float temp0_15 = __minss_xmmss_memss(temp0_9, *(rdx + 0xc))
        (*arg1)[2] = temp0_15
        int64_t temp0_16 = __maxss_xmmss_memss(temp0_10.d, *(rdx + 4))
        (*arg1)[3] = temp0_16.d
        float temp0_17 = __maxss_xmmss_memss(temp0_11, *(rdx + 8))
        arg1[1][0] = temp0_17
        float temp0_18 = __maxss_xmmss_memss(temp0_12, *(rdx + 0xc))
        (*arg1)[5] = temp0_18
        *arg1 = __minss_xmmss_memss(temp0_13, *(rdx + 0x10))
        (*arg1)[1] = __minss_xmmss_memss(temp0_14, *(rdx + 0x14))
        (*arg1)[2] = __minss_xmmss_memss(temp0_15, *(rdx + 0x18))
        (*arg1)[3] = __maxss_xmmss_memss(temp0_16.d, *(rdx + 0x10)).d
        arg1[1][0] = __maxss_xmmss_memss(temp0_17, *(rdx + 0x14))
        float temp0_24 = __maxss_xmmss_memss(temp0_18, *(rdx + 0x18))
        rdx += 0x30
        (*arg1)[5] = temp0_24
        i = i_2
        i_2 -= 1
    while (i != 1)

if (r10 s< r9)
    char r8_2 = (*arg1)[6].b
    int64_t i_3 = r9 - r10
    void* rdx_3 = arg2 + ((r10 + ((r10 + 1) << 1)) << 2)
    int64_t i_1
    
    do
        if (r8_2 == 0)
            r8_2 = 1
            *(arg1 + 0xc) = *(rdx_3 - 8)
            float rax_1 = *rdx_3
            (*arg1)[5] = rax_1
            *arg1 = *(arg1 + 0xc)
            (*arg1)[2] = rax_1
            (*arg1)[6].b = 1
        else
            *arg1 = __minss_xmmss_memss((*arg1).d, *(rdx_3 - 8)).d
            (*arg1)[1] = __minss_xmmss_memss(*(rdx_3 - 4), (*arg1)[1])
            int64_t temp0_27 = __minss_xmmss_memss((*rdx_3).d, (*arg1)[2])
            float zmm1 = (*arg1)[3]
            (*arg1)[2] = temp0_27.d
            float temp0_28 = __maxss_xmmss_memss(zmm1, *(rdx_3 - 8))
            int64_t zmm0 = arg1[1][0]
            (*arg1)[3] = temp0_28
            arg1[1][0] = __maxss_xmmss_memss(zmm0.d, *(rdx_3 - 4)).d
            (*arg1)[5] = __maxss_xmmss_memss(*rdx_3, (*arg1)[5])
        
        rdx_3 += 0xc
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return arg1
