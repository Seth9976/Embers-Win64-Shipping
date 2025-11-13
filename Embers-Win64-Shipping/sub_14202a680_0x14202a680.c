// 函数: sub_14202a680
// 地址: 0x14202a680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_1423de540(data_143f5b298, arg1, 1)

if (rax != 0)
    int32_t rbx_1 = 0
    int64_t* var_18
    sub_1424373a0(rax, &var_18)
    int32_t i_1
    int32_t i = i_1
    
    while (i s>= 0)
        int64_t* rdx_2 = var_18
        
        if (i s>= rdx_2[1].d)
            break
        
        int64_t result = sub_140d3c6e0(*rdx_2 + (sx.q(i) << 3))
        
        if (rbx_1 == arg2)
            return result
        
        rbx_1 += 1
        i = i_1 + 1
        i_1 = i

return 0
