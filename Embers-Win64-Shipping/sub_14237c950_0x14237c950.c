// 函数: sub_14237c950
// 地址: 0x14237c950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x10)

if (rsi != 0)
    int32_t rax_1 = *(arg2 + 0xe00)
    
    if (rax_1 u>= 0x70)
        arg3, arg4 = sub_14198a900(&data_143f02b98, arg2, rax_1, 1, arg3, arg4)
        rax_1 = 0
    
    uint64_t rcx_1 = zx.q(rax_1) << 5
    *(arg2 + 0xe00) = rax_1 + 1
    int64_t var_20_1 = 0
    *(rcx_1 + arg2) = 0
    *(rcx_1 + arg2 + 8) = rsi.o
    *(rsi + 8) += 1

void* rsi_1 = *(arg1 + 0x18)

if (rsi_1 != 0)
    int32_t rax_2 = *(arg2 + 0xe00)
    
    if (rax_2 u>= 0x70)
        arg3, arg4 = sub_14198a900(&data_143f02b98, arg2, rax_2, 1, arg3, arg4)
        rax_2 = 0
    
    int32_t* rcx_3 = zx.q(rax_2) << 5
    *(arg2 + 0xe00) = rax_2 + 1
    int64_t var_20_2 = 0
    char var_14_1 = 0
    *(rcx_3 + arg2 + 8) = rsi_1.o
    *(rcx_3 + arg2) = 2
    *(rcx_3 + arg2 + 0x18) = 0.q
    *(rsi_1 + 8) += 1

void* rsi_2 = *(arg1 + 0x58)

if (rsi_2 != 0)
    int32_t rax_3 = *(arg2 + 0xe00)
    
    if (rax_3 u>= 0x70)
        arg3, arg4 = sub_14198a900(&data_143f02b98, arg2, rax_3, 1, arg3, arg4)
        rax_3 = 0
    
    int32_t* rcx_5 = zx.q(rax_3) << 5
    *(arg2 + 0xe00) = rax_3 + 1
    int64_t var_20_3 = 0
    *(rcx_5 + arg2) = 0
    *(rcx_5 + arg2 + 8) = rsi_2.o
    *(rsi_2 + 8) += 1

void* rdi_1 = *(arg1 + 0x60)

if (rdi_1 == 0)
    return 

int32_t rax_4 = *(arg2 + 0xe00)

if (rax_4 u>= 0x70)
    sub_14198a900(&data_143f02b98, arg2, rax_4, 1, arg3, arg4)
    rax_4 = 0

int32_t* rcx_7 = zx.q(rax_4) << 5
*(arg2 + 0xe00) = rax_4 + 1
int64_t var_20_4 = 0
char var_14_2 = 0
*(rcx_7 + arg2 + 8) = rdi_1.o
*(rcx_7 + arg2) = 2
*(rcx_7 + arg2 + 0x18) = 0.q
*(rdi_1 + 8) += 1
