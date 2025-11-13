// 函数: sub_140a60c60
// 地址: 0x140a60c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142a71720(arg1)
*arg1 = &data_142e62778
sub_140596d10(&arg1[4], arg2)
arg1[6] = &arg1[4]
int32_t rax = arg1[5].d
int32_t r8 = rax - 1

if (rax == 0)
    r8 = 0

int16_t* const rdx_1

if (rax == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = arg1[4]

sub_142a72230(arg1, rdx_1, r8)
return arg1
