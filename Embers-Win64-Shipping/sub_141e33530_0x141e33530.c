// 函数: sub_141e33530
// 地址: 0x141e33530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (rbx.d == 0xffffffff)
    return 

int32_t* i = *(arg1 + 0x50)
int64_t rdx = sx.q(*(arg1 + 0x58))
int32_t* r14_1 = rdx << 2

for (void* rax = r14_1 + i; i != rax; i = &i[1])
    if (*i == rbx.d)
        return 

void* r8 = *(arg1 + 0x28)

if (r8 != 0 && rbx.d s< *(r8 + 0x18) && *(rbx * 0x58 + *(r8 + 0x10) + 0x28) != 0)
    return 

int32_t rax_1 = (rdx + 1).d
*(arg1 + 0x58) = rax_1

if (rax_1 s> *(arg1 + 0x5c))
    sub_1405a4cf0(arg1 + 0x50)

*(r14_1 + *(arg1 + 0x50)) = rbx.d
int64_t* rcx_4 = *(*(arg1 + 0x40) + rbx * 0x10 + 8)

if (rcx_4 != 0)
    (*(*rcx_4 + 0x10))(rcx_4, arg3)
