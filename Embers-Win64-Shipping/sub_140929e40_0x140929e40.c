// 函数: sub_140929e40
// 地址: 0x140929e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_18
int64_t* rax_1 = sub_140fc6160(sub_140b58260(&arg_18, u"WINDOWS", 1))
int64_t rdi = *rax_1
sub_140b19e60()
int64_t var_88
void arg_8
int64_t* rax_2 = (*(rdi + 0xe0))(rax_1, &var_88, &data_1439a8bd0, &arg_8)
int64_t* rbx_1 = rax_2[1]

if (rbx_1 != 0)
    rbx_1[1].d += 1

void var_78

if (arg1 + 8 == &var_78)
label_140929ef7:
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
else
    *(arg1 + 8) = *rax_2
    int64_t* rdi_1 = *(arg1 + 0x10)
    
    if (rbx_1 == rdi_1)
        goto label_140929ef7
    
    *(arg1 + 0x10) = rbx_1
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp5_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* var_80

if (var_80 != 0)
    var_80[1].d -= 1
    
    if (var_80[1].d == 1)
        (**var_80)(var_80)
        int32_t temp4_1 = *(var_80 + 0xc)
        *(var_80 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*var_80 + 8))(var_80, 1)

int64_t* rcx_9 = *(arg1 + 8)
int32_t arg_10 = 0
(*(*rcx_9 + 0x20))(rcx_9, &arg_10)

if ((arg_10 & 0xff000000) == 0x7f000000)
    int64_t* rcx_10 = *(arg1 + 8)
    (*(*rcx_10 + 0x18))(rcx_10, 0x7f000001)

int64_t* rbx_3 = *(arg1 + 8)
int64_t rdi_2 = *rbx_3
*(*(*arg2 + 0x18))(arg2, &arg_18)
(*(rdi_2 + 0x28))(rbx_3, zx.q(sub_140962ca0()))
int64_t pguid = 0
int64_t var_90 = 0
CoCreateGuid(&pguid)
sub_140b291e0(&pguid, &var_88, 0)
int64_t* rax_15 = sub_140b58260(&arg_18, u"NULL", 1)
int32_t r14_1 = var_80.d
int64_t rdi_3 = var_88
int64_t rbx_4 = *rax_15
void** const var_68 = &data_142e1f860
int128_t var_60
__builtin_memset(&var_60, 0, 0x18)
uint64_t var_50
uint64_t rdi_4
int32_t r15

if (r14_1 != 0)
    sub_1405a4c70(&var_50, r14_1, 0)
    rdi_4 = var_50
    memcpy(rdi_4, rdi_3, r14_1 * 2)
    int32_t var_44
    r15 = var_44
else
    r15 = 0
    rdi_4 = 0

uint64_t* result = &var_50

if (arg1 + 0x30 != &var_50)
    int64_t rcx_19 = *(arg1 + 0x30)
    
    if (rcx_19 != 0)
        result = sub_140a74f90(rcx_19)
    
    *(arg1 + 0x30) = rdi_4
    rdi_4 = 0
    *(arg1 + 0x38) = r14_1
    *(arg1 + 0x3c) = r15

*(arg1 + 0x40) = rbx_4

if (rdi_4 != 0)
    result = sub_140a74f90(rdi_4)

int64_t* var_58

if (var_58 != 0)
    int32_t temp6_1 = *(var_58 + 0xc)
    *(var_58 + 0xc) -= 1
    
    if (temp6_1 == 1)
        result = (*(*var_58 + 8))(var_58, 1)

int64_t rcx_22 = var_88

if (rcx_22 == 0)
    return result

return sub_140a74f90(rcx_22)
