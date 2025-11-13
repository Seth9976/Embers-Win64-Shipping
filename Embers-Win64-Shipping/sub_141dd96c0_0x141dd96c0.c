// 函数: sub_141dd96c0
// 地址: 0x141dd96c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const rax = sub_140a84c80(0, 0x30, 0)
void*** rdi = rax

if (rax != 0)
    *rdi = &data_14323d288
    sub_140d3a3a0(&rdi[1], arg1)
    rdi[2] = sub_140f28a78
    rdi[4] = sub_140a387b0()
    rax = &data_14323d2e0
    *rdi = &data_14323d2e0

if (rdi == 0)
    *(arg1 + 0x48) = 0
    return rax

sub_140599630(&data_143a2e120, 1)
void arg_8
int64_t* rax_3 = (*rdi)[6](rdi, &arg_8)
int64_t rbp = sx.q(data_143a2e128)
int64_t rbx = *rax_3
int32_t rax_4 = (rbp + 1).d
bool cond:0 = rax_4 s<= data_143a2e12c
data_143a2e128 = rax_4

if (not(cond:0))
    sub_1405a4f90(&data_143a2e120)

void**** rax_7 = (rbp << 4) + data_143a2e120
*rax_7 = rdi
rax_7[1].d = 3
*(arg1 + 0x48) = rbx
return rax_7
