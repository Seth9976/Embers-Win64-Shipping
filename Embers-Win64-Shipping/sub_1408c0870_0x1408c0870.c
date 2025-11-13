// 函数: sub_1408c0870
// 地址: 0x1408c0870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x2b0)

if (rdx == 0)
    return zx.q(arg6)

void*** rcx = data_143ceb928

if (rcx == 0)
    void*** rax_1 = j_sub_140a82f30(0x30)
    
    if (rax_1 == 0)
        rcx = nullptr
    else
        rcx = sub_1408b9380(rax_1)
    
    data_143ceb928 = rcx
    rdx = *(arg1 + 0x2b0)

sub_1408c0ed0(rcx, rdx, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
return zx.q(arg6)
