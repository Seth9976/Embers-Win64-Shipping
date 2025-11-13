// 函数: sub_1423a5270
// 地址: 0x1423a5270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1423a58d0(arg1, arg2, arg3)
int32_t rdi = 0
*arg1 = &data_143339560
arg1[0x2f] = 0
arg1[0x30].d = 0
*(arg1 + 0x184) = 0xe
sub_1423c1c20(arg2)
int32_t rbp

if (arg2[0x1a] == 0)
    rbp = 0
else
    char rax_2 = (*(*arg2 + 0x318))(arg2)
    void* rcx_2 = arg2[0x1a]
    
    if (rax_2 == 0)
        rbp = *(rcx_2 + 0x20)
    else
        rbp = sub_1423c1c80(rcx_2)

void* r14 = &arg1[0x21]
int64_t r15 = sx.q(*(r14 + 0x78))
int32_t rax_4 = r15.d + rbp
*(r14 + 0x78) = rax_4

if (rax_4 s> *(r14 + 0x7c))
    sub_1423b4cf0(r14, r15.d)

void* rax_5 = *(r14 + 0x70)

if (rax_5 != 0)
    r14 = rax_5

memset(r14 + (r15 << 3), 0, sx.q(rbp) << 3)
*arg1 = &data_1433395e0
arg1[0x3f] = 0
arg1[0x40].d = 0
*(arg1 + 0x204) = 0xe
arg1[0x41].b = arg4
arg1[0x42] = 0
arg1[0x44] = 0

if (arg2[0x1a] != 0)
    char rax_7 = (*(*arg2 + 0x318))(arg2)
    void* rdi_1 = arg2[0x1a]
    
    if (rax_7 == 0)
        rdi = *(rdi_1 + 0x20)
    else
        rdi = sub_1423c1c80(rdi_1)

void* rbx_1 = &arg1[0x31]
int64_t r14_1 = sx.q(*(rbx_1 + 0x78))
int32_t rax_9 = r14_1.d + rdi
*(rbx_1 + 0x78) = rax_9

if (rax_9 s> *(rbx_1 + 0x7c))
    sub_1423b4c00(rbx_1, r14_1.d)

void* rax_10 = *(rbx_1 + 0x70)

if (rax_10 != 0)
    rbx_1 = rax_10

memset(rbx_1 + (r14_1 << 3), 0, sx.q(rdi) << 3)
return arg1
