// 函数: sub_141ee4260
// 地址: 0x141ee4260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
uint64_t result = sub_1419c6730()

if (result.b != 0)
    int32_t i = 0
    
    if (*(arg2 + 8) s> 0)
        uint64_t rbx
        uint64_t arg_10 = rbx
        int64_t rdi
        int64_t arg_20 = rdi
        
        do
            if (test_bit(arg4, i))
                char rax_2
                
                if ((*(arg1 + 0x150) & 4) != 0)
                    rax_2 = sub_14076deb0(arg1)
                
                if ((*(arg1 + 0x150) & 4) == 0 || rax_2 == 0)
                    rbx.b = 0
                else
                    rbx.b = 1
                
                int128_t var_90
                sub_140acc920(&var_90, arg1 + 0x154)
                result = *(arg1 + 0x170)
                void var_68
                
                if (rbx.b == 0)
                    if (result != 0)
                        sub_1407c8dd0(&var_68, arg1 + 0x80)
                        rdi.b = *(arg1 + 0x32) - 1 u<= 1
                        rbx.b = *(arg1 + 0x36) u>> 1
                        rbx.b &= 1
                        void var_98
                        float var_80[0x6]
                        char* rax_16 = sub_140ae16d0(
                            sub_1422a16e0(&var_80, &var_90, sub_14076deb0(arg1), rbx.b, 1), 
                            &var_98, 1)
                        result = sub_14224a3f0(*(arg1 + 0x170) + 0x28, &var_68, *rax_16, nullptr, 
                            0, 0, rdi.b, i, arg5)
                else if (result != 0)
                    uint64_t rax_3 = j_sub_140a82f30(0x1b0)
                    rbx = rax_3
                    
                    if (rax_3 == 0)
                        rbx = 0
                    else
                        int32_t var_a4_1 = 0
                        void var_a0
                        int32_t rcx_3 = *sub_140b5e500(&var_a0, 0x3e)
                        int64_t* rcx_4 = *(data_143f5b298 + 0x428)
                        int64_t rax_7 = (*(*rcx_4 + 0x280))(rcx_4)
                        sub_142118c70(rbx)
                        *rbx = &data_142e0eff8
                        *(rbx + 0x190) = rax_7
                        int128_t zmm0_1 = var_90
                        *(rbx + 0x1a8) = rcx_3.q
                        *(rbx + 0x198) = zmm0_1
                    
                    int64_t r14_1 = sx.q(arg5[0x16].d)
                    int32_t rax_9 = (r14_1 + 1).d
                    arg5[0x16].d = rax_9
                    
                    if (rax_9 s> *(arg5 + 0xb4))
                        sub_14083a310(&arg5[0x15], r14_1.d)
                    
                    *(arg5[0x15] + (r14_1 << 3)) = rbx
                    sub_1407c8dd0(&var_68, arg1 + 0x80)
                    rdi.b = *(arg1 + 0x32) - 1 u<= 1
                    void var_9c
                    char* rax_12 = sub_140ae16d0(&var_90, &var_9c, 1)
                    result = sub_14224a3f0(*(arg1 + 0x170) + 0x28, &var_68, *rax_12, rbx, 0, 1, 
                        rdi.b, i, arg5)
            
            i += 1
        while (i s< *(arg2 + 8))

__security_check_cookie(rax_1 ^ &var_f8)
return result
