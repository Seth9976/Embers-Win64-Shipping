// 函数: sub_142bcf7e0
// 地址: 0x142bcf7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = arg1 + arg2
uint32_t rcx = zx.d(arg3)
uint64_t result_1 = arg2

if (arg1 u< result)
    result = zx.q(result.d - arg1.d)
    
    if (arg2 u> result)
        result_1 = result
    
    int32_t r8 = 0
    
    if (result_1 != 0)
        char* r11_1 = nullptr
        
        do
            uint32_t rax = zx.d(r11_1[arg1])
            r8 += 1
            r11_1[arg1] = (rcx u>> 8).b ^ rax.b
            r11_1 = zx.q(r8)
            result = zx.q(0x58bf - (rax + rcx) * 0x3193)
            rcx = zx.d(result.w)
        while (r11_1 u< result_1)

return result
