// 函数: sub_141e5ebb0
// 地址: 0x141e5ebb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdx = zx.d(arg1.b)

if (arg1.b == 0)
    int64_t* rax_3 = sub_141e7d9a0()
    
    if (rax_3 != 0)
        jump(*(*rax_3 + 0x30))
else
    int64_t* rax_2
    
    if (rdx == 1)
        rax_2 = sub_141e7d780()
    label_141e5ebee:
        
        if (rax_2 != 0)
            jump(*(*rax_2 + 0x28))
    else
        if (rdx == 2)
            rax_2 = sub_141e7d560()
            goto label_141e5ebee
        
        if (rdx == 3)
            int64_t* rax_1 = sub_141e7d2b0(arg1)
            
            if (rax_1 != 0)
                jump(*(*rax_1 + 0x18))

return 0
