// 函数: sub_141d74bc0
// 地址: 0x141d74bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*arg1 = &data_143231cc8
void* r13 = &arg1[8]
arg1[5] = &data_143231f60
void* r12 = &arg1[0xb]
arg1[6] = &data_143231fa0
__builtin_memset(&arg1[7], 0, 0x30)
sub_141d74770(&arg1[0xf])
__builtin_memset(&arg1[0x1e], 0, 0x30)
void* rcx_1 = &arg1[0x2e]
arg1[0x27].b = 0
__builtin_memset(arg1 + 0x144, 0, 0x14)
arg1[0x2b].d = 0xffffffff
arg1[0x2c] = 0
arg1[0x2d] = 0
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax = *(rcx_1 + 0x10)

if (rax != 0)
    rcx_1 = rax

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x32].d = 0xffffffff
*(arg1 + 0x194) = 0
arg1[0x34] = 0
arg1[0x35].d = 0
arg1[0x37] = 0
arg1[0x38] = 0
arg1[0x39] = 2
__builtin_memset(&arg1[0x40], 0, 0x20)
*(arg1 + 0x1f4) = 0xbf800000
arg1[0x3f].d = 0xbf800000
sub_1422f23d0(&arg1[0x3a])
int64_t* var_58 = nullptr
int32_t i_5 = 0
void* var_68 = nullptr
int32_t i_4 = 0
sub_140af2b60()
sub_140afb400(&data_143dbb3f0, &var_58, &var_68)
void* rdi = var_68
void* r15_2 = (sx.q(i_4) << 4) + rdi

if (rdi != r15_2)
    do
        int32_t rdx_1 = arg1[0x21].d
        int32_t rax_1
        rax_1.b = rdx_1 s<= 0
        int32_t rsi_1 = rdx_1 - 1
        
        if (rdx_1 s<= 0)
            rsi_1 = 0
        
        int32_t rax_3 = rax_1 + 1 + rdx_1
        arg1[0x21].d = rax_3
        
        if (rax_3 s> *(arg1 + 0x10c))
            sub_140594770(&arg1[0x20])
        
        int64_t rcx_4 = sx.q(rsi_1)
        *(arg1[0x20] + (rcx_4 << 1)) = 0x2d
        *(arg1[0x20] + (rcx_4 << 1) + 2) = 0
        int32_t rax_6 = *(rdi + 8)
        int32_t r8_1 = rax_6 - 1
        
        if (rax_6 == 0)
            r8_1 = 0
        
        sub_140a20ba0(&arg1[0x20], *rdi, r8_1)
        int32_t rdx_3 = arg1[0x21].d
        int32_t rax_7
        rax_7.b = rdx_3 s<= 0
        int32_t rsi_2 = rdx_3 - 1
        
        if (rdx_3 s<= 0)
            rsi_2 = 0
        
        int32_t rax_9 = rax_7 + 1 + rdx_3
        arg1[0x21].d = rax_9
        
        if (rax_9 s> *(arg1 + 0x10c))
            sub_140594770(&arg1[0x20])
        
        int64_t rdx_4 = sx.q(rsi_2)
        rdi += 0x10
        *(arg1[0x20] + (rdx_4 << 1)) = 0x20
        *(arg1[0x20] + (rdx_4 << 1) + 2) = 0
    while (rdi != r15_2)
    
    r12 = &arg1[0xb]
    r13 = &arg1[8]

sub_140a20ba0(&arg1[0x1e], u"-NOSCREENMESSAGES", 0x11)
int32_t rax_12 = data_143a2adf0
data_143a2adf0 = rax_12 + 1
*(arg1 + 0x144) = rax_12
arg1[0x36].b = 0
*(arg1 + 0x1b4) = 0
int64_t var_48
sub_140d15b50(&var_48, sub_141d81d20())
arg1[7] = var_48
int64_t var_40
sub_140597df0(r13, &var_40)
int64_t rcx_10 = var_40

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

sub_140d15b50(&var_48, sub_141d82540())
arg1[0xa] = var_48
sub_140597df0(r12, &var_40)
int64_t rcx_13 = var_40

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int32_t i_2 = i_4
void* rbx_1 = var_68

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx_14 = *rbx_1
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        rbx_1 += 0x10
        i = i_2
        i_2 -= 1
    while (i != 1)
    rbx_1 = var_68

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

int32_t i_3 = i_5
int64_t* rbx_2 = var_58

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_16 = *rbx_2
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        rbx_2 = &rbx_2[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_2 = var_58

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

return arg1
