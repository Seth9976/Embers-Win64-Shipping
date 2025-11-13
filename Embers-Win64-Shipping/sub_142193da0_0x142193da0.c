// 函数: sub_142193da0
// 地址: 0x142193da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax

if ((arg2:4.d == 0 & sub_140b5b8a0(arg2.d, 0).b) == 0)
    uint32_t rax_1
    int64_t* rdx_1
    
    if ((*(arg1 + 0x433) & 8) == 0 && data_143de5480 != 0)
        rdx_1 = 0x5a0
        rax_1.b = GetCurrentThreadId() == data_143de5470
    
    if ((*(arg1 + 0x433) & 8) != 0 || data_143de5480 == 0 || rax_1.b != 0)
        rdx_1 = 0x440
    
    rax = sx.q(*(rdx_1 + arg1 + 8))
    
    if (rax.d s> 0)
        int64_t* rdx_2 = *(rdx_1 + arg1)
        int64_t r8 = rax
        int64_t rcx_1 = 0
        
        do
            if (*rdx_2 == arg2)
                rax = zx.q(rdx_2[1].b)
                
                if (rax.b == 3)
                    *arg3 = *(rdx_2 + 0x14)
                    arg3[1].d = *(rdx_2 + 0x1c)
                    rax.b = 1
                    return rax
                
                if (rax.b == 4)
                    int32_t rcx_3 = *(arg1 + 0x614) * 0xbb38435 + 0x3619636b
                    *(arg1 + 0x614) = (rcx_3 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b
                    uint128_t zmm6
                    zmm6.d = rdx_2[4].d.d f- *(rdx_2 + 0x14)
                    int64_t zmm4
                    zmm4.d = (*(rdx_2 + 0x24)).d f- rdx_2[3].d
                    int64_t arg_10
                    arg_10.d = ((rcx_3 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) u>> 9
                        | 0x3f800000
                    uint128_t zmm0
                    zmm0.d = arg_10.d.d f- 1f
                    zmm6.d = zmm6.d f* zmm0.d
                    zmm0.d = ((rcx_3 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000).d f- 1f
                    zmm6.d = zmm6.d f+ *(rdx_2 + 0x14)
                    zmm4.d = zmm4.d f* zmm0.d
                    zmm0.d = (rcx_3 u>> 9 | 0x3f800000).d f- 1f
                    zmm4.d = zmm4.d f+ rdx_2[3].d
                    float zmm1 = (rdx_2[5].d f- *(rdx_2 + 0x1c)) f* zmm0.d
                    zmm0 = _mm_unpacklo_ps(zmm6, zmm4)
                    zmm1 = zmm1 f+ *(rdx_2 + 0x1c)
                    *arg3 = zmm0.q
                    arg3[1].d = zmm1
                    float rax_12
                    rax_12.b = 1
                    return rax_12
                
                if (rax.b == 8)
                    rax.b = 1
                    return rax
            
            rcx_1 += 1
            rdx_2 -= -0x80
        while (rcx_1 s< r8)

rax.b = 0
return rax
