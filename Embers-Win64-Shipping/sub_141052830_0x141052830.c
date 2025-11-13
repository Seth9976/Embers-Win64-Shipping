// 函数: sub_141052830
// 地址: 0x141052830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = *arg3
int64_t rsi = sx.q(arg3[1].d)
void**** result = arg2
int64_t var_58 = r15
int32_t var_50 = rsi.d
int64_t var_130 = r15
int32_t var_128 = rsi.d
void*** rax = j_sub_140a82f30(0xe0)
int64_t rdi = 0
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    *rbx = &data_142d3ff08
    rbx[1].d = 0
    *(rbx + 0xc) = 0
    rbx[2].w = 0x100
    __builtin_memset(&rbx[3], 0, 0x14)
    *(rbx + 0x2c) = 4
    __builtin_memset(&rbx[6], 0, 0x20)
    *rbx = &data_142f00988
    __builtin_memset(&rbx[0xa], 0, 0x24)
    __builtin_memset(&rbx[0xf], 0, 0x60)

int64_t var_48 = r15
int32_t var_40 = rsi.d
void** const var_108
memset(&var_108, 0, 0x90)
sub_140b4c2a0(&var_108)
int32_t var_78 = 0
var_108 = &data_142ef5568
int64_t var_70 = r15
int64_t var_60 = 0x7fffffffffffffff
int32_t var_68 = rsi.d
sub_140b55290(&var_108, 1)
var_108[0x1b](&var_108, 1)
int64_t* var_100
int32_t* rdx_1 = *var_100

if (&rdx_1[1] u> var_100[1])
    void** const* rcx_5 = &var_108
    char var_df
    
    if ((var_df & 0x20) != 0)
        sub_140b54070(rcx_5, &rbx[0xe], arg4)
    else
        var_108[0x2a](rcx_5, &rbx[0xe], 4)
else
    rbx[0xe].d = *rdx_1
    *var_100 += 4

sub_140fdadf0(&var_108, &rbx[0xf], arg4)
sub_140fdadf0(&var_108, &rbx[0x11], arg4)
sub_140fdadf0(&var_108, &rbx[0x13], arg4)
sub_140fdadf0(&var_108, &rbx[0x15], arg4)
sub_140fdadf0(&var_108, &rbx[0x17], arg4)
int32_t rcx_11 = 0

if (rsi.d u>= 4)
    rcx_11 = *(rsi + r15 - 4)

if (sub_14103be80(&var_130, rbx, arg4) != 0)
    int32_t r8 = *(rbx + 0xd4)
    rbx[0x1a].d = rsi.d
    
    if (rsi.d != 0 || r8 != 0)
        sub_1405da9e0(&rbx[0x19], rsi.d, r8)
        memcpy(rbx[0x19], r15, rsi.d)
    else
        *(rbx + 0xd4) = 0
    
    int32_t rdx_12 = rbx[0x16].d
    
    if (rdx_12 s> *(rbx + 0x4c))
        sub_1405c5510(&rbx[8], rdx_12)
    
    int32_t* r15_1 = rbx[0x15]
    uint64_t r12_2 = sx.q(rbx[0x16].d) << 2 u>> 2
    
    if (r15_1 u> &r15_1[rbx[0x16]])
        r12_2 = 0
    
    if (r12_2 != 0)
        do
            void* rax_12 = sub_1419ce110(*r15_1)
            int64_t rsi_1 = sx.q(rbx[9].d)
            int32_t rdx_13 = *(rbx + 0x4c)
            int32_t rcx_17 = (rsi_1 + 1).d
            rbx[9].d = rcx_17
            
            if (rax_12 == 0)
                if (rcx_17 s> rdx_13)
                    sub_1405daba0(&rbx[8])
                
                *(rsi_1 + rbx[8]) = 0xff
            else
                if (rcx_17 s> rdx_13)
                    sub_1405daba0(&rbx[8])
                
                *(rsi_1 + rbx[8]) = *(rax_12 + 0x34)
            
            r15_1 = &r15_1[1]
            rdi += 1
        while (rdi != r12_2)
        
        result = arg2
    
    uint64_t var_118_1 = zx.q(rsi.d - var_78 - rcx_11)
    *(rbx + 0x60) = (sx.q(var_78) + rbx[0x19]).o
    void* rax_18 = rbx[0xc]
    
    if (rax_18 == 0 || rbx[0xd] u<= 0)
        rbx[0xa] = 0
        rbx[0xb] = 0
    else
        *(rbx + 0x50) = *(rax_18 + 4)
    
    *result = rbx
    rbx[1].d += 1
else
    *result = nullptr

sub_140b4cb40(&var_108)
return result
