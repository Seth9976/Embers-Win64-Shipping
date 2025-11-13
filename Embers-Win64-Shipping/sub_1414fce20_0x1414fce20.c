// 函数: sub_1414fce20
// 地址: 0x1414fce20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fbb5b0
int64_t* rcx = arg1[0x11]
int32_t i_1 = arg1[0x12].d

if (i_1 != 0)
    int32_t i
    
    do
        void* rax_1 = *rcx
        
        if (rax_1 != 0)
            *(rax_1 + 0x1bc) -= 1
        
        rcx = &rcx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = arg1[0x11]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0xf]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

*arg1 = &data_142fbb3b8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
