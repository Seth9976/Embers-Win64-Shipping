// 函数: sub_1428847b0
// 地址: 0x1428847b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rdi = 1
int64_t* rcx = *(arg1 + 0x18)
int64_t* rax = nullptr

if (rcx != 0)
    int32_t rax_1
    rax_1, arg3 = sub_14288d810(rcx, arg2, arg3)
    rdi = rax_1
    rax = *(*(arg1 + 0x18) + 0x130)

void* rcx_1 = *(arg1 + 0x20)

if (rcx_1 != 0)
    rdi = sub_14288e170(rcx_1, arg2, arg3)
    rax = *(*(arg1 + 0x20) + 0x488)

bool cond:0 = rdi s> 0

if (rdi s> 0)
    if (rax != 0 && (*arg1 & 0x40) != 0)
        int64_t rax_4
        int64_t rdx_2
        rdx_2:rax_4 = muls.dp.q(0x6666666666666667, *rax - rax - 0x20)
        int64_t rdx_3 = rdx_2 s>> 4
        int64_t rdx_4 = rdx_3 + (rdx_3 u>> 0x3f)
        sub_1428a6780(*(arg1 + (rdx_4 << 3) + 0x30))
        int64_t rax_7 = sub_1428a6ba0(arg2)
        *(arg1 + (rdx_4 << 3) + 0x30) = rax_7
        
        if (rax_7 == 0)
            rdi = 0
    
    cond:0 = rdi s> 0

int32_t rsi
rsi.b = cond:0
return zx.q(rsi)
