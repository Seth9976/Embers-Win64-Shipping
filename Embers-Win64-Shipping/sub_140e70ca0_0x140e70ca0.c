// 函数: sub_140e70ca0
// 地址: 0x140e70ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_368
int64_t rax_1 = __security_cookie ^ &var_368
void var_308
int64_t* rax_2 = sub_140e50320(&var_308)
sub_14065da90(&rax_2[0x34], arg3)
rax_2[0x37].b = arg3[3].b
sub_140692f90(&rax_2[0x38], &arg3[4])
void*** rax_4 = sub_140e49080()
void* var_330 = &rax_4[2]
sub_140918950(&var_330, &rax_4[2])
int64_t var_348 = 0x4f0
void var_338
void* var_320 = &var_338
void* var_318
void** rax_5 = sub_140e579a0(&var_330, &var_318, rax_2, sub_140e23ed0(&rax_4[2], "SToolTip"))
void* rax_6 = *rax_5
void* rcx_6 = rax_6 + 0x390

if (rax_6 == 0)
    rcx_6 = nullptr

*arg2 = rcx_6
void* rax_7 = rax_5[1]
arg2[1] = rax_7

if (rax_7 != 0)
    *(rax_7 + 8) += 1

int64_t* var_310

if (var_310 != 0)
    var_310[1].d -= 1
    
    if (var_310[1].d == 1)
        (**var_310)(var_310)
        int32_t temp2_1 = *(var_310 + 0xc)
        *(var_310 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_310 + 8))(var_310, 1)

if (rax_4 != 0)
    rax_4[1].d -= 1
    
    if (rax_4[1].d == 1)
        (**rax_4)(rax_4)
        int32_t temp3_1 = *(rax_4 + 0xc)
        *(rax_4 + 0xc) -= 1
        
        if (temp3_1 == 1)
            void** r8_3 = *rax_4
            r8_3[1](rax_4, 1, r8_3)

sub_140e53770(&var_308)
__security_check_cookie(rax_1 ^ &var_368)
return arg2
