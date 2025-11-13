// 函数: sub_140b32ef0
// 地址: 0x140b32ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg1[1].d)

if (r10.d == 0)
    return 

int64_t* r9_1 = *arg1

if (arg2 f< *r9_1)
    return 

int32_t rax_1 = (r10 - 1).d
int64_t* rax

if (rax_1 s<= 0)
label_140b32f33:
    rax = &r9_1[r10 * 4]
    rax[-1].d += 1
    arg1[3] += 1
    rax[-2] = arg3 f+ rax[-2]
else
    int64_t rcx = 0
    rax = r9_1
    
    while (not(arg2 f< rax[1]))
        rcx += 1
        rax = &rax[4]
        
        if (rcx s>= sx.q(rax_1))
            goto label_140b32f33
    
    rax[3].d += 1
    arg1[3] += 1
    rax[2] = arg3 f+ rax[2]
arg2 = arg3 f+ arg1[2]
double temp0_1 = __minsd_xmmsd_memsd(arg3, arg1[4])
arg1[2] = arg2
double temp0_2 = _mm_max_sd(arg1[5], arg3)
arg1[4] = temp0_1
arg1[5] = temp0_2
