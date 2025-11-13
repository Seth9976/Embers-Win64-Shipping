// 函数: sub_140e44d40
// 地址: 0x140e44d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *arg1
int64_t* rsi = arg1[1]
*arg2 = *r8
void* rax_1 = r8[1]
arg2[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg2[2] = 0
arg2[3].d = 0
sub_1407473e0(&arg2[2], rsi)
arg2[4] = 0
arg2[5].d = 0
sub_140692f90(&arg2[4], &rsi[2])
arg2[6] = 0
arg2[7].d = 0
sub_1407473e0(&arg2[6], &rsi[4])
arg2[8] = 0
arg2[9].d = 0
sub_140692f90(&arg2[8], &rsi[6])
arg2[0xa].d = rsi[8].d
return arg2
