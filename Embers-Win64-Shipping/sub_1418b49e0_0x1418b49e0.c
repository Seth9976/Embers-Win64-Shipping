// 函数: sub_1418b49e0
// 地址: 0x1418b49e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x20)
uint64_t rdi
rdi.b = 0

for (void* rsi_2 = &i[sx.q(*(arg1 + 0x28)) * 2]; i != rsi_2; i = &i[2])
    int64_t* rcx = *i
    
    if (rcx != 0)
        rdi = zx.q(rdi.b)
        
        if ((*(*rcx + 0x50))(rcx) == arg2)
            rdi = 1

return zx.q(rdi.b)
