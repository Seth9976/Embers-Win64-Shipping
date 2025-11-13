// 函数: sub_140846e80
// 地址: 0x140846e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140846320(arg1 + 0x2d0)
sub_140846170(arg1 + 0x100)
int64_t rcx_2 = *(arg1 + 0xe8)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

uint64_t result = sub_14081ccd0(arg1 + 0x28)
int64_t rcx_4 = *(arg1 + 0x18)

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int32_t i_1 = *(arg1 + 0x10)
int64_t* rbx = *(arg1 + 8)

if (i_1 != 0)
    int32_t i
    
    do
        result = sub_140745b20(rbx)
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *(arg1 + 8)

if (rbx == 0)
    return result

return sub_140a74f90(rbx)
