// 函数: sub_14147ac00
// 地址: 0x14147ac00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1 + 0x70
int64_t rsi = sx.q(*(rbx + 0x18))
int32_t rax = (rsi + 1).d
*(rbx + 0x18) = rax

if (rax s> *(rbx + 0x1c))
    sub_1408092e0(rbx, rsi.d)

void* rax_1 = *(rbx + 0x10)

if (rax_1 != 0)
    rbx = rax_1

*(rbx + (rsi << 3)) = arg2
void* rbx_1 = arg1 + 0x90
int64_t rsi_1 = sx.q(*(rbx_1 + 0x10))
int32_t rax_2 = (rsi_1 + 1).d
*(rbx_1 + 0x10) = rax_2

if (rax_2 s> *(rbx_1 + 0x14))
    sub_141104cf0(rbx_1, rsi_1.d)

void* rax_3 = *(rbx_1 + 8)

if (rax_3 != 0)
    rbx_1 = rax_3

*(rbx_1 + (rsi_1 << 1)) = 0
void* rbx_2 = arg1 + 0x18
int64_t rsi_2 = sx.q(*(rbx_2 + 0x18))
int32_t rax_4 = (rsi_2 + 1).d
*(rbx_2 + 0x18) = rax_4

if (rax_4 s> *(rbx_2 + 0x1c))
    sub_1408092e0(rbx_2, rsi_2.d)

void* rax_5 = *(rbx_2 + 0x10)

if (rax_5 != 0)
    rbx_2 = rax_5

*(rbx_2 + (rsi_2 << 3)) = arg3
void* rbx_3 = arg1 + 0x38
int64_t rsi_3 = sx.q(*(rbx_3 + 0x10))
int32_t rax_6 = (rsi_3 + 1).d
*(rbx_3 + 0x10) = rax_6

if (rax_6 s> *(rbx_3 + 0x14))
    sub_140bcee10(rbx_3, rsi_3.d)

void* rax_7 = *(rbx_3 + 8)

if (rax_7 != 0)
    rbx_3 = rax_7

*(rbx_3 + (rsi_3 << 2)) = 0
void* rbx_4 = arg1 + 0x50
int64_t rsi_4 = sx.q(*(rbx_4 + 0x18))
int32_t rax_8 = (rsi_4 + 1).d
*(rbx_4 + 0x18) = rax_8

if (rax_8 s> *(rbx_4 + 0x1c))
    sub_1408092e0(rbx_4, rsi_4.d)

void* rax_9 = *(rbx_4 + 0x10)

if (rax_9 != 0)
    rbx_4 = rax_9

*(rbx_4 + (rsi_4 << 3)) = arg4
void* rbx_5 = arg1 + 0x100
int64_t rsi_5 = sx.q(*(rbx_5 + 0x18))
int32_t rax_10 = (rsi_5 + 1).d
*(rbx_5 + 0x18) = rax_10

if (rax_10 s> *(rbx_5 + 0x1c))
    sub_1408092e0(rbx_5, rsi_5.d)

void* rax_11 = *(rbx_5 + 0x10)

if (rax_11 != 0)
    rbx_5 = rax_11

*(rbx_5 + (rsi_5 << 3)) = arg5
*(arg1 + 0xd0) = arg6
*(arg1 + 0xd8) = arg7
*(arg1 + 0xe0) = arg8
return arg8
