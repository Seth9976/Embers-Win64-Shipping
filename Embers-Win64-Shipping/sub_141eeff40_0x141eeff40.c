// 函数: sub_141eeff40
// 地址: 0x141eeff40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_141f21940(arg1)
void* rdi = arg1[0x26]

if (rdi != 0)
    void* rax = sub_1424890f0()
    void* rdx_1 = *(rdi + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s<= *(rdx_1 + 0x38))
        uint64_t result_1 = result
        result = *(rdx_1 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax + 0x30)
            arg1[0x29] = rdi
            return result

arg1[0x29] = 0
return result
