// 函数: sub_141ca29c0
// 地址: 0x141ca29c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[1].d s< 1)
    return 

int64_t* rax_1 = *arg2
int32_t rbx_1 = 0
int16_t* rbp_1 = nullptr
void* var_38 = nullptr
int32_t var_30_1 = 0
int32_t rsi_1 = rax_1[1].d
int64_t rdi_1 = *rax_1
uint64_t var_28 = 0
int16_t* r14_1

if (rsi_1 != 0)
    sub_1405a4c70(&var_28, rsi_1, 0)
    rbp_1 = var_28
    memcpy(rbp_1, rdi_1, rsi_1 * 2)
    r14_1 = rbp_1
else
    r14_1 = nullptr

int64_t* rcx_2 = *arg1
int64_t* rax_3 = (*(*rcx_2 + 0x48))(rcx_2)
int16_t* const rdx_2 = &data_142d40450

if (rsi_1 != 0)
    rdx_2 = r14_1

void arg_10
(*(*rax_3 + 0x28))(rax_3, *sub_140b58260(&arg_10, rdx_2, 1), &var_38, 0)

if (var_30_1 s> 0)
    int64_t rsi_2 = 0
    
    do
        void* rdi_3 = var_38
        sub_14098ef70(rdi_3 + 0x28 + rsi_2)
        sub_14098ef70(rdi_3 + 0x28 + rsi_2)
        rbx_1 += 1
        rsi_2 += 0x50
    while (rbx_1 s< var_30_1)

if (rbp_1 != 0)
    sub_140a74f90(rbp_1)

sub_141c94120(&var_38)
