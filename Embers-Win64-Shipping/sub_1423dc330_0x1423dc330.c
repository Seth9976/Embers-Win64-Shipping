// 函数: sub_1423dc330
// 地址: 0x1423dc330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool rdx = sub_140b5b8a0(arg1[2], 0).b == 0
int64_t rax
rax.b = arg1[3] != 0
rax.b |= rdx

if (rax.b != 0)
    rax = sub_140d3c6e0(arg1)
    
    if (rax != 0 && sub_140d1fd20(rax, *(arg1 + 8)) != 0)
        int64_t* rax_1 = sub_140d3c6e0(arg1)
        int64_t rax_2 = sub_140d1fd30(rax_1, *(arg1 + 8))
        int64_t r9 = *rax_1
        (*(r9 + 0x210))(rax_1, rax_2, 0, r9)
        int64_t rax_3
        rax_3.b = 1
        return rax_3

rax.b = 0
return rax
