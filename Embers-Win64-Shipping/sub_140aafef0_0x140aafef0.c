// 函数: sub_140aafef0
// 地址: 0x140aafef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void var_b0
int64_t* rax_2 = sub_140ab1ed0(arg1 + 0x10, &var_b0)
int64_t* rcx_1 = *rax_2
int64_t* rax_3 = (*(*rcx_1 + 0x28))(rcx_1)
int64_t r9_1 = *rax_3
(*(r9_1 + 0x58))(rax_3, rax_2, arg3, r9_1)
int64_t* var_a8

if (var_a8 != 0)
    var_a8[1].d -= 1
    
    if (var_a8[1].d == 1)
        (**var_a8)(var_a8)
        int32_t rax_6 = *(var_a8 + 0xc)
        *(var_a8 + 0xc) -= 1
        
        if (rax_6 == 1)
            (*(*var_a8 + 8))(var_a8, 1)

int32_t var_124 = 1
int32_t var_118 = 0xffffffff
int32_t r10 = *(arg1 + 0x48)
void* r9_2 = arg1 + 0x30
void* var_120 = r9_2
int32_t rcx_5 = 0
int32_t var_128 = 0
int32_t r8_1 = 0
int64_t var_114 = 0

if (r10 != 0)
    void* rax_8 = *(r9_2 + 0x10)
    
    if (rax_8 != 0)
        r9_2 = rax_8
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r10 - 1)
    int32_t rdx_4 = *r9_2
    
    if (rdx_4 != 0)
    label_140ab000c:
        int32_t rax_15 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_3
        temp0_3, rflags_1 = _bit_scan_reverse(rax_15)
        int32_t var_124_1 = rax_15
        int32_t var_e0_1 = temp0_3
        int32_t rax_16
        
        if (rax_15 == 0)
            rax_16 = 0x20
        else
            rax_16 = 0x1f - temp0_3
        
        var_114.d = r8_1 - rax_16 + 0x1f
        
        if (r8_1 - rax_16 + 0x1f s> r10)
            var_114.d = r10
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_5)
            r8_1 += 0x20
            rcx_5 += 1
            var_114:4.d = r8_1
            var_128 = rcx_5
            
            if (rdx_5.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = *(r9_2 + (rdx_5 << 2) + 4)
            var_118 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_140ab000c
        
        var_114.d = r10

int128_t var_c0 = 0xffffffff
int128_t var_d0 = var_128.o
int128_t var_108 = (arg1 + 0x20).o
int64_t var_e8 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
int128_t var_f8 = var_d0

if (0 s< r10)
    int32_t i = var_f8:0xc.d
    
    do
        int64_t rdx_6 = sx.q(i) * 9
        int64_t rcx_7 = *var_108.q
        
        if (*(rcx_7 + (rdx_6 << 3) + 0x10) == 4)
            int64_t* rcx_8 = *(rcx_7 + (rdx_6 << 3) + 0x20)
            int64_t* rax_21 = (*(*rcx_8 + 0x28))(rcx_8)
            int64_t r9_3 = *rax_21
            (*(r9_3 + 0x58))(rax_21, rcx_7 + (rdx_6 << 3) + 0x20, arg3, r9_3, var_128, var_120, 
                var_118)
        
        var_f8:8.d &= not.d(var_108:0xc.d)
        sub_14059bdd0(&var_108:8)
        i = var_f8:0xc.d
    while (i s< *(var_f8.q + 0x18))

int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
sub_140a998a0(&var_98, arg1 + 0x20)
int64_t* rbx_3 = *(arg1 + 0x18)
int64_t r15 = *(arg1 + 0x10)

if (rbx_3 != 0)
    rbx_3[1].d += 1

int64_t r14_2 = sx.q(arg3[1].d)
int32_t rax_25 = (r14_2 + 1).d
arg3[1].d = rax_25

if (rax_25 s> *(arg3 + 0xc))
    sub_1407c3920(arg3)

int64_t* rcx_14 = r14_2 * 0x78 + *arg3
int64_t* rdi_1 = arg2[1]

if (rdi_1 != 0)
    rdi_1[1].d += 1

int32_t rax_26 = arg2[2].d
*rcx_14 = *arg2
rcx_14[1] = rdi_1

if (rdi_1 != 0)
    rdi_1[1].d += 1

rcx_14[2].d = rax_26
rcx_14[3] = r15
rcx_14[4] = rbx_3

if (rbx_3 != 0)
    rbx_3[1].d += 1

sub_140a954b0(&rcx_14[5], &var_98)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rax_29 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rax_29 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t rsi_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, zx.q(rsi_1))

int32_t var_50_1 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t result = sub_140aa9190(&var_98, 0)
int64_t var_78

if (var_78 != 0)
    result = sub_140a74f90(var_78)

int64_t rcx_23 = var_98

if (rcx_23 != 0)
    result = sub_140a74f90(rcx_23)

__security_check_cookie(rax_1 ^ &var_148)
return result
