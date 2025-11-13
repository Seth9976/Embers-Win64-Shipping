// 函数: sub_141d17230
// 地址: 0x141d17230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3

if (*(arg1 + 0x60) == *(arg1 + 0x8c))
label_141d172c4:
    sub_141d1a650(arg1, arg3)
else
    int32_t rax_2 = sub_140b5ead0(arg3.d) + arg_18:4.d
    void* r8 = arg1 + 0x90
    void* rdx = *(r8 + 8)
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t rax_4 = *(r8 + (((sx.q(*(arg1 + 0xa0)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_141d172c4_1:
        sub_141d1a650(arg1, arg3)
    else
        int64_t r8_1 = *(arg1 + 0x58)
        
        while (true)
            int64_t rdx_1 = sx.q(rax_4) * 5
            
            if (*(r8_1 + (rdx_1 << 2)) == arg3)
                break
            
            rax_4 = *(r8_1 + (rdx_1 << 2) + 0xc)
            
            if (rax_4 == 0xffffffff)
                goto label_141d172c4_2
        
        if (rax_4 == 0xffffffff)
        label_141d172c4_2:
            sub_141d1a650(arg1, arg3)

char var_28 = 5
int64_t var_24
sub_140b58170(&var_24, &data_1437020ab, 1)
int16_t var_1c = 0
(**arg4)(arg4, zx.q(sub_141d1f690(arg1, arg3)))
var_1c.b = arg5[1].b
int64_t rax_8

if (sub_141d1e020(arg1, arg3, *arg5) != 0)
    sub_140b58170(&arg_18, &data_1437020ab, 1)
    rax_8 = arg_18
else
    rax_8 = *arg5

var_24 = rax_8
var_1c:1.b = 1
int64_t var_38 = arg2
int64_t var_30 = arg3
int64_t result = sub_141d17830(arg1 + 8, &var_38, &var_28)

if (arg4 != 0 && var_1c:1.b == 0)
    return (*(*arg4 + 0x28))(arg4, 1)

return result
