// 函数: sub_140e26c70
// 地址: 0x140e26c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t* rax_2 = sub_140d44910(arg1 + 0x738)
int64_t* rdi = rax_2[1]
int64_t rbx = *rax_2

if (rdi != 0)
    rdi[1].d += 1

int32_t rsi = rax_2[2].d
void var_88
char* var_70
char** rax_4 = sub_140a96390(&var_70, _vfprintf_p_l(&var_88, u" Window : {0} ", u"SWindow"))
int32_t var_60 = 4

if (rdi != 0)
    rdi[1].d += 1

char var_38 = 1
int32_t* var_d8 = nullptr
int32_t var_d0 = 1
sub_1405a4b40(&var_d8, 1, 0)
int32_t* rcx_4 = var_d8
*rcx_4 = var_60
int64_t var_58
*(rcx_4 + 8) = var_58
*(rcx_4 + 8) = var_58
rcx_4[2] = var_58.d
*(rcx_4 + 8) = var_58
rcx_4[0xa].b = 0

if (var_38 != 0)
    *(rcx_4 + 0x10) = rbx
    *(rcx_4 + 0x18) = rdi
    
    if (rdi != 0)
        rdi[1].d += 1
    
    rcx_4[8] = rsi
    rcx_4[0xa].b = 1

char* var_b0 = *rax_4
void* rax_12 = rax_4[1]
void* var_a8 = rax_12

if (rax_12 != 0)
    *(rax_12 + 8) += 1

void var_a0
int64_t* rax_13 = sub_140aac870(&var_a0, &var_b0, &var_d8)
int64_t var_c8 = *rax_13
int64_t* rax_15 = rax_13[1]

if (rax_15 != 0)
    rax_15[1].d += 1

int32_t var_b8 = rax_13[2].d
int64_t* var_98

if (var_98 != 0)
    var_98[1].d -= 1
    
    if (var_98[1].d == 1)
        (**var_98)(var_98)
        int32_t rax_19 = *(var_98 + 0xc)
        *(var_98 + 0xc) -= 1
        
        if (rax_19 == 1)
            (*(*var_98 + 8))(var_98, 1)

sub_140596f50(&var_d8)

if (var_38 != 0)
    char var_38_1 = 0
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t rax_23 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (rax_23 == 1)
                (*(*rdi + 8))(rdi, 1)

int64_t* rsi_3 = rax_4[1]

if (rsi_3 != 0)
    rsi_3[1].d -= 1
    
    if (rsi_3[1].d == 1)
        (**rsi_3)(rsi_3)
        int32_t rax_27 = *(rsi_3 + 0xc)
        *(rsi_3 + 0xc) -= 1
        
        if (rax_27 == 1)
            (*(*rsi_3 + 8))(rsi_3, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rax_31 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rax_31 == 1)
            (*(*rdi + 8))(rdi, 1)

sub_140596d10(arg2, sub_140ac6680(&var_c8))

if (rax_15 != 0)
    rax_15[1].d -= 1
    
    if (rax_15[1].d == 1)
        (**rax_15)(rax_15)
        int32_t rax_36 = *(rax_15 + 0xc)
        *(rax_15 + 0xc) -= 1
        
        if (rax_36 == 1)
            (*(*rax_15 + 8))(rax_15, 1)

int64_t* var_80

if (var_80 != 0)
    var_80[1].d -= 1
    
    if (var_80[1].d == 1)
        (**var_80)(var_80)
        int32_t rbx_1 = *(var_80 + 0xc)
        *(var_80 + 0xc) -= 1
        
        if (rbx_1 == 1)
            int64_t r8_2 = *var_80
            (*(r8_2 + 8))(var_80, zx.q(rbx_1), r8_2)

__security_check_cookie(rax_1 ^ &var_f8)
return arg2
