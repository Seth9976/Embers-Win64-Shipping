// 函数: sub_142605ad0
// 地址: 0x142605ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r11 = zx.q(arg5)

if (arg2 == arg4 && arg3 == r11.d)
    return 

void* rbp_1 = *(arg2 + 0x70) + zx.q(arg3) * 0x14
int64_t r9

if (arg4 != 0)
    char r8_1 = (*(arg1 + 0xa0)).b
    int64_t rax_3
    int64_t rdx
    rdx:rax_3 = muls.dp.q(0x2e8ba2e8ba2e8ba3, arg4 - *(arg1 + 0x90))
    int64_t rdx_1 = rdx s>> 5
    r9 = zx.q((rdx_1 u>> 0x3f).d + rdx_1.d) << r8_1 | zx.q(*arg4) << ((*(arg1 + 0x9c)).b + r8_1)
else
    r9 = 0

int64_t rsi_2 = r11 | r9
int32_t rax_4

if (arg7 != 0)
    rax_4 = *(rbp_1 + 0xc)

int64_t* rax

if (arg7 == 0 || rax_4 == 0xffffffff)
label_142605bad:
    int32_t r8_2 = *(arg2 + 0xa8)
    
    if (r8_2 == 0xffffffff)
        int64_t var_10_1 = 0
        int32_t rax_8 = *(arg2 + 0xa0)
        var_10_1.d = r8_2
        *(arg2 + 0xa8) = rax_8
        sub_142616170(arg2 + 0x98, rax_8 + 1)
        *(*(arg2 + 0x98) + sx.q(*(arg2 + 0xa0)) * 0x10 - 0x10) = 0.o
        r8_2 = *(arg2 + 0xa8)
    
    int64_t rcx_9 = *(arg2 + 0x98)
    *(arg2 + 0xa8) = *(rcx_9 + sx.q(r8_2) * 0x10 + 8)
    rax = (sx.q(r8_2) << 4) + rcx_9
    *rax = rsi_2
    rax[1].d = *(rbp_1 + 0xc)
    *(rbp_1 + 0xc) = r8_2 - 0x80000000
else
    while (true)
        rax = ((sx.q(rax_4) - -0x80000000) << 4) + *(arg2 + 0x98)
        
        if (*rax == rsi_2)
            break
        
        rax_4 = rax[1].d
        
        if (rax_4 == 0xffffffff)
            goto label_142605bad

*(rax + 0xc) |= arg6
