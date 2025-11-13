// 函数: sub_1422f1210
// 地址: 0x1422f1210
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

if (i_2 s> 0)
    int64_t r8_2 = 0
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        void* rcx_2 = *(arg1 + 0x40)
        void* rax_1 = arg1 + 0x38
        int64_t rdx_3 = (sx.q(*r14) - 1) & r8_2
        
        if (rcx_2 != 0)
            rax_1 = rcx_2
        
        r8_2 += 1
        *(rax_1 + (rdx_3 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t r10_1 = *(rdi + 0x28)
void* r9_1 = rdi + 0x10
int32_t var_64_1 = 1
int32_t rcx_3 = 0
int32_t var_68_1 = 0
int32_t r8_3 = 0
void* var_60_1 = r9_1
int32_t var_58_1 = 0xffffffff
int64_t var_54_1 = 0

if (r10_1 != 0)
    void* rax_2 = *(r9_1 + 0x10)
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10_1 - 1)
    int32_t rdx_6 = *r9_1
    
    if (rdx_6 != 0)
    label_1422f1328:
        int32_t rax_9 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_64_2 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_54_1.d = r8_3 - rax_10 + 0x1f
        
        if (r8_3 - rax_10 + 0x1f s> r10_1)
            var_54_1.d = r10_1
    else
        while (true)
            int64_t rdx_7 = sx.q(rcx_3)
            r8_3 += 0x20
            rcx_3 += 1
            var_54_1:4.d = r8_3
            var_68_1 = rcx_3
            
            if (rdx_7.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r9_1 + (rdx_7 << 2) + 4)
            int32_t var_58_2 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_1422f1328
        
        var_54_1.d = r10_1

void* var_48_1 = rdi
int128_t var_40 = var_68_1.o
int64_t var_30_1 = 0xffffffff

if (0 s>= r10_1)
    return 

int32_t r15_1 = 0

while (true)
    int64_t* rbx_2 = (sx.q(r15_1) << 6) + *rdi
    int32_t rax_12 = rbx_2[1].d
    int16_t* rdx_8
    
    if (rax_12 == 0)
        rdx_8 = &data_142d40450
    else
        rdx_8 = *rbx_2
    
    int32_t rcx_5 = rax_12 - 1
    
    if (rax_12 == 0)
        rcx_5 = 0
    
    int32_t rax_14 = sub_1405969c0(rcx_5, rdx_8) & (*r14 - 1)
    *(rbx_2 + 0x3c) = rax_14
    void* rdx_9 = *(arg1 + 0x40)
    int64_t r8_5 = sx.q(rax_14)
    void* rax_15 = arg1 + 0x38
    
    if (rdx_9 != 0)
        rax_15 = rdx_9
    
    rbx_2[7].d = *(rax_15 + (((sx.q(*r14) - 1) & r8_5) << 2))
    void* rax_17 = arg1 + 0x38
    void* rcx_11 = *(arg1 + 0x40)
    
    if (rcx_11 != 0)
        rax_17 = rcx_11
    
    *(rax_17 + (((sx.q(*r14) - 1) & r8_5) << 2)) = r15_1
    var_30_1.d &= not.d(var_40:4.d)
    sub_14059bdd0(&var_40)
    r15_1 = var_30_1:4.d
    
    if (r15_1 s>= *(var_40:8.q + 0x18))
        break
    
    rdi = var_48_1
