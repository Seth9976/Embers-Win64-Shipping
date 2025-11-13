// 函数: sub_1415c6060
// 地址: 0x1415c6060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x98) == 0)
    *arg2 = nullptr
    int64_t rbx_1 = sx.q(*(arg1 + 0x20))
    int64_t rsi_2 = *(arg1 + 0x18)
    arg2[1].d = rbx_1.d
    
    if (rbx_1.d == 0)
        *(arg2 + 0xc) = 0
        return arg2
    
    sub_140638750(arg2, rbx_1.d, 0)
    memcpy(*arg2, rsi_2, (rbx_1 << 2).d)
    return arg2

int64_t* rdx = *(arg1 + 0x90)
void* var_28 = nullptr
int64_t var_20 = 0
sub_1415c5da0(arg1, rdx, arg3, &var_28)
sub_140625cf0(var_28, var_20.d)
int32_t rcx_1 = var_20.d
void* r9_1 = var_28
int32_t i = rcx_1 - 1

if (i s> 0)
    int64_t rdx_2 = sx.q(i) << 2
    void* r14_1 = rdx_2
    
    do
        if (*(rdx_2 + r9_1) == *(rdx_2 + r9_1 - 4))
            int32_t rax_5 = rcx_1 - i - 1
            
            if (rax_5 s>= 1)
                rax_5 = 1
            
            if (rax_5 != 0)
                memcpy(r14_1 + r9_1, r9_1 + (sx.q(rcx_1 - rax_5) << 2), rax_5 << 2)
                rcx_1 = var_20.d
                r9_1 = var_28
            
            rcx_1 -= 1
            var_20.d = rcx_1
        
        i -= 1
        r14_1 -= 4
        rdx_2 -= 4
    while (i s> 0)

int64_t rbx = sx.q(*(arg1 + 0x20))

if (rbx.d != 0)
    int32_t rdx_4 = rbx.d + rcx_1
    
    if (rdx_4 s> var_20:4.d)
        sub_1405dadb0(&var_28, rdx_4)
        rcx_1 = var_20.d
        r9_1 = var_28
    
    memcpy(r9_1 + (sx.q(rcx_1) << 2), *(arg1 + 0x18), (rbx << 2).d)
    r9_1 = var_28
    rcx_1 = var_20.d + rbx.d

*arg2 = r9_1
*(arg2 + 0xc) = var_20:4.d
arg2[1].d = rcx_1
return arg2
