// 函数: sub_1421f53d0
// 地址: 0x1421f53d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg3 + 0xc) += 1
void* r15 = arg3
arg3.b = 0
int32_t i = 0

if (*(arg1 + 0x38) s> 0)
    char* rbx_1 = nullptr
    
    do
        void* rdi_1 = *(arg1 + 0x30)
        
        if (*(rbx_1 + rdi_1) == 3)
            char rax_1 = (*(rbx_1 + rdi_1 + 0xc)).b
            
            if ((rax_1 & 1) == 0)
                if ((rax_1 & 2) == 0 || *(arg4 + 0x18) == 0)
                label_1421f5454:
                    int32_t rcx = *(rbx_1 + rdi_1 + 4)
                    int32_t temp2_1
                    int32_t temp3_1
                    
                    if (rcx != 0)
                        temp2_1:temp3_1 = sx.q(*(r15 + 0xc))
                    
                    if (rcx == 0 || mods.dp.d(temp2_1:temp3_1, rcx) == 0)
                        int32_t var_60_1 = *(arg5 + 0x30)
                        int32_t var_50_1 = *(arg6 + 0x38)
                        int64_t var_68 = *(arg5 + 0x28)
                        int64_t var_58 = *(arg6 + 0x30)
                        int32_t rax_8 = arg7[1].d
                        int64_t var_48 = *arg7
                        int32_t var_40_1 = rax_8
                        int32_t rax_9 = *(arg5 + 0x18)
                        int64_t var_38 = *(arg5 + 0x10)
                        int32_t var_30_1 = rax_9
                        int64_t rax_10 = sub_140d3c6e0(arg5 + 0x60)
                        sub_142199110(*(arg2 + 0x18), *(rbx_1 + rdi_1 + 0x10), *(arg2 + 0x12c), 
                            &var_38, &var_48, &var_58, rdi_1 + 0x18 + rbx_1, (*(arg6 + 0xc)).d, 
                            &var_68, (*(arg5 + 8)).d, *(arg5 + 0x5c), *(arg5 + 0x78), rax_10)
                        arg3.b = 1
            else if (*(arg6 + 0x5c) s>= 0)
                goto label_1421f5454
        
        i += 1
        rbx_1 = &rbx_1[0x28]
    while (i s< *(arg1 + 0x38))

return zx.q(arg3.b)
