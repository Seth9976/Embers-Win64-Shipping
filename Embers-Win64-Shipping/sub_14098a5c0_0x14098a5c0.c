// 函数: sub_14098a5c0
// 地址: 0x14098a5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg4[1].d
*arg2 = 0
int64_t* rcx

if (rax == 0)
    rcx = nullptr
else
    rcx = *arg4

if (rcx != 0)
label_14098a5fc:
    (*(*rcx + 0x38))(rcx, 0)
    int64_t rcx_1 = *arg4
    
    if (rcx_1 != 0)
        *arg4 = sub_140a84c80(rcx_1, 0, 0)
    
    arg4[1].d = 0
else if (rax != 0)
    rcx = *arg4
    
    if (rcx != 0)
        goto label_14098a5fc

int64_t rcx_2 = *arg4

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

return arg2
