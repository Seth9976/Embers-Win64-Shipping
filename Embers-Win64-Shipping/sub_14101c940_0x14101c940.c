// 函数: sub_14101c940
// 地址: 0x14101c940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x88)
sub_141001880(arg1, arg1 + 0x70)
bool cond:0 = *(arg1 + 0x6c) == 0
*(arg1 + 0x68) = 0

if (not(cond:0))
    sub_1405c5570(arg1 + 0x60, 0)

int32_t i_1 = *(arg1 + 0x78)
int64_t* rdi = *(arg1 + 0x70)

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_3 = *rdi
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rdi = &rdi[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0x78) = 0

if (*(arg1 + 0x7c) != 0)
    sub_1405a5410(arg1 + 0x70, 0)

if (arg1 != -0x88)
    LeaveCriticalSection(arg1 + 0x88)

AcquireSRWLockExclusive(arg1 + 0x80)
int32_t var_94 = 1
int32_t rbx_1 = *(arg1 + 0x38)
void* var_90 = arg1 + 0x20
int32_t rcx_7 = 0
int32_t var_98 = 0
int32_t r8 = 0
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (rbx_1 != 0)
    void* rax_1 = *(arg1 + 0x30)
    void* r9_1 = arg1 + 0x20
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(rbx_1 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_14101ca78:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_1
        
        var_84.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> rbx_1)
            var_84.d = rbx_1
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_7)
            r8 += 0x20
            rcx_7 += 1
            var_84:4.d = r8
            var_98 = rcx_7
            
            if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_14101ca78
        
        var_84.d = rbx_1

int32_t rdx_5 = *(arg1 + 0x38)
int128_t var_38 = 0xffffffff
int32_t rsi = 0xffffffff << (rdx_5.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_3 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
int32_t var_88_2 = rsi
var_84.d = rdx_5
int128_t var_78 = (arg1 + 0x10).o
int96_t var_68 = var_48:8.12

if (rdx_5 != rbx_1)
    void* rax_11 = *(arg1 + 0x30)
    void* r10_1 = arg1 + 0x20
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(rbx_1 - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_3) << 2)) & rsi
    
    if (rdx_9 != 0)
    label_14101cb42:
        int32_t rax_18 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_3
        
        var_84.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx_1)
            var_84.d = rbx_1
    else
        while (true)
            int64_t rcx_12 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_12.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_12 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_14101cb42
        
        var_84.d = rbx_1

while (true)
    int32_t var_5c
    int64_t rax_20 = sx.q(var_5c)
    int64_t* rdx_10 = var_78.q
    
    if (rax_20.d == (var_88_2.q u>> 0x20).d && var_68.q == arg1 + 0x20 && rdx_10 == arg1 + 0x10)
        sub_140ba2630(arg1 + 0x10, 0)
        return ReleaseSRWLockExclusive(arg1 + 0x80) __tailcall
    
    int64_t rcx_14 = rax_20 * 3
    int64_t rax_21 = *rdx_10
    int64_t* rdi_1 = *(rax_21 + (rcx_14 << 3) + 8)
    
    if (rdi_1 != 0)
        EnterCriticalSection(&rdi_1[2])
        
        if (rdi_1 != -0x10)
            LeaveCriticalSection(&rdi_1[2])
        
        DeleteCriticalSection(&rdi_1[2])
        sub_14100dea0(rdi_1)
        j_sub_140a74f90(rdi_1)
    
    int32_t rax_23 = not.d(var_78:0xc.d)
    *(rax_21 + (rcx_14 << 3) + 8) = 0
    var_68:8.d &= rax_23
    sub_14059bdd0(&var_78:8)
