// 函数: sub_1421709e0
// 地址: 0x1421709e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x308) s<= 0 && *(arg1 + 0x300) == 0)
    int64_t rax
    rax.b = 0
    return rax

void* rdx = *(arg1 + 0x300)
int32_t rcx = 0

if (rdx != 0)
    for (int32_t i = 0; i s>= 0; i += 1)
        if (i s>= *(rdx + 0x100))
            break

int32_t var_68 = 0
int32_t r10 = *(arg1 + 0x170)
void* r9 = arg1 + 0x158
int32_t var_64 = 1
int32_t r8_1 = 0
void* var_60 = r9
int32_t var_58 = 0xffffffff
int64_t var_54 = 0

if (r10 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_142170ab8:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_64_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_54.d = r8_1 - rax_9 + 0x1f
        
        if (r8_1 - rax_9 + 0x1f s> r10)
            var_54.d = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8_1 += 0x20
            rcx += 1
            var_54:4.d = r8_1
            var_68 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_58 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_142170ab8
        
        var_54.d = r10

void* var_40 = arg1 + 0x148
double var_30[0x2] = var_68.o
int128_t var_20 = 0xffffffff
var_68.o = (arg1 + 0x148).o
int64_t var_48 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_58.o = var_30
int32_t i_1

if (0 s< r10)
    do
        var_54:4.d &= not.d(var_60:4.d)
        sub_14059bdd0(&var_60)
    while (i_1 s< *(var_58.q + 0x18))
void* rax_11
rax_11.b = 1
return rax_11
