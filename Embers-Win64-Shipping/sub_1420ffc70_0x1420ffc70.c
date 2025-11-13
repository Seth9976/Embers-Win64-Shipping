// 函数: sub_1420ffc70
// 地址: 0x1420ffc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
int64_t result = sub_140d23dc0(arg1, 0x30)

if (result.b == 0)
    int32_t rdx_1 = 1
    int64_t* rcx_1 = *(data_143f5b298 + 0xaf8)
    
    if (rcx_1 != 0)
        rdx_1 = (*(*rcx_1 + 0x20))(rcx_1, 1)
    
    int64_t rdi_1 = sx.q(*(arg1 + 0xb0))
    
    if (rdx_1 s> rdi_1.d)
        *(arg1 + 0xb0) = rdx_1
        int32_t i_2 = rdx_1 - rdi_1.d
        
        if (rdx_1 s> *(arg1 + 0xb4))
            sub_1405c4ec0(arg1 + 0xa8)
        
        void*** rdx_3 = *(arg1 + 0xa8) + rdi_1 * 0x28
        
        if (i_2 != 0)
            int32_t i
            
            do
                *rdx_3 = &data_14306d5a8
                __builtin_memset(&rdx_3[1], 0, 0x18)
                rdx_3 = &rdx_3[5]
                i = i_2
                i_2 -= 1
            while (i != 1)
    else if (rdx_1 s< rdi_1.d)
        sub_142101a50(arg1 + 0xa8, rdx_1, rdi_1.d - rdx_1, 1)
    
    int64_t i_1 = *(arg1 + 0xa8)
    result = sx.q(*(arg1 + 0xb0))
    
    for (int64_t rdi_3 = i_1 + result * 0x28; i_1 != rdi_3; i_1 += 0x28)
        result = sub_1422dd6d0(i_1)

return result
