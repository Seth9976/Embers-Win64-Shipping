// 函数: sub_1413ef730
// 地址: 0x1413ef730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_1422e5a30(arg1)
int64_t rsi = 0
int64_t rax_1
int32_t rdx_1

if (data_143f0f220 != 0 && *(data_143ec8340 + 4) != 0)
    rax_1 = sx.q(rax)
    rdx_1 = 4

if (data_143f0f220 == 0 || *(data_143ec8340 + 4) == 0
        || ((*(&data_143f025fc + rax_1 * 0x14) u>> 0x14).b & 1) == 0)
    rdx_1 = 0

void* var_18
sub_1419a2ec0(*(arg1 + 0x5150), &var_18, &data_143ec8880, 
    (sbb.d(arg4, arg4, *(data_143ec8e58 + 4) != 0) & 2) + rdx_1)
void* rax_5 = var_18

if (rax_5 != 0)
    int64_t rdx_3 = sx.q(*(rax_5 + 0x10c))
    int64_t r14_1 = rdx_3 << 3
    void* var_10
    int64_t* rdi_1 = *(var_10 + 0x10)
    int64_t rsi_1 = rdi_1[3]
    
    if (*(r14_1 + rsi_1) == 0)
        sub_1419ccf30(rdi_1, rdx_3.d)
        rsi_1 = rdi_1[3]
    
    rsi = *(r14_1 + rsi_1)

int64_t rdi_2 = sx.q(arg2[1].d)
int32_t rax_7 = (rdi_2 + 1).d
arg2[1].d = rax_7

if (rax_7 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

int64_t result = *arg2
*(result + (rdi_2 << 3)) = rsi
return result
