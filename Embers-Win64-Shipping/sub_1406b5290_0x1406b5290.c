// 函数: sub_1406b5290
// 地址: 0x1406b5290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
void* var_38 = nullptr
int32_t var_30 = 0
arg_8 = 1
void* rax = sub_140a84c80(0, 0x30, 0)
void*** rbx = rax
var_38 = rax
int32_t rsi = 3
int32_t var_30_1 = 3
void* arg_10 = rax

if (rax != 0)
    *rbx = &data_142d63678
    rbx[1] = arg1
    rbx[2] = sub_1406bde70
    rbx[4] = sub_140a387b0()

j_sub_140b3db50()
void* rdi = &data_143de7dd0
int64_t rbp = sx.q(data_143de7fd8)
int32_t rax_2 = (rbp + 1).d
data_143de7fd8 = rax_2

if (rax_2 s> data_143de7fdc)
    sub_1405a4e80(&data_143de7dd0, rbp.d)

void* rax_3 = data_143de7fd0

if (rax_3 != 0)
    rdi = rax_3

int64_t rax_5 = rbp << 5
*(rdi + rax_5) = *arg2
void* rdx_2 = rax_5 + 0x10 + rdi
arg_10 = rdx_2
*rdx_2 = 0
*(rdx_2 + 8) = 0

if (&var_38 != rdx_2 && rbx != 0)
    (*rbx)[8](rbx)

if (rbx != 0)
    (*rbx)[7](rbx, 0)
    rbx = sub_140a84c80(rbx, 0, 0)
    rsi = 0

if (rsi != 0 && rbx != 0)
    (*rbx)[7](rbx, 0)
    rbx = sub_140a84c80(rbx, 0, 0)

if (rbx != 0)
    sub_140a74f90(rbx)

return arg1
