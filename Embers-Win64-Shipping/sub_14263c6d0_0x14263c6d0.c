// 函数: sub_14263c6d0
// 地址: 0x14263c6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_140d3c6e0(&arg1[0xb])
void* result_1 = result

if (result == 0)
    return sub_14263a2c0(arg1)

if ((*(arg1 + 0x3c) & 0x10) != 0 || arg1[8].w != 0 || *(arg1 + 0x42) != 0)
    int64_t rsi_1 = sx.q(*(result + 0xe8))
    int64_t* var_10_1 = arg1
    int32_t rax_3 = (rsi_1 + 1).d
    *(result_1 + 0xe8) = rax_3
    
    if (rax_3 s> *(result_1 + 0xec))
        sub_1405a4f90(result_1 + 0xe0)
    
    result = *(result_1 + 0xe0)
    *(result + rsi_1 * 0x10) = 0.o
    
    if (*(result_1 + 0xe8) == 1 && (*(result_1 + 0xbc) & 1) == 0 && *(result_1 + 0xb8) == 0)
        return sub_14263c400(result_1) __tailcall
else if (*(arg1 + 0x39) != 3)
    int64_t rax = *arg1
    *(arg1 + 0x39) = 3
    result = (*(rax + 0x260))(arg1)
    
    if (*(arg1 + 0x39) != 4)
        jump(*(*(sub_140d3c6e0(&arg1[0xb]) + 0xb0) + 0x38))

return result
