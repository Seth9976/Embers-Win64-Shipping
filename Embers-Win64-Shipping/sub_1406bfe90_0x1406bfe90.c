// 函数: sub_1406bfe90
// 地址: 0x1406bfe90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
int64_t* arg_8 = arg1
int32_t arg_18 = 0
void*** rax = j_sub_140a82f30(0x50)
void*** rbx = rax
arg_18.q = rax

if (rax == 0)
    rbx = nullptr
else
    void var_78
    void* arg_20 = &var_78
    int64_t* var_40_1 = nullptr
    int64_t* rcx = *(arg2 + 0x38)
    
    if (rcx != 0)
        var_40_1 = (**rcx)(rcx, &var_78)
    
    arg_20 = &var_78
    *rbx = &data_142d8dad8
    rbx[8] = 0
    sub_1406b6f00(&rbx[1], &var_78)
    
    if (var_40_1 != 0)
        void* rdx_2
        rdx_2.b = var_40_1 != &var_78
        (*(*var_40_1 + 0x20))(var_40_1, rdx_2)
        int64_t var_40_2 = 0

int32_t rdx_3 = data_143cde4b0
data_143cde4b0 = rdx_3 + 1
int64_t var_98 = 0
int64_t var_90 = 0
arg_18 = 1
sub_140a20c40(&var_98, rdx_3)
int16_t* var_88
sub_1406b36d0(&var_88, arg1, &var_98)
int64_t rcx_5 = var_98

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int16_t* const rdx_5 = &data_142d40450
int32_t var_80

if (var_80 != 0)
    rdx_5 = var_88

void*** result
int64_t rdx_6
result, rdx_6 = sub_140a6e140(rbx, rdx_5, 0, 0, -1, 0)
rbx[9] = result
int16_t* rcx_7 = var_88

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = *arg1

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t* rcx_9 = *(arg2 + 0x38)

if (rcx_9 != 0)
    rdx_6.b = rcx_9 != arg2
    (*(*rcx_9 + 0x20))(rcx_9, rdx_6)
    *(arg2 + 0x38) = 0

return result
