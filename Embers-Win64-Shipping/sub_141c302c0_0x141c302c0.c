// 函数: sub_141c302c0
// 地址: 0x141c302c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg3
arg1[2] = arg4
*arg1 = arg2
__builtin_memset(&arg1[4], 0, 0x18)
uint64_t rsi = zx.q(arg1[2])
int32_t r15 = arg1[1]

if (rsi.d s> r15)
    int32_t rax_2 = r15 & 0x80000003
    
    if (rax_2 s< 0)
        rax_2 = ((rax_2 - 1) | 0xfffffffc) + 1
    
    rsi = zx.q(r15 - rax_2)
    arg1[2] = rsi.d

int32_t* rax_5 = j_sub_140a82f30(0x48)
int32_t* rsi_2

if (rax_5 == 0)
    rsi_2 = nullptr
else
    rsi_2 = sub_141c2da10(rax_5, r15 + (rsi << 1).d, zx.q(arg1[2]), 0x10, 0x10)

void arg_8

if (&arg1[8] != &arg_8)
    int32_t* rbp_1 = *(arg1 + 0x20)
    *(arg1 + 0x20) = rsi_2
    
    if (rbp_1 != 0)
        sub_140a74f90(*(rbp_1 + 0x10))
        *(rbp_1 + 0x10) = 0
        sub_140a74f90(*(rbp_1 + 0x18))
        *(rbp_1 + 0x18) = 0
        j_sub_140a74f90(rbp_1)
else if (rsi_2 != 0)
    sub_140a74f90(*(rsi_2 + 0x10))
    *(rsi_2 + 0x10) = 0
    sub_140a74f90(*(rsi_2 + 0x18))
    *(rsi_2 + 0x18) = 0
    j_sub_140a74f90(rsi_2)

sub_141c33880(*(arg1 + 0x20), arg1[1])
int32_t rdx_4 = arg1[2]
arg1[6] = 0

if (rdx_4 s> arg1[7])
    sub_140775b10(&arg1[4], rdx_4)

int32_t r8_2 = arg1[2] + arg1[6]
arg1[6] = r8_2

if (r8_2 s> arg1[7])
    sub_140775270(&arg1[4])

return arg1
