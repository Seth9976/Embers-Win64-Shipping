// 函数: sub_142368cd0
// 地址: 0x142368cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_2 = *(arg1 + 0x50)

if (rax_2 != 0)
    int32_t r9_1 = rax_2[1].d
    
    if (r9_1 != 0)
        int64_t rcx = *rax_2
        
        if (rcx != 0)
            if (arg2 == 0)
                rax_2.b = 1
                return rax_2
            
            if (arg3 == 0xffffffff)
                int32_t rax = *(arg1 + 0x60)
                arg3 = r9_1 - 1
                
                if (rax s< 0)
                    arg3 = 0
                else if (rax s< arg3)
                    arg3 = rax
            
            int64_t rax_1
            rax_1.b = *(*(rcx + (sx.q(arg3) << 3)) + 0xec) u> 0
            return rax_1

rax_2.b = 0
return rax_2
