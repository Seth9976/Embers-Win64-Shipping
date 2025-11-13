// 函数: sub_142258560
// 地址: 0x142258560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 8)

if (rax == 0)
    int64_t* rax_1 = sub_142565030()
    rax = rax_1[0x23]
    
    if (rax == 0)
        (*(*rax_1 + 0x390))(rax_1)
        rax = rax_1[0x23]
    
    *(arg1 + 8) = rax

return zx.q(*(rax + 0x132))
