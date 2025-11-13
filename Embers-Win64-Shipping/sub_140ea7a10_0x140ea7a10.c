// 函数: sub_140ea7a10
// 地址: 0x140ea7a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_488
int64_t rax_1 = __security_cookie ^ &var_488
int64_t* rbx = data_143e243c8
void var_3a8
int64_t rax_3 = (*(*rbx + 0x48))(rbx, *sub_140b58170(&var_3a8, "NoBorder", 1), 0)
int64_t rcx_2 = arg1[0x78]
void* r14 = nullptr
int64_t var_408 = rax_3
void* rax_4 = arg1[0x79]
char var_400 = 1
int64_t var_3f8 = 0
int32_t var_3f0 = 0
char var_3c0 = 1
int64_t var_3b8 = 0
int32_t var_3b0 = 0
int64_t var_438 = rcx_2
void* var_430 = rax_4
int128_t var_3d0 = zx.o(0)

if (rax_4 != 0)
    *(rax_4 + 8) += 1

void var_380
int64_t* rax_5
int128_t zmm6
rax_5, zmm6 = sub_14068c640(&var_380)
rax_5[0x39].b = 1
*(rax_5 + 0x1b8) = zmm6
sub_140692f90(&rax_5[0x3a], &var_3b8)
rax_5[0x44] = rax_3
rax_5[0x45].b = 1
sub_140692f90(&rax_5[0x46], &var_3f8)
rax_5[0x36].d = 2
*(rax_5 + 0x1b4) = 2
void*** rax_6 = j_sub_140a82f30(0x4c8)
void*** rdi_1 = rax_6

if (rax_6 == 0)
    rdi_1 = nullptr
else
    rax_6[1].d = 1
    *(rax_6 + 0xc) = 1
    *rdi_1 = &data_142d8c5a0
    
    if (rdi_1 != -0x10)
        sub_140f20640(&rdi_1[2])

void* var_450 = &rdi_1[2]
sub_14065fa30(&var_450, &rdi_1[2])
int64_t var_468 = 0x4b8
void var_458
void* var_440 = &var_458
void* rax_7
int128_t zmm1_1
rax_7, zmm1_1 = sub_1406936e0(rax_5, &var_438, sub_140e23ed0(&rdi_1[2], "SBorder"))
void* var_3a0
void** rax_8 = sub_140695920(&var_450, &var_3a0, rax_7, zmm1_1)
int64_t* rbx_3 = rax_8[1]
void* var_428 = *rax_8
int64_t* var_420 = rbx_3

if (rbx_3 != 0)
    rbx_3[1].d += 1

sub_140de1b90(&arg1[0x58], &var_428)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp2_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

int64_t* var_398

if (var_398 != 0)
    var_398[1].d -= 1
    
    if (var_398[1].d == 1)
        (**var_398)(var_398)
        int32_t temp4_1 = *(var_398 + 0xc)
        *(var_398 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*var_398 + 8))(var_398, 1)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp5_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*rdi_1)[1](rdi_1, 1)

sub_14068fed0(&var_380)
sub_140745b20(&var_3b8)
sub_140745b20(&var_3f8)
void* result = arg1[0x75]

if (*(result + 0x94) != 0)
    sub_1405d9400()
    int64_t var_3e8 = data_143cd6fd8
    void* rcx_23 = data_143cd6fe0
    void* var_3e0_1 = rcx_23
    
    if (rcx_23 != 0)
        *(rcx_23 + 8) += 1
    
    int32_t var_3d8_1 = data_143cd6fe8
    void var_390
    int64_t* rax_17 = (*(*arg1 + 8))(arg1, &var_390)
    int64_t var_418 = *rax_17
    void* rcx_26 = rax_17[1]
    void* var_410_1 = rcx_26
    
    if (rcx_26 != 0)
        *(rcx_26 + 8) += 1
    
    int64_t* rbx_6 = arg1[0x74]
    
    if (rbx_6 != 0)
        int32_t rax_18 = rbx_6[1].d
        
        if (rax_18 != 0)
            rbx_6[1].d = rax_18 + 1
            rax_18.b = 1
        
        if (rax_18.b == 0)
            rbx_6 = nullptr
        
        if (rbx_6 != 0)
            r14 = arg1[0x73]
    
    result = sub_140ea2410(r14, &var_418, &var_3e8)
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            result = (**rbx_6)(rbx_6)
            int32_t temp8_1 = *(rbx_6 + 0xc)
            *(rbx_6 + 0xc) -= 1
            
            if (temp8_1 == 1)
                result = (*(*rbx_6 + 8))(rbx_6, 1)
    
    int64_t* var_388
    
    if (var_388 != 0)
        var_388[1].d -= 1
        
        if (var_388[1].d == 1)
            result = (**var_388)(var_388)
            int32_t temp9_1 = *(var_388 + 0xc)
            *(var_388 + 0xc) -= 1
            
            if (temp9_1 == 1)
                result = (*(*var_388 + 8))(var_388, 1)

__security_check_cookie(rax_1 ^ &var_488)
return result
