// 函数: sub_141491a80
// 地址: 0x141491a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result_5 = *(arg1 + 0x78)
void* result_1 = arg1 + 0x10
char r9 = 0
int64_t rdx = sx.q(arg2) * 5
void* result_2 = result_1

if (result_5 != 0)
    result_2 = result_5

int64_t rsi = rdx << 2
int32_t rdx_1 = *(result_2 + (rdx << 2))

if (rdx_1 != 0xffffffff)
    char rax_1 = sub_141491a80(arg3, rdx_1, result_5, r9)
    char rax_2
    
    if (rax_1 == 0)
        void* result_4 = *(result_1 + 0x68)
        void* result_3 = result_1
        
        if (result_4 != 0)
            result_3 = result_4
        
        rax_2 = sub_141491a80(arg1, zx.q(*(result_3 + rsi + 4)))
    
    if (rax_1 != 0 || rax_2 != 0)
        r9 = 1
    else
        r9 = 0

void* result = *(result_1 + 0x68)

if (result != 0)
    result_1 = result

if (*(result_1 + rsi + 0x10) == 0 && r9 == 0)
    result.b = 0
    return result

result.b = 1
return result
