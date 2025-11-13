// 函数: sub_140b3d7f0
// 地址: 0x140b3d7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *arg2
int64_t r14 = sx.q(arg2[1].d)
void* rbp = rsi + (r14 << 1)
void* rbx = rbp

if (rsi != rbp)
    while (true)
        int16_t rcx = *(rbx - 2)
        rbx -= 2
        
        if (sub_140b40740(rcx) != 0)
            break
        
        if (rsi == rbx)
            goto label_140b3d846

int64_t rcx_1
int32_t rdx

if (rsi == rbp || rbx == 0)
label_140b3d846:
    int96_t zmm0 = (*arg2).12
    rdx = zmm0:8.d
    rcx_1 = zmm0.q
else
    rdx = arg2[1].d
    int32_t rax_5 = rdx - ((rbx - rsi) s>> 1).d
    
    if (rax_5 - 1 s>= 0)
        if (rax_5 s<= rdx)
            rdx = rax_5 - 1
        
        rcx_1 = rsi + ((r14 - sx.q(rdx)) << 1)
    else
        rdx = 0
        rcx_1 = rsi + (r14 << 1)

int16_t* rax_3 = rcx_1 + (sx.q(rdx) << 1)
int16_t* rdx_1

if (rcx_1 == rax_3)
label_140b3d882:
    rax_3 = nullptr
    rdx_1 = 2
else
    while (true)
        rdx_1 = rax_3
        rax_3 -= 2
        
        if (*rax_3 == 0x2e)
            break
        
        if (rcx_1 == rax_3)
            goto label_140b3d882

if (rax_3 == 0)
    arg1[1] = 0
    *arg1 = 0
else
    if (arg3 == 0)
        rax_3 = rdx_1
    
    *arg1 = rax_3
    arg1[1].d = ((rbp - rax_3) s>> 1).d

return arg1
