// 函数: sub_142c00340
// 地址: 0x142c00340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rax = *(arg1 + 8)
int128_t* const rcx = &data_14369a5d0

if (rax != 0)
    rcx = rax

int64_t rax_1 = sub_142bfef80(rcx, arg2, arg3, arg4)

if (rax_1.d != 0)
    if (rax_1.d == 1)
        uint64_t rax_2
        rax_2.b = 1
        return rax_2
    
    rax_1 = *(arg1 + 0x10)
    
    if (rax_1 != 0)
        *(arg1 + 0x18)
        jump(rax_1)

rax_1.b = 0
return rax_1
