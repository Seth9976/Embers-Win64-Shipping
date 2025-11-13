// 函数: sub_1406d3d50
// 地址: 0x1406d3d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg1
int32_t arg_10 = 0
int64_t* var_78 = nullptr
int32_t i_7 = 0
int64_t* i_3 = nullptr
int32_t i_6 = 0
int16_t* var_58
sub_1406c8ea0(&var_58, &arg_8)
sub_140a464c0()
int16_t* const r8_1 = &data_142d40450
int32_t var_50

if (var_50 != 0)
    r8_1 = var_58

int64_t r9
r9.b = 1
(*(data_14399ea08 + 0x78))(&data_14399ea08, &var_78, r8_1, r9, 0)
sub_140a464c0()
int16_t* const r8_2 = &data_142d40450

if (var_50 != 0)
    r8_2 = var_58

char var_a8 = 1
(*(data_14399ea08 + 0x78))(&data_14399ea08, &i_3, r8_2, 0, 1)
int64_t* rdi = var_78
void* r15_2 = &rdi[sx.q(i_7) * 2]
char rsi
uint64_t var_98
int16_t* var_68
int32_t var_60

if (rdi == r15_2)
label_1406d3ed8:
    
    for (int64_t* i = i_3; i != &i[sx.q(i_6) * 2]; i = &i[2])
        arg_10.q = &var_98
        int16_t* rcx_7 = nullptr
        var_98 = 0
        int32_t rdi_1 = i[1].d
        int64_t r15_3 = *i
        
        if (rdi_1 != 0)
            sub_1405a4c70(&var_98, rdi_1, 0)
            memcpy(var_98, r15_3, rdi_1 * 2)
            rcx_7 = var_98
        else
            int32_t var_8c_2 = 0
        
        int16_t* const rax_3 = &data_142d40450
        
        if (rdi_1 != 0)
            rax_3 = rcx_7
        
        int64_t var_48 = arg1
        int16_t* const var_40_1 = rax_3
        var_68 = nullptr
        var_60.q = 0
        arg_10 = 4
        sub_140b0f5f0(&var_68, &var_48, 2)
        int16_t* rcx_13 = &data_142d40450
        
        if (var_60 != 0)
            rcx_13 = var_68
        
        sub_1406d3d50(rcx_13)
        int16_t* rcx_14 = var_68
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        uint64_t rcx_15 = var_98
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
    
    sub_140a464c0()
    rsi = (*(data_14399ea08 + 0x60))(&data_14399ea08, arg1, 0, 0, var_a8)
else
    while (true)
        arg_10.q = &var_98
        int16_t* rcx_1 = nullptr
        var_98 = 0
        int32_t rbx_1 = rdi[1].d
        int64_t r14_1 = *rdi
        
        if (rbx_1 != 0)
            sub_1405a4c70(&var_98, rbx_1, 0)
            memcpy(var_98, r14_1, rbx_1 * 2)
            rcx_1 = var_98
        else
            int32_t var_8c_1 = 0
        
        int16_t* const rax_1 = &data_142d40450
        
        if (rbx_1 != 0)
            rax_1 = rcx_1
        
        arg_10.q = rax_1
        sub_1406c8ef0(&var_68, &arg_8, &arg_10)
        sub_140a464c0()
        int16_t* const rdx_6 = &data_142d40450
        
        if (var_60 != 0)
            rdx_6 = var_68
        
        var_a8 = 0
        
        if ((*(data_14399ea08 + 0x30))(&data_14399ea08, rdx_6, 0, 0, 0) == 0)
            int16_t* rcx_8 = var_68
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            uint64_t rcx_9 = var_98
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            rsi = 0
            break
        
        int16_t* rcx_5 = var_68
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        uint64_t rcx_6 = var_98
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        rdi = &rdi[2]
        
        if (rdi == r15_2)
            goto label_1406d3ed8
int16_t* rcx_16 = var_58

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int32_t i_4 = i_6
int64_t* i_8 = i_3

if (i_4 != 0)
    int32_t i_1
    
    do
        int64_t rcx_17 = *i_8
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        i_8 = &i_8[2]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    i_8 = i_3

if (i_8 != 0)
    sub_140a74f90(i_8)

int32_t i_5 = i_7
int64_t* rbx_2 = var_78

if (i_5 != 0)
    int32_t i_2
    
    do
        int64_t rcx_19 = *rbx_2
        
        if (rcx_19 != 0)
            sub_140a74f90(rcx_19)
        
        rbx_2 = &rbx_2[2]
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
    rbx_2 = var_78

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

return zx.q(rsi)
