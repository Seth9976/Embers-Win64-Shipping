// 函数: sub_1429a23b0
// 地址: 0x1429a23b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 8)
char arg_8 = rdx.b
uint8_t arg_9 = (rdx u>> 8).b
uint8_t arg_a = (rdx u>> 0x10).b
uint8_t arg_b = (rdx u>> 0x18).b
(*(*arg2 + 8))(arg2, &arg_8, 4)
int32_t rcx_1 = *(arg1 + 0xc)
arg_8 = rcx_1.b
arg_9 = (rcx_1 u>> 8).b
arg_a = (rcx_1 u>> 0x10).b
arg_b = (rcx_1 u>> 0x18).b
(*(*arg2 + 8))(arg2, &arg_8, 4)
int32_t result = *(arg1 + 0xc) * *(arg1 + 8)
int64_t rsi = sx.q(result)

if (result s> 0)
    void* rdi_1 = *(arg1 + 0x10) + 2
    int64_t i
    
    do
        arg_8 = *(rdi_1 - 2)
        (*(*arg2 + 8))(arg2, &arg_8, 1)
        arg_8 = *(rdi_1 - 1)
        (*(*arg2 + 8))(arg2, &arg_8, 1)
        arg_8 = *rdi_1
        (*(*arg2 + 8))(arg2, &arg_8, 1)
        arg_8 = *(rdi_1 + 1)
        result = (*(*arg2 + 8))(arg2, &arg_8, 1)
        rdi_1 += 4
        i = rsi
        rsi -= 1
    while (i != 1)

return result
