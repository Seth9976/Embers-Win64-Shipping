// 函数: sub_1407733d0
// 地址: 0x1407733d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1
int64_t rcx = arg1[8]

if (rcx != 0)
    arg1[8] = sub_140a84c80(rcx, 0, 0)

int32_t i_2 = rbx[9].d
void* r12 = &rbx[9]

if (i_2 == 0)
    return 

sub_1405a4aa0(&arg1[7], 0, i_2, 4)
uint64_t rax

if (i_2 s> 0)
    int64_t r8_2 = 0
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        uint64_t rcx_2 = arg1[8]
        rax = &arg1[7]
        int64_t rdx_3 = (sx.q(*r12) - 1) & r8_2
        
        if (rcx_2 != 0)
            rax = rcx_2
        
        r8_2 += 1
        *(rax + (rdx_3 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t rdi = rbx[5].d
void* r9_1 = &rbx[2]
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
    label_1407734d9:
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
                goto label_1407734d9

int64_t* var_58_1 = rbx
int128_t var_50 = var_78_1.o
int64_t var_40_1 = 0xffffffff

if (r10_1 s>= rdi)
    return 

int32_t r13_1 = 0

while (true)
    int64_t rdx_8 = *rbx
    int64_t rcx_5 = sx.q(r13_1) * 9
    int64_t rbx_1 = *(rdx_8 + (rcx_5 << 3))
    void* rsi_1 = rdx_8 + (rcx_5 << 3)
    int32_t rax_10 = sub_140b5ead0(rbx_1.d)
    int16_t r8_5 = *(rsi_1 + 0x10)
    int32_t r14_1 = (rbx_1 u>> 0x20).d + rax_10
    int64_t rcx_7
    
    if (r8_5 != 3)
        rcx_7 = 0
    else
        rcx_7 = *(rsi_1 + 8)
    
    uint32_t rcx_8 = (rcx_7 u>> 4).d
    int32_t rdx_10 = (0x9e3779b9 - rcx_8) ^ rcx_8 << 8
    int32_t rbx_5 = neg.d(rdx_10 + rcx_8) ^ rdx_10 u>> 0xd
    int32_t rcx_11 = (rcx_8 - rdx_10 - rbx_5) ^ rbx_5 u>> 0xc
    int32_t rdx_13 = (rdx_10 - rcx_11 - rbx_5) ^ rcx_11 << 0x10
    int32_t rbx_8 = (rbx_5 - rdx_13 - rcx_11) ^ rdx_13 u>> 5
    int32_t rcx_14 = (rcx_11 - rdx_13 - rbx_8) ^ rbx_8 u>> 3
    int32_t rdx_16 = (rdx_13 - rcx_14 - rbx_8) ^ rcx_14 << 0xa
    int32_t rbx_11 = (rbx_8 - rdx_16 - rcx_14) ^ rdx_16 u>> 0xf
    void* const rdi_1
    
    if (r8_5 != 3)
        rdi_1 = *(rsi_1 + 8)
        void* rax_25
        int64_t rax_26
        void* rdx_18
        
        if (rdi_1 != 0)
            rax_25 = sub_140be01c0()
            rdx_18 = *(rdi_1 + 0x10)
            rax_26 = sx.q(*(rax_25 + 0x38))
        
        if (rdi_1 == 0 || rax_26.d s> *(rdx_18 + 0x38)
                || *(*(rdx_18 + 0x30) + (rax_26 << 3)) != rax_25 + 0x30)
            rdi_1 = nullptr
    else
        rdi_1 = data_143ce3880
    
    uint32_t rdi_2 = (rdi_1 u>> 4).d
    int32_t rcx_17 = (0x9e3779b9 - rdi_2) ^ rdi_2 << 8
    int32_t rdx_21 = neg.d(rcx_17 + rdi_2) ^ rcx_17 u>> 0xd
    int32_t rdi_5 = (rdi_2 - rcx_17 - rdx_21) ^ rdx_21 u>> 0xc
    int32_t rcx_20 = (rcx_17 - rdi_5 - rdx_21) ^ rdi_5 << 0x10
    int32_t rdx_24 = (rdx_21 - rcx_20 - rdi_5) ^ rcx_20 u>> 5
    int32_t rdi_8 = (rdi_5 - rcx_20 - rdx_24) ^ rdx_24 u>> 3
    int32_t rcx_23 = (rcx_20 - rdi_8 - rdx_24) ^ rdi_8 << 0xa
    int32_t rdx_29 = (((rdx_24 - rcx_23 - rdi_8) ^ rcx_23 u>> 0xf) - rbx_11) ^ rbx_11 u>> 0xd
    int32_t rcx_27 = (0x9e3779b9 - rbx_11 - rdx_29) ^ rdx_29 << 8
    int32_t rbx_14 = (rbx_11 - rcx_27 - rdx_29) ^ rcx_27 u>> 0xd
    int32_t rdx_32 = (rdx_29 - rcx_27 - rbx_14) ^ rbx_14 u>> 0xc
    int32_t rcx_30 = (rcx_27 - rdx_32 - rbx_14) ^ rdx_32 << 0x10
    int32_t rbx_17 = (rbx_14 - rcx_30 - rdx_32) ^ rcx_30 u>> 5
    int32_t rdx_35 = (rdx_32 - rcx_30 - rbx_17) ^ rbx_17 u>> 3
    int32_t rcx_33 = (rcx_30 - rdx_35 - rbx_17) ^ rdx_35 << 0xa
    int32_t rbx_22 = (((rbx_17 - rcx_33 - rdx_35) ^ rcx_33 u>> 0xf) - r14_1) ^ r14_1 u>> 0xd
    int32_t rcx_37 = (0x9e3779b9 - rbx_22 - r14_1) ^ rbx_22 << 8
    int32_t r14_4 = (r14_1 - rcx_37 - rbx_22) ^ rcx_37 u>> 0xd
    int32_t rbx_25 = (rbx_22 - rcx_37 - r14_4) ^ r14_4 u>> 0xc
    int32_t rcx_40 = (rcx_37 - rbx_25 - r14_4) ^ rbx_25 << 0x10
    int32_t r14_7 = (r14_4 - rcx_40 - rbx_25) ^ rcx_40 u>> 5
    int32_t rbx_28 = (rbx_25 - rcx_40 - r14_7) ^ r14_7 u>> 3
    int32_t rcx_43 = (rcx_40 - rbx_28 - r14_7) ^ rbx_28 << 0xa
    int32_t r14_11 = ((r14_7 - rcx_43 - rbx_28) ^ rcx_43 u>> 0xf) & (*r12 - 1)
    *(rsi_1 + 0x44) = r14_11
    uint64_t rcx_45 = arg1[8]
    uint64_t rax_77 = &arg1[7]
    
    if (rcx_45 != 0)
        rax_77 = rcx_45
    
    *(rsi_1 + 0x40) = *(rax_77 + (((sx.q(*r12) - 1) & sx.q(r14_11)) << 2))
    uint64_t rcx_46 = arg1[8]
    uint64_t rax_80 = &arg1[7]
    
    if (rcx_46 != 0)
        rax_80 = rcx_46
    
    *(rax_80 + (((sx.q(*r12) - 1) & sx.q(r14_11)) << 2)) = r13_1
    var_40_1.d &= not.d(var_50:4.d)
    sub_14059bdd0(&var_50)
    r13_1 = var_40_1:4.d
    
    if (r13_1 s>= *(var_50:8.q + 0x18))
        break
    
    rbx = var_58_1
