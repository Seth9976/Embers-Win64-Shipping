// 函数: sub_142721270
// 地址: 0x142721270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t rdx = *(arg1 + 0xd8)

if (rdx != 0)
    int64_t rcx = *(arg1 + 0xf8)
    
    if (rcx != 0)
        sub_1405c2d80(rcx + 0x80, rdx)

*(arg1 + 0xd8) = 0
int64_t* rcx_2 = arg2[1]
int64_t var_78 = *arg2
int64_t* var_70 = rcx_2

if (rcx_2 != 0)
    rcx_2[1].d += 1
    rcx_2 = var_70

if (&var_78 != arg1 + 0xf8)
    int128_t zmm1 = var_78.o
    int128_t var_40_1 = zmm1
    var_78.o = *(arg1 + 0xf8)
    rcx_2 = var_70
    *(arg1 + 0xf8) = zmm1

if (rcx_2 != 0)
    rcx_2[1].d -= 1
    
    if (rcx_2[1].d == 1)
        (**var_70)(var_70)
        int32_t rax_5 = *(var_70 + 0xc)
        *(var_70 + 0xc) -= 1
        
        if (rax_5 == 1)
            (*(*var_70 + 8))(var_70, 1)

uint64_t result = *(arg1 + 0xf8)

if (result != 0)
    *(result + 0x98) &= 0xffffffef
    int32_t var_48_1 = 0
    int64_t (* var_50_1)(int64_t* arg1) = sub_141b8bb10
    int64_t var_68 = 0
    int32_t var_60_1 = 0
    void*** rax_7 = sub_1405978f0(0x30, &var_68)
    
    if (rax_7 != 0)
        *rax_7 = &data_143084528
        sub_140d3a3a0(&rax_7[1], arg1)
        *(rax_7 + 0x10) = var_50_1.o
        rax_7[5] = sub_140a387b0()
        *rax_7 = &data_143084580
    
    uint64_t result_1
    sub_14091e890(*(arg1 + 0xf8) + 0x80, &result_1, &var_68)
    sub_140745b20(&var_68)
    result = result_1
    *(arg1 + 0xd8) = result

int64_t* rbx_3 = arg2[1]

if (rbx_3 != 0)
    result = zx.q(rbx_3[1].d)
    rbx_3[1].d -= 1
    
    if (result.d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t rdi_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rdi_1 == 1)
            result = (*(*rbx_3 + 8))(rbx_3, zx.q(rdi_1))

__security_check_cookie(rax_1 ^ &var_98)
return result
