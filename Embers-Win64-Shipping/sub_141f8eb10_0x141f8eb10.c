// 函数: sub_141f8eb10
// 地址: 0x141f8eb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || *data_143f3c9a0 == 0)
    return 

void* rdi_1 = *(arg1 + 0x28)

if (rdi_1 == 0)
    return 

int64_t* rdi_2 = *(rdi_1 + 0x58)

if (rdi_2 == 0 || (*(*rdi_2 + 0x368))(rdi_2).b != 0)
    return 

int64_t arg_20
sub_140d3a3a0(&arg_20, arg2)
void* rbx_2 = rdi_2[0x2a]
int32_t arg_10
sub_141f87aa0(rbx_2 + 0x50, &arg_10, arg_20)
int32_t* rax = sx.q(arg_10)

if (rax.d == 0xffffffff)
    return 

void* rcx_3 = *(rbx_2 + 0x50) + rax * 0x14

if (rcx_3 == 0)
    return 

int64_t rcx_4 = sx.q(*(rcx_3 + 8))
int32_t arg_18 = rcx_4.d

if (rcx_4.d == 0 || rdi_2[0x99].d == *(rdi_2 + 0x4f4))
    return 

void* r9_1 = &rdi_2[0x9f]
void* rdx_3 = *(r9_1 + 8)

if (rdx_3 != 0)
    r9_1 = rdx_3

rax = zx.q(*(r9_1 + (((sx.q(rdi_2[0xa1].d) - 1) & rcx_4) << 2)))

if (rax.d == 0xffffffff)
    return 

int64_t r9_2 = rdi_2[0x98]
int64_t r8_5

while (true)
    r8_5 = sx.q(rax.d)
    int64_t rdx_5 = r8_5 * 0x60
    
    if (*(rdx_5 + r9_2) == rcx_4.d)
        break
    
    rax = zx.q(*(rdx_5 + r9_2 + 0x58))
    
    if (rax.d == 0xffffffff)
        return 

if (rax.d == 0xffffffff)
    return 

int64_t rax_3 = r8_5 * 0x60

if (rax_3 == neg.q(r9_2) || rax_3 + r9_2 == -8)
    return 

int32_t r10_1 = (rax_3 + r9_2)[0xc]
int32_t var_a4_1 = 1
int32_t rcx_5 = 0
int32_t var_a8 = 0
int32_t r8_6 = 0
int32_t var_98_1 = 0xffffffff
int64_t var_94_1 = 0

if (r10_1 != 0)
    void* rax_4 = *(rax_3 + r9_2 + 0x28)
    void* r9_3 = &(rax_3 + r9_2)[6]
    
    if (rax_4 != 0)
        r9_3 = rax_4
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r10_1 - 1)
    int32_t rdx_8 = *r9_3
    
    if (rdx_8 != 0)
    label_141f8ed09:
        int32_t rax_11 = ((rdx_8 - 1) & rdx_8) ^ rdx_8
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
        int32_t var_a4_2 = rax_11
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_2
        
        var_94_1.d = r8_6 - rax_12 + 0x1f
        
        if (r8_6 - rax_12 + 0x1f s> r10_1)
            var_94_1.d = r10_1
    else
        while (true)
            int64_t rdx_9 = sx.q(rcx_5)
            r8_6 += 0x20
            rcx_5 += 1
            var_94_1:4.d = r8_6
            var_a8 = rcx_5
            
            if (rdx_9.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r9_3 + (rdx_9 << 2) + 4)
            var_98_1 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_141f8ed09
        
        var_94_1.d = r10_1

int32_t rdx_10 = (rax_3 + r9_2)[0xc]
double zmm2[0x2] = var_98_1.o
double var_48_1[0x2] = zmm2
int128_t var_58_1 = var_a8.o
int32_t r12_1 = 0xffffffff << (rdx_10 & 0x1f).b
int32_t r8_9 = rdx_10 s>> 5
int32_t r9_5 = rdx_10 & 0xffffffe0
int64_t var_68_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_98_2 = r12_1
var_94_1.d = rdx_10
int128_t var_88 = (&(rax_3 + r9_2)[2]).o
int128_t var_78_1 = var_58_1

if (rdx_10 != r10_1)
    void* rax_15 = *(rax_3 + r9_2 + 0x28)
    void* r11_1 = &(rax_3 + r9_2)[6]
    
    if (rax_15 != 0)
        r11_1 = rax_15
    
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(r10_1 - 1)
    int32_t rdx_14 = *(r11_1 + (sx.q(r8_9) << 2)) & r12_1
    
    if (rdx_14 != 0)
    label_141f8ede6:
        int32_t rax_21 = ((rdx_14 - 1) & rdx_14) ^ rdx_14
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_21)
        int32_t rbx_3
        
        if (rax_21 == 0)
            rbx_3 = 0x20
        else
            rbx_3 = 0x1f - temp0_4
        
        rax = zx.q(r9_5 - rbx_3 + 0x1f)
        var_94_1.d = rax.d
        
        if (rax.d s> r10_1)
            var_94_1.d = r10_1
    else
        while (true)
            int64_t rcx_9 = sx.q(r8_9)
            r9_5 += 0x20
            r8_9 += 1
            
            if (rcx_9.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                break
            
            rdx_14 = *(r11_1 + (rcx_9 << 2) + 4)
            var_98_2 = 0xffffffff
            
            if (rdx_14 != 0)
                goto label_141f8ede6
        
        var_94_1.d = r10_1

while (true)
    int64_t rdx_15 = sx.q(var_78_1:0xc.d)
    
    if (rdx_15.d != (var_98_2.q u>> 0x20).d || var_78_1.q != &(rax_3 + r9_2)[6])
        rax.b = 0
    else
        rax.b = 1
    
    int64_t* rcx_11 = var_88.q
    
    if (rax.b == 0 || rcx_11 != &(rax_3 + r9_2)[2])
        rax.b = 1
    else
        rax.b = 0
    
    if (rax.b == 0)
        break
    
    void* rbx_4 = *(*rcx_11 + rdx_15 * 0x10)
    
    if (sub_141fbd400(rbx_4, &arg_18) == 0)
        sub_1408296b0(&rdi_2[0xa3], &arg_20, rbx_4)
    else
        sub_140b9b5d0(&rdi_2[0xa3], &var_a8)
        uint32_t rdx_19 = (rbx_4 u>> 4).d
        *(rax_3 + r9_2 + 0x18) = rbx_4
        (rax_3 + r9_2)[8] = 0xffffffff
        int32_t r10_3 = (0x9e3779b9 - rdx_19) ^ rdx_19 << 8
        int32_t r8_12 = neg.d(r10_3 + rdx_19) ^ r10_3 u>> 0xd
        int32_t rdx_22 = (rdx_19 - r10_3 - r8_12) ^ r8_12 u>> 0xc
        int32_t r10_6 = (r10_3 - rdx_22 - r8_12) ^ rdx_22 << 0x10
        int32_t r8_15 = (r8_12 - r10_6 - rdx_22) ^ r10_6 u>> 5
        int32_t rdx_25 = (rdx_22 - r10_6 - r8_15) ^ r8_15 u>> 3
        int32_t r10_9 = (r10_6 - rdx_25 - r8_15) ^ rdx_25 << 0xa
        sub_140824480(&rdi_2[0xa3], &arg_10, (r8_15 - r10_9 - rdx_25) ^ r10_9 u>> 0xf, 
            &(rax_3 + r9_2)[6], var_a8, nullptr)
    
    var_78_1:8.d &= not.d(var_88:0xc.d)
    sub_14059bdd0(&var_88:8)
