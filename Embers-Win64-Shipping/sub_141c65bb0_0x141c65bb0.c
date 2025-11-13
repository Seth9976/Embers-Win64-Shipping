// 函数: sub_141c65bb0
// 地址: 0x141c65bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = arg2[1].d
*(arg1 + 0x7c8) = 0

if (rdx s> *(arg1 + 0x7cc))
    sub_1405a5220(arg1 + 0x7c0, rdx)

int128_t* rsi = *arg2
void* rbp_2 = &rsi[sx.q(arg2[1].d) * 0xc]

while (rsi != rbp_2)
    int64_t rdi_1 = sx.q(*(arg1 + 0x7c8))
    int32_t rax_1 = (rdi_1 + 1).d
    *(arg1 + 0x7c8) = rax_1
    
    if (rax_1 s> *(arg1 + 0x7cc))
        sub_140638970(arg1 + 0x7c0)
    
    int64_t rax_2 = *(arg1 + 0x7c0)
    int64_t rcx_3 = rdi_1 * 6
    *(rax_2 + (rcx_3 << 3)) = *rsi
    *(rax_2 + (rcx_3 << 3) + 0x10) = rsi[1]
    int128_t zmm0 = rsi[2]
    rsi = &rsi[0xc]
    *(rax_2 + (rcx_3 << 3) + 0x20) = zmm0

int64_t rdi_2 = sx.q(*(arg1 + 0x7c8))
int64_t rsi_1 = 0
void* rbp_3 = *(arg1 + 0xa90)
int64_t rbx_1 = *(arg1 + 0x7c0)
int64_t var_70 = 0
int32_t var_68 = rdi_2.d
int64_t rbx_2
int64_t r14_1
int64_t r15

if (rdi_2.d != 0)
    sub_1405a4b40(&var_70, rdi_2.d, 0)
    rsi_1 = var_70
    memcpy(rsi_1, rbx_1, (rdi_2 * 0x30).d)
    r14_1 = rsi_1
    rdi_2 = zx.q(var_68)
    r15 = rsi_1
    rbx_2 = rsi_1
else
    r14_1 = 0
    r15 = 0
    rbx_2 = 0

int64_t var_48 = 0
void** const var_38 = &data_142fe8568
void* var_30 = rbp_3
int64_t var_28 = 0
int32_t var_20 = rdi_2.d

if (rdi_2.d != 0)
    sub_1405a4b40(&var_28, rdi_2.d, 0)
    memcpy(var_28, r14_1, rdi_2.d * 0x30)
    rbx_2 = r15
else
    int32_t var_1c_1 = 0

void** const var_38_1 = &data_14320b080
void* (* var_58)(int64_t* arg1) = j_sub_141c532f0
int64_t result = sub_141c56770(rbp_3, &var_58)

if (rbx_2 == 0)
    return result

return sub_140a74f90(rsi_1)
