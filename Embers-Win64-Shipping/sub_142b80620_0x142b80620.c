// 函数: sub_142b80620
// 地址: 0x142b80620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 0
void* rax

if (*(arg1 + 0xa0) s> 0)
    rax = arg1 + 0x38
    
    while (*(rax - 4) s<= arg3 + 1)
        int32_t rcx = *rax
        
        if (arg2 s<= rcx)
            int32_t* rax_2 = sx.q(r9) << 4
            
            if (*(rax_2 + arg1 + 0x34) s> arg3)
                *(rax_2 + arg1 + 0x38) = arg2
            
            *(arg1 + 0xa0) = r9 + 1
            
            if (r9 + 1 s> 1)
                int32_t arg_8 = 0
                int32_t* var_18_1 = &arg_8
                sub_142a94ab0(arg1 + 0x2c, r9 + 1, 0x10, sub_142b806d0, 0, nullptr)
            
            rax_2.b = 1
            return rax_2
        
        arg2 -= rcx
        r9 += 1
        rax += 0x10
        
        if (r9 s>= *(arg1 + 0xa0))
            break

rax.b = 0
return rax
