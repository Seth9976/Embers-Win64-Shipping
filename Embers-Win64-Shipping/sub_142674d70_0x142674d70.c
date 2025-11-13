// 函数: sub_142674d70
// 地址: 0x142674d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
int32_t rdx = *(arg1 + 0x38)

if (rdx s> 0)
    sub_1405dadb0(arg2, rdx)

int64_t* rcx_1 = *arg3
char rax_2 = sub_14243ade0((*(*rcx_1 + 0x150))(rcx_1))
void* r13 = arg3[1]

if (r13 == 0)
    return arg2

int32_t* r14 = *(arg1 + 0x30)
void* rsi_2 = &r14[sx.q(*(arg1 + 0x38)) * 0x10]
void* arg_20 = rsi_2

if (r14 == rsi_2)
    return arg2

do
    if (r14[0xe].b == 0)
        void** rdx_1 = *(r14 + 0x10)
        
        if (rdx_1 != 0)
            int32_t r8 = r14[3]
            int64_t arg_10 = 0
            int32_t rax_3
            int128_t zmm6_1
            rax_3, r13, r14, zmm6_1 = sub_142602d30(r13, *rdx_1, r8, 1, 0, &arg_10)
            
            if ((rax_3 u>> 0x1f).b == 0)
                int32_t* rax_5 = sub_142610f00(r13, arg_10)
                int64_t* rdi_1 = *(r14 + 0x10)
                *r14 = *(*(rax_5 + 8) + 8)
                r14[1] = *(*(rax_5 + 8) + 0xc)
                r14[2] = *(*(rax_5 + 8) + 0x10)
                r14[0xe].b = 1
                
                if (rax_2 == 0)
                    uint32_t count = r14[3]
                    int64_t rdi_2 = *rdi_1
                    int64_t rax_6 = j_sub_1426075c0(zx.q(count), 0)
                    memcpy(rax_6, rdi_2, count)
                    **(r14 + 0x10) = rax_6
                    rsi_2 = arg_20
                else
                    r14[3] = 0
                    *rdi_1 = 0
                
                if (r14[8] s> 0)
                    void* rax_7 = *(rax_5 + 8)
                    int128_t zmm1_1 = *(rax_7 + 0x5c)
                    int32_t var_f8 = (*(rax_7 + 0x54) ^ zmm6_1).d
                    int32_t var_f0_1 = (*(rax_7 + 0x58)).d
                    int32_t var_f4_1 = (zmm1_1 ^ zmm6_1).d
                    int32_t var_e8_1 = (*(rax_7 + 0x68) ^ zmm6_1).d
                    int32_t var_e4_1 = (*(rax_7 + 0x64)).d
                    int32_t var_ec_1 = (*(rax_7 + 0x60) ^ zmm6_1).d
                    float var_e0[0x4]
                    sub_140acc6d0(&var_e0, &var_f8, 2)
                    int32_t r9_1 = r14[2]
                    int64_t rdx_10 = **(r14 + 0x28)
                    int32_t r8_2 = r14[8]
                    int32_t var_c8
                    int32_t var_a0_1 = var_c8
                    float var_b8[0x4] = var_e0
                    int64_t var_d0
                    int64_t var_a8_1 = var_d0
                    void var_98
                    sub_1426701c0(&var_98, rdx_10, r8_2, r9_1, &var_b8)
                    sub_142673f90(arg3, *r14, r14[1], r14[2], &var_98)
                    int64_t* rbx_1 = *(r14 + 0x28)
                    int64_t rax_9
                    
                    if (rax_2 == 0)
                        rax_9 = sub_142678c30(*rbx_1, r14[8])
                    else
                        r14[8] = 0
                        rax_9 = 0
                    
                    *rbx_1 = rax_9
                    int64_t* var_68
                    
                    if (var_68 != 0)
                        if (0 == var_68[1].d)
                            var_68[1].d = 0
                        else
                            var_68[1].d
                        
                        var_68[1].d -= 1
                        
                        if (var_68[1].d == 1)
                            (**var_68)(var_68)
                            int32_t rax_13 = *(var_68 + 0xc)
                            *(var_68 + 0xc) -= 1
                            
                            if (rax_13 == 1)
                                (*(*var_68 + 8))(var_68, 1)
                
                int64_t rdi_3 = sx.q(arg2[1].d)
                int32_t rbx_5 = (arg_10 u>> (*(r13 + 0xa0)).b).d & ((1 << (*(r13 + 0x9c)).b).d - 1)
                int32_t rax_17 = (rdi_3 + 1).d
                arg2[1].d = rax_17
                
                if (rax_17 s> *(arg2 + 0xc))
                    sub_1405a4cf0(arg2)
                
                *(*arg2 + (rdi_3 << 2)) = rbx_5
    
    r14 = &r14[0x10]
while (r14 != rsi_2)

return arg2
