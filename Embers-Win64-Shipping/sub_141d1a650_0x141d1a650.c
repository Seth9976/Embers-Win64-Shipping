// 函数: sub_141d1a650
// 地址: 0x141d1a650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t arg_18

if (*(arg1 + 0x60) != *(arg1 + 0x8c))
    arg_18 = arg2
    int32_t rax_2 = sub_140b5ead0(arg2.d) + arg_18:4.d
    void* r8_1 = arg1 + 0x90
    void* rcx_1 = *(r8_1 + 8)
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t i = *(r8_1 + (((sx.q(*(arg1 + 0xa0)) - 1) & sx.q(rax_2)) << 2))
    
    if (i != 0xffffffff)
        int64_t rdx_3 = *(arg1 + 0x58)
        
        do
            int64_t rax_4 = sx.q(i) * 5
            
            if (*(rdx_3 + (rax_4 << 2)) == arg2)
                break
            
            i = *(rdx_3 + (rax_4 << 2) + 0xc)
        while (i != 0xffffffff)

int32_t arg_8 = 0
int64_t* var_28 = &arg_10
int32_t* var_20 = &arg_8
sub_141d17990(arg1 + 0x58, &arg_18, &var_28, nullptr)
int64_t* rax_5 = sub_140b58170(&arg_18, &data_1437020ab, 1)
int64_t r8_3 = arg_10
int64_t rdx_5 = data_143f37058
var_28 = *rax_5
var_20.d = 1.d
return sub_141d17040(arg1, rdx_5, r8_3, &var_28)
