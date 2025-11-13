// 函数: sub_141c2eb10
// 地址: 0x141c2eb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
*arg1 = arg2
arg1[4] = arg4
*(arg1 + 4) = 0
arg1[3] = 0
int32_t rbp = arg3
*(arg1 + 0x18) = 0
int32_t rsi = arg1[4]
uint64_t r14 = zx.q(*arg1)
int32_t* rax = j_sub_140a82f30(0x48)
int32_t* rsi_1

if (rax == 0)
    rsi_1 = nullptr
else
    rsi_1 = sub_141c2da10(rax, rsi + (r14 << 1).d, zx.q(r14.d + rsi), 0x10, 0x10)

void arg_8

if (&arg1[6] != &arg_8)
    int32_t* r14_1 = *(arg1 + 0x18)
    *(arg1 + 0x18) = rsi_1
    
    if (r14_1 != 0)
        sub_140a74f90(*(r14_1 + 0x10))
        *(r14_1 + 0x10) = 0
        sub_140a74f90(*(r14_1 + 0x18))
        *(r14_1 + 0x18) = 0
        j_sub_140a74f90(r14_1)
else if (rsi_1 != 0)
    sub_140a74f90(*(rsi_1 + 0x10))
    *(rsi_1 + 0x10) = 0
    sub_140a74f90(*(rsi_1 + 0x18))
    *(rsi_1 + 0x18) = 0
    j_sub_140a74f90(rsi_1)

sub_141c33880(*(arg1 + 0x18), *arg1)
int32_t rcx_7 = *arg1

if (rbp s> rcx_7)
    rbp = rcx_7
else if (rbp s< 0)
    rbp = 0

int32_t rcx_8 = rcx_7 - rbp
arg1[1] = rbp
arg1[2] = rcx_8
arg1[3] = 0
int32_t rax_3 = rcx_8 & 0x80000003

if (rax_3 s< 0)
    rax_3 = ((rax_3 - 1) | 0xfffffffc) + 1

if (rax_3 != 0)
    int32_t i
    
    do
        rcx_8 -= 1
        rbx += 1
        i = rcx_8 & 0x80000003
        
        if (i s< 0)
            i = ((i - 1) | 0xfffffffc) + 1
    while (i != 0)
    arg1[2] = rcx_8
    arg1[3] = rbx

return arg1
