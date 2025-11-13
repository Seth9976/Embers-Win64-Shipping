// 函数: sub_14189c060
// 地址: 0x14189c060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
void** rax_2 = j_sub_140a82f30(0x18)
void** rsi = rax_2

if (rax_2 == 0)
    rsi = nullptr
else
    void*** rax_3 = sub_14189c760()
    *rsi = &rax_3[2]
    rsi[1] = rax_3
    
    if (rax_3 != 0)
        rax_3[1].d += 1
        
        if (rax_3 != 0)
            rax_3[1].d -= 1
            
            if (rax_3[1].d == 1)
                (**rax_3)(rax_3)
                int32_t rax_8 = *(rax_3 + 0xc)
                *(rax_3 + 0xc) -= 1
                
                if (rax_8 == 1)
                    (*rax_3)[1](rax_3, 1)
    
    rsi[2].b = 0

void*** rax_10 = j_sub_140a82f30(0x18)

if (rax_10 == 0)
    rax_10 = nullptr
else
    rax_10[1].d = 1
    *rax_10 = &data_142fe5e98
    *(rax_10 + 0xc) = 1
    rax_10[2] = rsi

if (rax_10 != 0)
    rax_10[1].d += 1

int64_t rax_13 = *arg2
void* var_68 = nullptr

if (rax_13 != 0)
    void* rax_14 = arg2[2]
    void* rcx_2 = &arg2[4]
    
    if (rax_14 != 0)
        rcx_2 = rax_14
    
    (**rcx_2)(rcx_2, &var_68)

void*** rax_16 = sub_140a82f30(0x60, 0x10)
*rax_16 = &data_142fe5ea8
rax_16[2] = rsi
rax_16[3] = rax_10

if (rax_10 != 0)
    rax_10[1].d += 1

rax_16[4] = rax_13
rax_16[6] = 0
void var_58

if (rax_16[4] != 0)
    void* rax_20 = var_68
    void* rcx_4 = &var_58
    
    if (rax_20 != 0)
        rcx_4 = rax_20
    
    (**rcx_4)(rcx_4)

*rax_16 = &data_142fe5ec8
int64_t (* var_c8)(int64_t* arg1)
int64_t (* rax_22)(int64_t* arg1) = var_c8

if (rax_16 != -0x10)
    rax_22 = j_sub_14189ec20

int64_t* var_b8 = rax_16
int64_t (* var_c8_1)(int64_t* arg1) = rax_22

if (rax_13 != 0)
    void* rax_23 = var_68
    void* rcx_5 = &var_58
    
    if (rax_23 != 0)
        rcx_5 = rax_23
    
    (*(*rcx_5 + 0x10))(rcx_5)

if (rax_10 != 0)
    rax_10[1].d -= 1
    
    if (rax_10[1].d == 1)
        (**rax_10)(rax_10)
        int32_t rax_27 = *(rax_10 + 0xc)
        *(rax_10 + 0xc) -= 1
        
        if (rax_27 == 1)
            (*rax_10)[1](rax_10, 1)

uint32_t rax_29

if (data_143de5480 != 0)
    rax_29.b = GetCurrentThreadId() == data_143de5470

int128_t var_a8

if (data_143de5480 == 0 || rax_29.b != 0)
    int64_t* rcx_9 = &var_a8
    
    if (var_b8 != 0)
        rcx_9 = var_b8
    
    var_c8_1((*(*rcx_9 + 8))(rcx_9))
else
    int64_t (* rcx_8)(int64_t* arg1) = var_c8_1
    int128_t zmm0_1 = var_a8
    int64_t (* var_108)(int64_t* arg1) = rcx_8
    
    if (rcx_8 != 0)
        rcx_8 = nullptr
    
    var_c8_1 = rcx_8
    int64_t* var_f8_1 = var_b8
    var_b8 = nullptr
    int128_t var_e8_1 = zmm0_1
    int128_t var_98
    int128_t var_d8_1 = var_98
    sub_140a20e40(2, &var_108)

rsi[2].b = 1
*arg1 = *rsi
void* rax_35 = rsi[1]
arg1[1] = rax_35

if (rax_35 != 0)
    *(rax_35 + 8) += 1

if (var_c8_1 != 0)
    int64_t* rcx_12 = &var_a8
    
    if (var_b8 != 0)
        rcx_12 = var_b8
    
    (*(*rcx_12 + 0x10))(rcx_12)

if (rax_10 != 0)
    rax_10[1].d -= 1
    
    if (rax_10[1].d == 1)
        (**rax_10)(rax_10)
        int32_t rdi_1 = *(rax_10 + 0xc)
        *(rax_10 + 0xc) -= 1
        
        if (rdi_1 == 1)
            void** r8_2 = *rax_10
            r8_2[1](rax_10, zx.q(rdi_1), r8_2)

__security_check_cookie(rax_1 ^ &var_148)
return arg1
