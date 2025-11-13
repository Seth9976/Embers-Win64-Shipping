// 函数: sub_140a8dd60
// 地址: 0x140a8dd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int64_t* rcx = *(arg1 + 0x250)

if (rcx != 0)
    *(arg1 + 0x250) = 0
    (**rcx)(rcx, 1)

CRITICAL_SECTION* lpCriticalSection = data_143db7a50

if (lpCriticalSection != 0)
    lpCriticalSection->__offset(0xe8).d = 0
    int64_t r14_1 = lpCriticalSection->__offset(0xe0).q
    
    if (r14_1 != 0)
        int64_t* rcx_1 = data_143ddb3f0
        
        if (rcx_1 == 0)
            sub_140a750a0()
            rcx_1 = data_143ddb3f0
        
        (*(*rcx_1 + 0x30))(rcx_1, r14_1)
    
    sub_140a62750(&lpCriticalSection[4])
    DeleteCriticalSection(&lpCriticalSection[3])
    lpCriticalSection->__offset(0x70).d = 0
    int64_t rsi_1 = lpCriticalSection->__offset(0x68).q
    
    if (rsi_1 != 0)
        int64_t* rcx_4 = data_143ddb3f0
        
        if (rcx_4 == 0)
            sub_140a750a0()
            rcx_4 = data_143ddb3f0
        
        (*(*rcx_4 + 0x30))(rcx_4, rsi_1)
    
    sub_140a62750(&lpCriticalSection[1])
    DeleteCriticalSection(lpCriticalSection)
    j_sub_140a74f90(lpCriticalSection)

CRITICAL_SECTION* lpCriticalSection_1 = data_143db7a48
data_143db7a50 = 0

if (lpCriticalSection_1 != 0)
    lpCriticalSection_1->__offset(0x70).d = 0
    int64_t r14_2 = lpCriticalSection_1->__offset(0x68).q
    
    if (r14_2 != 0)
        int64_t* rcx_8 = data_143ddb3f0
        
        if (rcx_8 == 0)
            sub_140a750a0()
            rcx_8 = data_143ddb3f0
        
        (*(*rcx_8 + 0x30))(rcx_8, r14_2)
    
    sub_140a62750(&lpCriticalSection_1[1])
    DeleteCriticalSection(lpCriticalSection_1)
    j_sub_140a74f90(lpCriticalSection_1)

data_143db7a48 = 0
sub_140a71830(arg1 + 0x1d8, 0)
sub_142a7daf0()
int32_t var_88 = 0
int32_t r10 = *(arg1 + 0x2b8)
int32_t var_84 = 1
int32_t rcx_13 = 0
void* var_80 = arg1 + 0x2a0
int32_t var_78 = 0xffffffff
int64_t var_74 = 0

if (r10 != 0)
    void* rax_5 = *(arg1 + 0x2b0)
    void* r8_1 = arg1 + 0x2a0
    
    if (rax_5 != 0)
        r8_1 = rax_5
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_8 = *r8_1
    
    if (rdx_8 != 0)
    label_140a8df46:
        int32_t rax_12 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
        int32_t var_84_1 = rax_12
        int32_t rax_13
        
        if (rax_12 == 0)
            rax_13 = 0x20
        else
            rax_13 = 0x1f - temp0_2
        
        var_74.d = rcx_13 - rax_13 + 0x1f
        
        if (rcx_13 - rax_13 + 0x1f s> r10)
            var_74.d = r10
    else
        while (true)
            int64_t rdx_9 = sx.q(rbx)
            rcx_13 += 0x20
            rbx += 1
            var_74:4.d = rcx_13
            var_88 = rbx
            
            if (rdx_9.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r8_1 + (rdx_9 << 2) + 4)
            int32_t var_78_1 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_140a8df46
        
        var_74.d = r10

int32_t rdx_11 = *(arg1 + 0x2b8)
int128_t var_28 = 0xffffffff
int32_t r15_1 = 0xffffffff << (rdx_11.b & 0x1f)
int128_t var_38 = var_88.o
int32_t r8_3 = rdx_11 s>> 5
int32_t r9_1 = rdx_11 & 0xffffffe0
int64_t var_48 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_78_2 = r15_1
var_74.d = rdx_11
int128_t var_68 = (arg1 + 0x290).o
int128_t var_58 = var_38

if (rdx_11 != r10)
    void* rax_15 = *(arg1 + 0x2b0)
    void* r10_1 = arg1 + 0x2a0
    
    if (rax_15 != 0)
        r10_1 = rax_15
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_15 = *(r10_1 + (sx.q(r8_3) << 2)) & r15_1
    
    if (rdx_15 != 0)
    label_140a8e012:
        int32_t rax_22 = neg.d(rdx_15) & rdx_15
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_22)
        int32_t r11_1
        
        if (rax_22 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_74.d = r9_1 - r11_1 + 0x1f
        
        if (r9_1 - r11_1 + 0x1f s> r10)
            var_74.d = r10
    else
        while (true)
            int64_t rcx_18 = sx.q(r8_3)
            r9_1 += 0x20
            r8_3 += 1
            
            if (rcx_18.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_15 = *(r10_1 + (rcx_18 << 2) + 4)
            var_78_2 = 0xffffffff
            
            if (rdx_15 != 0)
                goto label_140a8e012
        
        var_74.d = r10

while (var_58:0xc.d != (var_78_2.q u>> 0x20).d || var_58.q != arg1 + 0x2a0
        || var_68.q != arg1 + 0x290)
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)

return sub_140a716b0(arg1 + 0x290, 0) __tailcall
