// 函数: sub_14242d240
// 地址: 0x14242d240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = zx.d(*(arg1 + 0x11a))

if (result.b u<= 6 && test_bit(0x6a, zx.d(result.b)) && *(arg1 + 0x568) != 1)
    int64_t rsi
    
    if (data_143a2d8d8 == 0 || data_143f5e930 s<= 0)
        rsi.b = 0
    else
        rsi.b = 1
    
    void* rdx_1 = arg1
    void* rax = sub_1423de4b0(data_143f5b298, rdx_1)
    int64_t rdi
    
    if (rax == 0 || *(rax + 0x210) == 0)
        rdi.b = 0
    else
        rdx_1 = arg1
        void* rax_1 = sub_1423de4b0(data_143f5b298, rdx_1)
        
        if (rax_1 != 0)
            rax_1 = *(rax_1 + 0x210)
        
        if ((*(rax_1 + 0x6c) & 4) != 0)
            rdi.b = 0
        else
            arg2.o = 0x3f800000
            
            if (1f f>= *(arg1 + 0x520))
                rdi.b = 0
            else
                rdi.b = 1
    
    if (data_14399fa10(arg2, rdx_1).b == 0 || rdi.b == 0)
        result.b = 0
    else
        result.b = 1
    
    if (rsi.b != 0 || *(arg1 + 0x568) == 2 || (result.b != 0 && data_143a2d8e0 == 0))
        result.b = 0
        return result
    
    if (rdi.b != 0)
        int32_t rcx_2 = data_143f3bc44
        
        if (rcx_2 s> 0 && zx.d(*(arg1 + 0x56a)) s>= rcx_2)
            result.b = 0
            return result

result.b = 1
return result
