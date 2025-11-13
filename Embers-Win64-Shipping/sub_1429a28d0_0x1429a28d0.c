// 函数: sub_1429a28d0
// 地址: 0x1429a28d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = ((*(arg1 + 0x10) - *(arg1 + 8)) s>> 5).d
int64_t rbp = sx.q(result)

if (result s> 0)
    int64_t rbx_1 = 0
    int64_t i
    
    do
        int32_t rsi_1 = *(rbx_1 + *(arg1 + 8) + 0x10)
        char arg_9 = (rsi_1 s>> 8).b
        char arg_a = (rsi_1 s>> 0x10).b
        char arg_b = (rsi_1 s>> 0x18).b
        int64_t rax_9 = *arg2
        char arg_8 = rsi_1.b
        (*(rax_9 + 8))(arg2, &arg_8, 4)
        void** rdx_2 = *(arg1 + 8) + rbx_1
        
        if (rdx_2[3] u>= 0x10)
            rdx_2 = *rdx_2
        
        result = (*(*arg2 + 8))(arg2, rdx_2, zx.q(rsi_1))
        rbx_1 += 0x20
        i = rbp
        rbp -= 1
    while (i != 1)

return result
