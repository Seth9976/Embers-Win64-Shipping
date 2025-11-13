// 函数: sub_140b0a060
// 地址: 0x140b0a060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = -1
*(arg1 + 8) = *arg3
arg1[4].b = arg4
arg1[3] = arg5

do
    rbx += 1
while (*(arg2 + (rbx << 1)) != 0)

int32_t rax

if (arg6 == 0 || rbx.d + 1 + *(sx.q(*(arg6 + 0x4038)) * 0x2010 + arg6 + 0x2008) s> 0x1000)
    rax.b = 0
else
    rax.b = 1

*(arg1 + 0x21) = rax.b
int64_t rbx_2
void* rdi_1

if (rax.b == 0)
    rbx_2 = sx.q(rbx.d + 1)
    rdi_1 = sub_140a82f30(rbx_2 * 2, 0)
else
    void* rcx_3 = sx.q(*(arg6 + 0x4038)) * 0x2010 + arg6
    int64_t r15_1 = sx.q(*(rcx_3 + 0x2008))
    int32_t rax_3 = r15_1.d + rbx.d + 1
    *(rcx_3 + 0x2008) = rax_3
    
    if (rax_3 s> *(rcx_3 + 0x200c))
        sub_140b269c0(rcx_3, r15_1.d)
    
    rbx_2 = sx.q(rbx.d + 1)
    void* rcx_5 = sx.q(*(arg6 + 0x4038)) * 0x2010 + arg6
    void* rax_5 = *(rcx_5 + 0x2000)
    
    if (rax_5 != 0)
        rcx_5 = rax_5
    
    rdi_1 = rcx_5 + (r15_1 << 1)

memcpy(rdi_1, arg2, rbx_2.d * 2)
*arg1 = rdi_1
return arg1
