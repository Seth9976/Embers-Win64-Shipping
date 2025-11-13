// 函数: sub_141d574b0
// 地址: 0x141d574b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_48 = nullptr
int32_t var_40 = 0
sub_141d4cb70(&var_48)
void* rdi = var_48
void* i = (sx.q(var_40) << 6) + rdi

if (rdi != i)
    void* rdi_1 = rdi + 8
    
    do
        int32_t rax_1 = *(rdi_1 + 0x20)
        
        if (rax_1 != 4)
            if (rax_1 != 9)
                if (rax_1 != 0xa)
                    if (rax_1 == 0xb && (arg2 & 4) != 0)
                        goto label_141d57549
                else if ((arg2 & 2) != 0)
                    goto label_141d57549
            else if ((arg2 & 8) != 0)
                goto label_141d57549
        else if ((arg2 & 1) != 0)
        label_141d57549:
            int64_t rax_2 = *(rdi_1 - 8)
            int64_t* rax_3 = *rdi_1
            
            if (rax_3 != 0)
                rax_3[1].d += 1
            
            int32_t rax_4 = *(rdi_1 + 8)
            int64_t var_20
            sub_140596d10(&var_20, rdi_1 + 0x28)
            int64_t rbx_1 = sx.q(arg1[1].d)
            int32_t rax_5 = (rbx_1 + 1).d
            arg1[1].d = rax_5
            
            if (rax_5 s> *(arg1 + 0xc))
                sub_1405c4ec0(arg1)
            
            int64_t* rdx_2 = *arg1 + rbx_1 * 0x28
            int64_t* rcx_4 = rax_3
            *rdx_2 = rax_2
            rdx_2[1] = rcx_4
            
            if (rcx_4 != 0)
                rcx_4[1].d += 1
                rcx_4 = rax_3
            
            rdx_2[2].d = rax_4
            rdx_2[3] = var_20
            int32_t var_18
            rdx_2[4].d = var_18
            int32_t var_14
            *(rdx_2 + 0x24) = var_14
            
            if (rcx_4 != 0)
                rcx_4[1].d -= 1
                
                if (rcx_4[1].d == 1)
                    (**rax_3)(rax_3)
                    int32_t rax_14 = *(rax_3 + 0xc)
                    *(rax_3 + 0xc) -= 1
                    
                    if (rax_14 == 1)
                        (*(*rax_3 + 8))(rax_3, 1)
        
        rdi_1 += 0x40
    while (rdi_1 - 8 != i)

return sub_141d52bf0(&var_48)
