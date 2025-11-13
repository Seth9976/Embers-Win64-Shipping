// 函数: sub_141e48ff0
// 地址: 0x141e48ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void* result = *(arg1 + 0x10)
void* r8 = *(result + 0x430)

if (r8 != 0)
    int64_t r8_1 = *(r8 + 0x60)
    
    if (r8_1 != 0)
        if (arg4 == 0)
        label_141e4904c:
            void* rax_2
            char r9
            rax_2, r9 = sub_141e359a0(arg1 + 0x38, sub_140b5ead0(arg2.d) + arg_10:4.d, &arg_10)
            int64_t* rax_3 = sub_141f3b9f0(*(arg1 + 0x10))
            int512_t zmm3
            zmm3.o = arg5
            char var_18_1 = arg6
            return sub_140d3a3a0(rax_2, sub_141e30ed0(arg_10, rax_3, arg4, r9))
        
        result = arg4[7]
        
        if (result != 0 && r8_1 == result)
            goto label_141e4904c

return result
