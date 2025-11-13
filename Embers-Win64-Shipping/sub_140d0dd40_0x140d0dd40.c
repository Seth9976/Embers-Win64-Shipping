// 函数: sub_140d0dd40
// 地址: 0x140d0dd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d0de20(arg1, arg2)
uint64_t result = (*(*arg2 + 0x130))(arg2, arg1 + 0x70)

if (*(arg1 + 0x70) == 0)
    result = zx.q(*(arg1 + 8) u>> 4)
    
    if ((result.b & 1) == 0)
        result = sub_140bdf100(arg1)
        uint64_t result_1 = result
        
        if (result != 0)
            int64_t rax_2 = sub_140bdf2e0()
            void* rcx_2 = *(result_1 + 0x10)
            result = rax_2 + 0x30
            int64_t rdx_1 = sx.q(*(result + 8))
            
            if (rdx_1.d s<= *(rcx_2 + 0x38) && *(*(rcx_2 + 0x30) + (rdx_1 << 3)) == result)
                int32_t rcx_4 = *(result_1 + 0xcc)
                result = zx.q(rcx_4 u>> 7)
                
                if ((result.b & 1) != 0 && rcx_4 s>= 0)
                    sub_140d21d80(result_1)
                    return sub_140cde0b0()

return result
