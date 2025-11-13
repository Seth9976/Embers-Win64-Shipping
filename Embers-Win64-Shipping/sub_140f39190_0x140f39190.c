// 函数: sub_140f39190
// 地址: 0x140f39190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
*(arg1 + 0x418) = 0
sub_140d962e0(arg1 + 0x3b0, arg2 + 0x1a0)
*(arg1 + 0x400) = *(arg2 + 0x1f0)
sub_140692f90(arg1 + 0x408, arg2 + 0x1f8)
void*** rax_3 = j_sub_140a82f30(0x2e8)
void*** rbx_1 = rax_3

if (rax_3 == 0)
    rbx_1 = nullptr
else
    rax_3[1].d = 1
    *(rax_3 + 0xc) = 1
    *rbx_1 = &data_142d8c590
    
    if (rbx_1 != -0x10)
        sub_14068e550(&rbx_1[2])

void* var_1f0 = &rbx_1[2]
sub_14065fa30(&var_1f0, &rbx_1[2])
int64_t var_218 = 0x2d8
void var_208
void* var_1e0 = &var_208
sub_140e23ed0(&rbx_1[2], "SVerticalBox")

if (rbx_1 != 0)
    rbx_1[1].d += 1

void* var_200

if (arg1 + 0x390 == &var_200)
label_140f392be:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rbx_1)[1](rbx_1, 1)
else
    *(arg1 + 0x390) = &rbx_1[2]
    void*** rdi_1 = *(arg1 + 0x398)
    
    if (rbx_1 == rdi_1)
        goto label_140f392be
    
    *(arg1 + 0x398) = rbx_1
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp4_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*rdi_1)[1](rdi_1, 1)

void var_1c8
int64_t* rax_8
int128_t zmm1
rax_8, zmm1 = sub_14068d420(&var_1c8)
void* var_1d8
void** rax_9 = sub_140696920(&var_1f0, &var_1d8, rax_8, zmm1)
int64_t* rbx_2 = rax_9[1]
var_200 = *rax_9
int64_t* var_1f8 = rbx_2

if (rbx_2 != 0)
    rbx_2[1].d += 1

sub_140de1b90(arg1 + 0x2b8, &var_200)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp6_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* var_1d0

if (var_1d0 != 0)
    var_1d0[1].d -= 1
    
    if (var_1d0[1].d == 1)
        (**var_1d0)(var_1d0)
        int32_t temp8_1 = *(var_1d0 + 0xc)
        *(var_1d0 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*var_1d0 + 8))(var_1d0, 1)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp9_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*rbx_1)[1](rbx_1, 1)

int64_t var_28

if (var_28 != 0)
    sub_140a74f90(var_28)

int64_t result = sub_140660250(&var_1c8)
__security_check_cookie(rax_1 ^ &var_238)
return result
