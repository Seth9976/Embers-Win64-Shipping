// 函数: sub_141910250
// 地址: 0x141910250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_5 = sx.q(arg2)
int64_t rax = 0x28 * i_5
int64_t i_4 = sx.q(arg3)

if (mulu.dp.q(0x28, i_5) u>> 0x40 != zx.o(0))
    rax = -1

void* const rax_1 = j_sub_140a82f30(rax)

if (rax_1 == 0)
    rax_1 = nullptr
else
    int64_t i_2 = i_5
    
    if (i_5 != 0)
        void* rcx_1 = rax_1 + 0x10
        int64_t i
        
        do
            *(rcx_1 - 0x10) = 0
            *(rcx_1 - 8) = 0
            *rcx_1 = 0
            *(rcx_1 + 8) = 0xffffffff
            *(rcx_1 + 0xc) = 0
            *(rcx_1 + 0x10) = 0
            rcx_1 += 0x28
            i = i_2
            i_2 -= 1
        while (i != 1)

*(arg1 + 8) = rax_1
int64_t rax_2 = 8 * i_5

if (mulu.dp.q(8, i_5) u>> 0x40 != zx.o(0))
    rax_2 = -1

int64_t rax_3 = j_sub_140a82f30(rax_2)
*(arg1 + 0x10) = rax_3
memset(rax_3, 0, i_5 << 3)
int64_t i_3 = i_4
int64_t rax_4 = 0x14 * i_4

if (mulu.dp.q(0x14, i_4) u>> 0x40 != zx.o(0))
    rax_4 = -1

void* result = j_sub_140a82f30(rax_4)

if (result == 0)
    *(arg1 + 0x18) = 0
    return result

if (i_3 != 0)
    void* rcx_5 = result + 8
    int64_t i_1
    
    do
        *(rcx_5 - 8) = 0
        *rcx_5 = 0x88ba
        *(rcx_5 + 8) = 0
        rcx_5 += 0x14
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

*(arg1 + 0x18) = result
return result
