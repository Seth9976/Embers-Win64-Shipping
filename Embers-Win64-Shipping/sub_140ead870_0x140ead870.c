// 函数: sub_140ead870
// 地址: 0x140ead870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_18
sub_140ebeb20(*(arg1 + 0x3f0), &var_18)
uint64_t rdi = var_18

if (rdi != 0)
    char rax_1 = sub_140f03770(rdi)
    char rax_2
    
    if (rax_1 != 3)
        rax_2 = sub_140f03770(rdi)
    
    if (rax_1 == 3 || rax_2 == 0)
        int64_t* rcx_4 = *(arg1 + 0x3f0) + 0x2a8
        
        if ((**rcx_4)(rcx_4) s> 1)
            void* rdi_1 = *(arg1 + 0x3f0)
            int32_t rsi_1 = -1
            
            if ((**(rdi_1 + 0x2a8))(rdi_1 + 0x2a8) s<= 0)
                rdi = 0xffffffff
            else
                rdi = zx.q(*(rdi_1 + 0x2fc))
            
            int64_t* rcx_7 = *(arg1 + 0x3f0) + 0x2a8
            
            if (rdi.d != (**rcx_7)(rcx_7) - 1)
                int64_t var_28
                sub_140ea3f10(*(arg1 + 0x3f0) + 0x2a8, &var_28)
                void* rbx_1 = *(arg1 + 0x3f0)
                
                if ((**(rbx_1 + 0x2a8))(rbx_1 + 0x2a8) s> 0)
                    rsi_1 = *(rbx_1 + 0x2fc)
                
                int32_t i_2
                int32_t i_1 = i_2
                int32_t rsi_2 = rsi_1 + 1
                int64_t r14_1 = var_28
                
                if (rsi_2 s< i_1)
                    rdi = (sx.q(rsi_2) << 4) + r14_1
                    
                    do
                        int64_t* rbx_2 = *(rdi + 8)
                        
                        if (rbx_2 != 0)
                            rbx_2[1].d += 1
                        
                        if (sub_140eec340(*rdi, arg2) != 0)
                            if (rbx_2 != 0)
                                rbx_2[1].d -= 1
                                
                                if (rbx_2[1].d == 1)
                                    (**rbx_2)(rbx_2)
                                    int32_t temp7_1 = *(rbx_2 + 0xc)
                                    *(rbx_2 + 0xc) -= 1
                                    
                                    if (temp7_1 == 1)
                                        (*(*rbx_2 + 8))(rbx_2, 1)
                            
                            sub_140596d80(&var_28)
                            rdi.b = 1
                            goto label_140eada27
                        
                        if (rbx_2 != 0)
                            rbx_2[1].d -= 1
                            
                            if (rbx_2[1].d == 1)
                                (**rbx_2)(rbx_2)
                                int32_t temp8_1 = *(rbx_2 + 0xc)
                                *(rbx_2 + 0xc) -= 1
                                
                                if (temp8_1 == 1)
                                    (*(*rbx_2 + 8))(rbx_2, 1)
                        
                        rsi_2 += 1
                        rdi += 0x10
                    while (rsi_2 s< i_1)
                
                if (i_1 != 0)
                    rdi = r14_1 + 8
                    int32_t i
                    
                    do
                        int64_t* rbx_3 = *rdi
                        
                        if (rbx_3 != 0)
                            rbx_3[1].d -= 1
                            
                            if (rbx_3[1].d == 1)
                                (**rbx_3)(rbx_3)
                                int32_t temp4_1 = *(rbx_3 + 0xc)
                                *(rbx_3 + 0xc) -= 1
                                
                                if (temp4_1 == 1)
                                    (*(*rbx_3 + 8))(rbx_3, 1)
                        
                        rdi += 0x10
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                
                if (r14_1 != 0)
                    sub_140a74f90(r14_1)

rdi.b = 0
label_140eada27:
int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_2 = *var_10
            (*(r8_2 + 8))(var_10, 1, r8_2)

return zx.q(rdi.b)
