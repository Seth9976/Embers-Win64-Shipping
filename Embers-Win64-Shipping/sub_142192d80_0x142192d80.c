// 函数: sub_142192d80
// 地址: 0x142192d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8

if (arg2 s< 0 || arg2 s>= *(arg1 + 0x418))
    r8 = sx.q(arg2)
else
    r8 = sx.q(arg2)
    int64_t result = *(*(arg1 + 0x410) + (r8 << 3))
    
    if (result != 0)
        return result

void* rax_2 = *(arg1 + 0x408)

if (rax_2 != 0 && arg2 s>= 0 && arg2 s< *(rax_2 + 0x48))
    void* rax_4 = *(*(rax_2 + 0x40) + (r8 << 3))
    
    if (rax_4 != 0 && *(rax_4 + 0x48) s> 0)
        void* rax_6 = **(rax_4 + 0x40)
        
        if (rax_6 != 0)
            void* rax_7 = *(rax_6 + 0x30)
            
            if (rax_7 != 0)
                return *(rax_7 + 0x30)

return 0
