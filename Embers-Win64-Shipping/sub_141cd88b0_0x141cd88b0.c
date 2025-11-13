// 函数: sub_141cd88b0
// 地址: 0x141cd88b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t rdx_1 = arg1[1].d - *(arg1 + 0x34)
void* var_80
__builtin_memset(&var_80, 0, 0x2c)
int32_t var_54 = 0x80
int32_t var_50 = 0xffffffff
int32_t var_4c = 0
sub_1409d9850(&var_80, rdx_1)
int32_t rbx = arg1[1].d
arg2[1].d = 0

if (*(arg2 + 0xc) != rbx)
    sub_1405c5570(arg2, rbx)

arg2[6].d = 0xffffffff
*(arg2 + 0x34) = 0
sub_14059a8e0(&arg2[2], rbx)
int64_t var_b8
sub_1407453e0(&var_b8, arg1)
void* var_a8
int32_t i_1
int64_t* var_60

for (int32_t i = i_1; i s< *(var_a8 + 0x18); i = i_1)
    int64_t var_70
    int64_t rbx_1
    
    if (var_4c == 0)
        int64_t var_78_1
        rbx_1 = zx.q(var_78_1.d)
        int32_t rax_7 = (rbx_1 + 1).d
        var_78_1.d = rax_7
        
        if (rax_7 s> var_78_1:4.d)
            sub_1405c4e40(&var_80)
        
        int32_t var_58_1
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
        int64_t r8_1 = sx.q(*((rbx_1 << 5) + rdx_5 + 4))
        var_50 = r8_1.d
        var_4c -= 1
        
        if (not(cond:0_1))
            *((r8_1 << 5) + rdx_5) = 0xffffffff
    
    int64_t* rcx_10 = &var_70
    
    if (var_60 != 0)
        rcx_10 = var_60
    
    int32_t rax_15 = rbx_1.d
    
    if (rbx_1.d s< 0)
        rax_15 = (rbx_1 + 0x1f).d
    
    void* r8_2 = rcx_10 + (sx.q(rax_15 s>> 5) << 2)
    *r8_2 |= 1 << (rbx_1.b & 0x1f)
    int64_t rcx_14 = sx.q(rbx_1.d) << 5
    __builtin_memset(var_80 + rcx_14, 0, 0x20)
    int64_t* rsi_2 = var_80 + rcx_14
    int64_t* rdi_5 = (sx.q(i) << 5) + *var_b8
    
    if (rsi_2 != rdi_5)
        int64_t rcx_15 = *rsi_2
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        *rsi_2 = *rdi_5
        *rdi_5 = 0
        rsi_2[1].d = rdi_5[1].d
        *(rsi_2 + 0xc) = *(rdi_5 + 0xc)
        rdi_5[1] = 0
    
    if (&rsi_2[2] != &rdi_5[2])
        int64_t rcx_16 = rsi_2[2]
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        rsi_2[2] = rdi_5[2]
        rdi_5[2] = 0
        rsi_2[3].d = rdi_5[3].d
        *(rsi_2 + 0x1c) = *(rdi_5 + 0x1c)
        rdi_5[3] = 0
    
    int32_t var_90[0x4]
    int32_t* rcx_18 = *(sub_1409ca6e0(arg2, &var_90, i) + 8)
    
    if (rcx_18 != 0)
        *rcx_18 = rbx_1.d
    
    int32_t var_ac
    int32_t var_a0 = var_a0 & not.d(var_ac)
    void var_b0
    sub_14059bdd0(&var_b0)

sub_1409fbc90(arg1, &var_80)
int64_t result = sub_141cdba40(&var_80, 0)

if (var_60 != 0)
    result = sub_140a74f90(var_60)

void* rcx_23 = var_80

if (rcx_23 != 0)
    result = sub_140a74f90(rcx_23)

__security_check_cookie(rax_1 ^ &var_d8)
return result
