// 函数: sub_141cfc1a0
// 地址: 0x141cfc1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1
int32_t rdx = *(arg1 + 0x24)
int64_t rdi

if (rdx == 0)
    rdi = zx.q(arg1[1].d)
    int32_t rax_1 = (rdi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_14119a680(arg1, rdi.d)
    
    sub_141cfaa70(&rbx[2], 0)
else
    void* r8_1 = *arg1
    rdi = sx.q(arg1[4].d)
    
    if ((r8_1.b & 1) != 0)
        r8_1 = (r8_1 s>> 1) + arg1
    
    int64_t r9_1 = sx.q(*(r8_1 + rdi * 0x50 + 4))
    rbx[4].d = r9_1.d
    *(rbx + 0x24) = rdx - 1
    
    if (rdx != 1)
        void* rdx_1 = *rbx
        
        if ((rdx_1.b & 1) != 0)
            rdx_1 = (rdx_1 s>> 1) + rbx
        
        *(rdx_1 + r9_1 * 0x50) = 0xffffffff

void* r8_4 = rbx[2]

if ((r8_4.b & 1) != 0)
    r8_4 = (r8_4 s>> 1) + &rbx[2]

*arg2 = rdi.d
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rdi.d)
void* r8_5 = r8_4 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_5 |= 1 << (rdi.b & 0x1f)
void* rdx_7 = *rbx

if ((rdx_7.b & 1) != 0)
    rdx_7 = (rdx_7 s>> 1) + rbx

*(arg2 + 8) = sx.q(rdi.d) * 0x50 + rdx_7
return arg2
