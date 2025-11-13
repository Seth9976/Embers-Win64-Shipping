// 函数: sub_1407e96d0
// 地址: 0x1407e96d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg4
int64_t* rbp = arg2

if (arg5 != 0)
    sub_1407e50a0(rbp, arg1)
    uint64_t rax
    rax, arg2 = sub_140808700(rbp)

void* rsi = arg1[0x14]

if (rsi == 0)
    rsi = arg1[0x13]
    
    if (rsi != 0)
        goto label_1407e9724
    
    return 

label_1407e9724:
int32_t rcx_2 = *(rsi + 0xb0)
void* r15_1 = rbp[0x13]
int32_t r13_1 = *(r15_1 + 0xb0)

if (arg3 s>= rcx_2)
    return 

if (rdi == 0xffffffff || arg3 + rdi s>= rcx_2)
    rdi = rcx_2 - arg3

arg2.b = 1
void* rax_2 = sub_1407e7150(rbp, arg2.b)
int32_t rbx_1 = rdi

if (arg5 == 0)
    rbx_1 = rdi + r13_1

sub_1407e6590(rax_2, rbx_1, 0)
*(rax_2 + 0xb0) = rbx_1

if (arg5 == 0)
    sub_1407e9520(r15_1, rax_2, 0, 0, *(r15_1 + 0xb0))

sub_1407e9520(rsi, rax_2, 0, r13_1, rdi)
void* rcx_8 = rbp[0x14]

if (0xffffffff == *(rcx_8 + 8))
    *(rcx_8 + 8) = 0
else
    *(rcx_8 + 8)

rbp[0x13] = rbp[0x14]
rbp[0x14] = 0
