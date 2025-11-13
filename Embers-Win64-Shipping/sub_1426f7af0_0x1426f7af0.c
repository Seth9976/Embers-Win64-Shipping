// 函数: sub_1426f7af0
// 地址: 0x1426f7af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = -1

if (arg2 != 0)
    char rax_1 = (*(arg2 + 0x98)).b
    
    if ((rax_1 & 2) != 0 && *(arg2 + 0x30) s> 1 && (rax_1 & 1) != 0)
        if (*(arg1 + 0x1e8) != 0 && *(arg1 + 0x1f0) != 0 && sub_140d3c6e0(arg2 + 0x9c) != 0)
            int32_t r8_1 = 0
            int32_t rcx_2 = *(arg2 + 0x30) - 1
            
            if (rcx_2 s> 0)
                int64_t i = 0
                int64_t* rcx_3 = *(arg2 + 0x28) + 0x10
                
                do
                    if (*rcx_3 == *(arg1 + 0x1e8) && rcx_3[4] == *(arg1 + 0x1f0))
                        rbx = r8_1
                        break
                    
                    r8_1 += 1
                    i += 1
                    rcx_3 = &rcx_3[4]
                while (i s< sx.q(rcx_2))
        
        void* rax_5 = *(arg1 + 0xe8)
        
        if (rax_5 != 0 && rbx == 0xffffffff)
            if (*(arg2 + 0x30) s<= 2)
                rbx = 0
            else
                void* rax_6 = *(rax_5 + 0xb0)
                float var_88
                float var_84
                int64_t var_68
                int32_t var_60
                int32_t* rax_7
                
                if (rax_6 == 0)
                    var_60 = data_143b58090
                    rax_7 = &var_68
                    var_68 = data_143b58088
                else
                    float zmm1[0x4] = *(rax_6 + 0x1d0)
                    var_88 = zmm1[0]
                    float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
                    temp0_2[0] = temp0_2[0] f- *(rax_6 + 0x114)
                    var_84 = temp0_1[0]
                    rax_7 = &var_88
                    float var_80_1 = temp0_2[0]
                
                *rax_7
                int32_t rax_9 = rax_7[2]
                int32_t var_78
                void var_58
                sub_141e912d0(sub_14265a8f0(arg2, &var_58, 0), &var_78)
                uint32_t zmm6_1[0x4] = sub_141e912d0(sub_14265a8f0(arg2, &var_58, 1), &var_68)
                zmm6_1[0] = zmm6_1[0] f- var_78
                var_88.q = zmm6_1.q
                uint32_t zmm1_1[0x4] = var_84
                zmm6_1[0] = zmm6_1[0] f- var_68.d
                int32_t var_74
                zmm1_1[0] = zmm1_1[0] f- var_74
                zmm1_1[0] = zmm1_1[0] f- var_68:4.d
                zmm6_1[0] = zmm6_1[0] f* zmm6_1[0]
                zmm6_1[0] = zmm6_1[0] f* zmm6_1[0]
                zmm1_1[0] = zmm1_1[0] f* zmm1_1[0]
                zmm1_1[0] = zmm1_1[0] f* zmm1_1[0]
                zmm1_1[0] = zmm1_1[0] f+ zmm6_1[0]
                zmm1_1[0] = zmm1_1[0] f+ zmm6_1[0]
                zmm1_1[0] = zmm1_1[0] f- zmm1_1[0]
                
                if (_mm_and_ps(zmm1_1, 0x7fffffff)[0] f> 9.99999994e-09f)
                    rbx.b = zmm1_1[0] f<= zmm1_1[0]
                else
                    zmm1_1 = rax_9
                    int32_t var_70
                    zmm1_1[0] = zmm1_1[0] f- var_70
                    zmm1_1[0] = zmm1_1[0] f- var_60
                    uint32_t temp0_4[0x4] = _mm_and_ps(zmm1_1, 0x7fffffff)
                    rbx.b = _mm_and_ps(zmm1_1, 0x7fffffff)[0] f<= temp0_4[0]

return zx.q(rbx)
