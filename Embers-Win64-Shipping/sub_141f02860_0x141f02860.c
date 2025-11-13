// 函数: sub_141f02860
// 地址: 0x141f02860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
sub_141f2d8c0(arg1, arg2)
*arg1 = &data_143266710
arg1[0x15] = *(arg2 + 0x1f0)
arg1[0x16] = *(arg2 + 0x208)
arg1[0x17] = 0
arg1[0x18] = 0
arg1[0x19] = 0
arg1[0x1a] = 0
void* r13 = *(arg2 + 0x1f8)
void*** result

if (r13 == 0)
    result = arg1
else
    if (arg1[0x16] == 0)
        arg1[0x16] = *(r13 + 0x18)
    
    void*** rax_5 = j_sub_140a82f30(0x70)
    void*** rbx_1 = rax_5
    
    if (rax_5 == 0)
        rbx_1 = nullptr
    else
        rax_5[1].d = 1
        *(rax_5 + 0xc) = 1
        *rbx_1 = &data_143271d78
        sub_141eb55c0(&rbx_1[2], r13)
    
    void*** rbx_2 = rbx_1
    void*** rdi_1 = rbx_2
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
        rbx_2 = rbx_1
    
    void var_d0
    
    if (&arg1[0x19] == &var_d0)
    label_141f029b1:
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d != 1)
                rbx_2 = rbx_1
            else
                (**rdi_1)(rdi_1)
                int32_t temp2_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp2_1 != 1)
                    rbx_2 = rbx_1
                else
                    (*rdi_1)[1](rdi_1, 1)
                    rbx_2 = rbx_1
    else
        arg1[0x19] = &rbx_1[2]
        void*** rsi_1 = arg1[0x1a]
        
        if (rdi_1 == rsi_1)
            goto label_141f029b1
        
        arg1[0x1a] = rdi_1
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d != 1)
                rbx_2 = rbx_1
            else
                (**rsi_1)(rsi_1)
                int32_t temp5_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp5_1 != 1)
                    rbx_2 = rbx_1
                else
                    (*rsi_1)[1](rsi_1, 1)
                    rbx_2 = rbx_1
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp4_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*rbx_2)[1](rbx_2, 1)
    
    if (arg1[0x19][1].d s<= 0 && &arg1[0x19] != &var_d0)
        arg1[0x19] = 0
        int64_t* rbx_3 = arg1[0x1a]
        
        if (rbx_3 != 0)
            arg1[0x1a] = 0
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp7_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
    
    void* rax_15 = *(r13 + 0x130)
    int64_t* rbx_4
    int64_t rsi_2
    uint64_t r14_2
    
    if (rax_15 != 0)
        rbx_4 = *(rax_15 + 0xd0)
        rsi_2 = 0
        r14_2 = sx.q(*(rax_15 + 0xd8)) << 3 u>> 3
        
        if (rbx_4 u> &rbx_4[sx.q(*(rax_15 + 0xd8))])
            r14_2 = 0
    
    if (rax_15 == 0 || r14_2 == 0)
        result = arg1
    else
        do
            void* rdi_2 = *rbx_4
            
            if (rdi_2 != 0)
                void* rdx_2 = *(rdi_2 + 0xa0)
                
                if (rdx_2 != r13)
                    uint32_t zmm3_1[0x4] = data_143f3ada0
                    uint32_t zmm1_1[0x4] = zmm3_1
                    int32_t var_b8 = 0xffffffff
                    zmm3_1 = __andps_xmmxud_memxud(zmm3_1, data_143f3adb0)
                    int128_t zmm2_1 = zx.o(0)
                    zmm1_1[0].q = zmm2_1 u>> 0x40
                    float var_a8_1[0x4] = _mm_shuffle_ps(zx.o(0), zmm1_1, 0xc4)
                    int64_t var_b4_1 = 0
                    int32_t var_ac_1 = 0
                    int128_t var_98_1 = zmm2_1
                    uint32_t var_88_1[0x4] = zmm3_1
                    sub_140d3a3a0(&var_b8, rdx_2)
                    var_b4_1 = *(rdi_2 + 0xc8)
                    uint128_t var_78
                    uint128_t* rax_19 = sub_141f3cf60(rdi_2, &var_78)
                    int64_t rdi_3 = sx.q(arg1[0x18].d)
                    float var_a8_2[0x4] = *rax_19
                    uint32_t var_98_2[0x4] = rax_19[1]
                    int32_t rax_20 = (rdi_3 + 1).d
                    float var_88_2[0x4] = rax_19[2]
                    arg1[0x18].d = rax_20
                    
                    if (rax_20 s> *(arg1 + 0xc4))
                        sub_1405c4fe0(&arg1[0x17])
                    
                    int64_t rax_21 = arg1[0x17]
                    float (* rcx_12)[0x4] = rdi_3 << 6
                    *(rcx_12 + rax_21) = var_b8.o
                    *(rcx_12 + rax_21 + 0x10) = var_a8_2
                    *(rcx_12 + rax_21 + 0x20) = var_98_2
                    *(rcx_12 + rax_21 + 0x30) = var_88_2
            
            rbx_4 = &rbx_4[1]
            rsi_2 += 1
        while (rsi_2 != r14_2)
        
        result = arg1

__security_check_cookie(rax_1 ^ &var_108)
return result
