// 函数: sub_140e11e30
// 地址: 0x140e11e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x18) != 0)
    int64_t* rbx_1 = *(arg1 + 0x20)
    
    if (rbx_1 != 0)
        int32_t rax_1 = rbx_1[1].d
        
        if (rax_1 s> 0)
            void* rdi_1 = nullptr
            
            if (rbx_1 != 0)
                if (rax_1 != 0)
                    rbx_1[1].d = rax_1 + 1
                    rax_1.b = 1
                
                if (rax_1.b == 0)
                    rbx_1 = nullptr
                
                if (rbx_1 != 0)
                    rdi_1 = *(arg1 + 0x18)
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t temp1_1 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (temp1_1 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
            
            float zmm8[0x4] = *(rdi_1 + 0xc4)
            int128_t zmm10 = *(rdi_1 + 0xc0)
            float zmm4[0x4] = *(rdi_1 + 0xe4)
            float zmm1 = zmm10.d
            float zmm3[0x4] = *(rdi_1 + 0xdc)
            zmm4[0] = zmm4[0] f* data_143dbb1f0:4.d
            arg2[2].b = 1
            zmm3[0] = zmm3[0] f* data_143dbb1f0.d
            int128_t zmm5 = *(rdi_1 + 0xe0)
            zmm10.d = zmm10.d f* zmm5.d
            int128_t zmm6
            zmm6.d = zmm5.d f* data_143dbb1f0.d
            zmm3[0] = zmm3[0] + zmm4[0]
            float zmm0[0x4] = *(rdi_1 + 0xe8)
            zmm0[0] = zmm0[0] f* data_143dbb1f0:4.d
            zmm3[0] = zmm3[0] f+ *(rdi_1 + 0xec)
            zmm1 = zmm1 * zmm3[0]
            zmm6.d = zmm6.d f+ zmm0[0]
            zmm8[0] = zmm8[0] f* *(rdi_1 + 0xe8)
            zmm8[0] = zmm8[0] * zmm4[0]
            zmm6.d = zmm6.d f+ *(rdi_1 + 0xf0)
            zmm10.d = zmm10.d f+ zmm8[0]
            zmm1 = zmm1 + zmm8[0]
            zmm10.d = zmm10.d f+ zmm6.d
            *arg2 = (_mm_unpacklo_ps(zmm3, zmm6.q)).q
            zmm1 = zmm1 + zmm3[0]
            *(arg2 + 0xc) = zmm10.d
            arg2[1].d = zmm1

return arg2
