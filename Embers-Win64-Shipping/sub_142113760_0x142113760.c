// 函数: sub_142113760
// 地址: 0x142113760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140ce3290(arg1)

if (arg1[5] == 0)
    void* rax = sub_1425312f0()
    void* rdx_1 = arg1[4]
    void* r8_1 = *(rdx_1 + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s<= *(r8_1 + 0x38))
        uint64_t result_1 = result
        result = *(r8_1 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax + 0x30)
            arg1[5] = rdx_1

if (arg1[6] == 0)
    void* rax_1 = sub_142541ef0()
    void* rdx_2 = arg1[4]
    void* r8_2 = *(rdx_2 + 0x10)
    result = sx.q(*(rax_1 + 0x38))
    
    if (result.d s<= *(r8_2 + 0x38))
        uint64_t result_2 = result
        result = *(r8_2 + 0x30)
        
        if (*(result + (result_2 << 3)) == rax_1 + 0x30)
            arg1[6] = rdx_2

return result
