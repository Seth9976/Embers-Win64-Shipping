// 函数: sub_141cf9a50
// 地址: 0x141cf9a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[1]
int64_t rsi = sx.q(arg2)
*(rax + 0x18) += 1

if (sub_141d02df0(*arg1, rsi.d, 0) != -1)
    uint64_t rax_1
    rax_1.b = 0
    return rax_1

void* r8 = *arg1
*(*(r8 + 0xb8) + (sx.q(not.d(*(r8 + 0xdc))) & rsi) * 0x30 + 0x24) = 0
int64_t* rbx_1 = arg1[2]
int64_t rdi = sx.q(rbx_1[1].d)
int32_t rax_5 = (rdi + 1).d
rbx_1[1].d = rax_5

if (rax_5 s> *(rbx_1 + 0xc))
    sub_1405a4cf0(rbx_1)

*(*rbx_1 + (rdi << 2)) = rsi.d
int64_t rax_6
rax_6.b = 1
return rax_6
