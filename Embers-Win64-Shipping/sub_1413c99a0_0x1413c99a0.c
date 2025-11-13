// 函数: sub_1413c99a0
// 地址: 0x1413c99a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 8)
void** rdi = *(arg1 + 0x10)
void* rbx = *(result + 0x3e8)

if (rbx != 0)
    for (int64_t* i = *(*(rbx + 0x110) + 0xe0); i != 0; i = i[5])
        int64_t rsi_1 = sx.q(rdi[1].d)
        int32_t rax_1 = (rsi_1 + 1).d
        int64_t rbp_1 = *(*(*i + 0x20) + 0x10)
        rdi[1].d = rax_1
        
        if (rax_1 s> *(rdi + 0xc))
            sub_1405a4d70(rdi)
        
        result = *rdi
        *(result + (rsi_1 << 3)) = rbp_1

return result
