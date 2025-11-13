// 函数: sub_141be0010
// 地址: 0x141be0010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = (*(*arg1 + 0x308))()

if (arg1[0x2a] != arg2)
    result = sub_140e24dd0(&arg1[0x21], arg2)
    
    if (arg2 != 0)
        *(arg2 + 0x3d) |= 0x60
    
    if (arg3 != 0)
        if (arg2 == 0)
            arg1[0x22] = 0
        else
            int32_t* rax_1 = *(arg2 + 0xd0)
            int32_t rcx_1
            
            if (rax_1 == 0)
                rcx_1 = 0
            else
                rcx_1 = *rax_1
            
            arg1[0x22].d = _mm_cvtepi32_ps(zx.o(rcx_1)).d
            void* rax_2 = *(arg2 + 0xd0)
            
            if (rax_2 == 0)
                result = 0
                *(arg1 + 0x114) = _mm_cvtepi32_ps(0).d
            else
                result = *(rax_2 + 4)
                *(arg1 + 0x114) = _mm_cvtepi32_ps(zx.o(result)).d
    
    int64_t* rcx_2 = arg1[0x3b]
    
    if (rcx_2 != 0)
        int64_t var_18_1 = 0
        int32_t var_10_1 = 0
        void* var_28 = &arg1[0x21]
        char var_20_1 = 1
        return sub_140e24960(rcx_2, &var_28)

return result
