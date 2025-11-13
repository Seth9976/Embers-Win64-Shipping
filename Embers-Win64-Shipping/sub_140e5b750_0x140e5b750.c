// 函数: sub_140e5b750
// 地址: 0x140e5b750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2b8
int64_t rax_1 = __security_cookie ^ &var_2b8
*(arg1 + 0x2e) &= 0xfb

if (sub_140db3510(arg1 + 0x18) != 0)
    sub_140dc03a0(arg1 + 0x18, *(arg1 + 0x2e))

int64_t* rcx_2 = data_143e20d08
char var_248 = data_1439ae51f
char var_247 = 1
int64_t var_240 = 0
int32_t var_238 = 0
int64_t rax_5 = (*(*rcx_2 + 0x40))(rcx_2)
int64_t* rcx_3 = data_143e20d08
int64_t var_230 = rax_5
char var_228 = 1
int64_t var_220 = 0
int32_t var_218 = 0
void var_200
int64_t* rax_7 = (*(*rcx_3 + 0x110))(rcx_3, &var_200, &var_230, arg2 + 0x1a0, &var_248)
int64_t* rbx = rax_7[1]
void* var_280 = *rax_7
int64_t* var_278 = rbx

if (rbx != 0)
    rbx[1].d += 1

int128_t var_270
__builtin_memcpy(&var_270, "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x40\x00\x00\x00\x00\x01", 
    0x11)
int64_t var_258 = 0
int32_t var_250 = 0
void*** rax_8 = j_sub_140a82f30(0x88)
void*** rdi_1 = rax_8

if (rax_8 == 0)
    rdi_1 = nullptr
else
    sub_14068e490(rax_8)
    *rdi_1 = &data_142d8add0

__builtin_memcpy(&rdi_1[9], "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x40\x00\x00\x00\x00\x01", 
    0x11)
sub_140692f90(&rdi_1[0xc], &var_258)
sub_140745b20(&var_258)
sub_140693600(rdi_1, &var_280)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

void var_1f0
int64_t* rax_11 = sub_14068d420(&var_1f0)
int64_t r14 = sx.q(rax_11[0x35].d)
int32_t rcx_12 = (r14 + 1).d
rax_11[0x35].d = rcx_12

if (rcx_12 s> *(rax_11 + 0x1ac))
    sub_140638870(&rax_11[0x34])

*(rax_11[0x34] + (r14 << 3)) = rdi_1
void*** rax_13 = j_sub_140a82f30(0x2e8)
void*** rdi_2 = rax_13

if (rax_13 == 0)
    rdi_2 = nullptr
else
    rax_13[1].d = 1
    *(rax_13 + 0xc) = 1
    *rdi_2 = &data_142d8c590
    
    if (rdi_2 != -0x10)
        sub_14068e550(&rdi_2[2])

var_270:8.q = rdi_2
var_270.q = &rdi_2[2]
sub_14065fa30(&var_270, &rdi_2[2])
int64_t var_298_1 = 0x2d8
void var_288
char var_260
var_260.q = &var_288
void* var_210
void** rax_14 = sub_140696920(&var_270, &var_210, rax_11, sub_140e23ed0(&rdi_2[2], "SVerticalBox"))
int64_t* rbx_2 = rax_14[1]
var_280 = *rax_14
int64_t* var_278_1 = rbx_2

if (rbx_2 != 0)
    rbx_2[1].d += 1

sub_140de1b90(arg1 + 0x2b8, &var_280)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp4_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* var_208

if (var_208 != 0)
    var_208[1].d -= 1
    
    if (var_208[1].d == 1)
        (**var_208)(var_208)
        int32_t temp6_1 = *(var_208 + 0xc)
        *(var_208 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*var_208 + 8))(var_208, 1)

int64_t* rbx_4 = var_270:8.q

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t temp7_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, 1)

int64_t var_50

if (var_50 != 0)
    sub_140a74f90(var_50)

sub_140660250(&var_1f0)
int64_t* var_1f8

if (var_1f8 != 0)
    var_1f8[1].d -= 1
    
    if (var_1f8[1].d == 1)
        (**var_1f8)(var_1f8)
        int32_t temp9_1 = *(var_1f8 + 0xc)
        *(var_1f8 + 0xc) -= 1
        
        if (temp9_1 == 1)
            (*(*var_1f8 + 8))(var_1f8, 1)

sub_140745b20(&var_220)
uint64_t result = sub_140745b20(&var_240)
__security_check_cookie(rax_1 ^ &var_2b8)
return result
