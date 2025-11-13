// 函数: sub_142bf6b80
// 地址: 0x142bf6b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0xa0)
void* result

if (rcx[4] != 0)
    result = sub_142bfafa0(sub_142bf6ac0, arg1, arg2)
else
    int32_t* rax = sub_142c099b0(*rcx, rcx[1].d, 1, arg1, arg2)
    result = sub_142bfae70(rax, *(arg1 + 4))
    sub_142c09b70(rax)

sub_142bfb180(result, *(arg1 + 4))
sub_142bfb190(result, zx.d(*(arg1 + 0x68)))
return result
