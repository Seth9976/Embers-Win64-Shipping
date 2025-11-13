// 函数: sub_1408bb670
// 地址: 0x1408bb670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e040e8
void*** rax = data_143ceb928

if (rax == 0)
    rax = j_sub_140a82f30(zx.q((&rax[6]).d))
    
    if (rax != 0)
        rax = sub_1408b9380(rax)
    
    data_143ceb928 = rax

sub_1408bc4b0(rax, arg1)
*arg1 = &data_142e040e0
sub_140691a20(&arg1[0x3c])
int64_t rcx_4 = arg1[0x31]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0x2f]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_1408ba670(&arg1[0x18])

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
