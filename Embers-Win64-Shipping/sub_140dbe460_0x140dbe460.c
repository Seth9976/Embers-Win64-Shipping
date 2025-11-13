// 函数: sub_140dbe460
// 地址: 0x140dbe460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t var_d8 = *(arg1 + 0x18)
int64_t var_d0 = *(arg1 + 0x20)
int64_t* rax_4 = *(arg1 + 0x28)

if (rax_4 != 0)
    rax_4[1].d += 1

void var_70
int64_t* rax_5 = sub_140d44c30(&var_d8, &var_70, 1)
void var_98
char* var_80
char** rax_7 = sub_140a96390(&var_80, _vfprintf_p_l(&var_98, u"AnalogInput Key({0})", u"Events"))
int32_t var_58 = 4
int64_t rax_8 = *rax_5
int64_t* rax_9 = rax_5[1]

if (rax_9 != 0)
    rax_9[1].d += 1

int32_t rax_10 = rax_5[2].d
char var_30 = 1
int32_t* var_e8 = nullptr
int32_t var_e0 = 1
sub_1405a4b40(&var_e8, 1, 0)
int32_t* rcx_4 = var_e8
*rcx_4 = var_58
int64_t var_50
*(rcx_4 + 8) = var_50
*(rcx_4 + 8) = var_50
rcx_4[2] = var_50.d
*(rcx_4 + 8) = var_50
rcx_4[0xa].b = 0

if (var_30 != 0)
    *(rcx_4 + 0x10) = rax_8
    *(rcx_4 + 0x18) = rax_9
    
    if (rax_9 != 0)
        rax_9[1].d += 1
    
    rcx_4[8] = rax_10
    rcx_4[0xa].b = 1

char* var_c0 = *rax_7
void* rax_18 = rax_7[1]
void* var_b8 = rax_18

if (rax_18 != 0)
    *(rax_18 + 8) += 1

void var_b0
int64_t* rax_19 = sub_140aac870(&var_b0, &var_c0, &var_e8)
*arg2 = *rax_19
void* rax_21 = rax_19[1]
arg2[1] = rax_21

if (rax_21 != 0)
    *(rax_21 + 8) += 1

arg2[2].d = rax_19[2].d
int64_t* var_a8

if (var_a8 != 0)
    var_a8[1].d -= 1
    
    if (var_a8[1].d == 1)
        (**var_a8)(var_a8)
        int32_t rax_25 = *(var_a8 + 0xc)
        *(var_a8 + 0xc) -= 1
        
        if (rax_25 == 1)
            (*(*var_a8 + 8))(var_a8, 1)

sub_140596f50(&var_e8)

if (var_30 != 0)
    char var_30_1 = 0
    
    if (rax_9 != 0)
        rax_9[1].d -= 1
        
        if (rax_9[1].d == 1)
            (**rax_9)(rax_9)
            int32_t rax_29 = *(rax_9 + 0xc)
            *(rax_9 + 0xc) -= 1
            
            if (rax_29 == 1)
                (*(*rax_9 + 8))(rax_9, 1)

int64_t* rdi_2 = rax_7[1]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t rax_33 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (rax_33 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

int64_t* rdi_3 = rax_5[1]

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t rax_37 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (rax_37 == 1)
            (*(*rdi_3 + 8))(rdi_3, 1)

int64_t* var_90

if (var_90 != 0)
    var_90[1].d -= 1
    
    if (var_90[1].d == 1)
        (**var_90)(var_90)
        int32_t rbx_1 = *(var_90 + 0xc)
        *(var_90 + 0xc) -= 1
        
        if (rbx_1 == 1)
            (*(*var_90 + 8))(var_90, zx.q(rbx_1))

if (rax_4 != 0)
    rax_4[1].d -= 1
    
    if (rax_4[1].d == 1)
        (**rax_4)(rax_4)
        int32_t temp2_1 = *(rax_4 + 0xc)
        *(rax_4 + 0xc) -= 1
        
        if (temp2_1 == 1)
            int64_t r8_3 = *rax_4
            (*(r8_3 + 8))(rax_4, 1, r8_3)

__security_check_cookie(rax_1 ^ &var_108)
return arg2
