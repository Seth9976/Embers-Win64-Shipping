// 函数: sub_141051ee0
// 地址: 0x141051ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t r15 = *arg3
void**** result = arg2
int64_t rbx = sx.q(arg3[1].d)
int64_t var_88 = r15
int32_t var_80 = rbx.d
int64_t var_148 = r15
int32_t var_140 = rbx.d
void*** rax_2 = j_sub_140a82f30(0xf0)
void*** rdi = rax_2

if (rax_2 == 0)
    rdi = nullptr
else
    *rdi = &data_142d3ff08
    rdi[1].d = 0
    *(rdi + 0xc) = 0
    rdi[2].w = 0x100
    __builtin_memset(&rdi[3], 0, 0x14)
    *(rdi + 0x2c) = 5
    __builtin_memset(&rdi[6], 0, 0x28)
    *rdi = &data_142f00998
    __builtin_memset(&rdi[0xb], 0, 0x34)
    __builtin_memset(&rdi[0x12], 0, 0x50)

int64_t var_78 = r15
int32_t var_70 = rbx.d
void** const var_138
memset(&var_138, 0, 0x90)
sub_140b4c2a0(&var_138)
int32_t var_a8 = 0
var_138 = &data_142ef5568
int64_t var_a0 = r15
int64_t var_90 = 0x7fffffffffffffff
int32_t var_98 = rbx.d
sub_140b55290(&var_138, 1)
var_138[0x1b](&var_138, 1)
int64_t* var_130
int32_t* rdx_1 = *var_130

if (&rdx_1[1] u> var_130[1])
    int64_t* rcx_5 = &var_138
    char var_10f
    
    if ((var_10f & 0x20) != 0)
        sub_140b54070(rcx_5, &rdi[0x11], arg4)
    else
        var_138[0x2a](rcx_5, &rdi[0x11], 4)
else
    rdi[0x11].d = *rdx_1
    *var_130 += 4

sub_140fdadf0(&var_138, &rdi[0x12], arg4)
sub_140fdadf0(&var_138, &rdi[0x14], arg4)
sub_140fdadf0(&var_138, &rdi[0x16], arg4)
sub_140fdadf0(&var_138, &rdi[0x18], arg4)
sub_140fdadf0(&var_138, &rdi[0x1a], arg4)
int32_t rax_8 = 0

if (rbx.d u>= 4)
    rax_8 = *(rbx + r15 - 4)

if (sub_14103bcc0(&var_148, rdi, arg4) != 0)
    int32_t r8 = *(rdi + 0x84)
    rdi[0x10].d = rbx.d
    
    if (rbx.d != 0 || r8 != 0)
        sub_1405da9e0(&rdi[0xf], rbx.d, r8)
        memcpy(rdi[0xf], r15, rbx.d)
    else
        *(rdi + 0x84) = 0
    
    int32_t rdx_12 = rdi[0x19].d
    
    if (rdx_12 s> *(rdi + 0x54))
        sub_1405c5510(&rdi[9], rdx_12)
    
    int64_t r15_1 = 0
    int32_t* r12_1 = rdi[0x18]
    uint64_t rcx_19 = sx.q(rdi[0x19].d) << 2 u>> 2
    
    if (r12_1 u> &r12_1[rdi[0x19]])
        rcx_19 = 0
    
    if (rcx_19 != 0)
        do
            void* rax_13 = sub_1419ce110(*r12_1)
            int64_t rbx_1 = sx.q(rdi[0xa].d)
            int32_t rdx_13 = *(rdi + 0x54)
            int32_t rcx_21 = (rbx_1 + 1).d
            rdi[0xa].d = rcx_21
            
            if (rax_13 == 0)
                if (rcx_21 s> rdx_13)
                    sub_1405daba0(&rdi[9])
                
                *(rbx_1 + rdi[9]) = 0xff
            else
                if (rcx_21 s> rdx_13)
                    sub_1405daba0(&rdi[9])
                
                *(rbx_1 + rdi[9]) = *(rax_13 + 0x34)
            
            r12_1 = &r12_1[1]
            r15_1 += 1
        while (r15_1 != rcx_19)
        
        result = arg2
    
    uint64_t var_168_1 = zx.q(rbx.d - rax_8 - var_a8)
    *(rdi + 0x68) = (sx.q(var_a8) + rdi[0xf]).o
    void* rax_19 = rdi[0xd]
    
    if (rax_19 == 0 || rdi[0xe] u<= 0)
        rdi[0xb] = 0
        rdi[0xc] = 0
    else
        *(rdi + 0x58) = *(rax_19 + 4)
    
    void* rbx_2 = **(arg1 + 0x20)
    int32_t var_174 = *(rbx_2 + 0x44)
    int32_t var_50_1 = 0
    void var_68
    sub_1410657a0(&var_174, rdi, &var_68)
    rdi[0x1d] = sub_14104c4e0(rbx_2 + 0x1a0, &var_68)
    *result = rdi
    rdi[1].d += 1
else
    *result = nullptr

sub_140b4cb40(&var_138)
__security_check_cookie(rax_1 ^ &var_198)
return result
