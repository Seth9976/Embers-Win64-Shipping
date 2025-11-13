// 函数: sub_140e5bad0
// 地址: 0x140e5bad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_398
int64_t rax_1 = __security_cookie ^ &var_398
void* rdx = *(arg2 + 0x1a0)
*(arg1 + 0x1a8) = *(rdx + 0x1a8)
*(arg1 + 0x1a9) = *(rdx + 0x1a9)
sub_1407473e0(arg1 + 0x1b0, rdx + 0x1b0)

if (arg2 + 0x1b0 != arg1 + 0x390)
    int64_t* rcx_2
    
    if (*(arg2 + 0x1b8) != 0)
        rcx_2 = *(arg2 + 0x1b0)
    
    if (*(arg2 + 0x1b8) != 0 && rcx_2 != 0)
        (*(*rcx_2 + 0x40))(rcx_2, arg1 + 0x390)
    else if (*(arg1 + 0x398) != 0)
        int64_t* rcx_3 = *(arg1 + 0x390)
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x38))(rcx_3, 0)
            int64_t rcx_4 = *(arg1 + 0x390)
            
            if (rcx_4 != 0)
                *(arg1 + 0x390) = sub_140a84c80(rcx_4, 0, 0)
            
            *(arg1 + 0x398) = 0

if (arg2 + 0x1c0 != arg1 + 0x3a0)
    int64_t* rcx_5
    
    if (*(arg2 + 0x1c8) != 0)
        rcx_5 = *(arg2 + 0x1c0)
    
    if (*(arg2 + 0x1c8) != 0 && rcx_5 != 0)
        (*(*rcx_5 + 0x40))(rcx_5, arg1 + 0x3a0)
    else if (*(arg1 + 0x3a8) != 0)
        int64_t* rcx_6 = *(arg1 + 0x3a0)
        
        if (rcx_6 != 0)
            (*(*rcx_6 + 0x38))(rcx_6, 0)
            int64_t rcx_7 = *(arg1 + 0x3a0)
            
            if (rcx_7 != 0)
                *(arg1 + 0x3a0) = sub_140a84c80(rcx_7, 0, 0)
            
            *(arg1 + 0x3a8) = 0

int128_t zmm6 = *(arg2 + 0x1d4)
int128_t zmm7 = *(arg2 + 0x1d0)
void* var_360 = *(arg2 + 0x1a0)
void* rax_12 = *(arg2 + 0x1a8)
int32_t var_320 = zmm6.d
char var_31c = 1
int64_t var_318 = 0
int32_t var_310 = 0
int32_t var_338 = zmm7.d
char var_334 = 1
int64_t var_330 = 0
int32_t var_328 = 0
void* var_358 = rax_12

if (rax_12 != 0)
    *(rax_12 + 8) += 1

void var_2f8
int64_t* rax_13 = sub_14068c940(&var_2f8)
rax_13[0x42].d = zmm7.d
*(rax_13 + 0x214) = 1
sub_1407473e0(&rax_13[0x43], &var_330)
rax_13[0x4b].d = zmm6.d
*(rax_13 + 0x25c) = 1
sub_1407473e0(&rax_13[0x4c], &var_318)
void*** rax_14 = j_sub_140a82f30(0x3d8)
void*** rdi_1 = rax_14

if (rax_14 == 0)
    rdi_1 = nullptr
else
    rax_14[1].d = 1
    *(rax_14 + 0xc) = 1
    *rdi_1 = &data_142d8c570
    
    if (rdi_1 != -0x10)
        sub_140f20750(&rdi_1[2])

void* var_350 = &rdi_1[2]
sub_14065fa30(&var_350, &rdi_1[2])
int64_t var_378 = 0x3c8
void var_368
void* var_340 = &var_368
void* rax_15
int128_t zmm1_1
rax_15, zmm1_1 = sub_1406937a0(rax_13, &var_360, sub_140e23ed0(&rdi_1[2], "SBox"))
void* var_308
void** rax_16 = sub_140695d20(&var_350, &var_308, rax_15, zmm1_1)
int64_t* rbx_3 = rax_16[1]
var_360 = *rax_16
int64_t* var_358_1 = rbx_3

if (rbx_3 != 0)
    rbx_3[1].d += 1

sub_140de1b90(arg1 + 0x2b8, &var_360)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp2_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

int64_t* var_300

if (var_300 != 0)
    var_300[1].d -= 1
    
    if (var_300[1].d == 1)
        (**var_300)(var_300)
        int32_t temp4_1 = *(var_300 + 0xc)
        *(var_300 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*var_300 + 8))(var_300, 1)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp5_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*rdi_1)[1](rdi_1, 1)

sub_140690290(&var_2f8)
sub_140745b20(&var_330)
uint64_t result = sub_140745b20(&var_318)
__security_check_cookie(rax_1 ^ &var_398)
return result
