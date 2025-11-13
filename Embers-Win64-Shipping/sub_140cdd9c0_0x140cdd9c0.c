// 函数: sub_140cdd9c0
// 地址: 0x140cdd9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x10)
uint64_t result = zx.q(*(rdi + 0xcc) u>> 0x1c)

if ((result.b & 1) == 0)
    int64_t rsi_1 = sx.q(arg2[1].d)
    int32_t rax_1 = (rsi_1 + 1).d
    arg2[1].d = rax_1
    
    if (rax_1 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    *(*arg2 + (rsi_1 << 3)) = rdi
    result = zx.q(*(arg1 + 8) u>> 4)
    
    if ((result.b & 1) != 0)
        return (*(*rdi + 0x388))(rdi, arg2)
    
    int64_t rsi_2 = rdi[0x23]
    
    if (rsi_2 != 0 && rdi[0xb].d s> 0)
        int64_t rdi_1 = sx.q(arg2[1].d)
        int32_t rax_5 = (rdi_1 + 1).d
        arg2[1].d = rax_5
        
        if (rax_5 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        result = *arg2
        *(result + (rdi_1 << 3)) = rsi_2

return result
