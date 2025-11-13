// 函数: sub_140f721a0
// 地址: 0x140f721a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_418
int64_t rax_1 = __security_cookie ^ &var_418
arg1[0xef].b |= 2
*(arg1 + 0x779) |= 2
arg1[0x151].w = 0x100
sub_140e239f0(arg1, *(arg2 + 0x1a0))
void*** rax_2 = j_sub_140a82f30(0x18)
void*** rbx

if (rax_2 == 0)
    rbx = nullptr
else
    rbx = std::exception::exception(rax_2)

void*** rax_4 = j_sub_140a82f30(0x18)

if (rax_4 != 0)
    rax_4[1].d = 1
    *rax_4 = &data_142d42ea8
    *(rax_4 + 0xc) = 1
    rax_4[2] = rbx

void*** var_3e8 = rbx
void*** var_3e0 = rax_4
sub_140e24aa0(arg1, &var_3e8, rbx)
sub_140deab20(arg1)
void*** rax_5 = sub_140f641b0()
void* var_3b8 = &rax_5[2]
sub_140918950(&var_3b8, &rax_5[2])
int64_t var_3f8 = 0x2c8
void var_3d8
void* var_3a8 = &var_3d8
sub_140e23ed0(&rax_5[2], "STooltipPresenter")

if (rax_5 != 0)
    rax_5[1].d += 1

if (&arg1[0x14f] == &var_3e8)
label_140f72308:
    
    if (rax_5 != 0)
        rax_5[1].d -= 1
        
        if (rax_5[1].d == 1)
            (**rax_5)(rax_5)
            int32_t temp1_1 = *(rax_5 + 0xc)
            *(rax_5 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*rax_5)[1](rax_5, 1)
else
    arg1[0x14f] = &rax_5[2]
    void*** rdi_1 = arg1[0x150]
    
    if (rax_5 == rdi_1)
        goto label_140f72308
    
    arg1[0x150] = rax_5
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*rdi_1)[1](rdi_1, 1)

void var_1d0
int64_t* rax_10
int128_t zmm1
rax_10, zmm1 = sub_140f647e0(&var_1d0)
void* var_390
void** rax_11 = sub_140f69530(&var_3b8, &var_390, rax_10, zmm1)
int64_t* rbx_2 = rax_11[1]
void*** rdi_2 = *rax_11

if (rbx_2 != 0)
    rbx_2[1].d += 1

void var_380
int64_t* rax_12 = sub_140e4fff0(&var_380)
var_3e8 = rdi_2
int64_t* rdi_3 = rbx_2

if (rbx_2 != 0)
    rbx_2[1].d += 1

if (&var_3e8 != &rax_12[0x34])
    var_3e8.o = *(rax_12 + 0x1a0)
    rdi_3 = rbx_2
    *(rax_12 + 0x1a0) = var_3e8.o

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t temp6_1 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rdi_3 + 8))(rdi_3, 1)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp7_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

void*** rax_17 = sub_140e48f30()
void* var_3d0 = &rax_17[2]
sub_140918950(&var_3d0, &rax_17[2])
int64_t var_3f8_1 = 0x390
void var_3d7
void* var_3c0 = &var_3d7
void* var_3a0
void** rax_18 = sub_140e57320(&var_3d0, &var_3a0, rax_12, sub_140e23ed0(&rax_17[2], "SPopup"))
int64_t* rbx_4 = rax_18[1]
var_3e8 = *rax_18
int64_t* var_3e0_2 = rbx_4

if (rbx_4 != 0)
    rbx_4[1].d += 1

sub_140de1aa0(sub_140de7320(arg1[0x138], 0xffffffff), &var_3e8)

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp10_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

int64_t* var_398

if (var_398 != 0)
    var_398[1].d -= 1
    
    if (var_398[1].d == 1)
        (**var_398)(var_398)
        int32_t temp12_1 = *(var_398 + 0xc)
        *(var_398 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*(*var_398 + 8))(var_398, 1)

if (rax_17 != 0)
    rax_17[1].d -= 1
    
    if (rax_17[1].d == 1)
        (**rax_17)(rax_17)
        int32_t temp14_1 = *(rax_17 + 0xc)
        *(rax_17 + 0xc) -= 1
        
        if (temp14_1 == 1)
            (*rax_17)[1](rax_17, 1)

int64_t* var_1d8

if (var_1d8 != 0)
    var_1d8[1].d -= 1
    
    if (var_1d8[1].d == 1)
        (**var_1d8)(var_1d8)
        int32_t temp16_1 = *(var_1d8 + 0xc)
        *(var_1d8 + 0xc) -= 1
        
        if (temp16_1 == 1)
            (*(*var_1d8 + 8))(var_1d8, 1)

sub_140ddea30(&var_380)
int64_t* var_388

if (var_388 != 0)
    var_388[1].d -= 1
    
    if (var_388[1].d == 1)
        (**var_388)(var_388)
        int32_t temp18_1 = *(var_388 + 0xc)
        *(var_388 + 0xc) -= 1
        
        if (temp18_1 == 1)
            (*(*var_388 + 8))(var_388, 1)

if (rax_5 != 0)
    rax_5[1].d -= 1
    
    if (rax_5[1].d == 1)
        (**rax_5)(rax_5)
        int32_t temp20_1 = *(rax_5 + 0xc)
        *(rax_5 + 0xc) -= 1
        
        if (temp20_1 == 1)
            (*rax_5)[1](rax_5, 1)

int64_t* var_28

if (var_28 != 0)
    var_28[1].d -= 1
    
    if (var_28[1].d == 1)
        (**var_28)(var_28)
        int32_t temp21_1 = *(var_28 + 0xc)
        *(var_28 + 0xc) -= 1
        
        if (temp21_1 == 1)
            (*(*var_28 + 8))(var_28, 1)

sub_140ddea30(&var_1d0)
var_3e8 = data_143e244b0
void* rax_35 = data_143e244b8
void* var_3e0_3 = rax_35

if (rax_35 != 0)
    *(rax_35 + 8) += 1

int64_t result = sub_140e23de0(arg1, &var_3e8)
__security_check_cookie(rax_1 ^ &var_418)
return result
