// 函数: sub_1428b2db0
// 地址: 0x1428b2db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t r12 = arg4
int64_t* rdi = arg3
int128_t* rsi = arg2

if (arg4 u>= 0x40000000)
    uint64_t i_1 = arg4 u>> 0x1e
    r12 -= i_1 * 0x40000000
    uint64_t i
    
    do
        int32_t rax_2 = sub_142890eb0(arg1)
        int128_t* rax_3 = sub_1406219d0(arg1)
        int64_t rax_4 = sub_142890ec0(arg1)
        
        if (rax_2 == 0)
            sub_1428d0210(rdi, rsi, 0x40000000, rax_4, rax_3, sub_142900fa0)
        else
            sub_1428d04c0(rdi, rsi, 0x40000000, rax_4, rax_3, sub_142900fa0)
        
        rdi = &rdi[0x8000000]
        rsi = &rsi[0x4000000]
        i = i_1
        i_1 -= 1
    while (i != 1)

if (r12 != 0)
    int32_t rax_5 = sub_142890eb0(arg1)
    int128_t* rax_6 = sub_1406219d0(arg1)
    int64_t rax_7 = sub_142890ec0(arg1)
    int64_t r8 = sx.q(r12.d)
    
    if (rax_5 == 0)
        sub_1428d0210(rdi, rsi, r8, rax_7, rax_6, sub_142900fa0)
    else
        sub_1428d04c0(rdi, rsi, r8, rax_7, rax_6, sub_142900fa0)

return 1
