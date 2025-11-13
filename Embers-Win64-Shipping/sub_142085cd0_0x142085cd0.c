// 函数: sub_142085cd0
// 地址: 0x142085cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
int32_t* result = sub_140ae4210(arg3, &var_38)
int32_t i = 0

if (*(arg1 + 0x240) s> 0)
    int64_t* r14_1 = nullptr
    
    do
        int64_t r9_1 = *(arg1 + 0x238)
        int64_t* rcx_1 = *(r14_1 + r9_1)
        
        if (rcx_1 == 0)
            int32_t rcx_2 = *(arg1 + 0x240)
            int32_t rax_4 = rcx_2 - i
            
            if (rax_4 != 1)
                memmove(r9_1 + (sx.q(i) << 3), r9_1 + (sx.q(i + 1) << 3), (rax_4 - 1) << 3)
                rcx_2 = *(arg1 + 0x240)
            
            *(arg1 + 0x240) = rcx_2 - 1
            result = sub_1405c53d0(arg1 + 0x238)
        else
            int64_t r8 = *(arg1 + 0x270)
            int32_t var_30
            int32_t var_20_1 = var_30
            int32_t var_10_1 = arg2[1].d
            int64_t rax_2 = *rcx_1
            int64_t var_28 = var_38
            int64_t zmm0_1 = *arg2
            int64_t rdx_1 = *(arg1 + 0x220)
            int64_t var_18 = zmm0_1
            result = (*(rax_2 + 0x608))(zmm0_1, rdx_1, r8, &var_18, &var_28)
            i += 1
            r14_1 = &r14_1[1]
    while (i s< *(arg1 + 0x240))

return result
