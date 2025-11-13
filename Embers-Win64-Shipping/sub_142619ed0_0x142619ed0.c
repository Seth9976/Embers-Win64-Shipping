// 函数: sub_142619ed0
// 地址: 0x142619ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = &__return_addr
uint32_t arg_10 = arg2[0]
int32_t i = 0

if (*(arg1 + 4) s> 0)
    int64_t* r14_1 = nullptr
    float zmm8[0x4] = zx.o(0)
    float zmm6[0x4]
    float var_38_1[0x4] = zmm6
    uint32_t zmm7[0x4]
    uint32_t var_48_1[0x4] = zmm7
    float zmm9[0x4]
    float var_68_1[0x4] = zmm9
    uint32_t zmm10[0x4]
    uint32_t var_78_1[0x4] = zmm10
    float zmm11[0x4]
    float var_88_1[0x4] = zmm11
    uint32_t zmm12[0x4]
    uint32_t var_98_1[0x4] = zmm12
    float zmm13[0x4]
    float var_a8_1[0x4] = zmm13
    float zmm14[0x4]
    float var_b8_1[0x4] = zmm14
    uint32_t zmm15[0x4]
    uint32_t var_c8_1[0x4] = zmm15
    
    do
        void* rbx_1 = *(r14_1 + *(arg1 + 0x10))
        void* rcx_1 = rbx_1 - *(arg1 + 8)
        int64_t rax_1
        void* rdx_1
        rdx_1:rax_1 = muls.dp.q(-0x5dc83cd4e930288d, rcx_1)
        result = ((rdx_1 + rcx_1) s>> 9 u>> 0x3f).d
        int128_t* rdi_3 = (sx.q((rcx_1 s/ 0x328).d) << 6) + *(arg1 + 0x18)
        
        if (*(rdi_3 + 0x38) != 0)
            float zmm0[0x4] = arg2
            zmm0[0] = zmm0[0] f+ rdi_3[3].d
            rdi_3[3].d = zmm0[0]
            uint32_t zmm3[0x4] = *(rdi_3 + 0x18)
            float zmm2[0x4] = rdi_3[2].d
            zmm6 = zmm3
            zmm3[0] = zmm3[0] f- *(rbx_1 + 0x22c)
            uint32_t zmm4[0x4] = *(rbx_1 + 0x230)
            zmm7 = zmm2
            zmm2[0] = zmm2[0] f- *(rbx_1 + 0x234)
            zmm4[0] = zmm4[0] f- *(rdi_3 + 0x1c)
            uint32_t zmm5[0x4] = *(rbx_1 + 0x284)
            zmm6[0] = zmm6[0] f- *(rdi_3 + 0xc)
            zmm7[0] = zmm7[0] f- *(rdi_3 + 0x14)
            zmm5[0] = zmm5[0] f* 0.5f
            arg2 = zmm2
            uint32_t temp0_1[0x4] = __andps_xmmxud_memxud(zmm4, data_142d3f770)
            zmm0 = zmm3
            arg2[0] = arg2[0] f* zmm2[0]
            zmm0[0] = zmm0[0] f* zmm3[0]
            arg2[0] = arg2[0] f+ zmm0[0]
            
            if (not(arg2[0] f< 25f))
                zmm2[0] = zmm2[0] f* zmm7[0]
                zmm3[0] = zmm3[0] f* zmm6[0]
                zmm2[0] = zmm2[0] f+ zmm3[0]
            
            if ((arg2[0] f< 25f || not(zmm2[0] >= zmm8[0])) && not(temp0_1[0] f>= zmm5[0]))
                *(rdi_3 + 0x38) = 0
                *(rbx_1 + 0x327) = 1
                
                if (*(arg1 + 0x2b21) != 0)
                    result = sub_14262e5c0(rbx_1, *(rdi_3 + 0x28))
            
            zmm6 = *rdi_3
            zmm2 = *(rdi_3 + 4)
            zmm7 = *(rdi_3 + 8)
            zmm9 = *(rdi_3 + 0x18)
            zmm14 = *(rdi_3 + 0x1c)
            zmm4 = zmm9
            zmm11 = *(rbx_1 + 0x22c)
            zmm4[0] = zmm4[0] f- zmm6[0]
            zmm15 = *(rbx_1 + 0x230)
            zmm10 = rdi_3[2].d
            zmm14[0] = zmm14[0] - zmm2[0]
            zmm12 = *(rbx_1 + 0x234)
            zmm11[0] = zmm11[0] - zmm6[0]
            zmm5 = zmm10
            zmm5[0] = zmm5[0] f- zmm7[0]
            zmm12[0] = zmm12[0] f- zmm7[0]
            zmm15[0] = zmm15[0] f- zmm2[0]
            zmm14[0] = zmm14[0] * zmm14[0]
            zmm11[0] = zmm11[0] f* zmm4[0]
            zmm12[0] = zmm12[0] f* zmm5[0]
            zmm15[0] = zmm15[0] f* zmm14[0]
            zmm15[0] = zmm15[0] f+ zmm11[0]
            zmm0 = zmm4
            zmm0[0] = zmm0[0] f* zmm4[0]
            zmm15[0] = zmm15[0] f+ zmm12[0]
            zmm14[0] = zmm14[0] + zmm0[0]
            zmm5[0] = zmm5[0] f* zmm5[0]
            bool cond:0_1 = zmm15[0] f<= 0f
            zmm14[0] = zmm14[0] f+ zmm5[0]
            
            if (not(cond:0_1))
                if (zmm14[0] f> zmm15[0])
                    zmm15[0] = zmm15[0] f/ zmm14[0]
                    zmm0 = zmm15
                    zmm0[0] = zmm0[0] f* zmm4[0]
                    zmm15[0] = zmm15[0] f* zmm14[0]
                    zmm15[0] = zmm15[0] f* zmm5[0]
                    zmm0[0] = zmm0[0] + zmm6[0]
                    zmm15[0] = zmm15[0] f+ zmm2[0]
                    zmm15[0] = zmm15[0] f+ zmm7[0]
                    zmm6 = zmm0
                    zmm2 = zmm15
                    zmm7 = zmm15
                else
                    zmm6 = zmm9
                    zmm2 = zmm14
                    zmm7 = zmm10
            
            zmm0 = *(rbx_1 + 0x280)
            zmm2[0] = zmm2[0] f- zmm15[0]
            zmm6[0] = zmm6[0] - zmm11[0]
            zmm7[0] = zmm7[0] f- zmm12[0]
            zmm0[0] = zmm0[0] + zmm0[0]
            zmm2[0] = zmm2[0] * zmm2[0]
            zmm6[0] = zmm6[0] * zmm6[0]
            zmm7[0] = zmm7[0] f* zmm7[0]
            zmm2[0] = zmm2[0] + zmm6[0]
            zmm0[0] = zmm0[0] * zmm0[0]
            zmm2[0] = zmm2[0] f+ zmm7[0]
            
            if (not(zmm2[0] <= zmm0[0]))
                zmm4 = zmm9
                zmm5 = zmm10
                zmm4[0] = zmm4[0] f- zmm11[0]
                zmm5[0] = zmm5[0] f- zmm12[0]
            
            zmm8 = zx.o(0)
            
            if (*(rbx_1 + 0x327) == 2)
                zmm2 = 0x3f800000
                zmm0 = zmm5
                zmm4[0] = zmm4[0] f* zmm4[0]
                zmm0[0] = zmm0[0] f* zmm5[0]
                zmm4[0] = zmm4[0] f+ zmm0[0]
                float temp0_2[0x4] = _mm_sqrt_ss(0, zmm4[0])
                arg2 = *(rbx_1 + 0x28c)
                *(rbx_1 + 0x254) = 0
                zmm2[0] = 1f / temp0_2[0]
                zmm2[0] = zmm2[0] f* zmm5[0]
                zmm2[0] = zmm2[0] f* zmm4[0]
                zmm2[0] = zmm2[0] f* arg2[0]
                zmm2[0] = zmm2[0] f* arg2[0]
                *(rbx_1 + 0x258) = zmm2[0]
                *(rbx_1 + 0x250) = zmm2[0]
                *(rbx_1 + 0x25c) = zmm2[0]
                *(rbx_1 + 0x260) = *(rbx_1 + 0x254)
                result = *(rbx_1 + 0x258)
                *(rbx_1 + 0x264) = result
                *(rbx_1 + 0x244) = 0
                *(rbx_1 + 0x24c) = 0
            
            arg2 = arg_10
        
        i += 1
        r14_1 = &r14_1[1]
    while (i s< *(arg1 + 4))

return result
