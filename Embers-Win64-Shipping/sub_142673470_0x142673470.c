// 函数: sub_142673470
// 地址: 0x142673470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
*arg2 = 0
arg2[1] = 0
bool cond:0 = (*(arg3 + 0x14) & 1) == 0
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0

if (not(cond:0))
    int64_t var_b0
    int64_t* rax_2 = sub_142692200(arg1, &var_b0, *(arg3 + 0x60), *(arg3 + 0x64), &var_98)
    
    if (arg2 != rax_2)
        int64_t rcx = *arg2
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        *arg2 = *rax_2
        *rax_2 = 0
        arg2[1].d = rax_2[1].d
        *(arg2 + 0xc) = *(rax_2 + 0xc)
        rax_2[1] = 0
    
    int64_t rcx_1 = var_b0
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)

void* rdx_1 = arg3 + 0xa8
int32_t r8_1 = *(arg3 + 0xc0)
int32_t rbx_2 = 0
void* rax_7 = *(arg3 + 0xb8)
int64_t r9_2 = *(*(*(arg1 + 0xe8) + 0x4a8) + 8)

if (rax_7 != 0)
    rdx_1 = rax_7

int64_t rax_8 = 0
uint64_t rcx_4 = zx.q((r8_1 + 0x1f) u>> 5)

if (rcx_4 != 0)
    while (*(rdx_1 + (rax_8 << 2)) == 0)
        rbx_2 += 1
        rax_8 += 1
        
        if (rax_8 s>= rcx_4)
            break

int32_t i_1

if (rbx_2 s< rcx_4.d)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = __bsf_gprv_memv(*(rdx_1 + (sx.q(rbx_2) << 2)))
    i_1 = (rbx_2 << 5) + temp0_1
    int32_t var_b8_1 = temp0_1

if (rbx_2 s>= rcx_4.d || i_1 s>= r8_1)
    i_1 = -1

if (r9_2 != 0 && i_1 != 0xffffffff)
    void* var_c8 = nullptr
    int32_t i_3 = *(arg3 + 0x2d8)
    int64_t r15_1 = *(arg3 + 0x2d0)
    int32_t i_4 = i_3
    
    if (i_3 != 0)
        sub_140874c00(&var_c8, i_3, 0)
        void* rax_10 = var_c8
        int128_t* r15_2 = r15_1 - rax_10
        int128_t* rcx_7 = rax_10 + 4
        int32_t i
        
        do
            *(rcx_7 - 4) = *(r15_2 + rcx_7 - 4)
            *rcx_7 = *(r15_2 + rcx_7)
            rcx_7[1].q = *(r15_2 + rcx_7 + 0x10)
            *(rcx_7 + 0x18) = *(r15_2 + rcx_7 + 0x18)
            *(rcx_7 + 0x1c) = *(r15_2 + rcx_7 + 0x1c)
            *(rcx_7 + 0x24) = *(r15_2 + rcx_7 + 0x24)
            void* rax_15 = *(r15_2 + rcx_7 + 0x2c)
            *(rcx_7 + 0x2c) = rax_15
            
            if (rax_15 != 0)
                *(rax_15 + 8) += 1
            
            rcx_7 += 0x38
            i = i_3
            i_3 -= 1
        while (i != 1)
        i_3 = i_4
    else
        int32_t i_5 = i_3
    
    if (i_3 s> *(arg2 + 0xc))
        sub_1405dadb0(arg2, i_3)
    
    for (; i_1 s< *(arg3 + 0xc0); i_1 += 1)
        void* rax_16 = *(arg3 + 0xb8)
        void* rcx_9 = arg3 + 0xa8
        
        if (rax_16 != 0)
            rcx_9 = rax_16
        
        int32_t i_2 = i_1
        
        if (i_1 s< 0)
            i_2 = i_1 + 0x1f
        
        if ((*(rcx_9 + (sx.q(i_2 s>> 5) << 2)) & 1 << (i_1.b & 0x1f)) != 0)
            sub_142673070(arg1, i_1, arg3, &var_98, arg2)
    
    sub_142671860(&var_c8)

int32_t var_50_1 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t var_90
bool cond:2 = var_90:4.d == 0
var_90.d = 0

if (not(cond:2))
    sub_1405a5130(&var_98, 0)

int32_t var_68_1 = 0xffffffff
int32_t var_64_1 = 0
int64_t var_88
sub_14059a8e0(&var_88, 0)
int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

int64_t rcx_18 = var_98

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

__security_check_cookie(rax_1 ^ &var_f8)
return arg2
