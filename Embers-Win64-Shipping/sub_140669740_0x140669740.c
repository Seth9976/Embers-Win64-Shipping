// 函数: sub_140669740
// 地址: 0x140669740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0
arg1[2] = 0
*arg1 = &data_142d84d00
int32_t i_1 = arg2[1].d
int64_t* rbx = *arg2
arg1[3].d = i_1

if (i_1 != 0)
    sub_14061cb30(&arg1[2], i_1, 0)
    int64_t* rcx_1 = arg1[2]
    int32_t i
    
    do
        *rcx_1 = *rbx
        void* rax_2 = rbx[1]
        rcx_1[1] = rax_2
        
        if (rax_2 != 0)
            *(rax_2 + 8) += 1
        
        rcx_1 = &rcx_1[2]
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    *(arg1 + 0x1c) = 0

arg1[1].d = 5
return arg1
