// 函数: sub_1429a03a0
// 地址: 0x1429a03a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = ((*(arg1 + 0x10) - *(arg1 + 8)) s>> 2).d
int64_t result_1 = sx.q(result)

if (result s> 0)
    int64_t rbx_1 = 0
    
    do
        int32_t zmm0 = *(*(arg1 + 8) + (rbx_1 << 2))
        uint8_t arg_9 = (zmm0 u>> 8).b
        char arg_8 = zmm0.b
        uint8_t arg_b = (zmm0 u>> 0x18).b
        uint8_t arg_a = (zmm0 u>> 0x10).b
        result = (*(*arg2 + 8))(arg2, &arg_8, 4)
        rbx_1 += 1
    while (rbx_1 s< result_1)

return result
