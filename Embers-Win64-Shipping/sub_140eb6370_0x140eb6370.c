// 函数: sub_140eb6370
// 地址: 0x140eb6370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
int64_t* rdi = *(arg1 + 0x398)
int64_t rsi = 0
void* r15 = nullptr

if (rdi != 0)
    int32_t rax_2 = rdi[1].d
    
    if (rax_2 == 0)
        rdi = nullptr
    else
        rdi[1].d = rax_2 + 1
        
        if (rdi != 0)
            r15 = *(arg1 + 0x390)

int64_t var_208
void**** var_218 = sub_140ec5860(&var_208)
void*** rax_5 = sub_140e91bb0()
void* var_1f8 = &rax_5[2]
sub_140918950(&var_1f8, &rax_5[2])
int64_t var_228 = 0x4d0
void***** var_1e8 = &var_218
sub_140e23ed0(&rax_5[2], "SDockingTabStack")
void var_1e0
int64_t* rax_6
int128_t zmm1
rax_6, zmm1 = sub_140e94090(&var_1e0)
sub_140e9c640(&var_1f8, arg2, rax_6, zmm1)

if (rax_5 != 0)
    rax_5[1].d -= 1
    
    if (rax_5[1].d == 1)
        (**rax_5)(rax_5)
        int32_t temp2_1 = *(rax_5 + 0xc)
        *(rax_5 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*rax_5)[1](rax_5, 1)

int64_t* var_200

if (var_200 != 0)
    var_200[1].d -= 1
    
    if (var_200[1].d == 1)
        (**var_200)(var_200)
        int32_t temp3_1 = *(var_200 + 0xc)
        *(var_200 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_200 + 8))(var_200, 1)

sub_140ddea30(&var_1e0)
int64_t* rbx_3 = *(arg1 + 0x10)
*(*arg2 + 0x3a0) = *(arg1 + 0x3a0)

if (rbx_3 != 0)
    int32_t rax_12 = rbx_3[1].d
    
    if (rax_12 != 0)
        rbx_3[1].d = rax_12 + 1
        rax_12.b = 1
    
    if (rax_12.b == 0)
        rbx_3 = nullptr
    
    if (rbx_3 != 0)
        int32_t rax_13 = rbx_3[1].d
        rsi = *(arg1 + 8)
        rbx_3[1].d = rax_13
        
        if (rax_13 == 0)
            (**rbx_3)(rbx_3)
            int32_t temp7_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)

var_208 = rsi

if (rbx_3 != 0)
    rbx_3[1].d += 1

var_218 = *arg2
int64_t* rax_17 = arg2[1]

if (rax_17 != 0)
    rax_17[1].d += 1

sub_140ed1f50(r15, &var_218, arg3, &var_208)

if (rax_17 != 0)
    rax_17[1].d -= 1
    
    if (rax_17[1].d == 1)
        (**rax_17)(rax_17)
        int32_t temp6_1 = *(rax_17 + 0xc)
        *(rax_17 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rax_17 + 8))(rax_17, 1)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp9_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp11_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp12_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp12_1 == 1)
            int64_t r8_4 = *rdi
            (*(r8_4 + 8))(rdi, 1, r8_4)

__security_check_cookie(rax_1 ^ &var_248)
return arg2
