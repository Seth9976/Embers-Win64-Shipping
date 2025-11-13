// 函数: sub_140bdf100
// 地址: 0x140bdf100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg1

if (arg1 == 0)
    goto label_140bdf131

while (true)
    void* rax_1 = sub_140be01c0()
    void* rdx_1 = *(result + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        return result
    
label_140bdf131:
    result = *(result + 0x20)
    
    if (result == 0)
        return 0
