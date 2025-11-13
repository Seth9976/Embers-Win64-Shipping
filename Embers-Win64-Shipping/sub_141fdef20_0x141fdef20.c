// 函数: sub_141fdef20
// 地址: 0x141fdef20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg1[1].d)
float zmm13[0x4] = arg3
int32_t rbp = (r8 - 1).d
int128_t* rax_1
uint128_t zmm1

if (r8.d != 0)
    int32_t* r10_1 = *arg1
    int32_t r9 = (r8 - 1).d
    
    if (zmm13[0] f< *r10_1)
    label_141fdf411:
        rax_1 = arg2
        zmm1 = zx.o(*(r10_1 + 0x14))
        *arg2 = *(r10_1 + 4)
        arg2[1].q = zmm1.q
    else
        int64_t rdi_1 = r8 - 1
        int32_t rsi_1 = 0
        
        if (not(zmm13[0] f>= r10_1[rdi_1 * 0x14]))
            r9 = 0
            
            if (r8.d s> 1)
                do
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(r8.d + r9)
                    int32_t rax_7 = (temp1_1 - temp0_1) s>> 1
                    float temp2_1 = r10_1[sx.q(rax_7) * 0x14]
                    zmm13[0] - temp2_1
                    
                    if (zmm13[0] < temp2_1)
                        r8 = zx.q(rax_7)
                    
                    if (zmm13[0] < temp2_1)
                        rax_7 = r9
                    
                    r9 = rax_7
                while (r8.d - r9 s> 1)
        
        if (r9 == 0xffffffff)
            goto label_141fdf411
        
        float zmm0[0x4]
        
        if (r9 != rbp)
        label_141fdf02f:
            
            if (arg1[2].b == 0 || r9 != rbp)
                r8.b = 0
            else
                r8.b = 1
            
            int64_t rcx_2 = sx.q(r9) * 0xa
            
            if (r8.b == 0)
                rsi_1 = r9 + 1
            
            void* rdx_5 = &r10_1[sx.q(rsi_1) * 0x14]
            float zmm14[0x4]
            
            if (r8.b == 0)
                zmm14 = *rdx_5
                zmm14[0] = zmm14[0] f- r10_1[rcx_2 * 2]
            else
                zmm14 = *(arg1 + 0x14)
            
            if (not(zmm14[0] <= 0f))
                char rax_15 = r10_1[rcx_2 * 2 + 0x13].b
                
                if (rax_15 != 2)
                    zmm13[0] = zmm13[0] f- r10_1[rcx_2 * 2]
                    zmm13[0] = zmm13[0] / zmm14[0]
                    uint128_t zmm6
                    
                    if (rax_15 == 0)
                        zmm0 = *(rdx_5 + 0x18)
                        zmm0[0] = zmm0[0] f- r10_1[rcx_2 * 2 + 6]
                        arg3 = *(rdx_5 + 4)
                        arg3[0] = arg3[0] f- r10_1[rcx_2 * 2 + 1]
                        float zmm7[0x4] = *(rdx_5 + 0x10)
                        zmm7[0] = zmm7[0] f- r10_1[rcx_2 * 2 + 4]
                        zmm1.d = (*(rdx_5 + 8)).d f- r10_1[rcx_2 * 2 + 2]
                        zmm6.d = (*(rdx_5 + 0x14)).d f- r10_1[rcx_2 * 2 + 5]
                        zmm0[0] = zmm0[0] * zmm13[0]
                        arg3[0] = arg3[0] * zmm13[0]
                        zmm0[0] = zmm0[0] f+ r10_1[rcx_2 * 2 + 6]
                        zmm7[0] = zmm7[0] * zmm13[0]
                        arg3[0] = arg3[0] f+ r10_1[rcx_2 * 2 + 1]
                        zmm1.d = zmm1.d f* zmm13[0]
                        zmm7[0] = zmm7[0] f+ r10_1[rcx_2 * 2 + 4]
                        float var_a4_1 = zmm0[0]
                        zmm0 = *(rdx_5 + 0xc)
                        zmm0[0] = zmm0[0] f- r10_1[rcx_2 * 2 + 3]
                        zmm1.d = zmm1.d f+ r10_1[rcx_2 * 2 + 2]
                        zmm6.d = zmm6.d f* zmm13[0]
                        zmm0[0] = zmm0[0] * zmm13[0]
                        zmm6.d = zmm6.d f+ r10_1[rcx_2 * 2 + 5]
                        zmm0[0] = zmm0[0] f+ r10_1[rcx_2 * 2 + 3]
                        float var_b0_1 = zmm0[0]
                        *arg2 = (_mm_unpacklo_ps(arg3, zmm1.q)).q
                        *(arg2 + 8) = var_b0_1
                        *(arg2 + 0xc) = (_mm_unpacklo_ps(zmm7, zmm6.q)).q
                        *(arg2 + 0x14) = var_a4_1
                        return arg2
                    
                    zmm1.d = zmm13.d f* zmm13[0]
                    zmm14[0] = zmm14[0] f* r10_1[rcx_2 * 2 + 0xe]
                    float zmm5 = zmm14[0] f* r10_1[rcx_2 * 2 + 0xf]
                    zmm14[0] = zmm14[0] f* r10_1[rcx_2 * 2 + 0x10]
                    zmm0 = zmm1
                    zmm0[0] = zmm0[0] * 3f
                    int64_t zmm3
                    zmm3.d = zmm14[0].q.d f* r10_1[rcx_2 * 2 + 0x11]
                    zmm14[0] = zmm14[0] f* r10_1[rcx_2 * 2 + 0x12]
                    uint128_t zmm9
                    zmm9.d = zmm1.d f* zmm13[0]
                    float zmm12[0x4] = zmm0
                    uint128_t zmm8
                    zmm8.d = zmm9.d f+ zmm9.d
                    zmm6.d = zmm9.d f- zmm1.d
                    zmm1.d = zmm1.d f+ zmm1.d
                    zmm12[0] = zmm12[0] f- zmm8.d
                    zmm8.d = zmm8.d f- zmm0[0]
                    zmm9.d = zmm9.d f- zmm1.d
                    zmm1.d = zmm14.d f* *(rdx_5 + 0x20)
                    zmm8.d = zmm8.d f+ 1f
                    zmm12[0] = zmm12[0] f* *(rdx_5 + 8)
                    zmm9.d = zmm9.d f+ zmm13[0]
                    zmm12[0] = zmm12[0] f* *(rdx_5 + 0xc)
                    zmm1.d = zmm1.d f* zmm6.d
                    zmm0 = zmm8
                    zmm0[0] = zmm0[0] f* r10_1[rcx_2 * 2 + 2]
                    zmm14[0] = zmm14[0] f* zmm9.d
                    zmm14[0] = zmm14[0] f* zmm9.d
                    zmm14[0] = zmm14[0] + zmm0[0]
                    zmm3.d = zmm3.d f* zmm9.d
                    zmm0 = zmm8
                    zmm14[0] = zmm14[0] f* zmm9.d
                    zmm0[0] = zmm0[0] f* r10_1[rcx_2 * 2 + 3]
                    zmm14[0] = zmm14[0] f+ zmm1.d
                    zmm1.d = zmm14.d f* *(rdx_5 + 0x24)
                    zmm5 = zmm5 f* zmm9.d + zmm0[0]
                    zmm0 = zmm8
                    zmm0[0] = zmm0[0] f* r10_1[rcx_2 * 2 + 4]
                    zmm1.d = zmm1.d f* zmm6.d
                    zmm14[0] = zmm14[0] + zmm0[0]
                    zmm12[0] = zmm12[0] f* *(rdx_5 + 0x10)
                    zmm5 = zmm5 f+ zmm1.d
                    zmm1.d = zmm14.d f* *(rdx_5 + 0x28)
                    zmm1.d = zmm1.d f* zmm6.d
                    zmm14[0] = zmm14[0] f+ zmm1.d
                    zmm1.d = zmm14.d f* *(rdx_5 + 0x2c)
                    zmm14[0] = zmm14[0] + zmm12[0]
                    zmm1.d = zmm1.d f* zmm6.d
                    zmm0 = zmm8
                    zmm0[0] = zmm0[0] f* r10_1[rcx_2 * 2 + 5]
                    zmm3.d = zmm3.d f+ zmm0[0]
                    zmm12[0] = zmm12[0] f* *(rdx_5 + 0x14)
                    zmm3.d = zmm3.d f+ zmm1.d
                    zmm1.d = zmm14.d f* *(rdx_5 + 0x30)
                    zmm3.d = zmm3.d f+ zmm12[0]
                    zmm1.d = zmm1.d f* zmm6.d
                    zmm0 = zmm8
                    zmm0[0] = zmm0[0] f* r10_1[rcx_2 * 2 + 6]
                    zmm14[0] = zmm14[0] + zmm0[0]
                    zmm8.d = zmm8.d f* r10_1[rcx_2 * 2 + 1]
                    zmm14[0] = zmm14[0] + zmm12[0]
                    zmm14[0] = zmm14[0] f+ zmm1.d
                    zmm5 = zmm5 + zmm12[0]
                    zmm12[0] = zmm12[0] f* *(rdx_5 + 0x18)
                    zmm12[0] = zmm12[0] f* *(rdx_5 + 4)
                    zmm14[0] = zmm14[0] + zmm12[0]
                    zmm14[0] = zmm14[0] f* r10_1[rcx_2 * 2 + 0xd]
                    zmm14[0] = zmm14[0] f* *(rdx_5 + 0x1c)
                    zmm14[0] = zmm14[0] f* zmm9.d
                    zmm14[0] = zmm14[0] f* zmm6.d
                    zmm14[0] = zmm14[0] f+ zmm8.d
                    float var_b0_2 = zmm14[0]
                    zmm14[0] = zmm14[0] + zmm14[0]
                    zmm14[0] = zmm14[0] + zmm12[0]
                    *arg2 = (_mm_unpacklo_ps(zmm14, zmm14[0].q)).q
                    *(arg2 + 8) = zmm5
                    *(arg2 + 0xc) = (_mm_unpacklo_ps(zmm14, zmm3)).q
                    *(arg2 + 0x14) = var_b0_2
                    return arg2
            
            rax_1 = arg2
            zmm1 = zx.o(*(r10_1 + (rcx_2 << 3) + 0x14))
            *arg2 = *(r10_1 + (rcx_2 << 3) + 4)
            arg2[1].q = zmm1.q
        else
            int64_t rax_11 = rdi_1 * 0xa
            
            if (arg1[2].b != 0)
                zmm0 = *(arg1 + 0x14)
                zmm0[0] = zmm0[0] f+ r10_1[rax_11 * 2]
                
                if (zmm13[0] >= zmm0[0])
                    goto label_141fdf411
                
                goto label_141fdf02f
            
            zmm1 = zx.o(*(r10_1 + (rax_11 << 3) + 0x14))
            rax_1 = arg2
            *arg2 = *(r10_1 + (rax_11 << 3) + 4)
            arg2[1].q = zmm1.q
else
    rax_1 = arg2
    zmm1 = zx.o(arg4[1].q)
    *arg2 = *arg4
    arg2[1].q = zmm1.q
return rax_1
