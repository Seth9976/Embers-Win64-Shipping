// 函数: sub_142700020
// 地址: 0x142700020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
void var_78
int64_t* rax_2 = sub_1426ffcc0(arg1, &var_78)
void var_a0
char* var_88
char** rax_4 = sub_140a96390(&var_88, _vfprintf_p_l(&var_a0, u"{0} [batch]", u"EnvQueryGenerator"))
int32_t var_60 = 4
int64_t rax_5 = *rax_2
int64_t* rax_6 = rax_2[1]

if (rax_6 != 0)
    rax_6[1].d += 1

int32_t rax_7 = rax_2[2].d
char var_38 = 1
int32_t* var_d8 = nullptr
int32_t var_d0 = 1
sub_1405a4b40(&var_d8, 1, 0)
int32_t* rcx_3 = var_d8
*rcx_3 = var_60
int64_t var_58
*(rcx_3 + 8) = var_58
*(rcx_3 + 8) = var_58
rcx_3[2] = var_58.d
*(rcx_3 + 8) = var_58
rcx_3[0xa].b = 0

if (var_38 != 0)
    *(rcx_3 + 0x10) = rax_5
    *(rcx_3 + 0x18) = rax_6
    
    if (rax_6 != 0)
        rax_6[1].d += 1
    
    rcx_3[8] = rax_7
    rcx_3[0xa].b = 1

char* var_c8 = *rax_4
void* rax_15 = rax_4[1]
void* var_c0 = rax_15

if (rax_15 != 0)
    *(rax_15 + 8) += 1

void var_b8
int64_t* rax_16 = sub_140aac870(&var_b8, &var_c8, &var_d8)
*arg2 = *rax_16
void* rax_18 = rax_16[1]
arg2[1] = rax_18

if (rax_18 != 0)
    *(rax_18 + 8) += 1

arg2[2].d = rax_16[2].d
int64_t* var_b0

if (var_b0 != 0)
    var_b0[1].d -= 1
    
    if (var_b0[1].d == 1)
        (**var_b0)(var_b0)
        int32_t rax_22 = *(var_b0 + 0xc)
        *(var_b0 + 0xc) -= 1
        
        if (rax_22 == 1)
            (*(*var_b0 + 8))(var_b0, 1)

sub_140596f50(&var_d8)

if (var_38 != 0)
    char var_38_1 = 0
    
    if (rax_6 != 0)
        rax_6[1].d -= 1
        
        if (rax_6[1].d == 1)
            (**rax_6)(rax_6)
            int32_t rax_26 = *(rax_6 + 0xc)
            *(rax_6 + 0xc) -= 1
            
            if (rax_26 == 1)
                (*(*rax_6 + 8))(rax_6, 1)

int64_t* rdi_2 = rax_4[1]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t rax_30 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (rax_30 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

int64_t* rdi_3 = rax_2[1]

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t rax_34 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (rax_34 == 1)
            (*(*rdi_3 + 8))(rdi_3, 1)

int64_t* var_98

if (var_98 != 0)
    var_98[1].d -= 1
    
    if (var_98[1].d == 1)
        (**var_98)(var_98)
        int32_t rbx_1 = *(var_98 + 0xc)
        *(var_98 + 0xc) -= 1
        
        if (rbx_1 == 1)
            int64_t r8_2 = *var_98
            (*(r8_2 + 8))(var_98, zx.q(rbx_1), r8_2)

__security_check_cookie(rax_1 ^ &var_f8)
return arg2
