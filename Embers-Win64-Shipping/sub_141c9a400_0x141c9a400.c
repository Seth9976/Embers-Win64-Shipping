// 函数: sub_141c9a400
// 地址: 0x141c9a400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2

if (*(arg1 + 0x1e8) != *(arg1 + 0x214))
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg_10:4.d
    void* r8_1 = arg1 + 0x218
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t i = *(r8_1 + (((sx.q(*(arg1 + 0x228)) - 1) & sx.q(rax_2)) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_2 = *(arg1 + 0x1e0)
        
        do
            int64_t i_1 = sx.q(i)
            int64_t rcx_2 = i_1 * 3
            
            if (*(r8_2 + (rcx_2 << 3)) == arg2)
                if (i != 0xffffffff)
                    void* rax_5 = r8_2 + i_1 * 0x18
                    
                    if (rax_5 != 0 && rax_5 != -8)
                        return *(rax_5 + 8)
                
                break
            
            i = *(r8_2 + (rcx_2 << 3) + 0x10)
        while (i != 0xffffffff)

int64_t result_1 = j_sub_140a82f30(0x30)
int64_t result = result_1

if (result_1 == 0)
    result = 0
else
    __builtin_memset(result_1, 0, 0x19)

*(arg1 + 0x268) += 1
int32_t var_28
sub_140598750(arg1 + 0x1e0, &var_28)
int64_t* var_20
*var_20 = arg2
var_20[1] = result
var_20[2].d = 0xffffffff
sub_141c9b7b0(arg1 + 0x1e0, &arg_10, (arg2 u>> 0x20).d + sub_140b5ead0(arg2.d), var_20, var_28, 
    nullptr)
return result
