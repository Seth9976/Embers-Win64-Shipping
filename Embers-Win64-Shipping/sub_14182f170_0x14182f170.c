// 函数: sub_14182f170
// 地址: 0x14182f170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i_3 = nullptr
int32_t i_6 = 0
int32_t rdx = sub_140a464c0()
int32_t rbx = arg2[1].d
int64_t rdi = *arg2
int16_t* var_68 = nullptr
sub_1405a4c70(&var_68, sbb.d(rdx, rdx, rbx != 0) + 3 + rbx, 0)
memcpy(var_68, rdi, rbx * 2)
sub_140a2cf70(&var_68, &data_142d6bbe8, 1)
int16_t* const rbx_1 = &data_142d40450
int16_t* const r8_2 = &data_142d40450

if (rbx != 0)
    r8_2 = var_68

(*(data_14399ea08 + 0x78))(&data_14399ea08, &i_3, r8_2, 0, 1)
int16_t* rcx_4 = var_68

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

void* i = i_3

for (void* r13_2 = (sx.q(i_6) << 4) + i; i != r13_2; i += 0x10)
    int32_t rbx_2 = *(i + 8)
    int16_t* rsi_1 = nullptr
    int64_t rdi_1 = *i
    uint64_t var_38 = 0
    
    if (rbx_2 != 0)
        sub_1405a4c70(&var_38, rbx_2, 0)
        rsi_1 = var_38
        memcpy(rsi_1, rdi_1, rbx_2 * 2)
    else
        int32_t var_2c_1 = 0
    
    int32_t rdi_2 = rbx_2 - 1
    
    if (rbx_2 == 0)
        rdi_2 = 0
    
    int32_t rbx_3 = arg2[1].d
    int32_t rax_2
    
    if (rbx_3 == 0)
        rax_2 = rbx_3 + 2
    
    if (rbx_3 != 0 || rdi_2 == 0xffffffff)
        rax_2 = 1
    
    var_68 = nullptr
    int32_t rcx_7 = rax_2 + rdi_2
    int64_t r15_1 = *arg2
    
    if (rbx_3 != 0 || rcx_7 != 0)
        sub_1405a4c70(&var_68, rbx_3 + rcx_7, 0)
        memcpy(var_68, r15_1, rbx_3 * 2)
    else
        int32_t var_5c_1 = 0
    
    sub_140a2cf70(&var_68, rsi_1, rdi_2)
    rbx_1 = &data_142d40450
    int16_t* rdi_3 = &data_142d40450
    int64_t var_78 = 0
    
    if (rbx_3 != 0)
        rdi_3 = var_68
    
    int32_t rdx_11 = 0
    int32_t var_70_1 = 0
    int32_t rcx_11 = 0
    int32_t var_6c_1 = 0
    
    if (rdi_3 != 0 && *rdi_3 != 0)
        int64_t rbx_4 = -1
        
        do
            rbx_4 += 1
        while (rdi_3[rbx_4] != 0)
        
        if (rbx_4.d + 1 s> 0)
            sub_1405947f0(&var_78, rbx_4.d + 1)
            rcx_11 = var_6c_1
            rdx_11 = var_70_1
        
        int32_t rax_3 = rdx_11 + rbx_4.d + 1
        int32_t var_70_2 = rax_3
        
        if (rax_3 s> rcx_11)
            sub_140594770(&var_78)
        
        UnDecorator::getReferenceType(var_78, rdi_3, (rbx_4.d + 1) * 2)
        rbx_1 = &data_142d40450
    
    sub_14182f170(arg1, &var_78)
    int64_t rcx_16 = var_78
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    int16_t* rcx_17 = var_68
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)

int64_t* var_48 = nullptr
int32_t i_7 = 0
sub_140a464c0()
int16_t* const r8_10

if (arg2[1].d == 0)
    r8_10 = &data_142d40450
else
    r8_10 = *arg2

int64_t result =
    (*(data_14399ea08 + 0x80))(&data_14399ea08, &var_48, r8_10, &data_142e5ff88, 1, 0, 1)
int32_t i_4 = i_7

if (i_4 == 0)
    sub_140a464c0()
    
    if (arg2[1].d != i_4)
        rbx_1 = *arg2
    
    int64_t r9_1
    r9_1.b = 1
    (*(data_14399ea08 + 0x60))(&data_14399ea08, rbx_1, 0, r9_1)
    result = GetLastError()
    i_4 = i_7

int64_t* rbx_6 = var_48

if (i_4 != 0)
    int32_t i_1
    
    do
        int64_t rcx_19 = *rbx_6
        
        if (rcx_19 != 0)
            result = sub_140a74f90(rcx_19)
        
        rbx_6 = &rbx_6[2]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
    rbx_6 = var_48

if (rbx_6 != 0)
    result = sub_140a74f90(rbx_6)

int32_t i_5 = i_6
void* i_8 = i_3

if (i_5 != 0)
    int32_t i_2
    
    do
        int64_t rcx_21 = *i_8
        
        if (rcx_21 != 0)
            result = sub_140a74f90(rcx_21)
        
        i_8 += 0x10
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
    i_8 = i_3

if (i_8 == 0)
    return result

return sub_140a74f90(i_8)
