// 函数: sub_1406c9ca0
// 地址: 0x1406c9ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
*arg1 = 0
void* rdi = *arg2
int32_t i_1 = ((arg2[1] - rdi) s>> 4).d
arg1[1].d = i_1

if (i_1 != 0)
    sub_1405a4be0(arg1, i_1, 0)
    int64_t* rbx_1 = *arg1
    int32_t i
    
    do
        int64_t* arg_10 = rbx_1
        *rbx_1 = 0
        int32_t rsi_1 = *(rdi + 8)
        int64_t r15_1 = *rdi
        rbx_1[1].d = rsi_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(rbx_1, rsi_1, 0)
            memcpy(*rbx_1, r15_1, rsi_1 * 2)
        else
            *(rbx_1 + 0xc) = 0
        
        rbx_1 = &rbx_1[2]
        rdi += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    *(arg1 + 0xc) = 0

return arg1
