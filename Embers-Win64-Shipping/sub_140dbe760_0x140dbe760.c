// 函数: sub_140dbe760
// 地址: 0x140dbe760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t var_e8 = 0
int32_t var_e0 = 0

if (arg1 != -0x18 && *(arg1 + 0x18) != 0)
    sub_1405947f0(&var_e8, 2)
    int32_t rax_2 = var_e0 + 2
    
    if (rax_2 s> 0)
        sub_140594770(&var_e8)
    
    UnDecorator::getReferenceType(var_e8, arg1 + 0x18, 2)
    *(var_e8 + (sx.q(rax_2) << 1) - 2) = 0

void var_78
int64_t* rax_4 = sub_140aae2f0(&var_78, &var_e8)
void var_a0
char* var_88
char** rax_6 = sub_140a96390(&var_88, _vfprintf_p_l(&var_a0, u"Char({0})", u"Events"))
int32_t var_60 = 4
int64_t rax_7 = *rax_4
int64_t* rax_8 = rax_4[1]

if (rax_8 != 0)
    rax_8[1].d += 1

int32_t rax_9 = rax_4[2].d
char var_38 = 1
int32_t* var_d8 = nullptr
int32_t var_d0 = 1
sub_1405a4b40(&var_d8, 1, 0)
int32_t* rcx_8 = var_d8
*rcx_8 = var_60
int64_t var_58
*(rcx_8 + 8) = var_58
*(rcx_8 + 8) = var_58
rcx_8[2] = var_58.d
*(rcx_8 + 8) = var_58
rcx_8[0xa].b = 0

if (var_38 != 0)
    *(rcx_8 + 0x10) = rax_7
    *(rcx_8 + 0x18) = rax_8
    
    if (rax_8 != 0)
        rax_8[1].d += 1
    
    rcx_8[8] = rax_9
    rcx_8[0xa].b = 1

char* var_c8 = *rax_6
void* rax_17 = rax_6[1]
void* var_c0 = rax_17

if (rax_17 != 0)
    *(rax_17 + 8) += 1

void var_b8
int64_t* rax_18 = sub_140aac870(&var_b8, &var_c8, &var_d8)
*arg2 = *rax_18
void* rax_20 = rax_18[1]
arg2[1] = rax_20

if (rax_20 != 0)
    *(rax_20 + 8) += 1

arg2[2].d = rax_18[2].d
int64_t* var_b0

if (var_b0 != 0)
    var_b0[1].d -= 1
    
    if (var_b0[1].d == 1)
        (**var_b0)(var_b0)
        int32_t rax_24 = *(var_b0 + 0xc)
        *(var_b0 + 0xc) -= 1
        
        if (rax_24 == 1)
            (*(*var_b0 + 8))(var_b0, 1)

sub_140596f50(&var_d8)

if (var_38 != 0)
    char var_38_1 = 0
    
    if (rax_8 != 0)
        rax_8[1].d -= 1
        
        if (rax_8[1].d == 1)
            (**rax_8)(rax_8)
            int32_t rax_28 = *(rax_8 + 0xc)
            *(rax_8 + 0xc) -= 1
            
            if (rax_28 == 1)
                (*(*rax_8 + 8))(rax_8, 1)

int64_t* rdi_2 = rax_6[1]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t rax_32 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (rax_32 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

int64_t* rdi_3 = rax_4[1]

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t rax_36 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (rax_36 == 1)
            (*(*rdi_3 + 8))(rdi_3, 1)

int64_t* var_98

if (var_98 != 0)
    var_98[1].d -= 1
    
    if (var_98[1].d == 1)
        (**var_98)(var_98)
        int32_t rbx_1 = *(var_98 + 0xc)
        *(var_98 + 0xc) -= 1
        
        if (rbx_1 == 1)
            int64_t r8_1 = *var_98
            (*(r8_1 + 8))(var_98, zx.q(rbx_1), r8_1)

int64_t rcx_22 = var_e8

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

__security_check_cookie(rax_1 ^ &var_108)
return arg2
