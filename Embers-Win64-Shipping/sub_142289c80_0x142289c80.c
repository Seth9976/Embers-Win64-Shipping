// 函数: sub_142289c80
// 地址: 0x142289c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143313220
void* rcx = arg1[4]
int64_t rax_1 = rcx s>> 1
char rdx = arg1[4].b & 1
void* r8_1

if (rdx == 0)
    r8_1 = rcx
else
    r8_1 = &arg1[4] + rax_1

if (r8_1 != 0)
    if (rdx != 0)
        rcx = &arg1[4] + rax_1
    
    if (rcx != 0)
        (**rcx)(rcx, 1)
    
    arg1[4] = 0

sub_1405ec8a0(&arg1[3])
*arg1 = &data_142dda848
sub_1405d1550(&arg1[2])
return sub_1419948a0(arg1) __tailcall
