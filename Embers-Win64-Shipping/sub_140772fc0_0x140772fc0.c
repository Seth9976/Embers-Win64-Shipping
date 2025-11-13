// 函数: sub_140772fc0
// 地址: 0x140772fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1
int64_t rcx = *(arg1 + 0x40)

if (rcx != 0)
    *(arg1 + 0x40) = sub_140a84c80(rcx, 0, 0)

int32_t i_2 = *(rbx + 0x48)
void* r12 = rbx + 0x48

if (i_2 == 0)
    return 

sub_1405a4aa0(arg1 + 0x38, 0, i_2, 4)
uint64_t rax

if (i_2 s> 0)
    int64_t r8_2 = 0
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        uint64_t rcx_2 = *(arg1 + 0x40)
        rax = arg1 + 0x38
        int64_t rdx_3 = (sx.q(*r12) - 1) & r8_2
        
        if (rcx_2 != 0)
            rax = rcx_2
        
        r8_2 += 1
        *(rax + (rdx_3 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t rdi = *(rbx + 0x28)
void* r9_1 = rbx + 0x10
int32_t rcx_3 = 0
int32_t var_74_1 = 1
int32_t r10_1 = 0
int32_t var_78_1 = 0
int32_t r8_3 = 0
void* var_70_1 = r9_1
int32_t var_68_1 = 0xffffffff
int64_t var_64_1 = 0

if (rdi != 0)
    void* rax_1 = *(r9_1 + 0x10)
    r10_1 = rdi
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi - 1)
    int32_t rdx_6 = *r9_1
    
    if (rdx_6 != 0)
    label_1407730c9:
        int32_t rax_7 = ((rdx_6 - 1) & rdx_6) ^ rdx_6
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_74_2 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        rax = zx.q(r8_3 - rax_8 + 0x1f)
        
        if (rax.d s> rdi)
            rax = zx.q(rdi)
        
        r10_1 = rax.d
        var_64_1.d = rax.d
    else
        while (true)
            int64_t rdx_7 = sx.q(rcx_3)
            r8_3 += 0x20
            rcx_3 += 1
            var_64_1:4.d = r8_3
            var_78_1 = rcx_3
            
            if (rdx_7.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_64_1.d = rdi
                break
            
            rdx_6 = *(r9_1 + (rdx_7 << 2) + 4)
            int32_t var_68_2 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_1407730c9

void* var_58_1 = rbx
int128_t var_50 = var_78_1.o
int64_t var_40_1 = 0xffffffff

if (r10_1 s>= rdi)
    return 

int32_t r13_1 = 0

while (true)
    int64_t* rdi_3 = (sx.q(r13_1) << 6) + *rbx
    int64_t rbx_1 = *rdi_3
    int32_t rax_9 = sub_140b5ead0(rbx_1.d)
    int16_t r8_5 = rdi_3[2].w
    int32_t r14_1 = (rbx_1 u>> 0x20).d + rax_9
    int64_t rcx_6
    
    if (r8_5 != 3)
        rcx_6 = 0
    else
        rcx_6 = rdi_3[1]
    
    uint32_t rcx_7 = (rcx_6 u>> 4).d
    int32_t rdx_9 = (0x9e3779b9 - rcx_7) ^ rcx_7 << 8
    int32_t rbx_5 = neg.d(rdx_9 + rcx_7) ^ rdx_9 u>> 0xd
    int32_t rcx_10 = (rcx_7 - rdx_9 - rbx_5) ^ rbx_5 u>> 0xc
    int32_t rdx_12 = (rdx_9 - rcx_10 - rbx_5) ^ rcx_10 << 0x10
    int32_t rbx_8 = (rbx_5 - rdx_12 - rcx_10) ^ rdx_12 u>> 5
    int32_t rcx_13 = (rcx_10 - rdx_12 - rbx_8) ^ rbx_8 u>> 3
    int32_t rdx_15 = (rdx_12 - rcx_13 - rbx_8) ^ rcx_13 << 0xa
    int32_t rbx_11 = (rbx_8 - rdx_15 - rcx_13) ^ rdx_15 u>> 0xf
    void* const rsi_1
    
    if (r8_5 != 3)
        rsi_1 = rdi_3[1]
        void* rax_24
        int64_t rax_25
        void* rdx_17
        
        if (rsi_1 != 0)
            rax_24 = sub_140be01c0()
            rdx_17 = *(rsi_1 + 0x10)
            rax_25 = sx.q(*(rax_24 + 0x38))
        
        if (rsi_1 == 0 || rax_25.d s> *(rdx_17 + 0x38)
                || *(*(rdx_17 + 0x30) + (rax_25 << 3)) != rax_24 + 0x30)
            rsi_1 = nullptr
    else
        rsi_1 = data_143ce3880
    
    uint32_t rsi_2 = (rsi_1 u>> 4).d
    int32_t rcx_16 = (0x9e3779b9 - rsi_2) ^ rsi_2 << 8
    int32_t rdx_20 = neg.d(rcx_16 + rsi_2) ^ rcx_16 u>> 0xd
    int32_t rsi_5 = (rsi_2 - rcx_16 - rdx_20) ^ rdx_20 u>> 0xc
    int32_t rcx_19 = (rcx_16 - rsi_5 - rdx_20) ^ rsi_5 << 0x10
    int32_t rdx_23 = (rdx_20 - rcx_19 - rsi_5) ^ rcx_19 u>> 5
    int32_t rsi_8 = (rsi_5 - rcx_19 - rdx_23) ^ rdx_23 u>> 3
    int32_t rcx_22 = (rcx_19 - rsi_8 - rdx_23) ^ rsi_8 << 0xa
    int32_t rdx_28 = (((rdx_23 - rcx_22 - rsi_8) ^ rcx_22 u>> 0xf) - rbx_11) ^ rbx_11 u>> 0xd
    int32_t rcx_26 = (0x9e3779b9 - rbx_11 - rdx_28) ^ rdx_28 << 8
    int32_t rbx_14 = (rbx_11 - rcx_26 - rdx_28) ^ rcx_26 u>> 0xd
    int32_t rdx_31 = (rdx_28 - rcx_26 - rbx_14) ^ rbx_14 u>> 0xc
    int32_t rcx_29 = (rcx_26 - rdx_31 - rbx_14) ^ rdx_31 << 0x10
    int32_t rbx_17 = (rbx_14 - rcx_29 - rdx_31) ^ rcx_29 u>> 5
    int32_t rdx_34 = (rdx_31 - rcx_29 - rbx_17) ^ rbx_17 u>> 3
    int32_t rcx_32 = (rcx_29 - rdx_34 - rbx_17) ^ rdx_34 << 0xa
    int32_t rbx_22 = (((rbx_17 - rcx_32 - rdx_34) ^ rcx_32 u>> 0xf) - r14_1) ^ r14_1 u>> 0xd
    int32_t rcx_36 = (0x9e3779b9 - rbx_22 - r14_1) ^ rbx_22 << 8
    int32_t r14_4 = (r14_1 - rcx_36 - rbx_22) ^ rcx_36 u>> 0xd
    int32_t rbx_25 = (rbx_22 - rcx_36 - r14_4) ^ r14_4 u>> 0xc
    int32_t rcx_39 = (rcx_36 - rbx_25 - r14_4) ^ rbx_25 << 0x10
    int32_t r14_7 = (r14_4 - rcx_39 - rbx_25) ^ rcx_39 u>> 5
    int32_t rbx_28 = (rbx_25 - rcx_39 - r14_7) ^ r14_7 u>> 3
    int32_t rcx_42 = (rcx_39 - rbx_28 - r14_7) ^ rbx_28 << 0xa
    int32_t r14_11 = ((r14_7 - rcx_42 - rbx_28) ^ rcx_42 u>> 0xf) & (*r12 - 1)
    *(rdi_3 + 0x3c) = r14_11
    uint64_t rcx_44 = *(arg1 + 0x40)
    uint64_t rax_76 = arg1 + 0x38
    
    if (rcx_44 != 0)
        rax_76 = rcx_44
    
    rdi_3[7].d = *(rax_76 + (((sx.q(*r12) - 1) & sx.q(r14_11)) << 2))
    uint64_t rcx_45 = *(arg1 + 0x40)
    uint64_t rax_79 = arg1 + 0x38
    
    if (rcx_45 != 0)
        rax_79 = rcx_45
    
    *(rax_79 + (((sx.q(*r12) - 1) & sx.q(r14_11)) << 2)) = r13_1
    var_40_1.d &= not.d(var_50:4.d)
    sub_14059bdd0(&var_50)
    r13_1 = var_40_1:4.d
    
    if (r13_1 s>= *(var_50:8.q + 0x18))
        break
    
    rbx = var_58_1
