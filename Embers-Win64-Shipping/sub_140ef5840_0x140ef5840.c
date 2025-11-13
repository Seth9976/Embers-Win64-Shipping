// 函数: sub_140ef5840
// 地址: 0x140ef5840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
*(arg1 + 0x440) = *(arg2 + 0x1a0)
*(arg1 + 0x448) = *(arg2 + 0x1a8)
*(arg1 + 0x44c) = *(arg2 + 0x1ac)
void*** rax_5 = j_sub_140a82f30(0x2e8)
void*** rdi = rax_5

if (rax_5 == 0)
    rdi = nullptr
else
    rax_5[1].d = 1
    *(rax_5 + 0xc) = 1
    *rdi = &data_142d8c590
    
    if (rdi != -0x10)
        sub_14068e500(&rdi[2])

void* var_1f0 = &rdi[2]
sub_14065fa30(&var_1f0, &rdi[2])
int64_t var_218 = 0x2d8
void var_208
void* var_1e0 = &var_208
sub_140e23ed0(&rdi[2], "SHorizontalBox")
void var_1c8
int64_t* rax_6
int128_t zmm1
rax_6, zmm1 = sub_14068d420(&var_1c8)
void* var_200
void** rax_7 = sub_140696920(&var_1f0, &var_200, rax_6, zmm1)
int64_t* rcx_5 = rax_7[1]

if (rcx_5 != 0)
    rcx_5[1].d += 1

void var_1d8

if (arg1 + 0x430 == &var_1d8)
label_140ef5988:
    
    if (rcx_5 != 0)
        rcx_5[1].d -= 1
        
        if (rcx_5[1].d == 1)
            (**rcx_5)(rcx_5)
            int32_t temp2_1 = *(rcx_5 + 0xc)
            *(rcx_5 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_5 + 8))(rcx_5, 1)
else
    *(arg1 + 0x430) = *rax_7
    int64_t* rbx_1 = *(arg1 + 0x438)
    
    if (rcx_5 == rbx_1)
        goto label_140ef5988
    
    *(arg1 + 0x438) = rcx_5
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp6_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* var_1f8

if (var_1f8 != 0)
    var_1f8[1].d -= 1
    
    if (var_1f8[1].d == 1)
        (**var_1f8)(var_1f8)
        int32_t temp5_1 = *(var_1f8 + 0xc)
        *(var_1f8 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_1f8 + 8))(var_1f8, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp7_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*rdi)[1](rdi, 1)

int64_t var_28

if (var_28 != 0)
    sub_140a74f90(var_28)

sub_140660250(&var_1c8)
int64_t* rbx_4 = *(arg1 + 0x438)

if (rbx_4 != 0)
    rbx_4[1].d += 1

var_200 = *(arg1 + 0x430)
int64_t* var_1f8_1 = rbx_4

if (rbx_4 != 0)
    rbx_4[1].d += 1

sub_140de1b90(arg1 + 0x2b8, &var_200)

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp10_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)
    
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp11_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

int64_t (* result)(void* arg1) = sub_140ef6380(arg1)
__security_check_cookie(rax_1 ^ &var_238)
return result
