// 函数: sub_141c300f0
// 地址: 0x141c300f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = 0
*arg1 = arg2
arg1[1] = arg3
*(arg1 + 8) = 0
__builtin_memset(&arg1[4], 0, 0x20)
uint64_t rbp = zx.q(*arg1)

if (rbp.d s< 1)
    rbp = 1
    *arg1 = 1

int32_t rsi = arg1[1]
int32_t rax_1 = rsi & 0x80000003

if (rax_1 s< 0)
    rax_1 = ((rax_1 - 1) | 0xfffffffc) + 1

if (rax_1 != 0)
    int32_t i
    
    do
        rsi -= 1
        i = rsi & 0x80000003
        
        if (i s< 0)
            i = ((i - 1) | 0xfffffffc) + 1
    while (i != 0)
    rbp = zx.q(*arg1)
    arg1[1] = rsi

if (rsi s< 1)
    rsi = 4
    arg1[1] = 4

int32_t* rax_7 = j_sub_140a82f30(0x48)
int32_t* rsi_1

if (rax_7 == 0)
    rsi_1 = nullptr
else
    rsi_1 = sub_141c2da10(rax_7, rsi + 2 + (rbp << 1).d, zx.q((rbp + 1).d + rsi), 0x10, 0x10)

void arg_8

if (&arg1[2] != &arg_8)
    int32_t* rbp_1 = *(arg1 + 8)
    *(arg1 + 8) = rsi_1
    
    if (rbp_1 != 0)
        sub_140a74f90(*(rbp_1 + 0x10))
        *(rbp_1 + 0x10) = 0
        sub_140a74f90(*(rbp_1 + 0x18))
        *(rbp_1 + 0x18) = 0
        j_sub_140a74f90(rbp_1)
else if (rsi_1 != 0)
    sub_140a74f90(*(rsi_1 + 0x10))
    *(rsi_1 + 0x10) = 0
    sub_140a74f90(*(rsi_1 + 0x18))
    *(rsi_1 + 0x18) = 0
    j_sub_140a74f90(rsi_1)

sub_141c33880(*(arg1 + 8), *arg1 + 1)
int32_t rdx_5 = arg1[1]
arg1[6] = 0

if (rdx_5 s> arg1[7])
    sub_140775b10(&arg1[4], rdx_5)

int32_t rcx_9 = arg1[1] + arg1[6]
arg1[6] = rcx_9

if (rcx_9 s> arg1[7])
    sub_140775270(&arg1[4])

if (arg1[1] s> 0)
    int64_t r8_2 = 0
    
    do
        r8_2 += 4
        int32_t rdx_8 = *arg1 + i_1
        i_1 += 1
        *(r8_2 + *(arg1 + 0x10) - 4) = rdx_8
    while (i_1 s< arg1[1])

*(arg1 + 0x20) = sub_140a82f30(0x10, 0x10)
*(arg1 + 0x28) = sub_140a82f30(0x10, 0x10)
return arg1
