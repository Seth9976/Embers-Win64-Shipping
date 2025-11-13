// 函数: sub_141d572e0
// 地址: 0x141d572e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_58 = nullptr
int32_t var_50 = 0
sub_141d4cb70(&var_58)
void* rdi = var_58
void* i = (sx.q(var_50) << 6) + rdi

if (rdi != i)
    uint8_t rbp_1 = arg2 u>> 3
    void* rdi_1 = rdi + 8
    
    do
        int32_t rax_1 = *(rdi_1 + 0x20)
        
        if (rax_1 != 4 || (rbp_1 & 1) == 0)
            bool cond:0_1
            
            if (rax_1 == 6)
                cond:0_1 = (arg2 & 4) != 0
            else if (rax_1 == 7)
                cond:0_1 = (arg2 & 1) != 0
            else if (rax_1 != 8)
                if (rax_1 != 9)
                    goto label_141d5737e
                
                cond:0_1 = (arg2 & 8) != 0
            else
                cond:0_1 = (arg2 & 2) != 0
            
            if (cond:0_1)
                goto label_141d573a0
            
        label_141d5737e:
            uint8_t rcx_1 = rbp_1 & 1
            
            if (rax_1 != 0xa)
                if (rax_1 == 0xb && rcx_1 != 0)
                    goto label_141d573a0
            else if (rcx_1 != 0)
                goto label_141d573a0
        else
        label_141d573a0:
            int64_t rax_2 = *(rdi_1 - 8)
            int64_t* rax_3 = *rdi_1
            
            if (rax_3 != 0)
                rax_3[1].d += 1
            
            int32_t rax_4 = *(rdi_1 + 8)
            int64_t var_30
            sub_140596d10(&var_30, rdi_1 + 0x28)
            int64_t rbx_1 = sx.q(arg1[1].d)
            int32_t rax_5 = (rbx_1 + 1).d
            arg1[1].d = rax_5
            
            if (rax_5 s> *(arg1 + 0xc))
                sub_1405c4ec0(arg1)
            
            int64_t* rdx_2 = *arg1 + rbx_1 * 0x28
            int64_t* rcx_5 = rax_3
            *rdx_2 = rax_2
            rdx_2[1] = rcx_5
            
            if (rcx_5 != 0)
                rcx_5[1].d += 1
                rcx_5 = rax_3
            
            rdx_2[2].d = rax_4
            rdx_2[3] = var_30
            int32_t var_28
            rdx_2[4].d = var_28
            int32_t var_24
            *(rdx_2 + 0x24) = var_24
            
            if (rcx_5 != 0)
                rcx_5[1].d -= 1
                
                if (rcx_5[1].d == 1)
                    (**rax_3)(rax_3)
                    int32_t rax_14 = *(rax_3 + 0xc)
                    *(rax_3 + 0xc) -= 1
                    
                    if (rax_14 == 1)
                        (*(*rax_3 + 8))(rax_3, 1)
        
        rdi_1 += 0x40
    while (rdi_1 - 8 != i)

return sub_141d52bf0(&var_58)
