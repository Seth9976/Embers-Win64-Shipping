// 函数: sub_140a44780
// 地址: 0x140a44780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = 0
int32_t rdx = 0
int32_t var_90 = 0
int32_t rcx = 0
int32_t var_8c = 0
int64_t var_98 = 0

if (arg3 != 0 && *arg3 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg3[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_98, rbx_1.d + 1)
        rcx = var_8c
        rdx = var_90
    
    int32_t rax_1 = rdx + rbx_1.d + 1
    int32_t var_90_1 = rax_1
    
    if (rax_1 s> rcx)
        sub_140594770(&var_98)
    
    memcpy(var_98, arg3, (rbx_1.d + 1) * 2)

sub_140b21570(&var_98)
int16_t* var_68
sub_140b18970(&var_68, &var_98)
int16_t* const rdi_1 = &data_142d40450
int16_t* rsi = var_68
int32_t* const r9_1 = &data_142d6bbe8
int16_t* const r10 = &data_142d40450
int32_t var_60

if (var_60 != 0)
    r10 = rsi

int32_t* var_88
int64_t var_78
int64_t* rdx_6
int32_t rbx_4

while (true)
    int16_t rdx_4 = *(r10 - &data_142d6bbe8 + r9_1)
    int16_t r8_2 = *r9_1
    r9_1 += 2
    
    if (rdx_4 != r8_2)
        uint32_t rdx_10
        
        if (((zx.d(r8_2) | zx.d(rdx_4)) & 0xffffff80) != 0)
            rdx_10 = zx.d(rdx_4) - zx.d(r8_2)
        else
            uint32_t rcx_20 = zx.d(*(zx.q(r8_2) + &data_142e5e8a0))
            uint32_t rdx_9 = zx.d(*(zx.q(rdx_4) + &data_142e5e8a0))
            rdx_10 = rdx_9 - rcx_20
            
            if (rdx_9 == rcx_20)
                continue
        
        if (rdx_10 != 0)
            void* const r9_2 = &data_142e5ff88
            int16_t* r10_2 = &data_142d40450
            
            if (var_60 != 0)
                r10_2 = rsi
            
            uint32_t rdx_14
            
            while (true)
                int16_t rdx_12 = *(r10_2 - &data_142e5ff88 + r9_2)
                int16_t r8_4 = *r9_2
                r9_2 += 2
                
                if (rdx_12 != r8_4)
                    if (((zx.d(r8_4) | zx.d(rdx_12)) & 0xffffff80) != 0)
                        rdx_14 = zx.d(rdx_12) - zx.d(r8_4)
                        break
                    
                    uint32_t rcx_23 = zx.d(*(zx.q(r8_4) + &data_142e5e8a0))
                    uint32_t rdx_13 = zx.d(*(zx.q(rdx_12) + &data_142e5e8a0))
                    rdx_14 = rdx_13 - rcx_23
                    
                    if (rdx_13 != rcx_23)
                        break
                else
                    if (rdx_12 == 0)
                        goto label_140a44881
            
            if (rdx_14 != 0)
                var_78 = 0
                int32_t var_70_1 = var_60
                
                if (var_60 != 0)
                    sub_1405a4c70(&var_78, var_60, 0)
                    memcpy(var_78, rsi, var_60 * 2)
                    rdx_6 = &var_78
                    rbx_4 = 2
                else
                    int32_t var_6c_1 = 0
                    rdx_6 = &var_78
                    rbx_4 = 2
                
                break
    else if (rdx_4 != 0)
        continue
    
label_140a44881:
    var_88 = nullptr
    int32_t var_80_1 = 0
    sub_1405947f0(&var_88, 2)
    int32_t rax_2 = var_80_1 + 2
    var_80_1 = rax_2
    
    if (rax_2 s> 0)
        sub_140594770(&var_88)
    
    rdx_6 = &var_88
    rbx_4 = 1
    *var_88 = 0x2a
    break

int64_t var_50 = arg2
void** const var_58 = &data_142e5ff78
int64_t var_48
sub_140596d10(&var_48, rdx_6)
char var_37 = arg4
char r9
char var_38 = r9

if ((rbx_4.b & 2) != 0)
    int64_t rcx_10 = var_78
    rbx_4 &= 0xfffffffd
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

if ((rbx_4.b & 1) != 0)
    int32_t* rcx_11 = var_88
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)

int64_t* rax_4 = __crt_deferred_errno_cache::get(&data_143db7b00)
int16_t** rax_5 = sub_140b1a780(&var_78, &var_98)

if (rax_5[1].d != 0)
    rdi_1 = *rax_5

(*(*rax_4 + 0x100))(rax_4, rdi_1, &var_58)
int64_t rcx_14 = var_78

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t rcx_15 = var_48

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int16_t* rcx_16 = var_68
void** const result = &data_142d6ad38
var_58 = &data_142d6ad38

if (rcx_16 != 0)
    result = sub_140a74f90(rcx_16)

int64_t rcx_17 = var_98

if (rcx_17 == 0)
    return result

return sub_140a74f90(rcx_17)
