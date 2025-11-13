// 函数: sub_1419498d0
// 地址: 0x1419498d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1
int64_t rcx = *(arg1 + 0x40)

if (rcx != 0)
    *(rdi + 0x40) = sub_140a84c80(rcx, 0, 0)

int32_t i_2 = *(rdi + 0x48)
void* r14 = rdi + 0x48

if (i_2 == 0)
    return 

sub_1405a4aa0(arg1 + 0x38, 0, i_2, 4)
int32_t rcx_2 = 0

if (i_2 s> 0)
    int64_t r9_1 = 0
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        void* rdx_1 = *(arg1 + 0x40)
        void* rax_1 = arg1 + 0x38
        int64_t r8_4 = (sx.q(*r14) - 1) & r9_1
        
        if (rdx_1 != 0)
            rax_1 = rdx_1
        
        r9_1 += 1
        *(rax_1 + (r8_4 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t r10_1 = *(rdi + 0x28)
void* r9_2 = rdi + 0x10
int32_t var_e8_1 = 0
int32_t r8_5 = 0
int32_t var_e4_1 = 1
void* var_e0_1 = r9_2
int32_t var_d8_1 = 0xffffffff
int64_t var_d4_1 = 0

if (r10_1 != 0)
    void* rax_2 = *(r9_2 + 0x10)
    
    if (rax_2 != 0)
        r9_2 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10_1 - 1)
    int32_t rdx_4 = *r9_2
    
    if (rdx_4 != 0)
    label_1419499dc:
        int32_t rax_9 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_e4_2 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_d4_1.d = r8_5 - rax_10 + 0x1f
        
        if (r8_5 - rax_10 + 0x1f s> r10_1)
            var_d4_1.d = r10_1
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_2)
            r8_5 += 0x20
            rcx_2 += 1
            var_d4_1:4.d = r8_5
            var_e8_1 = rcx_2
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9_2 + (rdx_5 << 2) + 4)
            int32_t var_d8_2 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_1419499dc
        
        var_d4_1.d = r10_1

void* var_c8_1 = rdi
int128_t var_c0 = var_e8_1.o
int64_t var_b0_1 = 0xffffffff

if (0 s>= r10_1)
    return 

int32_t r15_1 = 0

while (true)
    int64_t* rbx_2 = (sx.q(r15_1) << 4) + *rdi
    int128_t* rax_12 = *rbx_2
    int128_t var_98 = *rax_12
    uint128_t var_88_1 = rax_12[1]
    int128_t var_78_1 = rax_12[2]
    uint128_t var_68_1 = rax_12[3]
    int128_t var_58_1 = rax_12[4]
    uint128_t var_48_1 = rax_12[5]
    int128_t var_38_1 = rax_12[6]
    uint64_t var_28_1 = rax_12[7].q
    int32_t rax_13 = sub_140b21160(&var_98, 0x78, 0)
    int32_t rcx_7 = (*r14 - 1) & rax_13
    void* rax_14 = arg1 + 0x38
    *(rbx_2 + 0xc) = rcx_7
    void* rdx_6 = *(arg1 + 0x40)
    int64_t r8_7 = sx.q(rcx_7)
    
    if (rdx_6 != 0)
        rax_14 = rdx_6
    
    rbx_2[1].d = *(rax_14 + (((sx.q(*r14) - 1) & r8_7) << 2))
    void* rax_16 = arg1 + 0x38
    void* rcx_11 = *(arg1 + 0x40)
    
    if (rcx_11 != 0)
        rax_16 = rcx_11
    
    *(rax_16 + (((sx.q(*r14) - 1) & r8_7) << 2)) = r15_1
    var_b0_1.d &= not.d(var_c0:4.d)
    sub_14059bdd0(&var_c0)
    r15_1 = var_b0_1:4.d
    
    if (r15_1 s>= *(var_c0:8.q + 0x18))
        break
    
    rdi = var_c8_1
