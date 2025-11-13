// 函数: sub_140b3dc80
// 地址: 0x140b3dc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(arg2)
int64_t r8 = sx.q(arg1[1].d - 1)
int128_t result = zx.o(0)

if (r8 s< r9)
    return zx.o(0)

int128_t result_1
int128_t result_2

if (r8 - r9 + 1 s>= 4)
    int64_t i_2 = ((r8 - r9 - 3) u>> 2) + 1
    void* rdx_2 = *arg1 - 0x10 + (r8 << 3)
    r8 += neg.q(i_2) << 2
    int64_t i
    
    do
        void* rax_6 = *(rdx_2 + 0x10)
        result_1.d = 1f f/ *(rax_6 + 0x30)
        result_2 = result_1
        result_1.d = result_1.d f* *(rax_6 + 0x34)
        result_2.d = result_2.d f* *(rax_6 + 0x38)
        void* rax_7 = *(rdx_2 + 8)
        result_2.d = result_2.d f* result.d
        result_2.d = result_2.d f+ result_1.d
        result_1.d = 1f f/ *(rax_7 + 0x30)
        result = result_1
        result_1.d = result_1.d f* *(rax_7 + 0x34)
        result.d = result.d f* *(rax_7 + 0x38)
        void* rax_8 = *rdx_2
        result.d = result.d f* result_2.d
        result.d = result.d f+ result_1.d
        result_1.d = 1f f/ *(rax_8 + 0x30)
        result_2 = result_1
        result_1.d = result_1.d f* *(rax_8 + 0x34)
        result_2.d = result_2.d f* *(rax_8 + 0x38)
        void* rax_9 = *(rdx_2 - 8)
        rdx_2 -= 0x20
        result_2.d = result_2.d f* result.d
        result_2.d = result_2.d f+ result_1.d
        result_1.d = 1f f/ *(rax_9 + 0x30)
        result = result_1
        result_1.d = result_1.d f* *(rax_9 + 0x34)
        result.d = result.d f* *(rax_9 + 0x38)
        result.d = result.d f* result_2.d
        result.d = result.d f+ result_1.d
        i = i_2
        i_2 -= 1
    while (i != 1)

if (r8 s>= r9)
    int64_t* rcx_4 = *arg1 + (r8 << 3)
    int64_t i_3 = r8 - r9 + 1
    int64_t i_1
    
    do
        void* rax_11 = *rcx_4
        rcx_4 -= 8
        result_2.d = 1f f/ *(rax_11 + 0x30)
        result_1 = result_2
        result_2.d = result_2.d f* *(rax_11 + 0x34)
        result_1.d = result_1.d f* *(rax_11 + 0x38)
        result_1.d = result_1.d f* result.d
        result.d = result_1.d f+ result_2.d
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return result
