// 函数: sub_1428b8420
// 地址: 0x1428b8420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
char const* const r14 = "<NULL>"
int64_t rdi = sx.q(arg8)
int32_t i = 0

if (arg5 != 0)
    r14 = arg5

int64_t rdx = -1

if (rdi.d s>= 0)
    rdx = rdi

void* rax_1 = sub_1428a70f0(r14, rdx)
void* rbp = rax_1
int32_t rdx_2 = arg7 - rax_1.d

if (arg7 s< 0 || rdx_2 s< 0)
    rdx_2 = 0

if (rdi.d s>= 0)
    if (rdi.d s>= 0x7fffffff - rdx_2)
        rdi = 0x7fffffff
    else
        rdi = zx.q(rdi.d + rdx_2)

int32_t rsi_1 = neg.d(rdx_2)

if ((arg6 & 1) == 0)
    rsi_1 = rdx_2

if (rsi_1 s> 0)
    while (rdi.d s< 0 || i s< rdi.d)
        if (sub_1428b7920(arg1, arg2, arg3, arg4, 0x20) == 0)
            return 0
        
        rsi_1 -= 1
        i += 1
        
        if (rsi_1 s<= 0)
            break

if (rbp != 0)
    while (rdi.d s< 0 || i s< rdi.d)
        int32_t rax_6 = sub_1428b7920(arg1, arg2, arg3, arg4, *r14)
        r14 = &r14[1]
        
        if (rax_6 == 0)
            return 0
        
        i += 1
        void* temp0_1 = rbp
        rbp -= 1
        
        if (temp0_1 == 1)
            break

if (rsi_1 s>= 0)
    return 1

while (true)
    if (rdi.d s>= 0 && i s>= rdi.d)
        return 1
    
    if (sub_1428b7920(arg1, arg2, arg3, arg4, 0x20) == 0)
        return 0
    
    i += 1
    int32_t temp1_1 = rsi_1
    rsi_1 += 1
    
    if (temp1_1 + 1 s>= 0)
        return 1
