// 函数: sub_1421f55b0
// 地址: 0x1421f55b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg3 + 8) += 1
void* rbp = arg4
arg4.b = 0
int32_t i = 0

if (*(arg1 + 0x38) s> 0)
    char* rbx_1 = nullptr
    
    do
        void* rdi_1 = *(arg1 + 0x30)
        
        if (*(rbx_1 + rdi_1) == 2)
            int32_t rcx = *(rbx_1 + rdi_1 + 4)
            int32_t temp2_1
            int32_t temp3_1
            
            if (rcx != 0)
                temp2_1:temp3_1 = sx.q(*(arg3 + 8))
            
            if (rcx == 0 || mods.dp.d(temp2_1:temp3_1, rcx) == 0)
                int64_t* rcx_2
                void var_28
                
                if ((*(rbx_1 + rdi_1 + 0xc) & 8) == 0)
                    int64_t var_58
                    rcx_2 = &var_58
                    int32_t rax_5 = *(rbp + 0x18)
                    var_58 = *(rbp + 0x10)
                    int32_t var_50_1 = rax_5
                else
                    rcx_2 = sub_1421b7f40(arg2, &var_28, rbp)
                int128_t zmm2 = *(arg2 + 0x12c)
                int64_t rdx_3 = *(rbx_1 + rdi_1 + 0x10)
                int32_t var_40_1 = *(rbp + 0x38)
                int32_t var_30_1 = rcx_2[1].d
                int64_t var_48 = *(rbp + 0x30)
                void* rcx_3 = *(arg2 + 0x18)
                int64_t var_38 = *rcx_2
                sub_142199250(rcx_3, rdx_3, zmm2, &var_38, &var_48, rdi_1 + 0x18 + rbx_1, 
                    (*(rbp + 0xc)).d)
                arg4.b = 1
        
        i += 1
        rbx_1 = &rbx_1[0x28]
    while (i s< *(arg1 + 0x38))

return zx.q(arg4.b)
