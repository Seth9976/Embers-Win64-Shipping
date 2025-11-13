// 函数: sub_140f047e0
// 地址: 0x140f047e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(*(arg1 + 0x30))

if (r10.d == 0)
    *arg2 = 0
    return arg2

int32_t rdx = 0

if (r10.d s> 0)
    int64_t rcx = 0
    int32_t* rax_3 = *(arg1 + 0x28) + 0x34
    
    do
        if (arg3[1] f< *rax_3)
            bool cond:0_1 = rdx - 1 s<= 0
            rdx -= 1
            
            if (cond:0_1)
                rdx = 0
            
            break
        
        rdx += 1
        rcx += 1
        rax_3 = &rax_3[0x16]
    while (rcx s< r10)

int64_t r9 = *(arg1 + 0x28)
int64_t* r8_1
int32_t* r9_1

if (rdx s< r10.d)
    int64_t rcx_2 = sx.q(rdx) * 0x58
    
    if (not(*(rcx_2 + r9 + 0x3c) f+ *(rcx_2 + r9 + 0x34) f>= arg3[1]) && rdx s< (r10 - 1).d)
        rdx += 1
    
    float arg_8 = *arg3
    r8_1 = sx.q(rdx) * 0x58 + r9
    r9_1 = &arg_8
    int32_t arg_c = *(r8_1 + 0x34)
else
    r8_1 = sx.q((r10 - 1).d) * 0x58 + r9
    r9_1 = arg3

sub_140f04560(arg1, arg2, r8_1, r9_1, arg4)
return arg2
