// 函数: sub_140bc6140
// 地址: 0x140bc6140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 0
char* var_20 = &arg_8
void*** (* var_28)() = sub_140884c50
void* rax = sub_140a756e0(&var_28, &data_14397f5f0)
int64_t r15 = *(rax + 0x40)
*(rax + 0x40) = arg1
sub_140bc3310(arg1)
int32_t rbx = sub_140bcd0a0(arg1)
sub_140bc5ba0(arg1)

if (rbx == 2 || *(arg1 + 0x75) != 0)
    sub_140bc6fa0(arg1)
    rbx = 2

*(arg1 + 0x76) = rbx == 2

if (rbx == 2)
    *(arg1 + 0x1a0) = 4

void* rax_3 = *(arg1 + 0x38)

if (rax_3 != 0 && rbx == 2)
    *(rax_3 + 0x28) |= rbx.b
else if (rbx == 0)
    *(rax + 0x40) = r15
    return 0

void* rdi = *(arg1 + 0xc8)
*(rdi + 0x174) += 1
EnterCriticalSection(rdi + 0x98)
int64_t rbp = sx.q(*(rdi + 0x90))
int32_t rax_4 = (rbp + 1).d
*(rdi + 0x90) = rax_4

if (rax_4 s> *(rdi + 0x94))
    sub_1405a4d70(rdi + 0x88)

*(*(rdi + 0x88) + (rbp << 3)) = arg1

if (rdi != -0x98)
    LeaveCriticalSection(rdi + 0x98)

*(rax + 0x40) = r15
return 2
