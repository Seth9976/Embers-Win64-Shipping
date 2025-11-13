// 函数: sub_141b95f40
// 地址: 0x141b95f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
float var_70 = 0f
int64_t* rcx = *(arg1 + 0x30)
int64_t* var_b0 = arg2
bool var_d8
int64_t* rax_3
int32_t rcx_1
bool* r14
void** (* var_c0)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4)

if (rcx != 0)
    var_d8 = false
    bool* var_b8_1 = &var_d8
    var_c0 = sub_141b970e0
    void var_a8
    sub_141befea0(rcx, &var_a8, &var_c0)
    arg2 = var_b0
    rax_3 = &var_a8
    r14 = var_b8_1
    rcx_1 = 2
else
    r14 = data_143e244b8
    var_c0 = data_143e244b0
    bool* var_b8 = r14
    
    if (r14 != 0)
        *(r14 + 8) += 1
    
    rax_3 = &var_c0
    rcx_1 = 1
float zmm1 = *(arg1 + 0x4c)
int64_t* var_d0 = rax_3
char var_6c
int32_t r15

if (zmm1 f!= (zx.o(0)).d)
    var_70 = zmm1
    r15 = 8
    var_6c = 1
else
    var_6c = 0
    r15 = 4

int32_t r15_1 = r15 | rcx_1
int128_t zmm7

zmm7 = var_6c == 0 ? var_70 : var_70

int128_t zmm6 = *(arg1 + 0x38)
uint32_t rsi = zx.d(*(arg1 + 0x51))
uint32_t rdi = zx.d(*(arg1 + 0x50))
var_d8 = var_6c != 0
char var_88 = 1
int64_t var_80 = 0
int32_t var_78 = 0
int128_t var_98 = zmm6
void*** rax_4 = sub_140f2ace0(*arg2)
rax_4[7].b = 1
*(rax_4 + 0x28) = zmm6
sub_140692f90(&rax_4[8], &var_80)
sub_140745b20(&var_80)
rax_4[4].d = rdi
*(rax_4 + 0x24) = rsi
rax_4[0xb].b = *(arg1 + 0x48)

if (&var_70 != &rax_4[0xa])
    bool rcx_6
    
    if (*(rax_4 + 0x54) == 0)
        rcx_6 = var_6c != 0
    else
        rcx_6 = var_d8
        *(rax_4 + 0x54) = 0
    
    if (rcx_6 != 0)
        rax_4[0xa].d = zmm7.d
        *(rax_4 + 0x54) = 1

int64_t* rdi_1 = rax_4[3]

if (rdi_1 != 0)
    rdi_1[1].d += 1

sub_140e0dfc0(rax_4)
int64_t* rbx = var_d0
int64_t* rbx_1 = rbx[1]
var_d0 = *rbx

if (rbx_1 != 0)
    rbx_1[1].d += 1

if (&var_d0 != &rax_4[2])
    var_d0.o = *(rax_4 + 0x10)
    *(rax_4 + 0x10) = var_d0.o

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

sub_140de7bf0(rax_4)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp3_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

*(arg1 + 0x58) = rax_4
int32_t rcx_14 = r15_1 & 0xfffffff7

if ((r15_1.b & 8) == 0)
    rcx_14 = r15_1

int32_t rdi_3 = rcx_14 & 0xfffffffb
char result = rcx_14.b & 4

if (result == 0)
    rdi_3 = rcx_14

if ((rdi_3.b & 2) != 0)
    rdi_3 &= 0xfffffffd
    int64_t* var_a0
    
    if (var_a0 != 0)
        var_a0[1].d -= 1
        
        if (var_a0[1].d == 1)
            result = (**var_a0)(var_a0)
            int32_t temp7_1 = *(var_a0 + 0xc)
            *(var_a0 + 0xc) -= 1
            
            if (temp7_1 == 1)
                result = (*(*var_a0 + 8))(var_a0, 1)

if ((rdi_3.b & 1) != 0 && r14 != 0)
    int32_t temp6_1 = *(r14 + 8)
    *(r14 + 8) -= 1
    
    if (temp6_1 == 1)
        result = (**r14)(r14)
        int32_t temp9_1 = *(r14 + 0xc)
        *(r14 + 0xc) -= 1
        
        if (temp9_1 == 1)
            result = (*(*r14 + 8))(r14, 1)

int64_t* rbx_4 = var_b0[1]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        result = (**rbx_4)(rbx_4)
        int32_t temp8_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp8_1 == 1)
            result = (*(*rbx_4 + 8))(rbx_4, 1)

__security_check_cookie(rax_1 ^ &var_f8)
return result
