// 函数: sub_141b86a70
// 地址: 0x141b86a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int64_t var_1e8 = *arg4
void* rax_3 = arg4[1]
void* var_1e0 = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

int64_t* var_208 = &arg_18
void*** rax_4 = sub_141b774b0()
void* var_200 = &rax_4[2]
sub_140918950(&var_200, &rax_4[2])
int64_t var_218 = 0x3a8
int64_t** var_1f0 = &var_208
sub_140e23ed0(&rax_4[2], "SObjectWidget")
void var_1d8
int64_t* rax_5
int128_t zmm1
rax_5, zmm1 = sub_140e4fff0(&var_1d8)
void* rax_6
int128_t zmm1_1
rax_6, zmm1_1 = sub_140e99c30(rax_5, &var_1e8, zmm1)
sub_141b89d10(&var_200, arg2, rax_6, zmm1_1)

if (rax_4 != 0)
    rax_4[1].d -= 1
    
    if (rax_4[1].d == 1)
        (**rax_4)(rax_4)
        int32_t temp2_1 = *(rax_4 + 0xc)
        *(rax_4 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*rax_4)[1](rax_4, 1)

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp4_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

sub_140ddea30(&var_1d8)
int64_t* rbx_3 = arg4[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp5_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp5_1 == 1)
            int64_t r8_3 = *rbx_3
            (*(r8_3 + 8))(rbx_3, 1, r8_3)

__security_check_cookie(rax_1 ^ &var_238)
return arg2
