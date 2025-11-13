// 函数: sub_142645c20
// 地址: 0x142645c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14266cbf0(arg2)
int32_t rbx = 0
uint64_t var_18 = 0
int32_t var_10 = 0
sub_141dc5a60(arg2, &var_18, 1)

if (var_10 s> 0)
    int64_t rdi_1 = 0
    
    do
        sub_14266cbf0(*(rdi_1 + var_18))
        rbx += 1
        rdi_1 += 8
    while (rbx s< var_10)

int64_t result = sub_14266bf60(arg2, 1)
uint64_t rcx_5 = var_18

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
