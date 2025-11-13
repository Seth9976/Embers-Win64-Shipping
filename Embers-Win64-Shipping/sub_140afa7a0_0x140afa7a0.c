// 函数: sub_140afa7a0
// 地址: 0x140afa7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_28
OutputToFile(&var_28, arg1)
int16_t* var_38
sub_140afc990(&var_38, arg2)
int16_t* const r15 = &data_142d40450
int16_t* const rsi = &data_142d40450
int32_t var_20

if (var_20 != 0)
    rsi = var_28

int32_t r14 = 0
int64_t var_48 = 0
int32_t rdx_2 = 0
int32_t var_40 = 0
int32_t rcx_2 = 0
int32_t var_3c = 0
uint64_t rbx_1 = -1

if (rsi != 0 && *rsi != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (rsi[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_48, rdi_1.d + 1)
        rcx_2 = var_3c
        rdx_2 = var_40
    
    int32_t rax_1 = rdi_1.d + 1 + rdx_2
    int32_t var_40_1 = rax_1
    
    if (rax_1 s> rcx_2)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, rsi, (rdi_1.d + 1) * 2)

char result = sub_140b16090(&var_48)
int64_t rcx_7 = var_48
char result_1 = result

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

if (result_1 != 0)
    int16_t* rdi_3 = &data_142d40450
    int32_t rcx_8 = 0
    var_48 = 0
    int32_t var_30
    
    if (var_30 != 0)
        rdi_3 = var_38
    
    int32_t var_40_2 = 0
    int32_t var_3c_1 = 0
    
    if (rdi_3 != 0 && *rdi_3 != 0)
        do
            rbx_1 += 1
        while (rdi_3[rbx_1] != 0)
        
        rbx_1 = zx.q(rbx_1.d + 1)
        
        if (rbx_1.d s> 0)
            sub_1405947f0(&var_48, rbx_1.d)
            rcx_8 = var_3c_1
            r14 = var_40_2
        
        int32_t rax_2 = rbx_1.d + r14
        int32_t var_40_3 = rax_2
        
        if (rax_2 s> rcx_8)
            sub_140594770(&var_48)
        
        UnDecorator::getReferenceType(var_48, rdi_3, rbx_1.d * 2)
    
    char rax_3 = sub_140b16090(&var_48)
    int64_t rcx_13 = var_48
    rbx_1.b = rax_3 == 0
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    if (rbx_1.b == 0)
        int16_t* r8_6 = &data_142d40450
        int16_t* rdx_9 = &data_142d40450
        
        if (var_30 != 0)
            r8_6 = var_38
        
        if (var_20 != 0)
            rdx_9 = var_28
        
        if (var_30 != 0)
            r15 = var_38
        
        result = sub_140aeb920(r15, rdx_9, r8_6)
    else
        sub_140a464c0()
        int16_t* r8_5 = &data_142d40450
        int64_t r9_1
        r9_1.b = 1
        
        if (var_20 != 0)
            r8_5 = var_28
        
        if (var_30 != 0)
            r15 = var_38
        
        result = (*(data_14399ea08 + 0x40))(&data_14399ea08, r15, r8_5, r9_1, 0, 0, 0)

int16_t* rcx_15 = var_38

if (rcx_15 != 0)
    result = sub_140a74f90(rcx_15)

int16_t* rcx_16 = var_28

if (rcx_16 == 0)
    return result

return sub_140a74f90(rcx_16)
