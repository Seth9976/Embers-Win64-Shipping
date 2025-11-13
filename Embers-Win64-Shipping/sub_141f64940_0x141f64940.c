// 函数: sub_141f64940
// 地址: 0x141f64940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_4 = *(arg1 + 0x5b0)
void* rax

if (rax_4 == 0)
    void* rax_1 = *(arg1 + 0x430)
    
    if (rax_1 != 0)
        rax = *(rax_1 + 0x58)
        goto label_141f64962
else
    rax = *(rax_4 + 0x40)
label_141f64962:
    
    if (rax != 0)
        return zx.q(*(rax + 8))
return 0
