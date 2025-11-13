// 函数: sub_141cd84d0
// 地址: 0x141cd84d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t rdx_1 = arg1[1].d - *(arg1 + 0x34)
void* var_80
__builtin_memset(&var_80, 0, 0x2c)
int32_t var_54 = 0x80
int32_t var_50 = 0xffffffff
int32_t var_4c = 0
sub_1409d96c0(&var_80, rdx_1)
int32_t rbx = arg1[1].d
arg2[1].d = 0

if (*(arg2 + 0xc) != rbx)
    sub_1405c5570(arg2, rbx)

arg2[6].d = 0xffffffff
*(arg2 + 0x34) = 0
sub_14059a8e0(&arg2[2], rbx)
void** var_c8
sub_1407453e0(&var_c8, arg1)
int128_t var_c0
void* var_b8
int32_t i_1
int32_t var_a0
int64_t var_78_1
int64_t var_70
int64_t* var_60
int32_t var_58_1

for (int32_t i = i_1; i s< *(var_b8 + 0x18); i = i_1)
    int64_t rbx_1
    
    if (var_4c == 0)
        rbx_1 = zx.q(var_78_1.d)
        int32_t rax_7 = (rbx_1 + 1).d
        var_78_1.d = rax_7
        
        if (rax_7 s> var_78_1:4.d)
            sub_1405a4f90(&var_80)
        
        int32_t rdi_1 = var_58_1
        sub_1405a4980(&var_70, rdi_1 + 1)
        int64_t* rcx_8 = &var_70
        var_58_1 += 1
        
        if (var_60 != 0)
            rcx_8 = var_60
        
        int32_t rax_9 = rdi_1
        
        if (rdi_1 s< 0)
            rax_9 = rdi_1 + 0x1f
        
        void* rdx_8 = rcx_8 + (sx.q(rax_9 s>> 5) << 2)
        *rdx_8 &= not.d(1 << (rdi_1.b & 0x1f))
    else
        rbx_1 = sx.q(var_50)
        void* rdx_5 = var_80
        bool cond:0_1 = var_4c == 1
        int64_t r8_1 = sx.q(*(rdx_5 + rbx_1 * 0x10 + 4))
        var_50 = r8_1.d
        var_4c -= 1
        
        if (not(cond:0_1))
            *(rdx_5 + r8_1 * 0x10) = 0xffffffff
    
    int64_t* rcx_10 = &var_70
    
    if (var_60 != 0)
        rcx_10 = var_60
    
    int32_t rax_15 = rbx_1.d
    
    if (rbx_1.d s< 0)
        rax_15 = (rbx_1 + 0x1f).d
    
    void* r8_2 = rcx_10 + (sx.q(rax_15 s>> 5) << 2)
    *r8_2 |= 1 << (rbx_1.b & 0x1f)
    void* rax_18 = var_80
    int64_t rdx_11 = sx.q(rbx_1.d) << 4
    *(rdx_11 + rax_18) = 0
    *(rdx_11 + rax_18 + 8) = 0
    int64_t* rsi_2 = var_80 + rdx_11
    int64_t* rdi_5 = (sx.q(i) << 4) + *var_c8
    
    if (rsi_2 != rdi_5)
        int64_t rcx_13 = *rsi_2
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        *rsi_2 = *rdi_5
        *rdi_5 = 0
        rsi_2[1].d = rdi_5[1].d
        *(rsi_2 + 0xc) = *(rdi_5 + 0xc)
        rdi_5[1] = 0
    
    int32_t* rcx_15 = *(sub_1409ca6e0(arg2, &var_a0, i) + 8)
    
    if (rcx_15 != 0)
        *rcx_15 = rbx_1.d
    
    int32_t var_b0 = var_b0 & not.d(var_c0:4.d)
    sub_14059bdd0(&var_c0)

sub_1409fb9e0(arg1, &var_80)
int32_t rcx_18 = 0
int32_t r8_4 = 0
int64_t* var_98 = &var_70
int32_t rax_27 = 0
int32_t var_8c = 0
var_a0 = 0
int32_t var_9c = 1
int32_t var_90 = 0xffffffff
int32_t var_88 = 0

if (var_58_1 != 0)
    int64_t* r9_1 = &var_70
    
    if (var_60 != 0)
        r9_1 = var_60
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(var_58_1 - 1)
    int32_t rdx_16 = *r9_1
    
    if (rdx_16 != 0)
    label_141cd87b8:
        int32_t rax_35 = neg.d(rdx_16) & rdx_16
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_35)
        int32_t var_9c_1 = rax_35
        int32_t rax_36
        
        if (rax_35 == 0)
            rax_36 = 0x20
        else
            rax_36 = 0x1f - temp0_2
        
        rax_27 = r8_4 - rax_36 + 0x1f
        
        if (rax_27 s> var_58_1)
            rax_27 = var_58_1
    else
        while (true)
            int64_t rdx_17 = sx.q(rcx_18)
            r8_4 += 0x20
            rcx_18 += 1
            int32_t var_88_1 = r8_4
            var_a0 = rcx_18
            
            if (rdx_17.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                rax_27 = var_58_1
                break
            
            rdx_16 = *(r9_1 + (rdx_17 << 2) + 4)
            var_90 = 0xffffffff
            
            if (rdx_16 != 0)
                goto label_141cd87b8
    
    int32_t var_8c_1 = rax_27

void** rdx_18 = &var_80
var_c8 = &var_80
var_c0 = var_a0.o
int32_t var_b0_1 = var_90

if (rax_27 s< var_58_1)
    int32_t i_2 = i_1
    
    while (true)
        int64_t rcx_20 = *((sx.q(i_2) << 4) + *rdx_18)
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
        
        var_b0_1 &= not.d(var_c0:4.d)
        sub_14059bdd0(&var_c0)
        i_2 = i_1
        
        if (i_2 s>= *(var_b8 + 0x18))
            break
        
        rdx_18 = var_c8

var_78_1.d = 0

if (var_78_1:4.d != 0)
    sub_1405a5410(&var_80, 0)

int32_t var_50_1 = 0xffffffff
int32_t var_4c_1 = 0
void* result = sub_14059a8e0(&var_70, 0)

if (var_60 != 0)
    result = sub_140a74f90(var_60)

void* rcx_25 = var_80

if (rcx_25 != 0)
    result = sub_140a74f90(rcx_25)

__security_check_cookie(rax_1 ^ &var_e8)
return result
