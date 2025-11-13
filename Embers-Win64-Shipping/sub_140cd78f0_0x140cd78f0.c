// 函数: sub_140cd78f0
// 地址: 0x140cd78f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_1 = zx.q(arg2)
int64_t* rcx = arg1[1]
int32_t r14 = rcx[1].d
int32_t r8 = arg1[2].d
int32_t rax_1 = r14 + i_1.d
rcx[1].d = rax_1

if ((not.b(*(arg1 + 0x14)) & 1) != 0)
    if (rax_1 s> *(rcx + 0xc))
        sub_140ce4cd0(rcx, zx.q(r14), r8)
else if (rax_1 s> *(rcx + 0xc))
    sub_140ce4c40(rcx, r14, r8)

void** rax_2 = arg1[1]
void* rbx

if (rax_2[1].d != 0)
    void* rcx_2 = *rax_2
    
    if ((not.b(*(arg1 + 0x14)) & 1) == 0 && (rcx_2.b & 1) != 0)
        rcx_2 = (rcx_2 s>> 1) + rax_2
    
    rbx = sx.q(arg1[2].d * r14) + rcx_2
else
    rbx = nullptr

if (test_bit(zx.q(*(*arg1 + 0x40)), 9))
    memset(rbx, 0, sx.q(arg1[2].d * i_1.d))
else if (i_1.d s> 0)
    uint64_t i
    
    do
        int64_t* rcx_5 = *arg1
        
        if (not(test_bit(zx.q(rcx_5[8].d), 9)))
            (*(*rcx_5 + 0xf0))(rcx_5, rbx)
        else
            memset(rbx, 0, sx.q(*(rcx_5 + 0x3c) * rcx_5[7].d))
        
        rbx += sx.q(arg1[2].d)
        i = i_1
        i_1 -= 1
    while (i != 1)

return zx.q(r14)
