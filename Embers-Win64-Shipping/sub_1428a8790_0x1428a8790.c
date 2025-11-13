// 函数: sub_1428a8790
// 地址: 0x1428a8790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
arg1[0xd].d = 0
void arg_8
void* rax = sub_1428a8dc0(arg1, arg2, &arg_8)
int64_t* rcx = *rax

if (rcx == 0)
    arg1[0xb].d += 1
    return 0

*rax = rcx[1]
int64_t result = *rcx
sub_1428a6780(rcx)
int32_t rax_3 = arg1[6].d
*(arg1 + 0x54) += 1
int32_t rcx_1 = arg1[3].d
arg1[6].d = rax_3 - 1

if (rcx_1 u> 0x10 && *(arg1 + 0x2c) u>= divu.dp.d(0:((rax_3 - 1) << 8), rcx_1))
    uint64_t rcx_3 = zx.q(arg1[4].d + *(arg1 + 0x24) - 1)
    int64_t rax_9 = *arg1
    int64_t rdi_1 = *(rax_9 + (rcx_3 << 3))
    *(rax_9 + (rcx_3 << 3)) = 0
    int32_t rax_10 = arg1[4].d
    int64_t rcx_4 = *arg1
    
    if (rax_10 == 0)
        int64_t rax_11 =
            sub_1428a67c0(rcx_4, zx.q(*(arg1 + 0x24) << 3), "crypto\lhash\lhash.c", 0x10c)
        rcx_4 = rax_11
        
        if (rax_11 == 0)
            arg1[0xd].d += 1
            return result
        
        arg1[8].d += 1
        *(arg1 + 0x1c) u>>= 1
        *(arg1 + 0x24) u>>= 1
        rax_10 = *(arg1 + 0x24)
        *arg1 = rcx_4
    
    arg1[4].d = rax_10 - 1
    arg1[3].d -= 1
    *(arg1 + 0x3c) += 1
    int64_t rax_14 = sx.q(rax_10 - 1)
    void* i_1 = *(rcx_4 + (rax_14 << 3))
    
    if (i_1 == 0)
        *(rcx_4 + (rax_14 << 3)) = rdi_1
        return result
    
    for (void* i = *(i_1 + 8); i != 0; i = *(i + 8))
        i_1 = i
    
    *(i_1 + 8) = rdi_1

return result
