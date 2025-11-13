// 函数: sub_141d4d480
// 地址: 0x141d4d480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = arg3
int32_t rdi = arg4
int32_t* rbp = arg2
*arg7 = 0xffffffff

if (arg4 == 0 || arg2 == 0 || *(arg1 + 0x8c) == 0)
    return 0

int32_t r13 = 0

if (arg4 != 0)
    uint128_t zmm6 = arg5
    
    while (true)
        uint128_t zmm0
        uint32_t zmm2[0x4]
        
        if (*(arg1 + 0x50) == -0x80000000)
            int64_t rsi_1 = *(arg1 + 0x70)
            zmm2 = zx.o(0)
            int64_t rdi_1 = *(arg1 + 0x80)
            int32_t rax_1 = -1
            zmm2[0].q = float.d(rsi_1)
            
            if (zmm6.d f> 0f)
                rax_1 = 1
            
            zmm0.q = zmm2.q f* -0x4008000000000000
            int64_t temp0_1 = _mm_cvtepi32_pd(zx.q(rax_1))
            zmm2[0].q = zmm2[0].q f* -0x4020000000000000
            int64_t rbx_2 = rdi_1 - int.q(float.d(int.q(zmm0.q)) f* temp0_1)
            int64_t var_a0_1 = rbx_2
            zmm0.q = float.d(int.q(zmm2[0].q))
            zmm0.q = zmm0.q f* temp0_1
            int64_t r15_2 = rdi_1 - int.q(zmm0.q)
            int64_t rax_6 = *arg6
            int128_t var_b8 = zx.o(0)
            (*rax_6)(zx.o(0), &var_b8)
            
            if (sub_141d50750(arg1, &var_b8) == 0)
                int64_t* rbx_5 = var_b8:8.q
                *(arg1 + 0x80) = rdi_1
                *(arg1 + 0x70) = rsi_1
                
                if (rbx_5 != 0)
                    rbx_5[1].d -= 1
                    
                    if (rbx_5[1].d == 1)
                        (**rbx_5)(rbx_5)
                        int32_t r12_1 = *(rbx_5 + 0xc)
                        *(rbx_5 + 0xc) -= 1
                        
                        if (r12_1 == 1)
                            int64_t r8_4 = *rbx_5
                            (*(r8_4 + 8))(rbx_5, zx.q(r12_1), r8_4)
                
                break
            
            int64_t rax_8 = *(arg1 + 0x80)
            
            if (r15_2 s< rax_8)
                if (rbx_2 s< rax_8)
                    *arg7 = r13
            else if (r15_2 s> rax_8 || rbx_2 s< rax_8)
                *arg7 = r13
            
            int64_t* rbx_3 = var_b8:8.q
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t rax_12 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (rax_12 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
            
            arg3 = arg_18
            rdi = arg4
        
        int64_t rax_14 = *(arg1 + 0x48)
        uint64_t rcx_4
        
        if (rax_14 s>= 0)
            rcx_4 = zx.q(*(arg1 + 0x78))
        
        int64_t rax_15
        
        if (rax_14 s< 0 || rax_14 s< rcx_4)
            int64_t zmm1
            zmm1.d = float.s(rax_14)
            zmm0.d = float.s(zx.q(*(arg1 + 0x78)))
            zmm1.d = zmm1.d f+ *(arg1 + 0x40)
            zmm1.d = zmm1.d f/ zmm0.d
            zmm0.q = float.d(*(arg1 + 0x70))
            *arg3 = int.q(_mm_cvtps_pd(zmm1) f* zmm0.q) + *(arg1 + 0x80)
            zmm0.d = zmm6.d f* *(arg1 + 0x58)
            int64_t rdx_9
            
            if (zmm0.d f>= 0f)
                rdx_9 = *(arg1 + 0x48)
            else
                int32_t rax_19 = *(arg1 + 0x68)
                int64_t rcx_5 = 0
                void* r9 = *(arg1 + 0x60)
                int32_t rbx_4 = rax_19 - 1
                int32_t temp1_1
                int32_t temp2_1
                temp1_1:temp2_1 = sx.q(rax_19)
                int64_t r10_1 = sx.q((temp2_1 - temp1_1) s>> 1)
                
                if (r10_1 s>= 4)
                    void* r8 = r9 + 8
                    int64_t i_1 = ((r10_1 - 4) u>> 2) + 1
                    void* rdx_5 = r9 + ((sx.q(rbx_4) - 2) << 2)
                    rcx_5 = i_1 << 2
                    rbx_4 += neg.d(i_1.d) << 2
                    int64_t i
                    
                    do
                        zmm0 = *(r8 - 8)
                        r8 += 0x10
                        int32_t rax_25 = *(rdx_5 + 8)
                        rdx_5 -= 0x10
                        *(r8 - 0x18) = rax_25
                        int32_t rax_26 = *(rdx_5 + 0x14)
                        *(rdx_5 + 0x18) = zmm0.d
                        zmm1 = *(r8 - 0x14)
                        *(r8 - 0x14) = rax_26
                        int32_t rax_27 = *(rdx_5 + 0x10)
                        *(rdx_5 + 0x14) = zmm1.d
                        zmm0 = *(r8 - 0x10)
                        *(r8 - 0x10) = rax_27
                        int32_t rax_28 = *(rdx_5 + 0xc)
                        *(rdx_5 + 0x10) = zmm0.d
                        zmm1 = *(r8 - 0xc)
                        *(r8 - 0xc) = rax_28
                        *(rdx_5 + 0xc) = zmm1.d
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                
                if (rcx_5 s< r10_1)
                    void* rdx_6 = r9 + (sx.q(rbx_4) << 2)
                    
                    do
                        zmm0 = *(r9 + (rcx_5 << 2))
                        int32_t rax_30 = *rdx_6
                        rdx_6 -= 4
                        *(r9 + (rcx_5 << 2)) = rax_30
                        rcx_5 += 1
                        *(rdx_6 + 4) = zmm0.d
                    while (rcx_5 s< r10_1)
                
                zmm0.d = 1f f- *(arg1 + 0x40)
                rdx_9 = zx.q(*(arg1 + 0x78)) - *(arg1 + 0x48) - 1
                *(arg1 + 0x58) = zmm6.d
                *(arg1 + 0x48) = rdx_9
                *(arg1 + 0x40) = zmm0.d
            
            if (rdx_9 == *(arg1 + 0x50))
                goto label_141d4d87d
            
            int64_t r8_1 = *(arg1 + 0x60)
            uint64_t rcx_6 = zx.q(*(arg1 + 0x88))
            
            if (rdx_9 == -1)
                uint64_t rdx_10 = 0
                
                if (rcx_6.d != 0)
                    do
                        *(arg1 + (rdx_10 << 2) + 0x20) = *(r8_1 + (rdx_10 << 2))
                        rdx_10 = zx.q(rdx_10.d + 1)
                    while (rdx_10.d u< *(arg1 + 0x88))
                
                goto label_141d4d875
            
            int64_t r8_2 = r8_1 + ((rcx_6 * rdx_9) << 2)
            
            if (rdx_9 != zx.q(*(arg1 + 0x78) - 1))
                uint64_t rdx_12 = 0
                
                if (rcx_6.d != 0)
                    do
                        *(arg1 + (rdx_12 << 2)) = *(r8_2 + (rdx_12 << 2))
                        rdx_12 = zx.q(rdx_12.d + 1)
                        rcx_6 = zx.q(*(arg1 + 0x88))
                    while (rdx_12.d u< rcx_6.d)
                
                uint64_t rdx_13 = 0
                
                if (rcx_6.d != 0)
                    do
                        *(arg1 + (rdx_13 << 2) + 0x20) =
                            *(r8_2 + (zx.q(rcx_6.d) << 2) + (rdx_13 << 2))
                        rdx_13 = zx.q(rdx_13.d + 1)
                    while (rdx_13.d u< *(arg1 + 0x88))
                
            label_141d4d875:
                rdx_9 = *(arg1 + 0x48)
                *(arg1 + 0x50) = rdx_9
            label_141d4d87d:
                uint64_t rcx_7 = 0
                
                if (*(arg1 + 0x88) u> 0)
                    do
                        zmm1.d = (*(arg1 + (rcx_7 << 2) + 0x20)).d f- *(arg1 + (rcx_7 << 2))
                        zmm1.d = zmm1.d f* *(arg1 + 0x40)
                        zmm1.d = zmm1.d f+ *(arg1 + (rcx_7 << 2))
                        rcx_7 = zx.q(rcx_7.d + 1)
                        *rbp = zmm1.d
                        rbp = &rbp[1]
                    while (rcx_7.d u< *(arg1 + 0x88))
                    
                    rdx_9 = *(arg1 + 0x48)
                
                uint64_t rax_40 = zx.q(*(arg1 + 0x7c))
                zmm2 = _mm_and_ps(zmm6, 0x7fffffff)
                r13 += 1
                zmm0.d = float.s(rax_40)
                zmm1.d = float.s(zx.q(*(arg1 + 0x8c)))
                zmm2[0] = zmm2[0] f* zmm0.d
                zmm2[0] = zmm2[0] f/ zmm1.d
                zmm2[0] = zmm2[0] f+ *(arg1 + 0x40)
                int32_t rax_42 = int.d(zmm2[0])
                zmm0 = _mm_cvtepi32_ps(zx.o(rax_42))
                rax_15 = sx.q(rax_42) + rdx_9
                zmm2[0] = zmm2[0] f- zmm0.d
                *(arg1 + 0x40) = zmm2[0]
            else
                uint64_t rdx_11 = 0
                
                if (rcx_6.d != 0)
                    do
                        *(arg1 + (rdx_11 << 2)) = *(r8_2 + (rdx_11 << 2))
                        rdx_11 = zx.q(rdx_11.d + 1)
                    while (rdx_11.d u< *(arg1 + 0x88))
                
                *(arg1 + 0x50) = -0x80000000
                rax_15 = -1
        else
            *(arg1 + 0x50) = -0x80000000
            rax_15 = rax_14 - rcx_4
        
        *(arg1 + 0x48) = rax_15
        
        if (r13 u>= rdi)
            break
        
        arg3 = arg_18

return zx.q(r13)
