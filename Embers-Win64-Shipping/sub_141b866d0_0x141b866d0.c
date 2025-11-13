// 函数: sub_141b866d0
// 地址: 0x141b866d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int64_t var_1f8 = *arg4
void* rax_3 = arg4[1]
void* var_1f0 = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

int64_t* var_218 = &arg_18
void*** rax_4 = sub_141b774b0()
void* var_210 = &rax_4[2]
sub_140918950(&var_210, &rax_4[2])
int64_t var_228 = 0x3a8
int64_t** var_200 = &var_218
sub_140e23ed0(&rax_4[2], "SObjectWidget")
void var_1d8
int64_t* rax_5
int128_t zmm1
rax_5, zmm1 = sub_140e4fff0(&var_1d8)
void* rax_6
int128_t zmm1_1
rax_6, zmm1_1 = sub_140e99c30(rax_5, &var_1f8, zmm1)
void* var_1e8
void** rax_7 = sub_141b89d10(&var_210, &var_1e8, rax_6, zmm1_1)
*arg2 = *rax_7
void* rax_9 = rax_7[1]
arg2[1] = rax_9

if (rax_9 != 0)
    *(rax_9 + 8) += 1

int64_t* var_1e0

if (var_1e0 != 0)
    var_1e0[1].d -= 1
    
    if (var_1e0[1].d == 1)
        (**var_1e0)(var_1e0)
        int32_t temp2_1 = *(var_1e0 + 0xc)
        *(var_1e0 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_1e0 + 8))(var_1e0, 1)

if (rax_4 != 0)
    rax_4[1].d -= 1
    
    if (rax_4[1].d == 1)
        (**rax_4)(rax_4)
        int32_t temp4_1 = *(rax_4 + 0xc)
        *(rax_4 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*rax_4)[1](rax_4, 1)

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp6_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

sub_140ddea30(&var_1d8)
int64_t* rbx_4 = arg4[1]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp7_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp7_1 == 1)
            int64_t r8_3 = *rbx_4
            (*(r8_3 + 8))(rbx_4, 1, r8_3)

__security_check_cookie(rax_1 ^ &var_248)
return arg2
