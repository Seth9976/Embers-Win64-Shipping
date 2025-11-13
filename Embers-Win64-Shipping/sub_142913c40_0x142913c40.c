// 函数: sub_142913c40
// 地址: 0x142913c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rax = sub_1428a6a70(0x28)

if (rax == 0)
    sub_1428a5670((rax + 0xf).d, (rax + 0x7b).d, (rax + 0x41).d, "crypto\hmac\hm_pmeth.c", 0x20)
    return 0

*(rax + 0xc) = 4
int64_t* rax_2 = sub_1428be080()
*(rax + 0x20) = rax_2

if (rax_2 == 0)
    sub_1428a6780(rax)
    return 0

*(arg1 + 0x28) = rax
*(arg1 + 0x48) = 0
int64_t* rax_4 = sub_142896660(arg2)
int64_t* rax_5 = sub_142896660(arg1)
*rax_5 = *rax_4

if (sub_1428bdee0(rax_5[4], rax_4[4]) != 0)
    int64_t rdx_4 = rax_4[2]
    int32_t rax_7
    
    if (rdx_4 != 0)
        rax_7 = sub_1428e61a0(&rax_5[1], rdx_4, rax_4[1].d)
    
    if (rdx_4 == 0 || rax_7 != 0)
        return 1

void* rax_9 = sub_142896660(arg1)

if (rax_9 != 0)
    sub_1428be000(*(rax_9 + 0x20))
    sub_1428a6890(*(rax_9 + 0x10), sx.q(*(rax_9 + 8)), "crypto\hmac\hm_pmeth.c", 0x50)
    sub_1428a6780(rax_9)
    sub_1428915b0(arg1, 0)

return 0
