// 函数: sub_140f42180
// 地址: 0x140f42180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
int64_t rbx = *(arg1 + 0x428)
int64_t (* var_278)(int64_t* arg1, int128_t arg2 @ zmm1) = sub_140f5c2b0
int32_t var_270 = 0
void var_238
int64_t* rax_2 = sub_140f1fc10(&var_238)
int128_t var_268 = var_278.o
rax_2[0x34] = rbx
*(rax_2 + 0x1bc) = *(arg1 + 0x418)
sub_1407473e0(&rax_2[0x35], sub_140f1bc90(&var_278, arg1, &var_268))
int64_t (* rax_6)(int64_t* arg1, int128_t arg2 @ zmm1)

if (var_270 == 0)
    rax_6 = var_278
label_140f4225f:
    
    if (rax_6 != 0)
        sub_140a74f90(rax_6)
else
    int64_t (* rcx_3)(int64_t* arg1, int128_t arg2 @ zmm1) = var_278
    
    if (rcx_3 != 0)
        (*(*rcx_3 + 0x38))(rcx_3, 0)
        rax_6 = var_278
        
        if (rax_6 != 0)
            rax_6 = sub_140a84c80(rax_6, 0, 0)
            var_278 = rax_6
        
        int32_t var_270_1 = 0
        goto label_140f4225f
void*** rax_7 = sub_140f1cf80()
var_268:8.q = rax_7
var_268.q = &rax_7[2]
sub_140918950(&var_268, &rax_7[2])
int64_t var_298 = 0x560
void var_288
void* var_258 = &var_288
int64_t* var_248
int64_t** rax_8 = sub_140f27db0(&var_268, &var_248, rax_2, sub_140e23ed0(&rax_7[2], "SScrollBar"))
*arg2 = *rax_8
void* rax_10 = rax_8[1]
arg2[1] = rax_10

if (rax_10 != 0)
    *(rax_10 + 8) += 1

int64_t* var_240

if (var_240 != 0)
    var_240[1].d -= 1
    
    if (var_240[1].d == 1)
        (**var_240)(var_240)
        int32_t temp2_1 = *(var_240 + 0xc)
        *(var_240 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_240 + 8))(var_240, 1)

int64_t* rbx_3 = var_268:8.q

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp3_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp3_1 == 1)
            int64_t r8_3 = *rbx_3
            (*(r8_3 + 8))(rbx_3, 1, r8_3)

void var_38
sub_140745b20(&var_38)
void var_60
sub_140745b20(&var_60)
void var_90
sub_140745b20(&var_90)
sub_140ddea30(&var_238)
__security_check_cookie(rax_1 ^ &var_2b8)
return arg2
