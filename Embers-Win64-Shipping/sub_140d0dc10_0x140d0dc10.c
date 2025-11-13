// 函数: sub_140d0dc10
// 地址: 0x140d0dc10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d0de20(arg1, arg2)
(*(*arg2 + 0x130))(arg2, arg1 + 0x70)
uint64_t result = (*(*arg2 + 0x130))(arg2, arg1 + 0x78)

if (*(arg1 + 0x78) == 0)
    result = zx.q(*(arg1 + 8) u>> 4)
    
    if ((result.b & 1) == 0)
        result = sub_140bdf100(arg1)
        uint64_t result_1 = result
        
        if (result != 0)
            int64_t rax_3 = sub_140bdf2e0()
            void* rcx_3 = *(result_1 + 0x10)
            result = rax_3 + 0x30
            int64_t rdx_2 = sx.q(*(result + 8))
            
            if (rdx_2.d s<= *(rcx_3 + 0x38) && *(*(rcx_3 + 0x30) + (rdx_2 << 3)) == result)
                int32_t rcx_5 = *(result_1 + 0xcc)
                result = zx.q(rcx_5 u>> 7)
                
                if ((result.b & 1) != 0 && rcx_5 s>= 0)
                    sub_140d21d80(result_1)
                    return sub_140cde0b0()

return result
