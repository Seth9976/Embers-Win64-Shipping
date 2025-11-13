// 函数: sub_1426b8330
// 地址: 0x1426b8330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg2 + 0x50) != 0)
    sub_140d3e110(arg2 + 0x48)

if (arg2 == 0)
    return 

void* rax_1 = sub_14272a130()
void* rdx = *(arg2 + 0x10)
uint64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

void* rsi_1 = *(arg2 + 0x68)

if (rsi_1 == 0)
    return 

void* rsi_2 = *(rsi_1 + 0x2e0)

if (rsi_2 == 0)
    return 

void* rax_2 = sub_1427297d0()
void* rdx_1 = *(rsi_2 + 0x10)
rax = sx.q(*(rax_2 + 0x38))

if (rax.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax << 3)) != rax_2 + 0x30)
    return 

int32_t rax_3 = sub_1426b39d0(rsi_2, arg1 - 0x28)
int32_t r8_3 = 0
int64_t* rdx_4 = sub_1426b06a0(rsi_2, arg1 - 0x28)

if (rax_3 == 1)
    r8_3 = 2

sub_1426b8c80(rsi_2, rdx_4, r8_3, arg3)
