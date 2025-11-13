// 函数: sub_1425bd8a0
// 地址: 0x1425bd8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int32_t r10 = arg1[5].d
void* rsi = &arg1[2]
int32_t r12 = 0
int32_t rcx = 0
int32_t r13 = 1
int64_t i_3 = sx.q(arg2[1].d)
int32_t r8 = 0
int32_t var_80 = 0
int32_t var_98 = 0
int32_t var_94 = 1
void* var_90 = rsi
int32_t var_88 = 0xffffffff
int32_t var_84 = 0

if (r10 != 0)
    void* rax_1 = *(rsi + 0x10)
    void* r9_1 = rsi
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_2 = *r9_1
    int32_t var_84_2
    
    if (rdx_2 != 0)
    label_1425bd968:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_84_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r10)
            var_84_2 = r10
    else
        while (true)
            int64_t rdx_3 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            int32_t var_80_1 = rcx
            var_98 = r8
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1425bd968
        
        var_84_2 = r10

int64_t* rdx_5 = arg1
int64_t* var_78 = rdx_5
int128_t var_70 = var_98.o
int32_t var_60 = -1

if (0 s< r10)
    int32_t var_5c
    int32_t rcx_2 = var_5c
    
    while (true)
        int64_t rcx_3 = sx.q(rcx_2) * 9
        int64_t rax_12 = *rdx_5
        void* rbx_1 = rax_12 + (rcx_3 << 3)
        int64_t rcx_4 = *(rax_12 + (rcx_3 << 3) + 0x28)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        int64_t rcx_5 = *(rbx_1 + 0x18)
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        int64_t rcx_6 = *(rbx_1 + 8)
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        var_60 &= not.d(var_70:4.d)
        sub_14059bdd0(&var_70)
        rcx_2 = var_5c
        
        if (rcx_2 s>= *(var_70:8.q + 0x18))
            break
        
        rdx_5 = var_78

arg1[1].d = 0

if (*(arg1 + 0xc) != i_3.d)
    sub_140775c70(arg1, i_3.d)

arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
sub_14059a8e0(rsi, i_3.d)
int32_t rax_16 = arg1[1].d + i_3.d
arg1[1].d = rax_16

if (rax_16 s> *(arg1 + 0xc))
    sub_140775520(arg1)

void* rdx_9 = &arg2[2]
arg1[6].d = arg2[6].d
*(arg1 + 0x34) = *(arg2 + 0x34)
void* arg_20 = rdx_9

if (rsi != rdx_9)
    sub_14059a8e0(rsi, *(rdx_9 + 0x18))
    int32_t rax_19 = arg2[5].d
    rdx_9 = &arg2[2]
    *(rsi + 0x18) = rax_19
    
    if (rax_19 != 0)
        void* rcx_12 = *(rdx_9 + 0x10)
        void* r9_2 = *(rsi + 0x10)
        
        if (rcx_12 != 0)
            rdx_9 = rcx_12
        
        if (r9_2 != 0)
            rsi = r9_2
        
        memcpy(rsi, rdx_9, (zx.q(rax_19 + 0x1f) u>> 5 << 2).d)
        rdx_9 = &arg2[2]

void* rax_20 = *arg1
int64_t i_1 = i_3
int64_t i_2 = i_3

if (i_3.d s<= 0)
    return arg1

void* rcx_15 = *arg2 - rax_20
int32_t* rbx_2 = rax_20 + 0x20
int64_t i

do
    void* rax_21 = *(rdx_9 + 0x10)
    void* rcx_16 = rdx_9
    
    if (rax_21 != 0)
        rcx_16 = rax_21
    
    int32_t rax_22 = r12
    
    if (r12 s< 0)
        rax_22 = r12 + 0x1f
    
    if ((*(rcx_16 + (sx.q(rax_22 s>> 5) << 2)) & r13) == 0)
        rbx_2[-8] = *(rcx_15 + rbx_2 - 0x20)
        rbx_2[-7] = *(rcx_15 + rbx_2 - 0x1c)
    else
        *(rbx_2 - 0x20) = *(rcx_15 + rbx_2 - 0x20)
        *(rbx_2 - 0x18) = 0
        int64_t rsi_1 = sx.q(*(rcx_15 + rbx_2 - 0x10))
        int64_t r15 = *(rcx_15 + rbx_2 - 0x18)
        rbx_2[-4] = rsi_1.d
        
        if (rsi_1.d != 0)
            sub_1405a4be0(&rbx_2[-6], rsi_1.d, 0)
            memcpy(*(rbx_2 - 0x18), r15, (rsi_1 << 4).d)
        else
            rbx_2[-3] = 0
        
        *(rbx_2 - 8) = 0
        int64_t rsi_2 = sx.q(*(rcx_15 + rbx_2))
        int64_t r15_1 = *(rcx_15 + rbx_2 - 8)
        *rbx_2 = rsi_2.d
        
        if (rsi_2.d != 0)
            sub_1405c4a00(&rbx_2[-2], rsi_2.d, 0)
            memcpy(*(rbx_2 - 8), r15_1, (rsi_2 << 3).d)
        else
            rbx_2[1] = 0
        
        *(rbx_2 + 8) = 0
        int64_t rsi_3 = sx.q(*(rcx_15 + rbx_2 + 0x10))
        int64_t r15_2 = *(rcx_15 + rbx_2 + 8)
        rbx_2[4] = rsi_3.d
        
        if (rsi_3.d != 0)
            sub_1405c4a00(&rbx_2[2], rsi_3.d, 0)
            memcpy(*(rbx_2 + 8), r15_2, (rsi_3 << 3).d)
        else
            rbx_2[5] = 0
        
        rdx_9 = arg_20
        i_1 = i_2
        rbx_2[6] = *(rcx_15 + rbx_2 + 0x18)
        rbx_2[8] = *(rcx_15 + rbx_2 + 0x20)
        rbx_2[9] = *(rcx_15 + rbx_2 + 0x24)
    
    r12 += 1
    r13 = rol.d(r13, 1)
    rbx_2 = &rbx_2[0x12]
    i = i_1
    i_1 -= 1
    i_2 = i_1
while (i != 1)
return arg1
