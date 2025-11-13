// 函数: sub_140ed5fb0
// 地址: 0x140ed5fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405d9400()
sub_14065da90(arg1 + 0x478, &data_143cd6fd8)
int32_t var_b4 = 1
int32_t var_b8 = 0
int32_t r10 = *(arg1 + 0x430)
void* r9 = arg1 + 0x418
void* var_b0 = r9
int32_t rcx_1 = 0
int32_t var_a8 = 0xffffffff
int32_t r8 = 0
int32_t var_a4 = 0
int32_t var_a0 = 0

if (r10 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9
    int32_t var_a4_2
    
    if (rdx_3 != 0)
    label_140ed6068:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_b4_1 = rax_8
        int32_t arg_8 = temp0_1
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_1
        
        int32_t var_a4_1 = rcx_1 - rax_9 + 0x1f
        
        if (rcx_1 - rax_9 + 0x1f s> r10)
            var_a4_2 = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx_1 += 0x20
            r8 += 1
            int32_t var_a0_1 = rcx_1
            var_b8 = r8
            
            if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            int32_t var_a8_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140ed6068
        
        var_a4_2 = r10

void* var_40 = arg1 + 0x408
int128_t var_28 = 0xffffffff
double var_38[0x2] = var_b8.o
double var_98[0x2] = var_40.o
double result = nullptr
int64_t var_78 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q

if (0 s< r10)
    int32_t i = var_38[1]:4.d
    
    do
        int64_t* rcx_4 = *(*var_98[0] + sx.q(i) * 0x30)
        char var_70 = data_1439ae51c
        char var_6f_1 = 1
        int64_t var_68_1 = 0
        int32_t var_60_1 = 0
        (*(*rcx_4 + 0x1d8))(rcx_4, &var_70)
        var_38[1].d &= not.d(var_98[1]:4.d)
        sub_14059bdd0(&var_98[1])
        result = var_38[0]
        i = var_38[1]:4.d
    while (i s< *(result i+ 0x18))

if (*(arg1 + 0x458) == 0 || *(arg1 + 0x468) == 0)
    return result

int64_t var_c8 = 0
int32_t var_c0_1 = 0
sub_1405947f0(&var_c8, 0xa)
int32_t rax_17 = var_c0_1 + 0xa
var_c0_1 = rax_17

if (rax_17 s> 0)
    sub_140594770(&var_c8)

sub_1405a7220(var_c8, 0xa, "No Search", 0xa, 0x3f)
sub_140f8d4f0(*(arg1 + 0x458), sub_140aae2f0(&var_40, &var_c8))
double rbx_2 = var_38[0]

if (rbx_2 != 0)
    int32_t rax_19 = *(rbx_2 i+ 8)
    *(rbx_2 i+ 8) -= 1
    
    if (rax_19 == 1)
        (**rbx_2)(rbx_2)
        int32_t rdi_1 = *(rbx_2 i+ 0xc)
        *(rbx_2 i+ 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))

int64_t rcx_13 = var_c8

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int64_t* rcx_14 = *(arg1 + 0x468)
char var_58 = data_1439ae51d
char var_57_1 = 1
int64_t var_50_1 = 0
int32_t var_48_1 = 0
return (*(*rcx_14 + 0x1d8))(rcx_14, &var_58)
