// 函数: sub_140eb5490
// 地址: 0x140eb5490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
char rbx = data_1439ae51e
int64_t* rdi = *(arg1 + 0xa8)
char var_218 = rbx
int64_t var_210 = 0
int32_t var_208 = 0
char var_217 = 1
void var_1e0
int64_t* rax_2 = sub_140e939f0(&var_1e0)
rax_2[0xf].b = rbx
*(rax_2 + 0x79) = 1
sub_1407473e0(&rax_2[0x10], &var_210)
void var_1f0
int64_t* rax_4 = (*(*rdi + 8))(rdi, &var_1f0)
int64_t* rbx_1 = rax_4[1]
void* var_230 = *rax_4

if (rbx_1 != 0)
    rbx_1[1].d += 1

if (&var_230 != &rax_2[0x34])
    var_230.o = *(rax_2 + 0x1a0)
    *(rax_2 + 0x1a0) = var_230.o

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

void*** rax_8 = sub_140e91900()
var_230 = &rax_8[2]
sub_140e90fe0(&var_230, &rax_8[2])
int64_t var_248 = 0x3d0
void var_238
void* var_220 = &var_238
void var_200
int64_t* rax_9 = sub_140e9b790(&var_230, &var_200, rax_2, 
    sub_140e23ed0(&rax_8[3], "SCustomToolbarPreviewWidget"))
*arg2 = *rax_9
void* rax_11 = rax_9[1]
arg2[1] = rax_11

if (rax_11 != 0)
    *(rax_11 + 8) += 1

int64_t* var_1f8

if (var_1f8 != 0)
    var_1f8[1].d -= 1
    
    if (var_1f8[1].d == 1)
        (**var_1f8)(var_1f8)
        int32_t temp4_1 = *(var_1f8 + 0xc)
        *(var_1f8 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*var_1f8 + 8))(var_1f8, 1)

if (rax_8 != 0)
    rax_8[1].d -= 1
    
    if (rax_8[1].d == 1)
        (**rax_8)(rax_8)
        int32_t temp6_1 = *(rax_8 + 0xc)
        *(rax_8 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*rax_8)[1](rax_8, 1)

int64_t* var_38

if (var_38 != 0)
    var_38[1].d -= 1
    
    if (var_38[1].d == 1)
        (**var_38)(var_38)
        int32_t temp8_1 = *(var_38 + 0xc)
        *(var_38 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*var_38 + 8))(var_38, 1)

sub_140ddea30(&var_1e0)
int64_t* var_1e8

if (var_1e8 != 0)
    var_1e8[1].d -= 1
    
    if (var_1e8[1].d == 1)
        (**var_1e8)(var_1e8)
        int32_t temp9_1 = *(var_1e8 + 0xc)
        *(var_1e8 + 0xc) -= 1
        
        if (temp9_1 == 1)
            int64_t r8_3 = *var_1e8
            (*(r8_3 + 8))(var_1e8, 1, r8_3)

sub_140745b20(&var_210)
__security_check_cookie(rax_1 ^ &var_268)
return arg2
