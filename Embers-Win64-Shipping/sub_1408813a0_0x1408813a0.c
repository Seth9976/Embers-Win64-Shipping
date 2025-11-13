// 函数: sub_1408813a0
// 地址: 0x1408813a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int32_t r9 = arg1[5].d
int32_t i_2 = arg2[1].d
int32_t rsi = 0
int32_t r8 = 0
int32_t r14 = 1
void* r15 = &arg1[2]
int32_t rcx = 0
int32_t var_78 = 0
int32_t var_74 = 1
void* var_70 = r15
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int32_t var_60 = 0

if (r9 != 0)
    void* rax_1 = *(r15 + 0x10)
    void* r10_1 = r15
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9 - 1)
    int32_t rdx_2 = *r10_1
    int32_t var_64_2
    
    if (rdx_2 != 0)
    label_140881458:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_74_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_64_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r9)
            var_64_2 = r9
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            int32_t var_60_1 = rcx
            var_78 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r10_1 + (rdx_3 << 2) + 4)
            int32_t var_68_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140881458
        
        var_64_2 = r9

int64_t* rdx_5 = arg1
int64_t* var_58 = rdx_5
int128_t var_50 = var_78.o
int64_t var_40 = 0xffffffff

if (0 s< r9)
    int32_t rcx_2 = 0
    
    while (true)
        void* rbx_1 = sx.q(rcx_2) * 0x58 + *rdx_5
        int64_t rcx_3 = *(rbx_1 + 0x40)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int64_t rcx_4 = *(rbx_1 + 0x18)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        var_40.d &= not.d(var_50:4.d)
        sub_14059bdd0(&var_50)
        rcx_2 = var_40:4.d
        
        if (rcx_2 s>= *(var_50:8.q + 0x18))
            break
        
        rdx_5 = var_58

arg1[1].d = 0

if (*(arg1 + 0xc) != i_2)
    sub_140775cf0(arg1, i_2)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
sub_14059a8e0(r15, i_2)
int32_t rax_15 = arg1[1].d + i_2
arg1[1].d = rax_15

if (rax_15 s> *(arg1 + 0xc))
    sub_1407755b0(arg1)

arg1[6].d = arg2[6].d
*(arg1 + 0x34) = *(arg2 + 0x34)

if (r15 != &arg2[2])
    sub_14059a8e0(r15, arg2[5].d)
    int32_t rax_18 = arg2[5].d
    *(r15 + 0x18) = rax_18
    
    if (rax_18 != 0)
        void* rcx_10 = arg2[4]
        void* r9_1 = *(r15 + 0x10)
        void* rdx_10 = &arg2[2]
        
        if (rcx_10 != 0)
            rdx_10 = rcx_10
        
        if (r9_1 != 0)
            r15 = r9_1
        
        memcpy(r15, rdx_10, (zx.q(rax_18 + 0x1f) u>> 5 << 2).d)

void* rax_19 = *arg1
int64_t i_1 = sx.q(i_2)

if (i_2 s> 0)
    void* rbx_2 = rax_19 + 0x28
    void* r12_2 = *arg2 - rax_19
    int64_t i
    
    do
        void* rax_20 = arg2[4]
        int64_t* rdx_12 = r12_2 - 0x28 + rbx_2
        void* r8_4 = &arg2[2]
        
        if (rax_20 != 0)
            r8_4 = rax_20
        
        int32_t rax_21 = rsi
        
        if (rsi s< 0)
            rax_21 = rsi + 0x1f
        
        if ((*(r8_4 + (sx.q(rax_21 s>> 5) << 2)) & r14) == 0)
            *(rbx_2 - 0x28) = *rdx_12
            *(rbx_2 - 0x24) = *(r12_2 + rbx_2 - 0x24)
        else
            sub_140745220(rbx_2 - 0x28, rdx_12)
            sub_140745220(rbx_2, r12_2 + rbx_2)
            *(rbx_2 + 0x28) = *(r12_2 + rbx_2 + 0x28)
            *(rbx_2 + 0x2c) = *(r12_2 + rbx_2 + 0x2c)
        
        rsi += 1
        r14 = rol.d(r14, 1)
        rbx_2 += 0x58
        i = i_1
        i_1 -= 1
    while (i != 1)

return arg1
