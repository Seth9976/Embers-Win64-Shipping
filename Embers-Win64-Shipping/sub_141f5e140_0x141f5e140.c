// 函数: sub_141f5e140
// 地址: 0x141f5e140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = arg3
uint32_t rbx_1 = (arg3 u>> 0x20).d
arg3.b = sub_140b5b8a0(arg3.d, 0) == 0
arg3.b |= rbx_1 != 0

if (arg3.b == 0)
    *arg2 = data_143dbb1f8.q
    arg2[2] = data_143dbb200
else
    void* rcx_1 = *(arg1 + 0x430)
    
    if (rcx_1 == 0)
        *arg2 = data_143dbb1f8.q
        arg2[2] = data_143dbb200
    else
        int64_t rbx_2 = sx.q(sub_14078ee20(rcx_1 + 0x188, &var_58))
        
        if (rbx_2.d == 0xffffffff)
            *arg2 = data_143dbb1f8.q
            arg2[2] = data_143dbb200
        else if (arg4 == 1)
            void* rax_2 = sub_140d3c6e0(arg1 + 0x438)
            int64_t rax_4
            int64_t rcx_7
            
            if (rax_2 == 0)
                rcx_7 = rbx_2 * 3
                rax_4 = *(arg1 + (sx.q(*(arg1 + 0x494)) + 0x45) * 0x10)
            label_141f5e21a:
                float zmm1[0x4] = *(rax_4 + rcx_7 * 0x10 + 0x10)
                *arg2 = zmm1[0]
                float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                arg2[1] = temp0_1[0]
                arg2[2] = temp0_2[0]
            else if (rbx_2.d s>= *(arg1 + 0x4b8))
                *arg2 = data_143dbb1f8.q
                arg2[2] = data_143dbb200
            else
                int64_t rax_3 = sx.q(*(*(arg1 + 0x4b0) + (rbx_2 << 2)))
                
                if (rax_3.d == 0xffffffff)
                    *arg2 = data_143dbb1f8.q
                    arg2[2] = data_143dbb200
                else
                    int64_t rdx_1 = sx.q(*(rax_2 + 0x494))
                    
                    if (rax_3.d s< *(rax_2 + rdx_1 * 0x10 + 0x458))
                        rcx_7 = rax_3 * 3
                        rax_4 = *(rax_2 + (rdx_1 + 0x45) * 0x10)
                        goto label_141f5e21a
                    
                    *arg2 = data_143dbb1f8.q
                    arg2[2] = data_143dbb200
        else if (arg4 != 0)
            *arg2 = data_143dbb1f8.q
            arg2[2] = data_143dbb200
        else
            float var_48[0x4][0x4]
            float (* rax_5)[0x4] = sub_141f5e2b0(arg1, &var_48, rbx_2.d)
            float zmm1_1 = (*rax_5)[0xe]
            float rax_6 = rax_5[3][0]
            arg2[1] = (*rax_5)[0xd]
            arg2[2] = zmm1_1
            *arg2 = rax_6

return arg2
