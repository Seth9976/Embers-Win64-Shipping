// 函数: sub_142c8cdb0
// 地址: 0x142c8cdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rsi = 0
int32_t rbp = 0

if (arg2 == 0)
    return 0

int64_t* rax_1 = sub_14289a060(arg1)
void* r14 = *rax_1
sub_142899cc0(arg1, 0xf)
int32_t rax_2 = sub_142852050(r14, arg2, arg3, arg4)

switch (sub_14284fa70(r14, rax_2))
    case 0
        uint64_t rcx_4 = zx.q(*(rax_1 + 0xc))
        
        if (rcx_4.d != 0)
            rax_1[2] += *arg4
            
            if (rax_1[2] u> rcx_4)
                rax_1[1].d += 1
                rax_1[2] = 0
                sub_1428503e0(r14)
                rbp = 1
        
        if (rax_1[3].d u> 0 && rbp == 0)
            int32_t rax_5 = _time64(nullptr)
            int32_t rdx_5 = *(rax_1 + 0x1c) + rax_1[3].d
            
            if (rax_5 u> rdx_5)
                rax_1[1].d += 1
                *(rax_1 + 0x1c) = rax_5
                sub_1428503e0(r14, rdx_5)
    case 2
        sub_14289a9a0(arg1, 9)
    case 3
        sub_14289a9a0(arg1, 0xa)
    case 4
        sub_14289a9a0(arg1, 0xc)
        rsi = 1
    case 7
        sub_14289a9a0(arg1, 0xc)
        rsi = 2
    case 8
        sub_14289a9a0(arg1, 0xc)
        rsi = 3

sub_14289a9d0(arg1, rsi)
return zx.q(rax_2)
