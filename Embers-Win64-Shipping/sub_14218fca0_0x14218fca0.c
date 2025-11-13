// 函数: sub_14218fca0
// 地址: 0x14218fca0
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
        int64_t rcx_1 = 0
        
        do
            int64_t arg_10
            uint128_t zmm0
            float zmm1[0x4]
            
            if (*rdx_2 == arg2)
                switch (rdx_2[1].b)
                    case 1
                        zmm1 = *(rdx_2 + 0xc)
                        float var_2c_2 = zmm1[0]
                        *arg3 = (_mm_unpacklo_ps(zmm1, zmm1[0].q)).q
                        arg3[1].d = var_2c_2
                        float rax_9
                        rax_9.b = 1
                        return rax_9
                    case 2
                        int32_t rax_5 = *(arg1 + 0x614) * 0xbb38435 + 0x3619636b
                        *(arg1 + 0x614) = rax_5
                        uint128_t zmm2
                        zmm2.d = rdx_2[2].d.d f- *(rdx_2 + 0xc)
                        arg_10.d = rax_5 u>> 9 | 0x3f800000
                        zmm0.d = arg_10.d.d f- 1f
                        zmm2.d = zmm2.d f* zmm0.d
                        zmm2.d = zmm2.d f+ *(rdx_2 + 0xc)
                        *arg3 = (_mm_unpacklo_ps(zmm2, zmm2.q)).q
                        arg3[1].d = zmm2.d
                        int32_t rax_8
                        rax_8.b = 1
                        return rax_8
                    case 3
                        *arg3 = *(rdx_2 + 0x14)
                        arg3[1].d = *(rdx_2 + 0x1c)
                        rax.b = 1
                        return rax
                    case 4
                        int32_t rcx_4 = *(arg1 + 0x614) * 0xbb38435 + 0x3619636b
                        *(arg1 + 0x614) = (rcx_4 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b
                        uint128_t zmm6
                        zmm6.d = rdx_2[4].d.d f- *(rdx_2 + 0x14)
                        int64_t zmm4
                        zmm4.d = (*(rdx_2 + 0x24)).d f- rdx_2[3].d
                        zmm1 = rdx_2[5].d
                        zmm1[0] = zmm1[0] f- *(rdx_2 + 0x1c)
                        arg_10.d = ((rcx_4 * 0xbb38435 + 0x3619636b) * 0xbb38435 + 0x3619636b) u>> 9
                            | 0x3f800000
                        zmm0.d = arg_10.d.d f- 1f
                        zmm6.d = zmm6.d f* zmm0.d
                        zmm0.d = ((rcx_4 * 0xbb38435 + 0x3619636b) u>> 9 | 0x3f800000).d f- 1f
                        zmm6.d = zmm6.d f+ *(rdx_2 + 0x14)
                        zmm4.d = zmm4.d f* zmm0.d
                        zmm0.d = (rcx_4 u>> 9 | 0x3f800000).d f- 1f
                        zmm4.d = zmm4.d f+ rdx_2[3].d
                        zmm1[0] = zmm1[0] f* zmm0.d
                        zmm0 = _mm_unpacklo_ps(zmm6, zmm4)
                        zmm1[0] = zmm1[0] f+ *(rdx_2 + 0x1c)
                        *arg3 = zmm0.q
                        arg3[1].d = zmm1[0]
                        float rax_20
                        rax_20.b = 1
                        return rax_20
                    case 5
                        void var_28
                        int32_t* rax_2 = sub_140acc920(&var_28, rdx_2 + 0x2c)
                        int32_t zmm0_1 = rax_2[2]
                        *arg3 = (_mm_unpacklo_ps(*rax_2, rax_2[1].q)).q
                        arg3[1].d = zmm0_1
                        int32_t rax_3
                        rax_3.b = 1
                        return rax_3
                    case 8
                        rax.b = 1
                        return rax
            rcx_1 += 1
            rdx_2 -= -0x80
        while (rcx_1 s< rax)

rax.b = 0
return rax
