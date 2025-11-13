// 函数: sub_140ca20f0
// 地址: 0x140ca20f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

j_sub_140a74f90(*arg1)
void* i_1 = &arg1[-6]
int32_t rsi = 0

if (i_1 != 0)
    void* i = i_1
    
    do
        i = *(i + 0x40)
        rsi += 1
    while (i != 0)

int64_t rdi = sx.q(rsi)
int64_t rax_1 = 8 * rdi

if (mulu.dp.q(8, rdi) u>> 0x40 != zx.o(0))
    rax_1 = -1

int64_t rax_2 = j_sub_140a82f30(rax_1)
void** rdx = rax_2 + (rdi << 3)

for (; i_1 != 0; i_1 = *(i_1 + 0x40))
    void* rcx_2 = i_1 + 0x30
    rdx = &rdx[-1]
    
    if (i_1 == 0)
        rcx_2 = nullptr
    
    *rdx = rcx_2

*arg1 = rax_2
arg1[1].d = rsi - 1
return rsi - 1
