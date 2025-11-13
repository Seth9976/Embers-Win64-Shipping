// 函数: sub_140cd9290
// 地址: 0x140cd9290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
uint64_t result = 0
bool z

if (0 == *(arg1 + 0x1e8))
    *(arg1 + 0x1e8) = 0
    z = true
else
    result = zx.q(*(arg1 + 0x1e8))
    z = false

if (z)
    return result

*(arg1 + 0x1e8)
*(arg1 + 0x1e8) = 0
sub_140b33630("DeleteLinkers")
EnterCriticalSection(arg1 + 0x1c0)
int64_t* var_b8 = nullptr
int64_t* r12_1 = nullptr
int64_t var_b0_1 = 0
int32_t rsi_1 = 0
int32_t rdx_2 = *(arg1 + 0x178) - *(arg1 + 0x1a4)

if (rdx_2 s> 0)
    sub_1405c5570(&var_b8, rdx_2)
    rsi_1 = var_b0_1.d
    r12_1 = var_b8

int32_t r10_1 = *(arg1 + 0x198)
void* r14_1 = arg1 + 0x180
int32_t var_a4_1 = 1
int32_t rcx_2 = 0
int32_t var_a8_1 = 0
int32_t r8_1 = 0
void* var_a0_1 = r14_1
int32_t var_98_1 = 0xffffffff
int64_t var_94_1 = 0

if (r10_1 != 0)
    void* rax_1 = *(r14_1 + 0x10)
    void* r9_1 = r14_1
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r10_1 - 1)
    int32_t rdx_5 = *r9_1
    
    if (rdx_5 != 0)
    label_140cd9398:
        int32_t rax_8 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_a4_2 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_94_1.d = r8_1 - rax_9 + 0x1f
        
        if (r8_1 - rax_9 + 0x1f s> r10_1)
            var_94_1.d = r10_1
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_2)
            r8_1 += 0x20
            rcx_2 += 1
            var_94_1:4.d = r8_1
            var_a8_1 = rcx_2
            
            if (rdx_6.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
            int32_t var_98_2 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_140cd9398
        
        var_94_1.d = r10_1

int128_t var_38_1 = 0xffffffff
int128_t var_48_1 = var_a8_1.o
int128_t var_88 = (arg1 + 0x170).o
int64_t var_68_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
int128_t var_78_1 = var_48_1
int64_t arg_8

if (0 s< r10_1)
    int32_t i = var_78_1:0xc.d
    
    do
        int64_t r14_2 = sx.q(rsi_1)
        rsi_1 = (r14_2 + 1).d
        arg_8 = *var_88.q
        var_b0_1.d = rsi_1
        
        if (rsi_1 s> var_b0_1:4.d)
            sub_1405a4d70(&var_b8)
            rsi_1 = var_b0_1.d
            r12_1 = var_b8
        
        r12_1[r14_2] = *(arg_8 + sx.q(i) * 0x10)
        var_78_1:8.d &= not.d(var_88:0xc.d)
        sub_14059bdd0(&var_88:8)
        i = var_78_1:0xc.d
    while (i s< *(var_78_1.q + 0x18))
    
    r14_1 = arg1 + 0x180

*(arg1 + 0x178) = 0

if (*(arg1 + 0x17c) != 0)
    sub_1405a5410(arg1 + 0x170, 0)

*(arg1 + 0x1a0) = 0xffffffff
*(arg1 + 0x1a4) = 0
sub_14059a8e0(r14_1, 0)
int32_t i_3 = *(arg1 + 0x1b8)

if (i_3 s> 0)
    int64_t r8_3 = 0
    uint64_t i_2 = zx.q(i_3)
    uint64_t i_1
    
    do
        void* rcx_8 = *(arg1 + 0x1b0)
        void* rax_19 = arg1 + 0x1a8
        int64_t rdx_11 = (sx.q(*(arg1 + 0x1b8)) - 1) & r8_3
        
        if (rcx_8 != 0)
            rax_19 = rcx_8
        
        r8_3 += 1
        *(rax_19 + (rdx_11 << 2)) = 0xffffffff
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

if (arg1 != -0x1c0)
    LeaveCriticalSection(arg1 + 0x1c0)

arg_8.b = 0
int64_t* var_58_1 = &arg_8
void*** (* var_60)() = sub_140884c50
void* rax_20 = sub_140a756e0(&var_60, &data_14397f5f0)
int64_t* rsi_2 = r12_1
*(rax_20 + 0x30) = 1
void* rdx_12 = &r12_1[sx.q(rsi_1)]
uint64_t r14_6 = (rdx_12 - r12_1 + 7) u>> 3

if (r12_1 u> rdx_12)
    r14_6 = 0

if (r14_6 != 0)
    do
        void*** rbx_2 = *rsi_2
        
        if (rbx_2 != 0)
            sub_140cad860(rbx_2)
            j_sub_140a74f90(rbx_2)
        
        rsi_2 = &rsi_2[1]
        rdi += 1
    while (rdi != r14_6)

*(rax_20 + 0x30) = 0

if (r12_1 != 0)
    sub_140a74f90(r12_1)

return sub_140b37f60("DeleteLinkers")
