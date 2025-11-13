// 函数: sub_141bb81f0
// 地址: 0x141bb81f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx
rcx.b = sub_140b5b8a0(*(arg1 + 0x10), 0).b == 0
int64_t rax
rax.b = *(arg1 + 0x14) != 0
rax.b |= rcx.b

if (rax.b != 0)
    rax = sub_140d3c6e0(arg1 + 8)
    
    if (rax != 0)
        int64_t rax_1
        rax_1.b = sub_140d1fd20(rax, *(arg1 + 0x10)) == 0
        return rax_1

rax.b = 1
return rax
