// 函数: sub_1413a09b0
// 地址: 0x1413a09b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18
sub_1419a2ec0(*(arg1 + 0x5150), &var_18, &data_143ec5660, 0)
void* rax = var_18
int64_t rsi = 0

if (rax != 0)
    int64_t rdx_1 = sx.q(*(rax + 0x10c))
    int64_t rsi_1 = rdx_1 << 3
    void* var_10
    int64_t* rdi_1 = *(var_10 + 0x10)
    int64_t rax_2 = rdi_1[3]
    
    if (*(rsi_1 + rax_2) == 0)
        sub_1419ccf30(rdi_1, rdx_1.d)
        rax_2 = rdi_1[3]
    
    rsi = *(rsi_1 + rax_2)

int64_t rdi_2 = sx.q(arg2[1].d)
int32_t rax_3 = (rdi_2 + 1).d
arg2[1].d = rax_3

if (rax_3 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

int64_t result = *arg2
*(result + (rdi_2 << 3)) = rsi
return result
