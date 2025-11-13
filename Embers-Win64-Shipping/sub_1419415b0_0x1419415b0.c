// 函数: sub_1419415b0
// 地址: 0x1419415b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi_1 = arg1[8].d & 7
int32_t rdi = 0
int64_t rax_1 = (*(*arg1 + 0x20))()
int64_t rdx = *arg1

if (rax_1 == 0)
    int64_t rax_3 = (*(rdx + 8))(arg1, rdx)
    int64_t rdx_1 = *arg1
    
    if (rax_3 == 0)
        int64_t rax_4 = (*(rdx_1 + 0x18))(arg1, rdx_1)
        int64_t rdx_2 = *arg1
        
        if (rax_4 == 0)
            if ((*(rdx_2 + 0x10))(arg1, rdx_2) != 0)
                rdi = *((*(*arg1 + 0x10))(arg1) + 0x98) & 0x3fffffff
        else
            rdi = *((*(rdx_2 + 0x18))(arg1, rdx_2) + 0x98) & 0x3fffffff
    else
        rdi = *((*(rdx_1 + 8))(arg1, rdx_1) + 0x98) & 0x3fffffff
else
    rdi = *((*(rdx + 0x20))(arg1, rdx) + 0x98) & 0x3fffffff

uint32_t rdi_3 = (rdi + 0x3ff) u>> 0xa

if (rsi_1 == 0)
    int32_t rax_10 = data_143f0f1f8 - rdi_3
    data_143f0f1f8 = rax_10
    return rax_10

int32_t rax_8 = data_143f0f1fc - rdi_3
data_143f0f1fc = rax_8
return rax_8
