// 函数: sub_1423de910
// 地址: 0x1423de910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
void var_78
int64_t* rax_2 = sub_140aae420(&var_78, arg4)
void var_a0
char* var_88
char** rax_4 = sub_140a96390(&var_88, _vfprintf_p_l(&var_a0, u"Error '{0}'. Exiting.", u"Engine"))
int64_t rcx_3 = *rax_2
int64_t* rcx_4 = rax_2[1]
int32_t var_60 = 4

if (rcx_4 != 0)
    rcx_4[1].d += 1

int32_t rax_5 = rax_2[2].d
char var_38 = 1
int32_t* var_f0 = nullptr
int32_t var_e8 = 1
sub_1405a4b40(&var_f0, 1, 0)
int32_t* rcx_6 = var_f0
*rcx_6 = var_60
int64_t var_58
*(rcx_6 + 8) = var_58
*(rcx_6 + 8) = var_58
rcx_6[2] = var_58.d
*(rcx_6 + 8) = var_58
rcx_6[0xa].b = 0

if (var_38 != 0)
    *(rcx_6 + 0x10) = rcx_3
    *(rcx_6 + 0x18) = rcx_4
    
    if (rcx_4 != 0)
        rcx_4[1].d += 1
    
    rcx_6[8] = rax_5
    rcx_6[0xa].b = 1

char* var_c8 = *rax_4
void* rax_13 = rax_4[1]
void* var_c0 = rax_13

if (rax_13 != 0)
    *(rax_13 + 8) += 1

void var_b8
int64_t* rax_14 = sub_140aac870(&var_b8, &var_c8, &var_f0)
int64_t var_e0 = *rax_14
int64_t* rcx_9 = rax_14[1]

if (rcx_9 != 0)
    rcx_9[1].d += 1

int32_t var_d0 = rax_14[2].d
int64_t* var_b0

if (var_b0 != 0)
    var_b0[1].d -= 1
    
    if (var_b0[1].d == 1)
        (**var_b0)(var_b0)
        int32_t rax_18 = *(var_b0 + 0xc)
        *(var_b0 + 0xc) -= 1
        
        if (rax_18 == 1)
            (*(*var_b0 + 8))(var_b0, 1)

sub_140596f50(&var_f0)

if (var_38 != 0)
    char var_38_1 = 0
    
    if (rcx_4 != 0)
        rcx_4[1].d -= 1
        
        if (rcx_4[1].d == 1)
            (**rcx_4)(rcx_4)
            int32_t rax_22 = *(rcx_4 + 0xc)
            *(rcx_4 + 0xc) -= 1
            
            if (rax_22 == 1)
                (*(*rcx_4 + 8))(rcx_4, 1)

int64_t* rdi_2 = rax_4[1]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t rax_26 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (rax_26 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

int64_t* rdi_3 = rax_2[1]

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t rax_30 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (rax_30 == 1)
            (*(*rdi_3 + 8))(rdi_3, 1)

int64_t* var_98

if (var_98 != 0)
    var_98[1].d -= 1
    
    if (var_98[1].d == 1)
        (**var_98)(var_98)
        int32_t rax_34 = *(var_98 + 0xc)
        *(var_98 + 0xc) -= 1
        
        if (rax_34 == 1)
            (*(*var_98 + 8))(var_98, 1)

int32_t result = sub_140b21610(0, &var_e0, nullptr)

if (*(arg2 + 0x278) == 0)
    result = sub_1423efa60(arg2, sub_1424307d0(zx.d(*arg2), 0, 0, nullptr, 1, 4))

if (rcx_9 != 0)
    result = rcx_9[1].d
    rcx_9[1].d -= 1
    
    if (result == 1)
        result = (**rcx_9)(rcx_9)
        int32_t rbx_1 = *(rcx_9 + 0xc)
        *(rcx_9 + 0xc) -= 1
        
        if (rbx_1 == 1)
            result = (*(*rcx_9 + 8))(rcx_9, zx.q(rbx_1))

__security_check_cookie(rax_1 ^ &var_128)
return result
