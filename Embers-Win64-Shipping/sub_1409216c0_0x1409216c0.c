// 函数: sub_1409216c0
// 地址: 0x1409216c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg2 + 0x20)
int16_t* rdx

if (rax == 0)
    rdx = &data_142d40450
else
    rdx = *(arg2 + 0x18)

int32_t rcx = rax - 1

if (rax == 0)
    rcx = 0

int64_t* rax_2 = sub_1409184d0(arg1 + 0x38, sub_1405969c0(rcx, rdx), arg2)
int64_t r14 = sx.q(rax_2[1].d)
int32_t rcx_2 = (r14 + 1).d
rax_2[1].d = rcx_2

if (rcx_2 s> *(rax_2 + 0xc))
    sub_1405c4f50(rax_2)

void*** r15_2 = r14 * 0x30 + *rax_2
*r15_2 = &data_142e20698
__builtin_memset(&r15_2[1], 0, 0x11)
r15_2[4] = 0
r15_2[5] = 0
void* rbx_1 = *arg3
void** var_b8
void*** rax_4 = sub_14092b6c0(&var_b8, arg2, rbx_1 + 8, sub_140ac6680(rbx_1 + 0x18))
int64_t rbx_2 = sx.q(r15_2[5].d)
int32_t rcx_6 = (rbx_2 + 1).d
r15_2[5].d = rcx_6

if (rcx_6 s> *(r15_2 + 0x2c))
    sub_1405c4fe0(&r15_2[4])

sub_14091a0a0(&r15_2[4][rbx_2 * 8], rax_4)
void var_88
sub_14091a750(&var_88)
int64_t var_a0

if (var_a0 != 0)
    sub_140a74f90(var_a0)

int64_t var_b0

if (var_b0 != 0)
    sub_140a74f90(var_b0)

char* result_1 = nullptr
int32_t var_d0 = 0

if (arg1 + 0x88 != &result_1 && *(arg1 + 0x90) != 0)
    int64_t* rcx_14 = *(arg1 + 0x88)
    
    if (rcx_14 != 0)
        (*(*rcx_14 + 0x40))(rcx_14, &result_1)

if (*(arg1 + 0x98) != 0)
    *(arg1 + 0x98) = 0
    sub_140745b20(arg1 + 0x88)

if (*(arg1 + 0xa8) != 0)
    *(arg1 + 0xa8) = 0

int64_t* rax_6 = j_sub_140a82f30(0x40)
int64_t* rbx_4 = rax_6

if (rax_6 == 0)
    rbx_4 = nullptr
else
    rax_6[1].d = 1
    *(rax_6 + 0xc) = 1
    *rbx_4 = &data_142e21830
    rbx_4[2] = &data_142e20698
    sub_140596d10(&rbx_4[3], &r15_2[1])
    rbx_4[5].b = r15_2[3].b
    rbx_4[6] = 0
    sub_140917270(&rbx_4[6], r15_2[4], r15_2[5].d, 0, 0)

void* var_c8 = &rbx_4[2]
void* rdx_9
rdx_9.b = 1
void var_78
char* result = sub_14093c750(&var_78, rdx_9.b)
char* result_2 = result

if (var_d0 != 0)
    char* result_3 = result_1
    
    if (result_3 != 0)
        int64_t rdx_10 = *result_3
        result = (*(rdx_10 + 0x28))(result_3, rdx_10)
        
        if (result.b != 0)
            char* result_4 = nullptr
            
            if (var_d0 != 0)
                result_4 = result_1
            
            result = (*(*result_4 + 0x50))(result_4, result_2, &var_c8)

int64_t* var_48

if (var_48 != 0)
    result = zx.q(var_48[1].d)
    var_48[1].d -= 1
    
    if (result.d == 1)
        result = (**var_48)(var_48)
        int32_t rdi_1 = *(var_48 + 0xc)
        *(var_48 + 0xc) -= 1
        
        if (rdi_1 == 1)
            result = (*(*var_48 + 8))(var_48, zx.q(rdi_1))

int64_t var_60

if (var_60 != 0)
    result = sub_140a74f90(var_60)

int64_t var_70

if (var_70 != 0)
    result = sub_140a74f90(var_70)

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        result = (**rbx_4)(rbx_4)
        int32_t temp2_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rbx_4 + 8))(rbx_4, 1)

if (var_d0 == 0)
label_1409219a0:
    char* result_7 = result_1
    
    if (result_7 != 0)
        result = sub_140a74f90(result_7)
else
    char* result_5 = result_1
    
    if (result_5 != 0)
        result = (*(*result_5 + 0x38))(result_5, 0)
        char* result_6 = result_1
        
        if (result_6 != 0)
            result = sub_140a84c80(result_6, 0, 0)
            result_1 = result
        
        int32_t var_d0_1 = 0
        goto label_1409219a0

int64_t* rbx_7 = arg3[1]

if (rbx_7 != 0)
    rbx_7[1].d -= 1
    
    if (rbx_7[1].d == 1)
        result = (**rbx_7)(rbx_7)
        int32_t temp4_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (temp4_1 == 1)
            return (*(*rbx_7 + 8))(rbx_7, 1)

return result
