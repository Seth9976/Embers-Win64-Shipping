// 函数: sub_1423f4d60
// 地址: 0x1423f4d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *(arg1 + 0xa50)

if (rdx == 0)
    return 

int64_t rbx

if (*(arg1 + 0xa70) == 0)
    int32_t rcx = *data_143f5b408
    
    if (rcx == 2 || (rcx == 1 && *(arg1 + 0xa71) != 0))
        rbx.b = 1
    else
        rbx.b = 0
else
    rbx.b = 0

if (rbx.b != (*(*rdx + 0x38))(rdx))
    int64_t* rcx_2 = *(arg1 + 0xa50)
    (*(*rcx_2 + 0x30))(rcx_2, zx.q(rbx.b))
