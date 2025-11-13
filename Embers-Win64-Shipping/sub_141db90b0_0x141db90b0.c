// 函数: sub_141db90b0
// 地址: 0x141db90b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t* i = sub_141ee2150(*arg1)
int64_t* i_1 = i

if (i != 0)
    int512_t zmm2
    int128_t zmm6
    
    if (i[0xde].d s> 0)
        int32_t zmm1 = *(arg1 + 0xc)
        int32_t var_50_1 = arg1[2].d
        int32_t var_58 = arg1[1].d
        int32_t var_54_1 = zmm1
        zmm2, zmm6 = sub_1405a9f90(&i[0xdd], &var_58)
    
    for (i = i_1[0xdf]; i != &i[sx.q(i_1[0xe0].d) * 2]; i = &i[2])
        if (i[1].d != 0 && *i != 0)
            int64_t r14
            r14.b = 0
            int32_t r15_1 = arg1[2].d
            int128_t var_28_1 = zmm6
            zmm6 = *(arg1 + 0xc)
            int128_t zmm7 = arg1[1].d
            *(i_1 + 0x70c) += 1
            int32_t rax_2 = i_1[0xe0].d
            int32_t rcx_6 = *(i_1 + 0x70c)
            int64_t rdi_1 = sx.q(rax_2 - 1)
            
            if (rax_2 - 1 s>= 0)
                int64_t rbx_2 = rdi_1 << 4
                int64_t temp1_1
                
                do
                    int64_t rax_4 = i_1[0xdf]
                    
                    if (*(rbx_2 + rax_4 + 8) == 0)
                        r14.b = 1
                    else
                        int64_t* rcx_7 = *(rbx_2 + rax_4)
                        
                        if (rcx_7 == 0)
                            r14.b = 1
                        else
                            int512_t zmm3
                            zmm3.o = zmm6
                            zmm2.o = zmm7
                            
                            if ((*(*rcx_7 + 0x50))(rcx_7, i_1, zmm2, zmm3, r15_1) == 0)
                                r14.b = 1
                    
                    rbx_2 -= 0x10
                    temp1_1 = rdi_1
                    rdi_1 -= 1
                while (temp1_1 - 1 s>= 0)
                rcx_6 = *(i_1 + 0x70c)
            
            i = zx.q(rcx_6 - 1)
            *(i_1 + 0x70c) = i.d
            
            if (r14.b != 0)
                i = sub_140599630(&i_1[0xdf], 0)
            
            break

__security_check_cookie(rax_1 ^ &var_88)
return i
