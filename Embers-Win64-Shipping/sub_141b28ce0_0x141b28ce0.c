// 函数: sub_141b28ce0
// 地址: 0x141b28ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool rdx = sub_140b5b8a0(arg1[2], 0).b == 0
int64_t rax
rax.b = arg1[3] != 0
rax.b |= rdx

if (rax.b != 0)
    rax = sub_140d3c6e0(arg1)
    
    if (rax != 0)
        int64_t rax_1
        rax_1.b = sub_140d1fd20(rax, *(arg1 + 8)) != 0
        return rax_1

rax.b = 0
return rax
