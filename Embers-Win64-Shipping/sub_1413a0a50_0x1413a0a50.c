// 函数: sub_1413a0a50
// 地址: 0x1413a0a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_28
sub_1419a2ec0(*(arg1 + 0x5150), &var_28, &data_143ec5aa0, 1)
void* rax = var_28
int64_t rsi = 0
int64_t rbp = 0
void* var_20

if (rax != 0)
    int64_t rdx_1 = sx.q(*(rax + 0x10c))
    int64_t r14_1 = rdx_1 << 3
    int64_t* rdi_1 = *(var_20 + 0x10)
    int64_t rax_2 = rdi_1[3]
    
    if (*(r14_1 + rax_2) == 0)
        sub_1419ccf30(rdi_1, rdx_1.d)
        rax_2 = rdi_1[3]
    
    rbp = *(r14_1 + rax_2)

int64_t rdi_2 = sx.q(arg3[1].d)
int32_t rax_3 = (rdi_2 + 1).d
arg3[1].d = rax_3

if (rax_3 s> *(arg3 + 0xc))
    sub_1405a4d70(arg3)

*(*arg3 + (rdi_2 << 3)) = rbp
sub_1419a2ec0(*(arg1 + 0x5150), &var_28, &data_143ec5aa0, 2)
void* rax_5 = var_28

if (rax_5 != 0)
    int64_t rdx_4 = sx.q(*(rax_5 + 0x10c))
    int64_t rsi_1 = rdx_4 << 3
    int64_t* rdi_3 = *(var_20 + 0x10)
    int64_t rax_7 = rdi_3[3]
    
    if (*(rsi_1 + rax_7) == 0)
        sub_1419ccf30(rdi_3, rdx_4.d)
        rax_7 = rdi_3[3]
    
    rsi = *(rsi_1 + rax_7)

int64_t rdi_4 = sx.q(arg3[1].d)
int32_t rax_8 = (rdi_4 + 1).d
arg3[1].d = rax_8

if (rax_8 s> *(arg3 + 0xc))
    sub_1405a4d70(arg3)

int64_t result = *arg3
*(result + (rdi_4 << 3)) = rsi
return result
