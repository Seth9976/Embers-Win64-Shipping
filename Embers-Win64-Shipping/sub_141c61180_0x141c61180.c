// 函数: sub_141c61180
// 地址: 0x141c61180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t var_38 = __security_cookie ^ &var_1a8
void* rdi = *arg1
int64_t result

if (*(rdi + 0x160) == 0)
    result.b = 0
else
    int64_t r8_1 = sx.q(*(rdi + 0x160))
    int32_t rbx_1 = *(*(rdi + 0x158) + (r8_1 << 2) - 4)
    *(rdi + 0x160) = (r8_1 - 1).d
    sub_1405dac90(rdi + 0x158)
    *(arg1 + 0x8c) = rbx_1
    *(rdi + 0x1a8) += 1
    int32_t i = 0
    *(sx.q(*(arg1 + 0x8c)) + *(rdi + 0x168)) = 1
    uint16_t rcx_2 = (zx.w(arg2[0x18].b u>> 4) & 1) << 3 | (arg1[0x12].w & 0xfff7)
    arg1[0x12].w = rcx_2
    int16_t rax_6 = 0
    
    if (arg2[9].d != 0xffffffff)
        rax_6 = 0x10
    
    arg1[0x12].w = rax_6 | (rcx_2 & 0xffef)
    
    if (arg2[4].d s> 0)
        int64_t r14_1 = 0
        
        do
            int64_t* rdx = arg2[3]
            int64_t* rbx_2 = *(rdx + r14_1 + 8)
            
            if (rbx_2 != 0)
                int32_t rax_7 = 0
                bool z_1
                
                if (0 == rbx_2[1].d)
                    rbx_2[1].d = 0
                    z_1 = true
                else
                    rax_7 = rbx_2[1].d
                    z_1 = false
                
                if (not(z_1))
                    bool z_3
                    
                    do
                        bool z_2
                        
                        if (rax_7 == rbx_2[1].d)
                            rbx_2[1].d = rax_7 + 1
                            z_2 = true
                        else
                            rbx_2[1].d
                            z_2 = false
                        
                        if (z_2)
                            if (rbx_2 != 0)
                                void* rax_9 = *(rdx + r14_1)
                                
                                if (rax_9 != 0)
                                    int32_t var_178 = *(rax_9 + 0x10)
                                    int32_t* var_168 = &var_178
                                    int64_t var_160_1 = (sx.q(i) << 5) + arg2[3]
                                    void var_170
                                    sub_141c4c940(&arg1[1], &var_170, &var_168, nullptr)
                                
                                rbx_2[1].d -= 1
                                
                                if (rbx_2[1].d == 1)
                                    (**rbx_2)(rbx_2)
                                    int32_t rax_16 = *(rbx_2 + 0xc)
                                    *(rbx_2 + 0xc) -= 1
                                    
                                    if (rax_16 == 1)
                                        (*(*rbx_2 + 8))(rbx_2, 1)
                            
                            break
                        
                        rax_7 = 0
                        
                        if (0 == rbx_2[1].d)
                            rbx_2[1].d = 0
                            z_3 = true
                        else
                            rax_7 = rbx_2[1].d
                            z_3 = false
                    while (not(z_3))
            
            i += 1
            r14_1 += 0x20
        while (i s< arg2[4].d)
    
    arg1[0xe].d
    arg1[0xe].d = 0
    void* rbp_1 = *arg1
    int64_t rbx_3 = sx.q(*(arg1 + 0x8c))
    *(rbx_3 + *(rbp_1 + 0x178)) = 1
    *(rbx_3 + *(rbp_1 + 0x198)) = arg2[0x18].b u>> 1 & 1
    int64_t rdx_2 = arg2[0x15]
    
    if (rdx_2 != 0)
        int64_t* rcx_8 = *(*(rbp_1 + 0x28) + 0x60)
        (*(*rcx_8 + 0x20))(rcx_8, zx.q(rbx_3.d), &arg2[0x16], zx.q(arg2[0xe].d), rdx_2)
    
    int32_t var_110_1 = rbx_3.d
    void var_108
    sub_141c4e1a0(&var_108, arg2)
    void*** rax_22 = sub_140a82f30(0xe0, 8)
    *rax_22 = &data_14320af40
    rax_22[1] = rbp_1
    rax_22[2].d = var_110_1
    sub_141c4e1a0(&rax_22[3], &var_108)
    *rax_22 = &data_14320af60
    uint64_t (* var_158)(int64_t* arg1)
    uint64_t (* rax_23)(int64_t* arg1) = var_158
    
    if (rax_22 != -8)
        rax_23 = j_sub_141c51f10
    
    void*** var_148_1 = rax_22
    var_158 = rax_23
    sub_141c56770(rbp_1, &var_158)
    sub_141c50ff0(&var_108)
    result.b = 1

__security_check_cookie(var_38 ^ &var_1a8)
return result
