// 函数: sub_142c8cc40
// 地址: 0x142c8cc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rsi = 0
int32_t rbp = 0

if (arg2 == 0)
    return 0

int64_t* rax_1 = sub_14289a060(arg1)
void* r14 = *rax_1
sub_142899cc0(arg1, 0xf)
int32_t rax_2 = sub_142852a10(r14, arg2, arg3, arg4)
int32_t rax_3 = sub_14284fa70(r14, rax_2)

if (rax_3 == 0)
    uint64_t rcx_7 = zx.q(*(rax_1 + 0xc))
    
    if (rcx_7.d != 0)
        rax_1[2] += *arg4
        
        if (rax_1[2] u> rcx_7)
            rax_1[1].d += 1
            rax_1[2] = 0
            sub_1428503e0(r14)
            rsi = 1
    
    if (rax_1[3].d u> 0 && rsi == 0)
        int32_t rax_8 = _time64(nullptr)
        
        if (rax_8 u> rax_1[3].d + *(rax_1 + 0x1c))
            rax_1[1].d += 1
            *(rax_1 + 0x1c) = rax_8
            sub_1428503e0(r14)
else if (rax_3 == 2)
    sub_14289a9a0(arg1, 9)
else if (rax_3 == 3)
    sub_14289a9a0(arg1, 0xa)
else if (rax_3 == 4)
    sub_14289a9a0(arg1, 0xc)
    rbp = 1
else if (rax_3 == 7)
    sub_14289a9a0(arg1, rax_3 + 5)
    rbp = 2

sub_14289a9d0(arg1, rbp)
return zx.q(rax_2)
