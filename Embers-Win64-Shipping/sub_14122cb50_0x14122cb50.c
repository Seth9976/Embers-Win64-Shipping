// 函数: sub_14122cb50
// 地址: 0x14122cb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result_1 = arg1 + 0x10
void* result_5 = *(result_1 + 0x78)
char r9 = 0
int64_t rdx = sx.q(arg2) * 3
void* result_2 = result_1

if (result_5 != 0)
    result_2 = result_5

int64_t rsi = rdx << 3
int32_t rdx_1 = *(result_2 + (rdx << 3))

if (rdx_1 != 0xffffffff)
    char rax_1 = sub_14122cb50(arg3, rdx_1, result_5, r9)
    char rax_2
    
    if (rax_1 == 0)
        void* result_4 = *(result_1 + 0x78)
        void* result_3 = result_1
        
        if (result_4 != 0)
            result_3 = result_4
        
        rax_2 = sub_14122cb50(arg1, zx.q(*(result_3 + rsi + 4)))
    
    if (rax_1 != 0 || rax_2 != 0)
        r9 = 1
    else
        r9 = 0

void* result = *(result_1 + 0x78)

if (result != 0)
    result_1 = result

if (*(result_1 + rsi + 0x14) == 0 && r9 == 0)
    result.b = 0
    return result

result.b = 1
return result
