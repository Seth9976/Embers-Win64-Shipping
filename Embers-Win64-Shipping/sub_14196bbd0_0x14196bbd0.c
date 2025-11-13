// 函数: sub_14196bbd0
// 地址: 0x14196bbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = data_143f0f088
uint64_t rbx = 0
uint64_t var_18 = 0
int32_t rdi = rax[1].d
int64_t rsi = *rax

if (rdi != 0)
    sub_1405a4c70(&var_18, rdi, 0)
    rbx = var_18
    memcpy(rbx, rsi, rdi * 2)

uint64_t rdx_3 = &data_142d40450

if (rdi != 0)
    rdx_3 = rbx

void arg_8
int64_t* result = sub_140b58260(&arg_8, rdx_3, 1)
data_143f0f090 = *result

if (rbx == 0)
    return result

return sub_140a74f90(rbx)
