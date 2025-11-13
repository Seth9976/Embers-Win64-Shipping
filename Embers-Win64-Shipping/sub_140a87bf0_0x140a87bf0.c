// 函数: sub_140a87bf0
// 地址: 0x140a87bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1)
int32_t r8 = 0
int32_t var_54 = 1
int32_t var_58 = 0
void* __offset(_RTL_CRITICAL_SECTION, 0x1838) r9 = &arg1[0x9b]
int32_t var_48 = 0xffffffff
int32_t r10 = (r9 - 0x1838)->__offset(0x1860).d
int32_t rcx = 0
void* __offset(_RTL_CRITICAL_SECTION, 0x1838) var_50 = r9
int32_t var_44 = 0
int32_t var_40 = 0

if (r10 != 0)
    void* rax_1 = (r9 - 0x1838)->__offset(0x1858).q
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_2 = (r9 - 0x1838)->__offset(0x1838).d
    int32_t var_44_2
    
    if (rdx_2 != 0)
    label_140a87c98:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_54_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_44_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r10)
            var_44_2 = r10
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            var_40 = rcx
            var_58 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            var_48 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140a87c98
        
        var_44_2 = r10

double zmm2[0x2] = var_48.o
double var_18[0x2] = zmm2
double var_28[0x2] = var_58.o
var_58.o = (&arg1[1]).o
uint64_t result = zmm2[0] u>> 0x20
int64_t var_38 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
var_48.o = var_28

if (result.d s< r10)
    int32_t i_1
    int32_t i = i_1
    
    do
        void* r9_1 = var_58.q
        void* rdx_5 = r9_1
        void* r10_1 = *(r9_1 + 0x1800)
        
        if (r10_1 != 0)
            rdx_5 = r10_1
        
        if (*(rdx_5 + sx.q(i) * 0x18 + 8) == arg2)
            if (r10_1 != 0)
                r9_1 = r10_1
            
            result = r9_1 + sx.q(i) * 0x18
            
            if (result != 0)
                result = sub_140a87120(&arg1[1], *result)
            
            break
        
        var_40 &= not.d(var_50:4.d)
        sub_140a736e0(&var_50)
        result = var_48.q
        i = i_1
    while (i s< *(result + 0x28))

if (arg1 == 0)
    return result

return LeaveCriticalSection(arg1)
