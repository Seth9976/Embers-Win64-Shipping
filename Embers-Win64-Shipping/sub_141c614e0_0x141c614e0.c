// 函数: sub_141c614e0
// 地址: 0x141c614e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t zmm7
sub_141c3a5c0(arg1 + 0xd0, arg2[4], 8, zmm6, zmm7)
int32_t rax = *(arg1 + 0xa4)
int32_t rsi = 0

if (rax s< 0)
    *(arg1 + 0xa0) = 0
    
    if (rax != 0)
        sub_1405dadb0(arg1 + 0x98, 0)
        rsi = *(arg1 + 0xa0)

*(arg1 + 0xa0) = rsi + 8

if (rsi + 8 s> *(arg1 + 0xa4))
    sub_1406105e0(arg1 + 0x98)

uint64_t rcx_3 = *(arg1 + 0x98)
int64_t rax_2 = sx.q(rsi)
*(rcx_3 + (rax_2 << 2)) = 0
*(rcx_3 + (rax_2 << 2) + 8) = 0
*(rcx_3 + (rax_2 << 2) + 0x10) = 0
*(rcx_3 + (rax_2 << 2) + 0x18) = 0
*(arg1 + 0xb0) = 0

if (*(arg1 + 0xb4) s<= 0xffffffff)
    sub_1405dadb0(arg1 + 0xa8, 0)

int64_t rsi_1 = sx.q(*(arg1 + 0xb0))
int32_t rax_3 = (rsi_1 + 8).d
*(arg1 + 0xb0) = rax_3

if (rax_3 s> *(arg1 + 0xb4))
    sub_1406105e0(arg1 + 0xa8)

int64_t rcx_6 = *(arg1 + 0xa8)
*(rcx_6 + (rsi_1 << 2)) = 0
*(rcx_6 + (rsi_1 << 2) + 8) = 0
*(rcx_6 + (rsi_1 << 2) + 0x10) = 0
*(rcx_6 + (rsi_1 << 2) + 0x18) = 0
*(arg1 + 0xc0) = 0

if (*(arg1 + 0xc4) s<= 0xffffffff)
    sub_1405dadb0(arg1 + 0xb8, 0)

int64_t rdi = sx.q(*(arg1 + 0xc0))
int32_t rax_4 = (rdi + 8).d
*(arg1 + 0xc0) = rax_4

if (rax_4 s> *(arg1 + 0xc4))
    sub_1406105e0(arg1 + 0xb8)

int64_t rcx_9 = *(arg1 + 0xb8)
*(rcx_9 + (rdi << 2)) = 0
*(rcx_9 + (rdi << 2) + 8) = 0
*(rcx_9 + (rdi << 2) + 0x10) = 0
*(rcx_9 + (rdi << 2) + 0x18) = 0
*(arg1 + 0xc8) = *arg2
void* result = sub_140d3c6e0(arg1 + 0x4c)
void* result_1 = result

if (result != 0)
    void* rax_6 = sub_141c750b0()
    void* rcx_11 = *(result_1 + 0x10)
    result = rax_6 + 0x30
    int64_t rdx_3 = sx.q(*(result + 8))
    
    if (rdx_3.d s<= *(rcx_11 + 0x38) && *(*(rcx_11 + 0x30) + (rdx_3 << 3)) == result)
        return sub_141c6da50(arg1, *(result_1 + 0xd8))

return result
