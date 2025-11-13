// 函数: sub_1406ce540
// 地址: 0x1406ce540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int16_t* const rax = &data_142d40450

if (data_143cdf128 != 0)
    rax = data_143cdf120

int16_t* const arg_18 = rax
uint64_t var_68 = 0
int32_t var_60 = 0
arg_8 = 1
sub_140b0f5f0(&var_68, &arg_18, 1)
int64_t var_58
int64_t* arg_20 = &var_58
var_58 = 0
uint64_t rdi = var_68
int32_t var_50 = var_60

if (var_60 != 0)
    sub_1405a4c70(&var_58, var_60, 0)
    memcpy(var_58, rdi, var_60 * 2)
else
    int32_t var_4c_1 = 0

void var_48
int64_t* rax_1
int512_t zmm2
rax_1, zmm2 = sub_1406cf160(&var_48, &var_58, arg3)

if (arg1 != rax_1)
    int32_t i_1 = arg1[1].d
    void* rbx_1 = *arg1
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_4 = *(rbx_1 + 0x58)
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            sub_1406cae40(rbx_1 + 0x40)
            int64_t rcx_6 = *(rbx_1 + 0x30)
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            int64_t rcx_7 = *(rbx_1 + 0x20)
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            int64_t rcx_8 = *(rbx_1 + 0x10)
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            int64_t rcx_9 = *rbx_1
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            rbx_1 += 0x70
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_1 = *arg1
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    *arg1 = *rax_1
    *rax_1 = 0
    arg1[1].d = rax_1[1].d
    *(arg1 + 0xc) = *(rax_1 + 0xc)
    rax_1[1] = 0

sub_1406caf00(&var_48)
arg_20 = &var_58
var_58 = 0
uint64_t rdi_1 = var_68
int32_t var_50_1 = var_60

if (var_60 != 0)
    sub_1405a4c70(&var_58, var_60, 0)
    memcpy(var_58, rdi_1, var_60 * 2)
else
    int32_t var_4c_2 = 0

sub_1406cb260(arg2, sub_1406cf390(&var_48, &var_58, zmm2))
int64_t result = sub_1406cae40(&var_48)
uint64_t rcx_17 = var_68

if (rcx_17 == 0)
    return result

return sub_140a74f90(rcx_17)
