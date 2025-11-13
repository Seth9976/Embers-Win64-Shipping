// 函数: sub_140631660
// 地址: 0x140631660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0 && arg3 != 0)
    void* rax_1 = sub_141c06220()
    void* rdx = arg1[2]
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        int32_t rdi = sub_141bab5e0(arg1) - 1
        
        if (rdi s<= 0)
            rdi = 0
        
        if (arg2 s< 0)
            rdi = 0
        else if (arg2 s< rdi)
            rdi = arg2
        
        if (sub_141bab520(arg1, arg3) == rdi)
            return nullptr
        
        void* result = sub_141b8f9a0(arg1, arg3)
        int32_t r14_1 = rdi
        
        if (rdi s< sub_141bab5e0(arg1))
            int32_t rax_8
            
            do
                int64_t* rax_7 = sub_141bab4f0(arg1, rdi)
                
                if (rax_7 == arg3)
                    break
                
                sub_141bdb2d0(arg1, rax_7)
                sub_141b8f9a0(arg1, rax_7)
                r14_1 += 1
                rax_8 = sub_141bab5e0(arg1)
            while (r14_1 s< rax_8)
        
        return result

return 0
