// 函数: sub_140e307c0
// 地址: 0x140e307c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = -2
int32_t arg_8 = 0
void* var_50 = nullptr
int32_t var_48 = 0
arg_8 = 1
void* rax = sub_140a84c80(0, 0x30, 0)
void*** rbx = rax
var_50 = rax
int32_t rbp = 3
int32_t var_48_1 = 3
void* arg_10 = rax

if (rax != 0)
    *rbx = &data_142d42fd0
    rbx[1] = arg1
    rbx[2] = sub_140e32d20
    rbx[4] = sub_140a387b0()

j_sub_140b3db50()
void* rsi = &data_143de7dd0
int64_t r14 = sx.q(data_143de7fd8)
int32_t rax_2 = (r14 + 1).d
data_143de7fd8 = rax_2

if (rax_2 s> data_143de7fdc)
    sub_1405a4e80(&data_143de7dd0, r14.d)

void* rax_3 = data_143de7fd0

if (rax_3 != 0)
    rsi = rax_3

int64_t rax_5 = r14 << 5
*(rsi + rax_5) = *arg2
void* rdx_2 = rax_5 + 0x10 + rsi
arg_10 = rdx_2
*rdx_2 = 0
*(rdx_2 + 8) = 0

if (&var_50 != rdx_2 && rax != 0)
    (*rbx)[8](rbx)

if (rax != 0)
    (*rbx)[7](rbx, 0)
    rbx = sub_140a84c80(rbx, 0, 0)
    rbp = 0

if (rbp != 0 && rbx != 0)
    (*rbx)[7](rbx, 0)
    rbx = sub_140a84c80(rbx, 0, 0)

if (rbx != 0)
    sub_140a74f90(rbx)

return arg1
