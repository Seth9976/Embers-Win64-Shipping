// 函数: sub_140e80530
// 地址: 0x140e80530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg4[1]
int64_t* rdi = nullptr
int32_t arg_8 = 0
int64_t* var_a0 = nullptr

if (rbx != 0)
    rbx[1].d += 1
    rdi = var_a0

int64_t var_a8 = *arg4

if (rbx != rdi)
    var_a0 = rbx
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t temp3_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi + 8))(rdi, 1)
else if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

uint128_t zmm0 = *arg5
uint128_t var_98 = zmm0
char var_84 = arg7
int32_t var_88 = *arg6
char var_83 = arg9
void var_68
sub_140e797d0(arg1, &var_68, &var_a8, zmm0)
bool cond:0 = *(arg1 + 0x18) != 0
void* rax_8 = arg3[1]
void* var_c8 = *arg3
void* var_c0 = rax_8
void*** var_b8
void* var_80
void** rax_10
int32_t r14

if (cond:0)
    if (rax_8 != 0)
        *(rax_8 + 8) += 1
    
    rax_10 = sub_140e81630(arg1, &var_b8, &var_c8, &var_68)
    r14 = 2
else
    if (rax_8 != 0)
        *(rax_8 + 8) += 1
    
    char var_d8_1 = arg10
    rax_10 = sub_140e80dd0(arg1, &var_80, &var_c8, &var_68)
    r14 = 1

int64_t* rbx_1 = rax_10[1]
void* r12 = *rax_10

if (rbx_1 != 0)
    rbx_1[1].d += 1

if ((r14.b & 2) != 0)
    r14 &= 0xfffffffd
    int64_t* var_b0
    
    if (var_b0 != 0)
        var_b0[1].d -= 1
        
        if (var_b0[1].d == 1)
            (**var_b0)(var_b0)
            int32_t temp6_1 = *(var_b0 + 0xc)
            *(var_b0 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_b0 + 8))(var_b0, 1)

int64_t* var_78

if ((r14.b & 1) != 0 && var_78 != 0)
    var_78[1].d -= 1
    
    if (var_78[1].d == 1)
        (**var_78)(var_78)
        int32_t temp7_1 = *(var_78 + 0xc)
        *(var_78 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*var_78 + 8))(var_78, 1)

bool cond:1 = *(arg1 + 0x18) == 0
var_c8 = r12
int64_t* var_c0_1 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

var_b8 = *arg3
void* rax_16 = arg3[1]
void* var_b0_1 = rax_16

if (rax_16 != 0)
    *(rax_16 + 8) += 1

sub_140e78fc0(arg1, &var_b8, &var_c8, arg8, cond:1)

if (arg1 + 0xc8 != &var_80)
    *(arg1 + 0xc8) = 0
    int64_t* rdi_3 = *(arg1 + 0xd0)
    
    if (rdi_3 != 0)
        *(arg1 + 0xd0) = 0
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t temp11_1 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*rdi_3 + 8))(rdi_3, 1)

*arg2 = r12
arg2[1] = rbx_1

if (rbx_1 != 0)
    int32_t rax_20 = rbx_1[1].d
    rbx_1[1].d = rax_20
    
    if (rax_20 == 0)
        (**rbx_1)(rbx_1)
        int32_t temp10_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t temp13_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (temp13_1 == 1)
            (*(*var_50 + 8))(var_50, 1)

int64_t* var_60

if (var_60 != 0)
    var_60[1].d -= 1
    
    if (var_60[1].d == 1)
        (**var_60)(var_60)
        int32_t temp15_1 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (temp15_1 == 1)
            (*(*var_60 + 8))(var_60, 1)

if (var_a0 != 0)
    var_a0[1].d -= 1
    
    if (var_a0[1].d == 1)
        (**var_a0)(var_a0)
        int32_t temp16_1 = *(var_a0 + 0xc)
        *(var_a0 + 0xc) -= 1
        
        if (temp16_1 == 1)
            (*(*var_a0 + 8))(var_a0, 1)

return arg2
