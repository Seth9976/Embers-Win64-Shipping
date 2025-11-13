// 函数: sub_142be78c0
// 地址: 0x142be78c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0xa0)
int32_t arg_8
int32_t result = (*(arg1 + 0x2a0))(arg2, 0x706f7374, rdi, &arg_8)

if (result == 0)
    int32_t rax = sub_1408e52d0(rdi)
    int32_t rsi_1 = *(arg1 + 0x270)
    int32_t rbp_2 = rax + arg_8
    result = sub_142b970b0(rdi, 0x20)
    
    if (result == 0)
        if (rsi_1 == 0x20000)
            result = sub_142be7490(arg1, rdi, rbp_2)
        else if (rsi_1 != 0x25000)
            result = 3
        else
            result = sub_142be77b0(arg1, rdi, rbp_2)
        
        *(arg1 + 0x350) = 1

return result
