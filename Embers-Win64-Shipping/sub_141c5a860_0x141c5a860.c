// 函数: sub_141c5a860
// 地址: 0x141c5a860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x64)

if (rcx == 0)
    void* rcx_11 = arg1[8]
    char rax_21
    
    if (rcx_11 != 0)
        rax_21 = sub_141c63b80(rcx_11)
    
    if (rcx_11 == 0 || rax_21 == 0)
        memset(arg1[9], 0, sx.q(arg1[0xa].d) << 2)
        int32_t result = arg1[0xa].d
        arg1[0xc].d = result
        return result
    
    int64_t* rcx_12 = arg1[8]
    int32_t rax_23 = (*(*rcx_12 + 0x320))(rcx_12)
    int32_t r8_6 = arg1[0xa].d
    
    if (rax_23 == 1)
        int64_t* rcx_18 = arg1[8]
        arg1[0xc].d = (sx.q((*(*rcx_18 + 0x318))(rcx_18, arg1[9], r8_6)) u>> 2).d
    else
        int32_t i = 0
        int32_t rax_25 = *(arg1 + 0x54) * r8_6
        int16_t* rdi_2 = nullptr
        int16_t* var_28 = nullptr
        int32_t var_1c_1 = 0
        int32_t rax_26 = rax_25 * 2
        int32_t var_20_1 = rax_26
        
        if (rax_26 s> 0)
            sub_1405daba0(&var_28)
            r8_6 = arg1[0xa].d
            rdi_2 = var_28
        
        int64_t* rcx_14 = arg1[8]
        uint32_t rcx_16 = (sx.q((*(*rcx_14 + 0x318))(rcx_14, rdi_2, r8_6)) u>> 1).d
        arg1[0xc].d = rcx_16
        
        if (rcx_16 s> 0)
            int64_t rdx_9 = 0
            int16_t* r8_7 = rdi_2
            
            do
                int32_t rax_29 = sx.d(*r8_7)
                r8_7 = &r8_7[1]
                i += 1
                rdx_9 += 4
                int64_t rax_30 = arg1[9]
                uint128_t zmm0
                zmm0.d = _mm_cvtepi32_ps(zx.o(rax_29)).d f* 3.05175781e-05f
                *(rdx_9 + rax_30 - 4) = zmm0.d
            while (i s< arg1[0xc].d)
        
        if (rdi_2 != 0)
            sub_140a74f90(rdi_2)
            arg1[0xd].d = 1
            return zx.q(arg1[0xd].d)
else
    if (rcx == 1)
        int64_t* rcx_10 = *arg1
        (*(*rcx_10 + 0x18))(rcx_10, arg1[1])
        arg1[0xd].d = 1
        return zx.q(arg1[0xd].d)
    
    if (rcx == 2)
        int64_t rdi_1 = 0
        int32_t r14_1 = *(arg1 + 0x24)
        int32_t rbp_2 = *(arg1 + 0x2c) * r14_1
        int64_t var_38 = 0
        int32_t var_2c_1 = 0
        int32_t rbp_3 = rbp_2 * 2
        int32_t var_30_1 = rbp_3
        
        if (rbp_3 s> 0)
            sub_1405daba0(&var_38)
            rdi_1 = var_38
        
        memset(rdi_1, 0, sx.q(rbp_3))
        
        if (*(arg1 + 0x31) != 0)
            int64_t i_4 = 2
            int32_t r15_3 = arg1[5].d * r14_1 * 2
            
            if (arg1[4].d != 3)
                int64_t i_1
                
                do
                    int64_t* rcx_5 = arg1[3]
                    (*(*rcx_5 + 0x10))(rcx_5, rdi_1, zx.q(arg1[6].b), zx.q(r15_3))
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
            else
                int64_t i_2
                
                do
                    int64_t* rcx_4 = arg1[3]
                    (*(*rcx_4 + 0x60))(rcx_4, rdi_1, zx.q(arg1[6].b), zx.q(r15_3))
                    i_2 = i_4
                    i_4 -= 1
                while (i_2 != 1)
        
        int64_t* rcx_6 = arg1[3]
        uint64_t r8_4 = zx.q(arg1[6].b)
        int64_t rax_3 = *rcx_6
        uint64_t r9_5 = zx.q(*(arg1 + 0x2c) * r14_1 * 2)
        char rax_4
        
        if (arg1[4].d != 3)
            rax_4 = (*(rax_3 + 0x10))(rcx_6, rdi_1, r8_4, r9_5)
        else
            rax_4 = (*(rax_3 + 0x60))(rcx_6, rdi_1, r8_4, r9_5)
        
        arg1[7].b = rax_4
        int32_t i_3 = 0
        
        if (*(arg1 + 0x2c) s> 0)
            int64_t rdx_5 = 0
            
            do
                uint32_t r9_6 = 0
                uint128_t zmm0_1
                
                if (r14_1 s>= 4)
                    uint64_t rax_7 = zx.q(((r14_1 - 4) u>> 2) + 1)
                    void* rcx_8 = rdi_1 + ((rdx_5 + 2) << 1)
                    uint64_t j_2 = zx.q(rax_7.d)
                    r9_6 = (rax_7 << 2).d
                    uint64_t j
                    
                    do
                        int32_t rax_8 = sx.d(*(rcx_8 - 4))
                        rcx_8 += 8
                        int64_t rax_9 = arg1[2]
                        zmm0_1.d = _mm_cvtepi32_ps(zx.o(rax_8)).d f* 3.05175781e-05f
                        *(rax_9 + (rdx_5 << 2)) = zmm0_1.d
                        int64_t rax_11 = arg1[2]
                        uint128_t zmm1
                        zmm1.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rcx_8 - 0xa)))).d f* 3.05175781e-05f
                        *(rax_11 + (rdx_5 << 2) + 4) = zmm1.d
                        int64_t rax_13 = arg1[2]
                        zmm0_1.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rcx_8 - 8)))).d f* 3.05175781e-05f
                        *(rax_13 + (rdx_5 << 2) + 8) = zmm0_1.d
                        int64_t rax_15 = arg1[2]
                        zmm1.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rcx_8 - 6)))).d f* 3.05175781e-05f
                        *(rax_15 + (rdx_5 << 2) + 0xc) = zmm1.d
                        rdx_5 += 4
                        j = j_2
                        j_2 -= 1
                    while (j != 1)
                
                if (r9_6 s< r14_1)
                    uint64_t j_3 = zx.q(r14_1 - r9_6)
                    uint64_t j_1
                    
                    do
                        int64_t rax_17 = arg1[2]
                        zmm0_1.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rdi_1 + (rdx_5 << 1))))).d
                            f* 3.05175781e-05f
                        *(rax_17 + (rdx_5 << 2)) = zmm0_1.d
                        rdx_5 += 1
                        j_1 = j_3
                        j_3 -= 1
                    while (j_1 != 1)
                
                i_3 += 1
            while (i_3 s< *(arg1 + 0x2c))
        
        if (rdi_1 != 0)
            sub_140a74f90(rdi_1)
            arg1[0xd].d = 1
            return zx.q(arg1[0xd].d)

arg1[0xd].d = 1
return zx.q(arg1[0xd].d)
