// 函数: sub_141a59040
// 地址: 0x141a59040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = data_143f2a0c8
uint64_t rbx = 0
uint64_t var_18 = 0
int32_t rdi = rax[1].d
int64_t rbp = *rax

if (rdi != 0)
    sub_1405a4c70(&var_18, rdi, 0)
    rbx = var_18
    memcpy(rbx, rbp, rdi * 2)

uint64_t rdx_3 = &data_142d40450

if (rdi != 0)
    rdx_3 = rbx

uint64_t result = sub_140b29b90(arg1, rdx_3)

if (rbx == 0)
    return result

return sub_140a74f90(rbx)
