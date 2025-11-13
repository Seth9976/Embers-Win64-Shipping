// 函数: sub_141b9dd90
// 地址: 0x141b9dd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int128_t zmm0 = *arg3
*(arg1 + 0x28) &= 0xfd
*(arg1 + 0x3a8) = 0x3f000000
*(arg1 + 0x390) = zmm0
*(arg1 + 0x3a0) = 0
*(arg1 + 0x3ac) = 0x3f000000
void*** rax_2 = j_sub_140a82f30(0x2e0)
void*** rbx = rax_2

if (rax_2 == 0)
    rbx = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rbx = &data_142ed9ec8
    
    if (rbx != -0x10)
        sub_140f20930(&rbx[2])

void* var_1f0 = &rbx[2]
sub_140918950(&var_1f0, &rbx[2])
int64_t var_218 = 0x2d0
void var_208
void* var_1e0 = &var_208
sub_140e23ed0(&rbx[2], "SConstraintCanvas")

if (rbx != 0)
    rbx[1].d += 1

void* var_200

if (arg1 + 0x400 == &var_200)
label_141b9deb4:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rbx)[1](rbx, 1)
else
    *(arg1 + 0x400) = &rbx[2]
    void*** rdi_1 = *(arg1 + 0x408)
    
    if (rbx == rdi_1)
        goto label_141b9deb4
    
    *(arg1 + 0x408) = rbx
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp4_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*rdi_1)[1](rdi_1, 1)

void var_1c8
int64_t* rax_7
int128_t zmm1
rax_7, zmm1 = sub_140e50640(&var_1c8)
void* var_1d8
void** rax_8 = sub_141b89300(&var_1f0, &var_1d8, rax_7, zmm1)
int64_t* rbx_1 = rax_8[1]
var_200 = *rax_8
int64_t* var_1f8 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

sub_140de1b90(arg1 + 0x2b8, &var_200)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp6_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* var_1d0

if (var_1d0 != 0)
    var_1d0[1].d -= 1
    
    if (var_1d0[1].d == 1)
        (**var_1d0)(var_1d0)
        int32_t temp8_1 = *(var_1d0 + 0xc)
        *(var_1d0 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*var_1d0 + 8))(var_1d0, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp9_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*rbx)[1](rbx, 1)

int64_t var_28

if (var_28 != 0)
    sub_140a74f90(var_28)

int64_t result = sub_140ddea30(&var_1c8)
__security_check_cookie(rax_1 ^ &var_238)
return result
