// 函数: sub_140ed5490
// 地址: 0x140ed5490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg2[1].d
int64_t* r10 = *(arg1 + 0x3a8)
uint64_t r9 = sx.q(*(arg1 + 0x3b0))
int64_t* rcx = r10
void* rdx_2 = &r10[r9 * 2]
int32_t rcx_1

if (r10 == rdx_2)
label_140ed54f0:
    rcx_1 = -1
else
    while ((*(rcx + 0xc) & 3) == 0 || *rcx != *arg2 || (i != 0xffffffff && i != rcx[1].d))
        rcx = &rcx[2]
        
        if (rcx == rdx_2)
            goto label_140ed54f0
    
    rcx_1 = ((rcx - r10) s>> 4).d

int32_t rax_4 = r9.d - rcx_1 - 1

if (rax_4 s>= 1)
    rax_4 = 1

if (rax_4 != 0)
    memcpy(&r10[sx.q(rcx_1) * 2], &r10[sx.q(r9.d - rax_4) * 2], rax_4 << 4)
    r9 = zx.q(*(arg1 + 0x3b0))

*(arg1 + 0x3b0) = (r9 - 1).d
return sub_1405a5010(arg1 + 0x3a8) __tailcall
