// 函数: sub_1419a3ed0
// 地址: 0x1419a3ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18
sub_1419a2ec0(arg2, &var_18, &data_143f10440, 0)
sub_140fdc870(arg1, arg4)
void* rcx_2 = var_18
arg4[6] = data_14395da00
arg4[7] = data_14395da18
arg4[8] = data_14395d9e8
*arg4 = data_1439c9210
int64_t rax_5 = 0

if (rcx_2 != 0)
    int64_t rdx_2 = sx.q(*(rcx_2 + 0x10c))
    void* var_10
    int64_t* rbx_1 = *(var_10 + 0x10)
    int64_t rsi_1 = rdx_2 << 3
    int64_t rax_7 = rbx_1[3]
    
    if (*(rsi_1 + rax_7) == 0)
        sub_1419ccf30(rbx_1, rdx_2.d)
        rax_7 = rbx_1[3]
    
    rax_5 = *(rsi_1 + rax_7)

arg4[1] = rax_5
void* result = *arg3

if (result == 0)
    arg4[4] = 0
else
    int64_t rdx_3 = sx.q(*(result + 0x10c))
    int64_t rsi_2 = rdx_3 << 3
    int64_t* rbx_2 = *(arg3[1] + 0x10)
    int64_t rax_9 = rbx_2[3]
    
    if (*(rsi_2 + rax_9) == 0)
        sub_1419ccf30(rbx_2, rdx_3.d)
        rax_9 = rbx_2[3]
    
    result = *(rsi_2 + rax_9)
    arg4[4] = result

arg4[0xb].d = 0
return result
