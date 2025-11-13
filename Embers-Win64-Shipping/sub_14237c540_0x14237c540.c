// 函数: sub_14237c540
// 地址: 0x14237c540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 8)

if (rdi == 0)
    return 

void* rbp_1 = *(rdi + 0x10)

if (rbp_1 != 0)
    int32_t rax_1 = *(arg2 + 0xe00)
    
    if (rax_1 u>= 0x70)
        arg3, arg4 = sub_14198a900(&data_143f02b98, arg2, rax_1, 1, arg3, arg4)
        rax_1 = 0
    
    int32_t* rcx_1 = zx.q(rax_1) << 5
    *(arg2 + 0xe00) = rax_1 + 1
    int64_t var_10_1 = 0
    *(rcx_1 + arg2) = 1
    *(rcx_1 + arg2 + 8) = rbp_1.o
    *(rbp_1 + 8) += 1

void* rdi_1 = *(rdi + 0x18)

if (rdi_1 == 0)
    return 

int32_t rax_2 = *(arg2 + 0xe00)

if (rax_2 u>= 0x70)
    sub_14198a900(&data_143f02b98, arg2, rax_2, 1, arg3, arg4)
    rax_2 = 0

int32_t* rcx_3 = zx.q(rax_2) << 5
*(arg2 + 0xe00) = rax_2 + 1
int64_t var_10_2 = 0
*(rcx_3 + arg2) = 3
*(rcx_3 + arg2 + 8) = rdi_1.o
*(rdi_1 + 8) += 1
