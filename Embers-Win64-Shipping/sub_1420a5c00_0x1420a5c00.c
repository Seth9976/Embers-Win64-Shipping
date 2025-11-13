// 函数: sub_1420a5c00
// 地址: 0x1420a5c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2

if (arg2 != data_143f475b0)
    if (sub_1409d7d20(&arg1[0x4c], &arg_10) == 0)
        int64_t rdi_1 = sx.q(arg1[0x4d].d)
        int32_t rax_2 = (rdi_1 + 1).d
        arg1[0x4d].d = rax_2
        
        if (rax_2 s> *(arg1 + 0x26c))
            sub_1405a4d70(&arg1[0x4c])
        
        *(arg1[0x4c] + (rdi_1 << 3)) = arg_10
else
    int32_t rax = *(arg1 + 0x26c)
    arg1[0x4d].d = 0
    
    if (rax s< 0 && rax != 0)
        sub_140638c50(&arg1[0x4c], 0)

return sub_140ce6d40(arg1, 0x4000, nullptr, data_143ddb400) __tailcall
