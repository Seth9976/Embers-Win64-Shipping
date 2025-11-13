// 函数: sub_14115dd50
// 地址: 0x14115dd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = 0
int128_t zmm6 = arg2
int32_t arg_8 = 0
int64_t result

if (*(arg1 + 0x20) s<= 0)
    result = memset(&arg1[0x30], 0, 0xb0)
else
    int32_t rcx = 0
    int64_t* rbx_1 = arg3
    int64_t* var_88
    int64_t* rdi_1 = var_88
    int32_t* i = nullptr
    void* r13_1 = &arg1[0x70]
    void* var_78_1 = &arg1[0xb0]
    arg_8 = 0
    
    do
        int64_t* rsi_1
        
        if (rcx s>= *(arg1 + 0x20))
            r14 |= 2
            rdi_1 = nullptr
            var_88 = nullptr
            rsi_1 = nullptr
        else
            r14 |= 1
            rbx_1 = *(*(*(arg1 + 0x18) + i + 0xc0) + 0x10)
            arg3 = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
                rbx_1 = arg3
                rdi_1 = var_88
            
            rsi_1 = rbx_1
        
        if ((r14.b & 2) != 0)
            r14 &= 0xfffffffd
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d != 1)
                    rdi_1 = var_88
                else
                    rdi_1 = var_88
                    char rax_3
                    
                    if (rdi_1[2].b == 0 && data_143f0f1d0 == 0)
                        rax_3 = sub_1405949a0()
                    
                    if (rdi_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_3 != 0))
                        (**rdi_1)(rdi_1, 1)
                    else
                        bool z_1
                        
                        if (0 == *(rdi_1 + 0xc))
                            *(rdi_1 + 0xc) = 1
                            z_1 = true
                        else
                            *(rdi_1 + 0xc)
                            z_1 = false
                        
                        if (not(z_1))
                            rdi_1 = var_88
                        else
                            int32_t rax_5 = sub_140a20af0()
                            uint64_t rdx_1 = zx.q(rax_5)
                            void* const rax_6
                            
                            if (rax_5 != 0)
                                rax_6 = *((rdx_1 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_1.d) & 0x3fff) * 0x18
                            else
                                rax_6 = nullptr
                            
                            rdi_1 = var_88
                            *(rax_6 + 8) = rdi_1
                            zmm6 = sub_1405a42f0(&data_143f02390, rdx_1.d)
                
                rbx_1 = arg3
        
        if ((r14.b & 1) != 0)
            r14 &= 0xfffffffe
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d != 1)
                    rbx_1 = arg3
                else
                    rbx_1 = arg3
                    char rax_12
                    
                    if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                        rax_12 = sub_1405949a0()
                    
                    if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_12 != 0))
                        (**rbx_1)(rbx_1, 1)
                    else
                        bool z_2
                        
                        if (0 == *(rbx_1 + 0xc))
                            *(rbx_1 + 0xc) = 1
                            z_2 = true
                        else
                            *(rbx_1 + 0xc)
                            z_2 = false
                        
                        if (not(z_2))
                            rbx_1 = arg3
                        else
                            int32_t rax_14 = sub_140a20af0()
                            uint64_t rdx_2 = zx.q(rax_14)
                            void* const rax_15
                            
                            if (rax_14 != 0)
                                rax_15 = *((rdx_2 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rdx_2.d) & 0x3fff) * 0x18
                            else
                                rax_15 = nullptr
                            
                            rbx_1 = arg3
                            *(rax_15 + 8) = rbx_1
                            zmm6 = sub_1405a42f0(&data_143f02390, rdx_2.d)
                
                rdi_1 = var_88
        
        void* rdx_3 = var_78_1
        *rdx_3 = rsi_1
        
        if (arg_8 s>= *(arg1 + 0x20))
            *(r13_1 - 0x40) = zx.o(0)
            *r13_1 = zx.o(0)
        else
            int64_t rax_20 = *(arg1 + 0x18)
            float zmm3[0x4] = *(i + rax_20 + 0xc)
            arg2 = *(i + rax_20 + 0x10)
            zmm3[0] = zmm3[0] f- *(i + rax_20)
            zmm3[0] = zmm3[0] f+ *(i + rax_20)
            arg2.d = arg2.d f+ *(i + rax_20 + 4)
            uint128_t zmm2
            zmm2.d = (*(i + rax_20 + 0x14)).d f+ *(i + rax_20 + 8)
            zmm3[0] = zmm3[0] * 0.5f
            zmm3[0] = zmm3[0] * 0.5f
            zmm2.d = zmm2.d f* 0.5f
            float zmm4[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            arg2.d = arg2.d f* 0.5f
            zmm4[0] = arg2.d
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xc6)
            zmm4[0] = zmm2.d
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0x27)
            zmm4[0] = zmm3[0]
            zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0x39)
            *(r13_1 - 0x40) = zmm4
            zmm2 = *(i + rax_20 + 0xc)
            zmm3 = *(i + rax_20 + 0x1c)
            uint128_t zmm0
            zmm0.d = zmm2.d f- *(i + rax_20)
            zmm2.d = zmm2.d f+ *(i + rax_20)
            arg2 = *(i + rax_20 + 0x24)
            var_78_1.o = zmm4
            zmm4 = 0x3f800000
            zmm4[0] = 1f f/ zmm0.d
            zmm0.d = (*(i + rax_20 + 0x10)).d f+ *(i + rax_20 + 4)
            zmm2.d = zmm2.d f* 0.5f
            zmm3[0] = zmm3[0] f- zmm2.d
            zmm0.d = zmm0.d f* 0.5f
            zmm2.d = (*(i + rax_20 + 0x20)).d f- zmm0.d
            zmm0.d = (*(i + rax_20 + 0x14)).d f+ *(i + rax_20 + 8)
            zmm3[0] = zmm3[0] * zmm4[0]
            zmm2.d = zmm2.d f* zmm4[0]
            zmm3[0] = zmm3[0] + 0.5f
            zmm0.d = zmm0.d f* 0.5f
            zmm2.d = zmm2.d f+ 0.5f
            arg2.d = arg2.d f- zmm0.d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
            zmm3[0] = zmm2.d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc6)
            arg2.d = arg2.d f* zmm4[0]
            arg2.d = arg2.d f+ 0.5f
            zmm3[0] = arg2.d
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x27)
            zmm3[0] = zmm4[0]
            zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
            var_78_1.o = zmm3
            *r13_1 = zmm3
        
        rcx = arg_8 + 1
        r13_1 += 0x10
        arg_8 = rcx
        i = &i[0x32]
        var_78_1 = rdx_3 + 8
    while (i s< 0x320)
    
    *(arg1 + 0xd0) = _mm_cvtepi32_ps(zx.o(data_1439b5bfc)).d
    float zmm0_1
    zmm0_1, result = tanf(data_1439b5b9c.d)
    zmm6.d = zmm6.d f/ (zmm0_1 + 1f)
    *(arg1 + 0xd4) = zmm6.d

*arg1 = 1
return result
