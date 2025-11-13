// 函数: sub_140906580
// 地址: 0x140906580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x2c)

if ((rax & 0xfffffffa) != 0 || rax == 5)
    int32_t zmm2 = *(arg1 + 0x28)
    
    if (arg2 f== zmm2)
        rax.b = 1
        return rax
    
    int64_t rdx_1 = *(arg1 + 0x20)
    
    if (rdx_1 != 0)
        if (zmm2 f!= 0f)
            if (not(arg2 f!= 0f))
                *(arg1 + 0x28) = arg2
                *(arg1 + 0x2c) = 2
                int64_t* rcx_1 = *(arg1 + 0x50)
                (**rcx_1)(rcx_1, 7)
                int64_t rax_5
                rax_5.b = 1
                return rax_5
        else if (not(arg2 f== 0f))
            if (rax == 5)
                if (not(arg2 f>= 0f))
                    *(arg1 + 0x30) = rdx_1 - 1
                
                *(arg1 + 0x70) = 1
            
            *(arg1 + 0x28) = arg2
            *(arg1 + 0x2c) = 3
            int64_t* rcx = *(arg1 + 0x50)
            (**rcx)(rcx, 6)
            int64_t rax_3
            rax_3.b = 1
            return rax_3
        
        *(arg1 + 0x28) = arg2
        rax.b = 1
        return rax

rax.b = 0
return rax
