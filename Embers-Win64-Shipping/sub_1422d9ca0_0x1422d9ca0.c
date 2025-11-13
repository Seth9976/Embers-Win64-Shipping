// 函数: sub_1422d9ca0
// 地址: 0x1422d9ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1].b = arg2[1].b
*(arg1 + 5) = *(arg2 + 5)
*(arg1 + 8) = 0
int32_t i_1 = arg2[4]
int64_t* rbx = *(arg2 + 8)
arg1[4] = i_1

if (i_1 != 0)
    sub_1405a4be0(&arg1[2], i_1, 0)
    int64_t* rcx_1 = *(arg1 + 8)
    int32_t i
    
    do
        *rcx_1 = *rbx
        void* rax_4 = rbx[1]
        rcx_1[1] = rax_4
        
        if (rax_4 != 0)
            *(rax_4 + 8) += 1
        
        rcx_1 = &rcx_1[2]
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    arg1[5] = 0

arg1[6].b = arg2[6].b
return arg1
