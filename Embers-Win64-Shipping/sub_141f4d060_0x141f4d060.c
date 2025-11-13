// 函数: sub_141f4d060
// 地址: 0x141f4d060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x14d) & 0x10) != 0)
    void* rax_1 = arg1[0x18]
    
    if (rax_1 != 0)
        *(arg1 + 0x100) = *(rax_1 + 0x100)
        arg1[0x22] = *(rax_1 + 0x110)
        int32_t rax_2 = *(rax_1 + 0x118)
        arg1[0x23].d = rax_2
        return rax_2

void var_28
int128_t* rax_4 = (*(*arg1 + 0x480))(arg2, &var_28, &arg1[0x38])
*(arg1 + 0x100) = *rax_4
arg1[0x22] = rax_4[1].q
int32_t rax_5 = *(rax_4 + 0x18)
arg1[0x23].d = rax_5
return rax_5
