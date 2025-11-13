// 函数: sub_140a3fe90
// 地址: 0x140a3fe90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = 0
int64_t var_58 = 0
int32_t rdx = 0
int32_t var_50 = 0
int32_t var_4c = 0
int64_t rdi = -1
int32_t r10 = 0

if (arg3 != 0 && *arg3 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg3[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_58, rbx_1.d + 1)
        r10 = var_4c
        rdx = var_50
    
    int32_t rax_1 = rbx_1.d + 1 + rdx
    int32_t var_50_1 = rax_1
    
    if (rax_1 s> r10)
        sub_140594770(&var_58)
    
    memcpy(var_58, arg3, (rbx_1.d + 1) * 2)

int64_t var_68 = 0
int32_t rdx_3 = 0
int32_t var_60 = 0
int32_t rcx_3 = 0
int32_t var_5c = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_3 = -1
    
    do
        rbx_3 += 1
    while (arg2[rbx_3] != 0)
    
    if (rbx_3.d + 1 s> 0)
        sub_1405947f0(&var_68, rbx_3.d + 1)
        rcx_3 = var_5c
        rdx_3 = var_60
    
    int32_t rax_2 = rbx_3.d + 1 + rdx_3
    int32_t var_60_1 = rax_2
    
    if (rax_2 s> rcx_3)
        sub_140594770(&var_68)
    
    memcpy(var_68, arg2, (rbx_3.d + 1) * 2)

int64_t var_38
int64_t* rax_3 = sub_140b11a30(&var_38, &var_58)
int64_t var_48
int64_t* rax_4 = sub_140b11a30(&var_48, &var_68)
int16_t* const rsi = &data_142d40450
int16_t* r9

if (rax_3[1].d == 0)
    r9 = &data_142d40450
else
    r9 = *rax_3

int16_t* const r10_1

if (rax_4[1].d == 0)
    r10_1 = &data_142d40450
else
    r10_1 = *rax_4

void* r10_2 = r10_1 - r9
uint32_t rbx_6

while (true)
    int16_t rdx_8 = *(r9 + r10_2)
    int16_t r8_4 = *r9
    r9 = &r9[1]
    
    if (rdx_8 != r8_4)
        if (((zx.d(r8_4) | zx.d(rdx_8)) & 0xffffff80) != 0)
            rbx_6 = zx.d(rdx_8) - zx.d(r8_4)
            break
        
        uint32_t rcx_11 = zx.d(*(zx.q(r8_4) + &data_142e5e8a0))
        uint32_t rbx_7 = zx.d(*(zx.q(rdx_8) + &data_142e5e8a0))
        rbx_6 = rbx_7 - rcx_11
        
        if (rbx_7 != rcx_11)
            break
    else
        if (rdx_8 == 0)
            rbx_6 = 0
            break

int64_t rcx_12 = var_48

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rcx_13 = var_38

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int64_t rcx_14 = var_68

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t rcx_15 = var_58

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

if (rbx_6 != 0)
    if (arg7 != 0)
        int32_t var_78_1 = arg9
        int32_t rax_12 = sub_140a40eb0(arg1, arg2, arg3, arg4, arg5, arg6, arg7.d, arg8)
        r15 = rax_12
        
        if (rax_12 != 0)
            return rax_12
        
        goto label_140a4020b
    
    char rax_14
    
    if (arg4 == 0)
        int64_t* rax_13 = __crt_deferred_errno_cache::get(&data_143db7b00)
        int64_t r8_6 = *rax_13
        rax_14 = (*(r8_6 + 0x70))(rax_13, arg2, r8_6)
    
    if (arg4 != 0 || rax_14 == 0)
        if (arg5 != 0)
            int64_t* rax_15 = __crt_deferred_errno_cache::get(&data_143db7b00)
            int64_t r9_2 = *rax_15
            (*(r9_2 + 0x98))(rax_15, arg2, 0, r9_2)
        
        var_58 = 0
        int32_t rdx_12 = 0
        int32_t var_50_2 = 0
        int32_t rcx_20 = 0
        int32_t var_4c_1 = 0
        
        if (arg2 != 0 && *arg2 != 0)
            do
                rdi += 1
            while (arg2[rdi] != 0)
            
            if (rdi.d + 1 s> 0)
                sub_1405947f0(&var_58, rdi.d + 1)
                rcx_20 = var_4c_1
                rdx_12 = var_50_2
            
            int32_t rax_16 = rdi.d + 1 + rdx_12
            int32_t var_50_3 = rax_16
            
            if (rax_16 s> rcx_20)
                sub_140594770(&var_58)
            
            memcpy(var_58, arg2, (rdi.d + 1) * 2)
        
        int16_t** rax_17
        int64_t r8_9
        rax_17, r8_9 = sub_140b1a660(&var_38, &var_58)
        
        if (rax_17[1].d != 0)
            rsi = *rax_17
        
        r8_9.b = 1
        (*(*arg1 + 0x58))(arg1, rsi, r8_9)
        int64_t rcx_26 = var_38
        
        if (rcx_26 != 0)
            sub_140a74f90(rcx_26)
        
        int64_t rcx_27 = var_58
        
        if (rcx_27 != 0)
            sub_140a74f90(rcx_27)
        
        int64_t* rax_19 = __crt_deferred_errno_cache::get(&data_143db7b00)
        
        if ((*(*rax_19 + 0x180))(rax_19, arg2, arg3, (arg8 u>> 2).b & 1, (arg9 u>> 4).b & 1) != 0)
        label_140a4020b:
            
            if (arg6 != 0)
                int64_t* rax_21 = __crt_deferred_errno_cache::get(&data_143db7b00)
                int64_t* rax_22 = __crt_deferred_errno_cache::get(&data_143db7b00)
                int64_t r8_11 = *rax_21
                (*(*rax_22 + 0x98))(rax_22, arg2, zx.q((*(r8_11 + 0x88))(rax_21, arg3, r8_11)))
            
            return r15

return 1
