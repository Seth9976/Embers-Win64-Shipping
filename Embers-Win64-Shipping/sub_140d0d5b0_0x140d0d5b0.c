// 函数: sub_140d0d5b0
// 地址: 0x140d0d5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce7d70(arg1, arg2, arg3)
int32_t* result = (*(*arg2 + 0x130))(arg2, arg1 + 0x80)

if ((arg2[5].b & 1) != 0 || (*(arg2 + 0x2a) & 0x20) != 0)
    void* rbx_1 = *(arg1 + 0x80)
    
    if (rbx_1 != 0)
        void* rax_1 = sub_140cddb10()
        void* rdx_1 = *(rbx_1 + 0x10)
        result = sx.q(*(rax_1 + 0x38))
        
        if (result.d s<= *(rdx_1 + 0x38))
            int32_t* result_1 = result
            result = *(rdx_1 + 0x30)
            
            if (*(result + (result_1 << 3)) == rax_1 + 0x30)
                char var_10_1 = 0
                void* var_18 = arg1
                var_18.o = var_18.o
                int32_t arg_8
                result = sub_140cd2590(rbx_1 + 0x2f8, &arg_8, &var_18, nullptr)

if (*(arg1 + 0x80) == 0)
    result = sub_140cbd150(arg1)
    int32_t* result_2 = result
    
    if (result != 0)
        void* rax_2 = sub_140bdf2e0()
        void* rcx_3 = *(result_2 + 0x10)
        result = rax_2 + 0x30
        int64_t rdx_3 = sx.q(result[2])
        
        if (rdx_3.d s<= *(rcx_3 + 0x38) && *(*(rcx_3 + 0x30) + (rdx_3 << 3)) == result)
            int32_t rcx_5 = result_2[0x33]
            result = zx.q(rcx_5 u>> 7)
            
            if ((result.b & 1) != 0 && rcx_5 s>= 0)
                sub_140d21d80(result_2)
                return sub_140cde0b0()

return result
