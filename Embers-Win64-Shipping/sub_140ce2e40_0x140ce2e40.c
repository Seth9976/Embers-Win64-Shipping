// 函数: sub_140ce2e40
// 地址: 0x140ce2e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0

if (arg3 == 0)
label_140ce2e80:
    *arg1 = 0
    arg1[1] = 0
else
    int16_t* rax_1 = arg2
    
    while (*rax_1 != 0x3a)
        rbx += 1
        rax_1 = &rax_1[1]
        
        if (rbx u>= arg3)
            goto label_140ce2e80
    
    uint64_t arg_20
    sub_140b580e0(&arg_20, rbx, arg2, 1)
    uint64_t var_18[0x2]
    sub_140b580e0(&var_18, arg3 - rbx - 1, &arg2[1 + zx.q(rbx)], 1)
    *arg1 = arg_20
    arg1[1] = var_18[0]

return arg1
