// 函数: sub_14237c390
// 地址: 0x14237c390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg2 + 0xc40)
void* rsi = *(arg1 + 0x20)

if (rax u>= 0x62)
    arg3, arg4 = sub_14198a900(&data_143f02b98, arg2, rax, 1, arg3, arg4)
    rax = 0

uint64_t rcx_1 = zx.q(rax) << 5
*(arg2 + 0xc40) = rax + 1
int64_t var_20 = 0
*(rcx_1 + arg2) = 0
*(rcx_1 + arg2 + 8) = rsi.o
*(rsi + 8) += 1
int32_t rax_2 = *(arg2 + 0xc40)
void* rsi_1 = *(arg1 + 0x38)

if (rax_2 u>= 0x62)
    arg3, arg4 = sub_14198a900(&data_143f02b98, arg2, rax_2, 1, arg3, arg4)
    rax_2 = 0

int32_t* rcx_3 = zx.q(rax_2) << 5
int32_t result = rax_2 + 1
*(arg2 + 0xc40) = result
int64_t var_20_1 = 0
*(rcx_3 + arg2) = 0
*(rcx_3 + arg2 + 8) = rsi_1.o
*(rsi_1 + 8) += 1
void* rsi_2 = *(arg1 + 0x48)

if (rsi_2 != 0)
    int32_t rax_3 = *(arg2 + 0xc40)
    
    if (rax_3 u>= 0x62)
        arg3, arg4 = sub_14198a900(&data_143f02b98, arg2, rax_3, 1, arg3, arg4)
        rax_3 = 0
    
    int32_t* rcx_5 = zx.q(rax_3) << 5
    result = rax_3 + 1
    *(arg2 + 0xc40) = result
    int64_t var_20_2 = 0
    char var_14_1 = 0
    *(rcx_5 + arg2 + 8) = rsi_2.o
    *(rcx_5 + arg2) = 2
    *(rcx_5 + arg2 + 0x18) = 0.q
    *(rsi_2 + 8) += 1

void* rdi_1 = *(arg1 + 0x58)

if (rdi_1 != 0)
    int32_t rax_4 = *(arg2 + 0xc40)
    
    if (rax_4 u>= 0x62)
        sub_14198a900(&data_143f02b98, arg2, rax_4, 1, arg3, arg4)
        rax_4 = 0
    
    int32_t* rcx_7 = zx.q(rax_4) << 5
    result = rax_4 + 1
    *(arg2 + 0xc40) = result
    int64_t var_20_3 = 0
    char var_14_2 = 0
    *(rcx_7 + arg2 + 8) = rdi_1.o
    *(rcx_7 + arg2) = 2
    *(rcx_7 + arg2 + 0x18) = 0.q
    *(rdi_1 + 8) += 1

return result
