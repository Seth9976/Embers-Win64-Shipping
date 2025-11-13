// 函数: sub_141c8bc70
// 地址: 0x141c8bc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
arg2[1].d = 0

if (*(arg2 + 0xc) s<= 0xffffffff)
    sub_1405a5410(arg2, 0)

CRITICAL_SECTION* lpCriticalSection = *arg1
EnterCriticalSection(lpCriticalSection)
int32_t rdx_1 = arg1[2].d - *(arg1 + 0x3c)
arg2[1].d = 0

if (*(arg2 + 0xc) != rdx_1)
    sub_1405a5410(arg2, rdx_1)

int32_t r9 = arg1[6].d
void* r8 = &arg1[3]
int32_t var_68 = 0
int32_t rcx_3 = 0
int32_t var_64 = 1
void* var_60 = r8
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int32_t var_50 = 0

if (r9 != 0)
    void* rax_1 = *(r8 + 0x10)
    
    if (rax_1 != 0)
        r8 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9 - 1)
    int32_t rdx_4 = *r8
    int32_t var_54_2
    
    if (rdx_4 != 0)
    label_141c8bd46:
        int32_t rax_8 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_64_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_54_1 = rcx_3 - rax_9 + 0x1f
        
        if (rcx_3 - rax_9 + 0x1f s> r9)
            var_54_2 = r9
    else
        while (true)
            int64_t rdx_5 = sx.q(rsi)
            rcx_3 += 0x20
            rsi += 1
            var_50 = rcx_3
            var_68 = rsi
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r8 + (rdx_5 << 2) + 4)
            var_58 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_141c8bd46
        
        var_54_2 = r9

int128_t var_28 = 0xffffffff
double var_38[0x2] = var_68.o
var_68.o = (&arg1[1]).o
int64_t var_48 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_58.o = var_38

if (0 s< r9)
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t rsi_1 = sx.q(arg2[1].d)
        int32_t rax_11 = (rsi_1 + 1).d
        arg2[1].d = rax_11
        
        if (rax_11 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        int64_t r8_2 = rsi_1 << 4
        
        if (r8_2 != neg.q(*arg2))
            *(r8_2 + *arg2) = *(*var_68.q + sx.q(i) * 0x28)
        
        var_50 &= not.d(var_60:4.d)
        sub_14059bdd0(&var_60)
        i = i_1
    while (i s< *(var_58.q + 0x18))

uint64_t result = sub_141c8c520(&arg1[1])

if (lpCriticalSection == 0)
    return result

return LeaveCriticalSection(lpCriticalSection)
