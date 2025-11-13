// 函数: sub_140746840
// 地址: 0x140746840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** (* var_28)()
char arg_10

if (data_143cdf974 == 0)
    if (*arg1 != 0)
        arg_10 = 0
        char* var_20_2 = &arg_10
        var_28 = sub_14074c7c0
        sub_14074cc30(sub_140a756e0(&var_28, &data_14396eb50))
    
    return 

char* var_20_1 = &arg_10
var_28 = sub_14074c7c0
arg_10 = 0
void* rax_1 = sub_140a756e0(&var_28, &data_14396eb50)
EnterCriticalSection(&data_143cdfd68)
int64_t rcx_1 = *(rax_1 + 0x30)
int64_t rdx_1 = sx.q(*(rax_1 + 0x38)) * 2
int64_t rsi = *(rcx_1 + (rdx_1 << 3) - 0x10)
*(rcx_1 + (rdx_1 << 3) - 0x10) = 0
*(rcx_1 + (rdx_1 << 3) - 8) = 0
int64_t rbp = sx.q(*(rax_1 + 0x38))
int64_t rcx_2 = *((rbp << 4) - 0x10 + *(rax_1 + 0x30))
int32_t rax_3 = rbp.d

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)
    rax_3 = *(rax_1 + 0x38)

int32_t rcx_4 = rax_3 - (rbp - 1).d

if (rcx_4 != 1)
    int64_t rax_4 = *(rax_1 + 0x30)
    memmove((rbp << 4) - 0x10 + rax_4, (rbp << 4) + rax_4, (rcx_4 - 1) << 4)
    rax_3 = *(rax_1 + 0x38)

*(rax_1 + 0x38) = rax_3 - 1
sub_140638bc0(rax_1 + 0x30)

if (rsi != 0)
    sub_140a74f90(rsi)

void* rdx_7

if (*(rax_1 + 0x38) == 0)
    rdx_7 = rax_1 + 0x20
else
    rdx_7 = (sx.q(*(rax_1 + 0x38) - 1) << 4) + *(rax_1 + 0x30)

sub_140a53700(rax_1 + 0x10, rdx_7)
LeaveCriticalSection(&data_143cdfd68)
