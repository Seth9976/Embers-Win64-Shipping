// 函数: sub_141cc4270
// 地址: 0x141cc4270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = 0
__builtin_memset(arg1, 0, 0x20)
int64_t* result = arg1
int64_t rdi = sx.q(arg2[1].d)

if (rdi.d != 0)
    int32_t rdx = rdi.d
    
    if (rdx s> 0)
        sub_1405c5570(arg1, rdx)
        rax = result[1].d
    
    memcpy(*result + (sx.q(rax) << 3), *arg2, (rdi << 3).d)
    result[1].d += rdi.d

sub_141cc23c0(result)
return result
