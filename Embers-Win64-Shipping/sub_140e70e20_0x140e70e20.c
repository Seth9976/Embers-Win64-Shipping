// 函数: sub_140e70e20
// 地址: 0x140e70e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_398
int64_t rax_1 = __security_cookie ^ &var_398
int64_t var_360 = *arg3
int64_t* rax_3 = arg3[1]

if (rax_3 != 0)
    rax_3[1].d += 1

int32_t var_350 = arg3[2].d
int64_t var_340 = 0
int32_t var_338 = 0
char var_348 = 1
void var_308
int64_t* rax_5 = sub_140e50320(&var_308)
sub_14065da90(&rax_5[0x34], &var_360)
rax_5[0x37].b = var_348
sub_140692f90(&rax_5[0x38], &var_340)
void*** rax_7 = sub_140e49080()
void* var_330 = &rax_7[2]
sub_140918950(&var_330, &rax_7[2])
int64_t var_378 = 0x4f0
void var_368
void* var_320 = &var_368
void* var_318
void** rax_8 = sub_140e579a0(&var_330, &var_318, rax_5, sub_140e23ed0(&rax_7[2], "SToolTip"))
void* rax_9 = *rax_8
void* rcx_6 = rax_9 + 0x390

if (rax_9 == 0)
    rcx_6 = nullptr

*arg2 = rcx_6
void* rax_10 = rax_8[1]
arg2[1] = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) += 1

int64_t* var_310

if (var_310 != 0)
    var_310[1].d -= 1
    
    if (var_310[1].d == 1)
        (**var_310)(var_310)
        int32_t temp3_1 = *(var_310 + 0xc)
        *(var_310 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_310 + 8))(var_310, 1)

if (rax_7 != 0)
    rax_7[1].d -= 1
    
    if (rax_7[1].d == 1)
        (**rax_7)(rax_7)
        int32_t temp4_1 = *(rax_7 + 0xc)
        *(rax_7 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*rax_7)[1](rax_7, 1)

sub_140e53770(&var_308)
sub_140745b20(&var_340)

if (rax_3 != 0)
    rax_3[1].d -= 1
    
    if (rax_3[1].d == 1)
        (**rax_3)(rax_3)
        int32_t rdi_1 = *(rax_3 + 0xc)
        *(rax_3 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t r8_3 = *rax_3
            (*(r8_3 + 8))(rax_3, zx.q(rdi_1), r8_3)

__security_check_cookie(rax_1 ^ &var_398)
return arg2
