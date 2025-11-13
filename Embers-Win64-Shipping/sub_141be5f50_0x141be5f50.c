// 函数: sub_141be5f50
// 地址: 0x141be5f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = nullptr
int64_t rsi

if (arg2.d s< 0 || arg2.d s>= *(arg1 + 0x2f0))
    rsi = 0
else
    arg2 = sx.q(arg2.d)
    rsi = *(*(arg1 + 0x2e8) + (arg2 << 3))

void* result = (*(*(arg1 + 0x218) + 0x48))(arg1 + 0x218, arg2)
void* result_1 = result

if (result != 0)
    int64_t arg_8 = rsi
    int64_t rax_3 = sub_141bca720(result, &arg_8)
    int64_t r8_1
    result, r8_1 = sub_1419e1590(result_1 + 0x630, 0)
    
    if (*(result_1 + 0x490) != 0)
        int64_t* rcx_3 = *(result_1 + 0x488)
        
        if (rcx_3 != 0)
            int64_t rdx_1 = *rcx_3
            result, r8_1 = (*(rdx_1 + 0x28))(rcx_3, rdx_1)
            
            if (result.b != 0)
                if (*(result_1 + 0x490) != 0)
                    rdi = *(result_1 + 0x488)
                
                result, r8_1 = (*(*rdi + 0x48))(rdi)
                *(result_1 + 0x480) = result.d
    
    if (*(result_1 + 0x480) != 0)
        r8_1.b = 1
        (*(*(result_1 + 0x4f8) + 0x28))(result_1 + 0x4f8, rax_3, r8_1, 0)
        return (*(*(result_1 + 0x4f8) + 0x40))(result_1 + 0x4f8, 3)

return result
