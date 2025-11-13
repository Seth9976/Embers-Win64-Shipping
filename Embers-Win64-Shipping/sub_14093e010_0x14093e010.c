// 函数: sub_14093e010
// 地址: 0x14093e010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg1 == -0x28)
    return 

int32_t r10_1 = *(arg1 + 0x70)
void* r9_1 = arg1 + 0x58
int32_t rcx_1 = 0
int32_t var_54_1 = 1
int32_t var_58_1 = 0
int32_t r8_1 = 0
void* var_50 = r9_1
int32_t var_48_1 = 0xffffffff
int64_t var_44_1 = 0

if (r10_1 != 0)
    void* rax_1 = *(r9_1 + 0x10)
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r10_1 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_14093e0b8:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_54_2 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_44_1.d = r8_1 - rax_9 + 0x1f
        
        if (r8_1 - rax_9 + 0x1f s> r10_1)
            var_44_1.d = r10_1
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_1)
            r8_1 += 0x20
            rcx_1 += 1
            var_44_1:4.d = r8_1
            var_58_1 = rcx_1
            
            if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            var_48_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_14093e0b8
        
        var_44_1.d = r10_1

int128_t var_28_1 = var_58_1.o
int128_t var_18_1 = 0xffffffff
var_58_1.o = (arg1 + 0x48).o
int64_t var_38_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_48_1.o = var_28_1

if (0 s>= r10_1)
    return 

int32_t i

do
    var_44_1:4.d &= not.d(var_50:4.d)
    sub_14059bdd0(&var_50)
while (i s< *(var_48_1.q + 0x18))
