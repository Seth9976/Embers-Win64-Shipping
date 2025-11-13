// 函数: sub_142394540
// 地址: 0x142394540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1
int64_t rcx = arg1[8]

if (rcx != 0)
    rbx[8] = sub_140a84c80(rcx, 0, 0)

int32_t i_2 = rbx[9].d
void* r15 = &rbx[9]

if (i_2 == 0)
    return 

sub_1405a4aa0(&arg1[7], 0, i_2, 4)

if (i_2 s> 0)
    int64_t r8_2 = 0
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        void* rcx_2 = arg1[8]
        void* rax_1 = &arg1[7]
        int64_t rdx_3 = (sx.q(*r15) - 1) & r8_2
        
        if (rcx_2 != 0)
            rax_1 = rcx_2
        
        r8_2 += 1
        *(rax_1 + (rdx_3 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t r10_1 = rbx[5].d
void* r9_1 = &rbx[2]
int32_t var_74_1 = 1
int32_t rcx_3 = 0
int32_t var_78_1 = 0
int32_t r8_3 = 0
void* var_70_1 = r9_1
int32_t var_68_1 = 0xffffffff
int64_t var_64_1 = 0

if (r10_1 != 0)
    void* rax_2 = *(r9_1 + 0x10)
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10_1 - 1)
    int32_t rdx_6 = *r9_1
    
    if (rdx_6 != 0)
    label_142394658:
        int32_t rax_9 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_74_2 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_64_1.d = r8_3 - rax_10 + 0x1f
        
        if (r8_3 - rax_10 + 0x1f s> r10_1)
            var_64_1.d = r10_1
    else
        while (true)
            int64_t rdx_7 = sx.q(rcx_3)
            r8_3 += 0x20
            rcx_3 += 1
            var_64_1:4.d = r8_3
            var_78_1 = rcx_3
            
            if (rdx_7.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r9_1 + (rdx_7 << 2) + 4)
            int32_t var_68_2 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_142394658
        
        var_64_1.d = r10_1

int64_t* var_58_1 = rbx
int128_t var_50 = var_78_1.o
int64_t var_40_1 = 0xffffffff

if (0 s>= r10_1)
    return 

int32_t r12_1 = 0

while (true)
    int64_t rcx_5 = sx.q(r12_1) * 5
    int64_t rax_13 = *rbx
    int64_t rdi = *(rax_13 + (rcx_5 << 3))
    void* r14_1 = rax_13 + (rcx_5 << 3)
    int32_t rbx_1 = (rdi u>> 0x20).d + sub_140b5ead0(rdi.d)
    int32_t rdx_10 = rbx_1 u>> 0xd ^ neg.d(rbx_1)
    int32_t rcx_9 = (0x9e3779b9 - rdx_10 - rbx_1) ^ rdx_10 << 8
    int32_t rbx_4 = (rbx_1 - rcx_9 - rdx_10) ^ rcx_9 u>> 0xd
    int32_t rdx_13 = (rdx_10 - rcx_9 - rbx_4) ^ rbx_4 u>> 0xc
    int32_t rcx_12 = (rcx_9 - rdx_13 - rbx_4) ^ rdx_13 << 0x10
    int32_t rbx_7 = (rbx_4 - rcx_12 - rdx_13) ^ rcx_12 u>> 5
    int32_t rdx_16 = (rdx_13 - rcx_12 - rbx_7) ^ rbx_7 u>> 3
    int32_t rcx_15 = (rcx_12 - rdx_16 - rbx_7) ^ rdx_16 << 0xa
    int32_t rax_31 = *(r14_1 + 0x10)
    int16_t* rdx_17
    
    if (rax_31 == 0)
        rdx_17 = &data_142d40450
    else
        rdx_17 = *(r14_1 + 8)
    
    int32_t rcx_17 = rax_31 - 1
    
    if (rax_31 == 0)
        rcx_17 = 0
    
    int32_t rax_32 = sub_1405969c0(rcx_17, rdx_17)
    int32_t rbx_12 = (((rbx_7 - rcx_15 - rdx_16) ^ rcx_15 u>> 0xf) - rax_32) ^ rax_32 u>> 0xd
    int32_t rdx_20 = (0x9e3779b9 - rbx_12 - rax_32) ^ rbx_12 << 8
    int32_t r8_8 = (rax_32 - rdx_20 - rbx_12) ^ rdx_20 u>> 0xd
    int32_t rbx_15 = (rbx_12 - rdx_20 - r8_8) ^ r8_8 u>> 0xc
    int32_t rdx_23 = (rdx_20 - rbx_15 - r8_8) ^ rbx_15 << 0x10
    int32_t r8_11 = (r8_8 - rdx_23 - rbx_15) ^ rdx_23 u>> 5
    int32_t rbx_18 = (rbx_15 - rdx_23 - r8_11) ^ r8_11 u>> 3
    int32_t rdx_26 = (rdx_23 - rbx_18 - r8_11) ^ rbx_18 << 0xa
    int32_t r8_15 = ((r8_11 - rdx_26 - rbx_18) ^ rdx_26 u>> 0xf) & (*r15 - 1)
    void* rax_47 = &arg1[7]
    *(r14_1 + 0x24) = r8_15
    void* rdx_28 = arg1[8]
    int64_t r8_16 = sx.q(r8_15)
    
    if (rdx_28 != 0)
        rax_47 = rdx_28
    
    *(r14_1 + 0x20) = *(rax_47 + (((sx.q(*r15) - 1) & r8_16) << 2))
    void* rax_49 = &arg1[7]
    void* rcx_25 = arg1[8]
    
    if (rcx_25 != 0)
        rax_49 = rcx_25
    
    *(rax_49 + (((sx.q(*r15) - 1) & r8_16) << 2)) = r12_1
    var_40_1.d &= not.d(var_50:4.d)
    sub_14059bdd0(&var_50)
    r12_1 = var_40_1:4.d
    
    if (r12_1 s>= *(var_50:8.q + 0x18))
        break
    
    rbx = var_58_1
