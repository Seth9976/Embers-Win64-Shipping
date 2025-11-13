// 函数: sub_142ca0f90
// 地址: 0x142ca0f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
*(arg2 + 0x130) = arg2 + 0x50
*(arg2 + 0x50) = 0
int32_t rbx = (*(arg2 + 0xb0)).d
int64_t rdi = *(arg2 + 0xa8)
*(arg2 + 0x58) = rbx

if (rbx != 0)
    sub_1405a4c70(arg2 + 0x50, rbx, 0)
    memcpy(*(arg2 + 0x50), rdi, rbx * 2)
else
    *(arg2 + 0x5c) = rbx

*(arg2 + 0x60) = 0
*(arg2 + 0x68) = 0
sub_1405947f0(arg2 + 0x60, 8)
int32_t rax_2 = *(arg2 + 0x68) + 8
*(arg2 + 0x68) = rax_2

if (rax_2 s> *(arg2 + 0x6c))
    sub_140594770(arg2 + 0x60)

sub_1405a7220(*(arg2 + 0x60), 8, "Unknown", 8, 0x3f)
*(arg2 + 0x70) = 0
*(arg2 + 0x78) = 0
sub_1405947f0(arg2 + 0x70, 3)
int32_t rax_4 = *(arg2 + 0x78) + 3
*(arg2 + 0x78) = rax_4

if (rax_4 s> *(arg2 + 0x7c))
    sub_140594770(arg2 + 0x70)

sub_1405a7220(*(arg2 + 0x70), 3, "v0", 3, 0x3f)
*(arg2 + 0x80) = 0
*(arg2 + 0x88) = 0
sub_1405947f0(arg2 + 0x80, 0x29)
int32_t rax_6 = *(arg2 + 0x88) + 0x29
*(arg2 + 0x88) = rax_6

if (rax_6 s> *(arg2 + 0x8c))
    sub_140594770(arg2 + 0x80)

sub_1405a7220(*(arg2 + 0x80), 0x29, "No metadata was found for this styleset.", 0x29, 0x3f)
uint64_t* rdi_1 = *(arg2 + 0x120)
sub_140597df0(rdi_1, arg2 + 0x50)

if (&rdi_1[2] != arg2 + 0x60)
    int32_t r8_3 = *(rdi_1 + 0x1c)
    int32_t rsi_1 = *(arg2 + 0x68)
    int64_t r14_1 = *(arg2 + 0x60)
    rdi_1[3].d = rsi_1
    
    if (rsi_1 != 0 || r8_3 != 0)
        sub_1405a4c70(&rdi_1[2], rsi_1, r8_3)
        memcpy(rdi_1[2], r14_1, rsi_1 * 2)
    else
        *(rdi_1 + 0x1c) = rsi_1

if (&rdi_1[4] != arg2 + 0x70)
    int32_t r8_6 = *(rdi_1 + 0x2c)
    int32_t rsi_2 = *(arg2 + 0x78)
    int64_t r14_2 = *(arg2 + 0x70)
    rdi_1[5].d = rsi_2
    
    if (rsi_2 != 0 || r8_6 != 0)
        sub_1405a4c70(&rdi_1[4], rsi_2, r8_6)
        memcpy(rdi_1[4], r14_2, rsi_2 * 2)
    else
        *(rdi_1 + 0x2c) = rsi_2

int64_t rdi_2 = *(arg2 + 0x80)

if (&rdi_1[6] != arg2 + 0x80)
    int32_t r8_9 = *(rdi_1 + 0x3c)
    int32_t rsi_3 = *(arg2 + 0x88)
    rdi_1[7].d = rsi_3
    
    if (rsi_3 != 0 || r8_9 != 0)
        sub_1405a4c70(&rdi_1[6], rsi_3, r8_9)
        memcpy(rdi_1[6], rdi_2, rsi_3 * 2)
        rdi_2 = *(arg2 + 0x80)
    else
        *(rdi_1 + 0x3c) = rsi_3

if (rdi_2 != 0)
    sub_140a74f90(rdi_2)

int64_t rcx_19 = *(arg2 + 0x70)

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int64_t rcx_20 = *(arg2 + 0x60)

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

int64_t rcx_21 = *(arg2 + 0x50)

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

return 0
