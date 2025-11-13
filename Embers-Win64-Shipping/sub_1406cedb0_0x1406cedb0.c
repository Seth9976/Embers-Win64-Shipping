// 函数: sub_1406cedb0
// 地址: 0x1406cedb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int128_t* arg_8 = arg1
int32_t var_e8 = 0
*arg1 = zx.o(0)
__builtin_memset(arg1, 0, 0x51)
arg1[1] = zx.o(0)
arg1[2] = zx.o(0)
arg1[3] = zx.o(0)
arg1[5] = zx.o(0)
arg1[6] = zx.o(0)
__builtin_memset(arg1 + 0x58, 0, 0x14)
int32_t var_e8_1 = 1
int64_t var_70
sub_140b18970(&var_70, arg2)
uint64_t var_80 = 0
int32_t var_78 = 0
int16_t* var_60
sub_1406c8fb0(&var_60, arg2)
int16_t* const rdx_1 = &data_142d40450
int32_t var_58

if (var_58 != 0)
    rdx_1 = var_60

if (sub_140b1f370(&var_80, rdx_1, 0, 0) == 0)
    int32_t exceptionObject = 0
    _CxxThrowException(&exceptionObject, &data_143946050)
    noreturn

int64_t var_e0
int64_t* arg_18 = &var_e0
var_e0 = 0
uint64_t r14 = var_80
int32_t var_d8 = var_78

if (var_78 != 0)
    sub_1405a4c70(&var_e0, var_78, 0)
    memcpy(var_e0, r14, var_78 * 2)
else
    int32_t var_d4_1 = 0

arg_18 = &var_e0
int64_t var_50
int64_t* rax_1 = sub_140686ab0(&var_50, &var_e0, arg3)
int32_t var_e8_2 = 5
int64_t rcx_6 = var_e0

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

char rax_2
int512_t zmm2
rax_2, zmm2 = sub_1406c98b0(rax_1, arg1, 0, 0)
int64_t* rbx_1
rbx_1.b = rax_2 == 0
int32_t var_e8_3 = 1
int64_t rcx_8 = var_50

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

if (rbx_1.b != 0)
    int32_t exceptionObject_1 = 1
    _CxxThrowException(&exceptionObject_1, &data_143946050)
    noreturn

if (arg1 != &var_70)
    int32_t r8_3 = *(arg1 + 0xc)
    int64_t r14_1 = var_70
    int32_t var_68
    *(arg1 + 8) = var_68
    
    if (var_68 != 0 || r8_3 != 0)
        sub_1405a4c70(arg1, var_68, r8_3)
        memcpy(*arg1, r14_1, var_68 * 2)
    else
        *(arg1 + 0xc) = 0

int64_t* rax_4 = sub_1406cf390(&var_e0, sub_140596d10(&var_50, arg2), zmm2)

if (&arg1[4] != rax_4)
    int32_t i_1 = *(arg1 + 0x48)
    void* rbx_3 = arg1[4].q
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_13 = *(rbx_3 + 0xf8)
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
            
            int64_t rcx_14 = *(rbx_3 + 0xc8)
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            int64_t rcx_15 = *(rbx_3 + 0xb0)
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            int64_t rcx_16 = *(rbx_3 + 0x50)
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
            
            int64_t rcx_17 = *(rbx_3 + 0x20)
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
            
            int64_t rcx_18 = *(rbx_3 + 0x10)
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            int64_t rcx_19 = *rbx_3
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            rbx_3 += 0x178
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_3 = arg1[4].q
    
    if (rbx_3 != 0)
        sub_140a74f90(rbx_3)
    
    arg1[4].q = *rax_4
    *rax_4 = 0
    *(arg1 + 0x48) = rax_4[1].d
    *(arg1 + 0x4c) = *(rax_4 + 0xc)
    rax_4[1] = 0

sub_1406cae40(&var_e0)
int16_t* rcx_22 = var_60

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

uint64_t rcx_23 = var_80

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

int64_t rcx_24 = var_70

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

int64_t rcx_25 = *arg2

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

return arg1
