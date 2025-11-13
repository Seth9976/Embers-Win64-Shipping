// 函数: sub_140915320
// 地址: 0x140915320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg3 != 0 && arg2 != 0)
    void* rax = sub_142452380()
    void* rdx = *(arg2 + 0x10)
    int64_t rax_1 = sx.q(*(rax + 0x38))
    
    if (rax_1.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_1 << 3)) != rax + 0x30)
        void* rax_3 = sub_142459c10()
        void* rdx_1 = *(arg2 + 0x10)
        result = sx.q(*(rax_3 + 0x38))
        
        if (result.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (result << 3)) == rax_3 + 0x30)
            void* rcx_4 = *(arg2 + 0xa0)
            
            if (rcx_4 == 0)
                return zx.q(rcx_4.b)
            
            return sub_141dc9840(rcx_4) == sub_141dc9840(arg3)
    else
        int64_t rax_2
        
        if (arg2 != arg3)
            rax_2 = sub_141dc9840(arg2)
            result = sub_141dc9840(arg3)
        
        if (arg2 == arg3 || rax_2 == result)
            result.b = 1
            return result

result.b = 0
return result
