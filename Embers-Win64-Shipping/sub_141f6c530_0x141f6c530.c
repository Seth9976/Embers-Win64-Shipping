// 函数: sub_141f6c530
// 地址: 0x141f6c530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x5a8) &= 0x7f
int32_t* i = *(arg1 + 0x4a0)

for (void* rdi = &i[sx.q(*(arg1 + 0x4a8)) * 2]; i != rdi; i = &i[2])
    void* rax_1 = sub_140d3c6e0(i)
    
    if (rax_1 != 0)
        *(rax_1 + 0x5a8) &= 0x7f

void** i_1 = *(arg1 + 0xd0)
int64_t result = sx.q(*(arg1 + 0xd8))

for (void* rsi_1 = &i_1[result]; i_1 != rsi_1; i_1 = &i_1[1])
    void* rdi_1 = *i_1
    
    if (rdi_1 != 0)
        void* rax_2 = sub_1425974e0()
        void* rcx_1 = *(rdi_1 + 0x10)
        result = sx.q(*(rax_2 + 0x38))
        
        if (result.d s<= *(rcx_1 + 0x38))
            int64_t result_1 = result
            result = *(rcx_1 + 0x30)
            
            if (*(result + (result_1 << 3)) == rax_2 + 0x30 && *(rdi_1 + 0x5a8) s< 0)
                result = sub_141f6c530(rdi_1, result_1)

return result
