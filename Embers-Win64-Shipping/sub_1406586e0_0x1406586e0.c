// 函数: sub_1406586e0
// 地址: 0x1406586e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_8e = 0
int32_t var_8c
__builtin_memset(&var_8c, 0, 0x2c)
int16_t var_90 = arg4 & 0xfe00
void** const var_98 = &data_142d7f6a8
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_98, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

void*** rax_2 = *(arg2 + 0x38)
void** const* rdx_2 = &var_98

if (rax_2 != 0)
    rdx_2 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rcx_1
rcx_1.b = rax_3 != 0
*(arg2 + 0x20) = rcx_1 + rax_3
int64_t var_60
int64_t* rax_4 = sub_14063e9b0(&var_60, rdx_2)

if (arg3 != rax_4)
    int64_t rcx_4 = *arg3
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    *arg3 = *rax_4
    *rax_4 = 0
    arg3[1].d = rax_4[1].d
    *(arg3 + 0xc) = *(rax_4 + 0xc)
    rax_4[1] = 0

if (&arg3[2] != &rax_4[2])
    int64_t rcx_6 = arg3[2]
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    arg3[2] = rax_4[2]
    rax_4[2] = 0
    arg3[3].d = rax_4[3].d
    *(arg3 + 0x1c) = *(rax_4 + 0x1c)
    rax_4[3] = 0

sub_140647400(&arg3[4], &rax_4[4])
int32_t result = rax_4[7].d
arg3[7].d = result
int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        result = (**var_30)(var_30)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*var_30 + 8))(var_30, 1)

int64_t var_50

if (var_50 != 0)
    result = sub_140a74f90(var_50)

int64_t rcx_11 = var_60

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int128_t var_78
int64_t* rbx_3 = var_78:8.q

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp3_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, 1)

return result
