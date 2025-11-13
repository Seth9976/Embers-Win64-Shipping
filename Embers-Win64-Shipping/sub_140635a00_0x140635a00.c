// 函数: sub_140635a00
// 地址: 0x140635a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (arg1 != 0)
    void* rax = sub_1424890f0()
    void* rcx = *(arg1 + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s<= *(rcx + 0x38) && *(*(rcx + 0x30) + (result << 3)) == rax + 0x30)
        int64_t* rcx_1 = *(arg1 + 0x280)
        
        if (rcx_1 != 0)
            jump(*(*rcx_1 + 0x3f0))

result.b = 0
return result
