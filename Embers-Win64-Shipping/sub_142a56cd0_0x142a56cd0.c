// 函数: sub_142a56cd0
// 地址: 0x142a56cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = arg1[3].d

if (rcx != 0)
    *(arg1 + 0xc) -= 4
    arg1[3].d = 0
    int32_t rax = arg1[2].d
    
    if (rax s> 0)
        arg1[2].d = rax - 1
    
    return zx.q((rcx s>> 0xa).w - 0x2840)

int32_t rax_3 = *(arg1 + 0xc)

if (rax_3 s<= 0)
    return 0xffffffff

int64_t rcx_2 = *arg1
*(arg1 + 0xc) = rax_3 - 1
uint32_t rdx = zx.d(*(sx.q(rax_3 - 1) + rcx_2))

if (rdx.b s< 0)
    rdx = sub_142a9be90(rcx_2, 0, arg1 + 0xc, rdx, 0xfd)

int32_t rax_7 = arg1[2].d

if (rax_7 s<= 0)
    int32_t rax_8 = *(arg1 + 0xc)
    
    if (rax_8 s<= 1)
        if (rdx s> 0xffff)
            rax_8 += 1
        
        arg1[2].d = rax_8
else
    arg1[2].d = rax_7 - 1

if (rdx s> 0xffff)
    *(arg1 + 0xc) += 4
    arg1[3].d = rdx
    rdx = (rdx & 0x3ff) | 0xdc00

return zx.q(rdx)
