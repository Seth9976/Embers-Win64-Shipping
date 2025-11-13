// 函数: sub_1413ef0b0
// 地址: 0x1413ef0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_28
sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(*(arg1 + 0x1548))]), &var_28, 
    &data_143ecc3e0, 0)
void* var_18
sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(*(arg1 + 0x1548))]), &var_18, 
    &data_143ecc540, 0)
void* rax_4 = var_28
int64_t rbp = 0
int64_t rsi = 0

if (rax_4 != 0)
    int64_t rdx_2 = sx.q(*(rax_4 + 0x10c))
    int64_t rsi_1 = rdx_2 << 3
    void* var_20
    int64_t* rbx_1 = *(var_20 + 0x10)
    int64_t rax_6 = rbx_1[3]
    
    if (*(rsi_1 + rax_6) == 0)
        sub_1419ccf30(rbx_1, rdx_2.d)
        rax_6 = rbx_1[3]
    
    rsi = *(rsi_1 + rax_6)

int64_t rbx_2 = sx.q(arg2[1].d)
int32_t rax_7 = (rbx_2 + 1).d
arg2[1].d = rax_7

if (rax_7 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rbx_2 << 3)) = rsi
void* rax_9 = var_18

if (rax_9 != 0)
    int64_t rdx_4 = sx.q(*(rax_9 + 0x10c))
    int64_t rsi_2 = rdx_4 << 3
    void* var_10
    int64_t* rbx_3 = *(var_10 + 0x10)
    int64_t rax_11 = rbx_3[3]
    
    if (*(rsi_2 + rax_11) == 0)
        sub_1419ccf30(rbx_3, rdx_4.d)
        rax_11 = rbx_3[3]
    
    rbp = *(rsi_2 + rax_11)

int64_t rbx_4 = sx.q(arg2[1].d)
int32_t rax_12 = (rbx_4 + 1).d
arg2[1].d = rax_12

if (rax_12 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

int64_t result = *arg2
*(result + (rbx_4 << 3)) = rbp
return result
