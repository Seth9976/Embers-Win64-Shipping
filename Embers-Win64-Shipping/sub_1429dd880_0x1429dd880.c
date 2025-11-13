// 函数: sub_1429dd880
// 地址: 0x1429dd880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = arg1 + 4
int64_t* r8 = arg1 + 0x8a8
void* r11_2 = arg1 - rdx + 8
void* r10_1 = arg1 - rdx
void* rbx_2 = arg1 - rdx + 0xc
int64_t i_4 = 4
int64_t i

do
    *r8 = rdx
    r8[-7] = r10_1 + rdx
    r8 = &r8[0x1c]
    r8[-0x15] = r11_2 + rdx
    void* rax_3 = rbx_2 + rdx
    rdx += 0x40
    r8[-0xe] = rax_3
    i = i_4
    i_4 -= 1
while (i != 1)
void* rcx = arg1 + 0x104
void* rdx_1 = arg1 + 0xc28
int64_t i_5 = 2
void* r11_5 = arg1 - rcx + 0x100
int64_t i_7 = 2
int64_t i_1

do
    void* rax_4 = r11_5 + rcx
    *rdx_1 = rcx
    rcx += 0x20
    *(rdx_1 - 0x38) = rax_4
    rdx_1 += 0x70
    i_1 = i_7
    i_7 -= 1
while (i_1 != 1)
void* rcx_1 = arg1 + 0x144
void* rdx_2 = arg1 + 0xd08
void* r10_4 = arg1 - rcx_1 + 0x140
int64_t i_2

do
    void* rax_5 = r10_4 + rcx_1
    *rdx_2 = rcx_1
    rcx_1 += 0x20
    *(rdx_2 - 0x38) = rax_5
    rdx_2 += 0x70
    i_2 = i_5
    i_5 -= 1
while (i_2 != 1)
void* r8_1 = arg1 + 0x7c0
void* result = arg1 + 0x868
void* rdx_3 = arg1 + 0x4a0
int64_t i_6 = 0x19
int64_t i_3

do
    void* rcx_2 = rdx_3 - 0x320
    *result = rdx_3
    *(result + 0x20) = r8_1
    rdx_3 += 0x20
    *(result - 8) = rcx_2
    result += 0x38
    r8_1 += 1
    i_3 = i_6
    i_6 -= 1
while (i_3 != 1)
return result
