// 函数: sub_140a75840
// 地址: 0x140a75840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = arg1
uint32_t rax = GetCurrentThreadId()
EnterCriticalSection(lpCriticalSection)
int32_t i_1 = arg2[1].d
int32_t r15_2 = lpCriticalSection->__offset(0x1830).d - lpCriticalSection->__offset(0x186c).d + 1

if (i_1 != 0)
    void* rbx_1 = *arg2 + 8
    int32_t i
    
    do
        int64_t rdi = *(rbx_1 + 0x330)
        
        if (rdi != 0)
            int64_t* rcx_1 = data_143ddb3f0
            
            if (rcx_1 == 0)
                sub_140a750a0()
                rcx_1 = data_143ddb3f0
            
            (*(*rcx_1 + 0x30))(rcx_1, rdi)
        
        int64_t rdi_1 = *rbx_1
        
        if (rdi_1 != 0)
            int64_t* rcx_2 = data_143ddb3f0
            
            if (rcx_2 == 0)
                sub_140a750a0()
                rcx_2 = data_143ddb3f0
            
            (*(*rcx_2 + 0x30))(rcx_2, rdi_1)
        
        rbx_1 += 0x348
        i = i_1
        i_1 -= 1
    while (i != 1)
    lpCriticalSection = arg1

int32_t rcx_4 = *(arg2 + 0xc)
arg2[1].d = 0
int32_t rbx_2 = 0

if (rcx_4 != r15_2)
    sub_140a89c90(arg2, r15_2)
    rcx_4 = *(arg2 + 0xc)
    rbx_2 = arg2[1].d

arg2[1].d = rbx_2 + 1

if (rbx_2 + 1 s> rcx_4)
    sub_140a89160(arg2)

int32_t* r9_1 = sx.q(rbx_2) * 0x348 + *arg2
*(r9_1 + 8) = 0
*(r9_1 + 0x10) = 0
*(r9_1 + 0x338) = 0
r9_1[0xd0] = 0
r9_1[0xd1] = 0x64
sub_140a75be0(rax, data_143de5470, u"GameThread", r9_1)
int32_t var_a4 = 1
int32_t var_98 = 0xffffffff
int32_t r11 = lpCriticalSection[0x9c].DebugInfo.d
int32_t rcx_7 = 0
int32_t var_a8 = 0
int32_t r8 = 0
void* var_a0 = &lpCriticalSection[0x9b]
int64_t var_94 = 0

if (r11 != 0)
    void* rax_5 = *(lpCriticalSection + 0x1858)
    void* r9_2 = &lpCriticalSection[0x9b]
    
    if (rax_5 != 0)
        r9_2 = rax_5
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r11 - 1)
    int32_t rdx_7 = *r9_2
    
    if (rdx_7 != 0)
    label_140a75a08:
        int32_t rax_12 = neg.d(rdx_7) & rdx_7
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_12)
        int32_t var_a4_1 = rax_12
        int32_t rax_13
        
        if (rax_12 == 0)
            rax_13 = 0x20
        else
            rax_13 = 0x1f - temp0_1
        
        var_94.d = r8 - rax_13 + 0x1f
        
        if (r8 - rax_13 + 0x1f s> r11)
            var_94.d = r11
    else
        while (true)
            int64_t rdx_8 = sx.q(rcx_7)
            r8 += 0x20
            rcx_7 += 1
            var_94:4.d = r8
            var_a8 = rcx_7
            
            if (rdx_8.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_7 = *(r9_2 + (rdx_8 << 2) + 4)
            int32_t var_98_1 = 0xffffffff
            
            if (rdx_7 != 0)
                goto label_140a75a08
        
        var_94.d = r11

int32_t rdx_9 = lpCriticalSection[0x9c].DebugInfo.d
int128_t var_48 = 0xffffffff
int32_t r14 = 0xffffffff << (rdx_9.b & 0x1f)
int128_t var_58 = var_a8.o
int32_t r8_3 = rdx_9 s>> 5
int32_t r9_4 = rdx_9 & 0xffffffe0
int64_t var_68 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_98_2 = r14
var_94.d = rdx_9
int128_t var_88 = (&lpCriticalSection[1]).o
int128_t var_78 = var_58

if (rdx_9 != r11)
    void* rax_15 = *(lpCriticalSection + 0x1858)
    void* r10_1 = &lpCriticalSection[0x9b]
    
    if (rax_15 != 0)
        r10_1 = rax_15
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r11 - 1)
    int32_t rdx_13 = *(r10_1 + (sx.q(r8_3) << 2)) & r14
    
    if (rdx_13 != 0)
    label_140a75ad4:
        int32_t rax_22 = neg.d(rdx_13) & rdx_13
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_22)
        int32_t rbx_3
        
        if (rax_22 == 0)
            rbx_3 = 0x20
        else
            rbx_3 = 0x1f - temp0_3
        
        var_94.d = r9_4 - rbx_3 + 0x1f
        
        if (r9_4 - rbx_3 + 0x1f s> r11)
            var_94.d = r11
    else
        while (true)
            int64_t rcx_12 = sx.q(r8_3)
            r9_4 += 0x20
            r8_3 += 1
            
            if (rcx_12.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_13 = *(r10_1 + (rcx_12 << 2) + 4)
            var_98_2 = 0xffffffff
            
            if (rdx_13 != 0)
                goto label_140a75ad4
        
        var_94.d = r11

while (true)
    int64_t rcx_14 = sx.q(var_78:0xc.d)
    void* rdx_14 = var_88.q
    
    if (rcx_14.d == (var_98_2.q u>> 0x20).d && var_78.q == &lpCriticalSection[0x9b]
            && rdx_14 == &lpCriticalSection[1])
        return LeaveCriticalSection(arg1) __tailcall
    
    void* rax_24 = *(rdx_14 + 0x1800)
    int64_t rcx_15 = rcx_14 * 3
    int64_t rdi_2 = sx.q(arg2[1].d)
    
    if (rax_24 != 0)
        rdx_14 = rax_24
    
    int32_t rax_25 = (rdi_2 + 1).d
    uint32_t r15_3 = *(rdx_14 + (rcx_15 << 3))
    void* rbx_4 = *(rdx_14 + (rcx_15 << 3) + 8)
    arg2[1].d = rax_25
    
    if (rax_25 s> *(arg2 + 0xc))
        sub_140a89160(arg2)
    
    int32_t* r9_7 = rdi_2 * 0x348 + *arg2
    *(r9_7 + 8) = 0
    *(r9_7 + 0x10) = 0
    *(r9_7 + 0x338) = 0
    r9_7[0xd0] = 0
    r9_7[0xd1] = 0x64
    int16_t* r8_4
    
    if (*(rbx_4 + 0x10) == 0)
        r8_4 = &data_142d40450
    else
        r8_4 = *(rbx_4 + 8)
    
    sub_140a75be0(rax, r15_3, r8_4, r9_7)
    var_78:8.d &= not.d(var_88:0xc.d)
    sub_140a736e0(&var_88:8)
