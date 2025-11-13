// 函数: sub_140f16120
// 地址: 0x140f16120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_448
int64_t rax_1 = __security_cookie ^ &var_448
int128_t zmm0 = *(arg1 + 0x3d0)
int64_t rbx = *(arg1 + 0x3c8)
int64_t var_410 = *arg2
void* rax_3 = arg2[1]
char var_3a8 = 1
int64_t var_3a0 = 0
int32_t var_398 = 0
int64_t var_3d8 = rbx
char var_3d0 = 1
int64_t var_3c8 = 0
int32_t var_3c0 = 0
void* var_408 = rax_3
int128_t var_3e8 = zmm0
int128_t var_3b8 = zmm0

if (rax_3 != 0)
    *(rax_3 + 8) += 1

void var_380
int64_t* rax_4 = sub_14068c640(&var_380)
rax_4[0x44] = rbx
rax_4[0x45].b = 1
sub_140692f90(&rax_4[0x46], &var_3c8)
rax_4[0x39].b = 1
*(rax_4 + 0x1b8) = var_3e8
sub_140692f90(&rax_4[0x3a], &var_3a0)
void*** rax_5 = j_sub_140a82f30(0x4c8)
void*** rdi = rax_5

if (rax_5 == 0)
    rdi = nullptr
else
    rax_5[1].d = 1
    *(rax_5 + 0xc) = 1
    *rdi = &data_142d8c5a0
    
    if (rdi != -0x10)
        sub_140f20640(&rdi[2])

void* var_400 = &rdi[2]
sub_14065fa30(&var_400, &rdi[2])
int64_t var_428 = 0x4b8
void var_418
void* var_3f0 = &var_418
void* rax_6
int128_t zmm1_1
rax_6, zmm1_1 = sub_1406936e0(rax_4, &var_410, sub_140e23ed0(&rdi[2], "SBorder"))
void* var_390
void** rax_7 = sub_140695920(&var_400, &var_390, rax_6, zmm1_1)
int64_t* rdi_1 = rax_7[1]

if (rdi_1 != 0)
    rdi_1[1].d += 1

if (arg1 + 0x2e0 != &var_3e8)
    *(arg1 + 0x2e0) = *rax_7
    int64_t* rbx_2 = *(arg1 + 0x2e8)
    
    if (rdi_1 != rbx_2)
        *(arg1 + 0x2e8) = rdi_1
        rdi_1 = nullptr
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp2_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rbx_3 = *(arg1 + 0x2e8)
var_410 = *(arg1 + 0x2e0)

if (rbx_3 != 0)
    rbx_3[1].d += 1

if (&var_410 != arg1 + 0x2f0)
    var_410.o = *(arg1 + 0x2f0)
    *(arg1 + 0x2f0) = var_410.o

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp4_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp6_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* var_388

if (var_388 != 0)
    var_388[1].d -= 1
    
    if (var_388[1].d == 1)
        (**var_388)(var_388)
        int32_t temp8_1 = *(var_388 + 0xc)
        *(var_388 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*var_388 + 8))(var_388, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp10_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*rdi)[1](rdi, 1)

sub_14068fed0(&var_380)
sub_140745b20(&var_3c8)
uint64_t result = sub_140745b20(&var_3a0)
int64_t* rbx_6 = arg2[1]

if (rbx_6 != 0)
    rbx_6[1].d -= 1
    
    if (rbx_6[1].d == 1)
        result = (**rbx_6)(rbx_6)
        int32_t temp11_1 = *(rbx_6 + 0xc)
        *(rbx_6 + 0xc) -= 1
        
        if (temp11_1 == 1)
            result = (*(*rbx_6 + 8))(rbx_6, 1)

__security_check_cookie(rax_1 ^ &var_448)
return result
