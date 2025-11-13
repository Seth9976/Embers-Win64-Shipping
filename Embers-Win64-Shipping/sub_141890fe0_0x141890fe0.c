// 函数: sub_141890fe0
// 地址: 0x141890fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t rax_2 = 0

if (0 == *(arg1 + 0x160))
    *(arg1 + 0x160) = 0
else
    rax_2 = *(arg1 + 0x160)

if (rax_2 s> *(arg1 + 0x30))
    int32_t i
    
    do
        bool z_1
        
        if (0 == *(arg1 + 0x140))
            *(arg1 + 0x140) = 0
            z_1 = true
        else
            *(arg1 + 0x140)
            z_1 = false
        
        if (z_1)
            break
        
        int64_t* rcx = *(arg1 + 0x168)
        (*(*rcx + 0x20))(rcx, 0x3e8, 0)
        int64_t* rcx_1 = *(arg1 + 0x168)
        (*(*rcx_1 + 0x18))(rcx_1)
        i = 0
        
        if (0 == *(arg1 + 0x160))
            *(arg1 + 0x160) = 0
        else
            i = *(arg1 + 0x160)
    while (i s> *(arg1 + 0x30))

*(arg1 + 0x160) += 1
void** rax_6 = j_sub_140a82f30(0x18)
void** rdi = rax_6

if (rax_6 == 0)
    rdi = nullptr
else
    void*** rax_7
    rax_7, arg5 = sub_14185e5b0()
    *rdi = &rax_7[2]
    rdi[1] = rax_7
    
    if (rax_7 != 0)
        rax_7[1].d += 1
        
        if (rax_7 != 0)
            rax_7[1].d -= 1
            
            if (rax_7[1].d == 1)
                (**rax_7)(rax_7)
                int32_t rbp_1 = *(rax_7 + 0xc)
                *(rax_7 + 0xc) -= 1
                
                if (rbp_1 == 1)
                    (*rax_7)[1](rax_7, zx.q(rbp_1))

rdi[2].b = 1
*arg2 = *rdi
void* rax_14 = rdi[1]
void** var_78 = rdi
arg2[1] = rax_14

if (rax_14 != 0)
    *(rax_14 + 8) += 1

bool z_2

if (0 == *(arg1 + 0x140))
    *(arg1 + 0x140) = 0
    z_2 = true
else
    *(arg1 + 0x140)
    z_2 = false

if (z_2)
    CRITICAL_SECTION* rcx_8 = *rdi
    void* var_88
    var_88.b = 0xa
    int64_t var_80_2 = 0
    rcx_8->__offset(0x80).o = var_88.o
    sub_1405fc0f0(rcx_8, arg5, arg6, arg4)
else
    uint128_t zmm0 = *arg3
    var_78 = nullptr
    uint128_t var_58 = zmm0
    char var_40_1 = 0
    uint64_t var_48_1 = rdi
    int64_t* rax_16 = j_sub_140a82f30(0x28)
    
    if (rax_16 != 0)
        *rax_16 = 0
        rax_16[4].b = 0xff
        sub_14185ed80(&rax_16[1], &var_58)
        int32_t temp0_3 = *(arg1 + 0x150)
        *(arg1 + 0x150) = rax_16
        int64_t** rcx_6 = temp0_3
        *rcx_6
        *rcx_6 = rax_16
    
    int64_t* rcx_7 = *(arg1 + 0x180)
    (*(*rcx_7 + 0x10))(rcx_7)

sub_14186ad20(&var_78, var_78)
__security_check_cookie(rax_1 ^ &var_a8)
return arg2
