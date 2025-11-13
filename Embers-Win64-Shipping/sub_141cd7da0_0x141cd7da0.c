// 函数: sub_141cd7da0
// 地址: 0x141cd7da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t rdx_1 = arg1[1].d - *(arg1 + 0x34)
int64_t* var_a0
__builtin_memset(&var_a0, 0, 0x2c)
int32_t var_74 = 0x80
int32_t var_70 = 0xffffffff
int32_t var_6c = 0
sub_1409d93a0(&var_a0, rdx_1)
int32_t rbx = arg1[1].d
arg2[1].d = 0

if (*(arg2 + 0xc) != rbx)
    sub_1405c5570(arg2, rbx)

arg2[6].d = 0xffffffff
*(arg2 + 0x34) = 0
sub_14059a8e0(&arg2[2], rbx)
int64_t* var_d8
sub_1407453e0(&var_d8, arg1)
int128_t var_d0
void* var_c8
int32_t i_1
int64_t var_98_1
int64_t var_90
int64_t* var_80
int32_t var_78_1

for (int32_t i = i_1; i s< *(var_c8 + 0x18); i = i_1)
    int32_t rax_3 = data_143a1c6b4
    int32_t var_64_1 = rax_3
    int64_t rbx_1
    
    if (var_6c == 0)
        rbx_1 = zx.q(var_98_1.d)
        int32_t rax_5 = (rbx_1 + 1).d
        var_98_1.d = rax_5
        
        if (rax_5 s> var_98_1:4.d)
            sub_1405a4df0(&var_a0)
        
        int32_t rdi_1 = var_78_1
        sub_1405a4980(&var_90, rdi_1 + 1)
        int64_t* rcx_8 = &var_90
        var_78_1 += 1
        
        if (var_80 != 0)
            rcx_8 = var_80
        
        int32_t rax_7 = rdi_1
        
        if (rdi_1 s< 0)
            rax_7 = rdi_1 + 0x1f
        
        void* rdx_9 = rcx_8 + (sx.q(rax_7 s>> 5) << 2)
        *rdx_9 &= not.d(1 << (rdi_1.b & 0x1f))
    else
        rbx_1 = sx.q(var_70)
        bool cond:0_1 = var_6c == 1
        int64_t* r8_1 = var_a0
        int64_t rax_4 = sx.q(*(&r8_1[rbx_1 * 3] + 4))
        var_70 = rax_4.d
        var_6c -= 1
        
        if (not(cond:0_1))
            r8_1[rax_4 * 3].d = 0xffffffff
    
    int64_t* rcx_10 = &var_90
    
    if (var_80 != 0)
        rcx_10 = var_80
    
    int32_t rax_13 = rbx_1.d
    
    if (rbx_1.d s< 0)
        rax_13 = (rbx_1 + 0x1f).d
    
    void* r8_2 = rcx_10 + (sx.q(rax_13 s>> 5) << 2)
    *r8_2 |= 1 << (rbx_1.b & 0x1f)
    int64_t* rcx_14 = var_a0
    rcx_14[sx.q(rbx_1.d) * 3] = rax_3.q
    int64_t* rax_18 = var_d8
    rcx_14[sx.q(rbx_1.d) * 3 + 1] = 0
    rcx_14[sx.q(rbx_1.d) * 3 + 2] = 0
    int64_t rdx_11 = *rax_18
    int64_t rcx_15 = sx.q(i) * 3
    void* r8_3 = rdx_11 + (rcx_15 << 3)
    int64_t* rcx_16 = var_a0
    rcx_16[sx.q(rbx_1.d) * 3].d = *(rdx_11 + (rcx_15 << 3))
    void* rsi_2 = &rcx_16[1 + sx.q(rbx_1.d) * 3]
    *(&rcx_16[sx.q(rbx_1.d) * 3] + 4) = *(r8_3 + 4)
    
    if (rsi_2 != r8_3 + 8)
        int64_t rcx_17 = *rsi_2
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        *rsi_2 = *(r8_3 + 8)
        *(r8_3 + 8) = 0
        *(rsi_2 + 8) = *(r8_3 + 0x10)
        *(rsi_2 + 0xc) = *(r8_3 + 0x14)
        *(r8_3 + 0x10) = 0
    
    int32_t var_b0[0x4]
    int32_t* rcx_19 = *(sub_1409ca6e0(arg2, &var_b0, i) + 8)
    
    if (rcx_19 != 0)
        *rcx_19 = rbx_1.d
    
    int32_t var_c0 = var_c0 & not.d(var_d0:4.d)
    sub_14059bdd0(&var_d0)

sub_1409ac1f0(arg1, &var_a0)
int32_t rcx_22 = 0
int32_t r8_5 = 0
int64_t* var_60 = &var_90
int32_t rax_29 = 0
int32_t var_54 = 0
int32_t var_68_2 = 0
int32_t var_64_2 = 1
int32_t var_58 = 0xffffffff
int32_t var_50 = 0

if (var_78_1 != 0)
    int64_t* r9_2 = &var_90
    
    if (var_80 != 0)
        r9_2 = var_80
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(var_78_1 - 1)
    int32_t rdx_16 = *r9_2
    
    if (rdx_16 != 0)
    label_141cd80b8:
        int32_t rax_37 = neg.d(rdx_16) & rdx_16
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_37)
        int32_t var_64_3 = rax_37
        int32_t rax_38
        
        if (rax_37 == 0)
            rax_38 = 0x20
        else
            rax_38 = 0x1f - temp0_2
        
        rax_29 = r8_5 - rax_38 + 0x1f
        
        if (rax_29 s> var_78_1)
            rax_29 = var_78_1
    else
        while (true)
            int64_t rdx_17 = sx.q(rcx_22)
            r8_5 += 0x20
            rcx_22 += 1
            int32_t var_50_1 = r8_5
            var_68_2 = rcx_22
            
            if (rdx_17.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                rax_29 = var_78_1
                break
            
            rdx_16 = *(r9_2 + (rdx_17 << 2) + 4)
            var_58 = 0xffffffff
            
            if (rdx_16 != 0)
                goto label_141cd80b8
    
    int32_t var_54_1 = rax_29

int64_t* rdx_18 = &var_a0
var_d8 = &var_a0
var_d0 = var_68_2.o
int32_t var_c0_1 = var_58

if (rax_29 s< var_78_1)
    int32_t i_2 = i_1
    
    while (true)
        int64_t rcx_25 = *(*rdx_18 + sx.q(i_2) * 0x18 + 8)
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        var_c0_1 &= not.d(var_d0:4.d)
        sub_14059bdd0(&var_d0)
        i_2 = i_1
        
        if (i_2 s>= *(var_c8 + 0x18))
            break
        
        rdx_18 = var_d8

var_98_1.d = 0

if (var_98_1:4.d != 0)
    sub_1405a5130(&var_a0, 0)

int32_t var_70_1 = 0xffffffff
int32_t var_6c_1 = 0
void* result = sub_14059a8e0(&var_90, 0)

if (var_80 != 0)
    result = sub_140a74f90(var_80)

int64_t* rcx_30 = var_a0

if (rcx_30 != 0)
    result = sub_140a74f90(rcx_30)

__security_check_cookie(rax_1 ^ &var_f8)
return result
