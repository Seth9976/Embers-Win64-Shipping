// 函数: sub_141bd3920
// 地址: 0x141bd3920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t rax_1 = __security_cookie ^ &var_338
int64_t rdx = *(arg1 + 0x108)
int32_t var_304 = 0
int64_t* var_2f8
int64_t* rax_2
int32_t rbp
int64_t* rsi
int64_t* rdi

if (rdx == 0)
    rsi = data_143e244b8
    rdx = data_143e244b0
    
    if (rsi != 0)
        rsi[1].d += 1
    
    rdi = var_2f8
    rbp = 2
    rax_2 = rsi
else
    rdi = *(arg1 + 0x110)
    
    if (rdi != 0)
        rdi[1].d += 1
    
    rsi = var_2f8
    rbp = 1
    rax_2 = rdi

int64_t var_2d8 = rdx
int64_t* var_2d0 = rax_2

if (rax_2 != 0)
    rax_2[1].d += 1

void*** rax_3 = j_sub_140a82f30(0x3d8)
void*** r14 = rax_3

if (rax_3 == 0)
    r14 = nullptr
else
    rax_3[1].d = 1
    *(rax_3 + 0xc) = 1
    *r14 = &data_142d8c570
    
    if (r14 != -0x10)
        sub_140f20750(&r14[2])

void* var_2f0 = &r14[2]
sub_14065fa30(&var_2f0, &r14[2])
int64_t var_318 = 0x3c8
void var_308
void* var_2e0 = &var_308
sub_140e23ed0(&r14[2], "SBox")
void var_2c8
int64_t* rax_4
int128_t zmm1
rax_4, zmm1 = sub_14068c940(&var_2c8)
void* rax_5
int128_t zmm1_1
rax_5, zmm1_1 = sub_1406937a0(rax_4, &var_2d8, zmm1)
void* var_300
void** rax_6 = sub_140695d20(&var_2f0, &var_300, rax_5, zmm1_1)
*arg2 = *rax_6
void* rax_8 = rax_6[1]
arg2[1] = rax_8

if (rax_8 != 0)
    *(rax_8 + 8) += 1

if (var_2f8 != 0)
    var_2f8[1].d -= 1
    
    if (var_2f8[1].d == 1)
        (**var_2f8)(var_2f8)
        int32_t temp2_1 = *(var_2f8 + 0xc)
        *(var_2f8 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_2f8 + 8))(var_2f8, 1)

if (r14 != 0)
    r14[1].d -= 1
    
    if (r14[1].d == 1)
        (**r14)(r14)
        int32_t temp3_1 = *(r14 + 0xc)
        *(r14 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*r14)[1](r14, 1)

sub_140690290(&var_2c8)

if ((rbp.b & 2) != 0)
    rbp &= 0xfffffffd
    
    if (rsi != 0)
        rsi[1].d -= 1
        
        if (rsi[1].d == 1)
            (**rsi)(rsi)
            int32_t temp6_1 = *(rsi + 0xc)
            *(rsi + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rsi + 8))(rsi, 1)

if ((rbp.b & 1) != 0 && rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp7_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp7_1 == 1)
            int64_t r8_3 = *rdi
            (*(r8_3 + 8))(rdi, 1, r8_3)

__security_check_cookie(rax_1 ^ &var_338)
return arg2
