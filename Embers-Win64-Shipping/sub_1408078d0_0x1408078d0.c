// 函数: sub_1408078d0
// 地址: 0x1408078d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1
int64_t rcx = *(arg1 + 0x40)

if (rcx != 0)
    *(rbx + 0x40) = sub_140a84c80(rcx, 0, 0)

int32_t i_2 = *(rbx + 0x48)
void* r14 = rbx + 0x48

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

int32_t r10_1 = *(rbx + 0x28)
void* r9_2 = rbx + 0x10
int32_t var_68_1 = 0
int32_t r8_5 = 0
int32_t var_64_1 = 1
void* var_60_1 = r9_2
int32_t var_58_1 = 0xffffffff
int64_t var_54_1 = 0

if (r10_1 != 0)
    void* rax_2 = *(r9_2 + 0x10)
    
    if (rax_2 != 0)
        r9_2 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10_1 - 1)
    int32_t rdx_4 = *r9_2
    
    if (rdx_4 != 0)
    label_1408079d8:
        int32_t rax_9 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_64_2 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_54_1.d = r8_5 - rax_10 + 0x1f
        
        if (r8_5 - rax_10 + 0x1f s> r10_1)
            var_54_1.d = r10_1
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_2)
            r8_5 += 0x20
            rcx_2 += 1
            var_54_1:4.d = r8_5
            var_68_1 = rcx_2
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9_2 + (rdx_5 << 2) + 4)
            int32_t var_58_2 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_1408079d8
        
        var_54_1.d = r10_1

void* var_48_1 = rbx
int128_t var_40 = var_68_1.o
int64_t var_30_1 = 0xffffffff

if (0 s>= r10_1)
    return 

int32_t r15_1 = 0

while (true)
    int64_t* rdi_2 = (sx.q(r15_1) << 5) + *rbx
    int64_t rbx_1 = *rdi_2
    int32_t rax_12 = sub_140b5ead0(rbx_1.d)
    uint32_t r9_3 = zx.d(rdi_2[1].b)
    int32_t rcx_5 = rax_12 + (rbx_1 u>> 0x20).d
    int32_t rdx_7 = rcx_5 - r9_3
    int32_t r8_11 = (0 - rcx_5 - 0x61c88647) ^ rdx_7 << 8
    int32_t r9_6 = (r9_3 - r8_11 - rdx_7) ^ r8_11 u>> 0xd
    int32_t rdx_10 = (rdx_7 - r8_11 - r9_6) ^ r9_6 u>> 0xc
    int32_t r8_14 = (r8_11 - rdx_10 - r9_6) ^ rdx_10 << 0x10
    int32_t r9_9 = (r9_6 - r8_14 - rdx_10) ^ r8_14 u>> 5
    int32_t rdx_13 = (rdx_10 - r8_14 - r9_9) ^ r9_9 u>> 3
    int32_t r8_17 = (r8_14 - rdx_13 - r9_9) ^ rdx_13 << 0xa
    int32_t r9_13 = ((r9_9 - r8_17 - rdx_13) ^ r8_17 u>> 0xf) & (*r14 - 1)
    void* rax_29 = arg1 + 0x38
    *(rdi_2 + 0x1c) = r9_13
    void* rdx_14 = *(arg1 + 0x40)
    int64_t r8_19 = sx.q(r9_13)
    
    if (rdx_14 != 0)
        rax_29 = rdx_14
    
    rdi_2[3].d = *(rax_29 + (((sx.q(*r14) - 1) & r8_19) << 2))
    void* rax_31 = arg1 + 0x38
    void* rcx_9 = *(arg1 + 0x40)
    
    if (rcx_9 != 0)
        rax_31 = rcx_9
    
    *(rax_31 + (((sx.q(*r14) - 1) & r8_19) << 2)) = r15_1
    var_30_1.d &= not.d(var_40:4.d)
    sub_14059bdd0(&var_40)
    r15_1 = var_30_1:4.d
    
    if (r15_1 s>= *(var_40:8.q + 0x18))
        break
    
    rbx = var_48_1
