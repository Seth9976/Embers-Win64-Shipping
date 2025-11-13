// 函数: sub_14262b250
// 地址: 0x14262b250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg3
arg1[1] = arg3[1]
arg1[2] = arg3[2]
int64_t rcx = sx.q(arg1[0x14])
int64_t* r8 = *(arg1 + 0x48)

if ((rcx - 1).d u> 1)
    *r8 = arg2
    *(*(arg1 + 0x48) + 8) = 0
    void* rax_5
    rax_5.b = 1
    return rax_5

r8[2] = r8[rcx - 1]
**(arg1 + 0x48) = arg2
*(*(arg1 + 0x48) + 8) = 0
void* rax_4
rax_4.b = 1
arg1[0x14] = 3
return rax_4
