// 函数: sub_141cf9d70
// 地址: 0x141cf9d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)

if (sub_141d02df0(*arg1, rdi.d, 0) != -1)
    uint64_t rax
    rax.b = 0
    return rax

void* r8 = *arg1
*(*(r8 + 0xb8) + (sx.q(not.d(*(r8 + 0xdc))) & rdi) * 0x30 + 0x24) = 0
int64_t* rbx_1 = arg1[1]
int64_t rsi = sx.q(rbx_1[1].d)
int32_t rax_4 = (rsi + 1).d
rbx_1[1].d = rax_4

if (rax_4 s> *(rbx_1 + 0xc))
    sub_1405a4cf0(rbx_1)

*(*rbx_1 + (rsi << 2)) = rdi.d
int64_t rax_5
rax_5.b = 1
return rax_5
