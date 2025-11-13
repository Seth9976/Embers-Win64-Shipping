// 函数: sub_1421f5310
// 地址: 0x1421f5310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg3 + 0x10) += 1
char r10 = 0
int32_t i = 0

if (*(arg1 + 0x38) s> 0)
    char* rbx_1 = nullptr
    
    do
        void* rcx = *(arg1 + 0x30)
        
        if (*(rbx_1 + rcx) == 4)
            int32_t r8 = *(rbx_1 + rcx + 4)
            int32_t temp2_1
            int32_t temp3_1
            
            if (r8 != 0)
                temp2_1:temp3_1 = sx.q(*(arg3 + 0x10))
            
            if (r8 == 0 || mods.dp.d(temp2_1:temp3_1, r8) == 0)
                int64_t rdx_2 = *(rbx_1 + rcx + 0x10)
                int128_t zmm2 = *(arg2 + 0x12c)
                int32_t var_20_1 = *(arg2 + 0x58)
                void* rcx_1 = *(arg2 + 0x18)
                int64_t var_28 = *(arg2 + 0x50)
                sub_142199060(rcx_1, rdx_2, zmm2, arg4, &var_28, rcx + 0x18 + rbx_1)
                r10 = 1
        
        i += 1
        rbx_1 = &rbx_1[0x28]
    while (i s< *(arg1 + 0x38))

return zx.q(r10)
