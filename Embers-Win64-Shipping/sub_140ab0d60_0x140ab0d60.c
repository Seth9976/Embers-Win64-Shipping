// 函数: sub_140ab0d60
// 地址: 0x140ab0d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t* rdi = *(arg1 + 0x140)
int32_t rdx = 0
void* rsi_2 = &rdi[sx.q(*(arg1 + 0x148)) * 2]
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
void* rax_2 = nullptr
int32_t r9 = 0
int32_t r8 = 0
int32_t var_5c = 0x80
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
void* var_68
int32_t var_60

if (rdi != rsi_2)
    do
        int64_t* rcx = *rdi
        (*(*rcx + 0x18))(rcx, zx.q(arg3), &var_88)
        rdi = &rdi[2]
    while (rdi != rsi_2)
    
    r8 = var_54
    r9 = var_60
    rax_2 = var_68
    int32_t var_80
    rdx = var_80

int32_t rdx_2 = rdx - r8
*arg2 = 0
arg2[1] = 0

if (rdx_2 s> 0)
    sub_14061cd70(arg2, rdx_2)
    r9 = var_60
    rax_2 = var_68

int32_t var_dc = 1
int32_t rcx_2 = 0
int32_t var_e0 = 0
int64_t var_7c
void* var_d8 = &var_7c:4
int32_t r8_2 = 0
int32_t var_d0 = 0xffffffff
int64_t var_cc = 0

if (r9 != 0)
    void* r10_1 = &var_7c:4
    
    if (rax_2 != 0)
        r10_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r9 - 1)
    int32_t rdx_5 = *r10_1
    
    if (rdx_5 != 0)
    label_140ab0eac:
        int32_t rax_9 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_dc_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        int32_t rax_11 = r8_2 - rax_10 + 0x1f
        
        if (rax_11 s> r9)
            rax_11 = r9
        
        var_cc.d = rax_11
    else
        while (true)
            int64_t rax_6 = sx.q(rcx_2)
            r8_2 += 0x20
            rcx_2 += 1
            var_cc:4.d = r8_2
            var_e0 = rcx_2
            
            if (rax_6.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                var_cc.d = r9
                break
            
            rdx_5 = *(r10_1 + (rax_6 << 2) + 4)
            var_d0 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_140ab0eac

double var_b0[0x2] = var_e0.o
int128_t var_a0 = 0xffffffff
var_e0.o = (&var_88).o
int64_t var_c0 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_d0.o = var_b0

if (0 s< r9)
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t rdi_1 = sx.q(arg2[1].d)
        int64_t r14_1 = *var_e0.q
        int32_t rax_13 = (rdi_1 + 1).d
        arg2[1].d = rax_13
        
        if (rax_13 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
        
        sub_140596d10((rdi_1 << 4) + *arg2, r14_1 + sx.q(i) * 0x18)
        var_cc:4.d &= not.d(var_d8:4.d)
        sub_14059bdd0(&var_d8)
        i = i_1
    while (i s< *(var_d0.q + 0x18))

char var_e8
sub_140688010(*arg2, arg2[1].d, var_e8)
int32_t var_40_1 = 0

if (var_48 != 0)
    sub_140a74f90(var_48)

sub_140669e00(&var_88)
__security_check_cookie(rax_1 ^ &var_108)
return arg2
