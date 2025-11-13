// 函数: sub_1406ea450
// 地址: 0x1406ea450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
memset(&arg2[1], 0, 0x5ac)
int16_t* const rbp = &data_142d40450
*arg2 = 0
int32_t rcx_1 = arg1[1].d
int32_t rax_2 = rcx_1 - 1

if (rcx_1 == 0)
    rax_2 = 0

void var_c8
int64_t var_48

if (rax_2 s> 0)
    int16_t* const rdx
    
    if (rcx_1 == 0)
        rdx = &data_142d40450
    else
        rdx = *arg1
    
    strncpy(&arg2[0x44], *(sub_140685ed0(&var_c8, rdx) + 0x88), 0x80)
    *(arg2 + 0x18f) = 0
    
    if (var_48 != 0)
        sub_140a74f90(var_48)

int32_t rax_4 = arg1[3].d

if (rax_4 != 0 && rax_4 - 1 s> 0)
    strncpy(&arg2[0x24], *(sub_140685ed0(&var_c8, arg1[2]) + 0x88), 0x80)
    *(arg2 + 0x10f) = 0
    
    if (var_48 != 0)
        sub_140a74f90(var_48)

int32_t rax_7 = arg1[5].d

if (rax_7 != 0 && rax_7 - 1 s> 0)
    strncpy(&arg2[0x68], *(sub_140685ed0(&var_c8, arg1[4]) + 0x88), 0x80)
    *(arg2 + 0x21f) = 0
    
    if (var_48 != 0)
        sub_140a74f90(var_48)
    
    int16_t* const rdx_6
    
    if (arg1[7].d == 0)
        rdx_6 = &data_142d40450
    else
        rdx_6 = arg1[6]
    
    strncpy(&arg2[0x88], *(sub_140685ed0(&var_c8, rdx_6) + 0x88), 0x80)
    *(arg2 + 0x29f) = 0
    
    if (var_48 != 0)
        sub_140a74f90(var_48)

int32_t rax_11 = arg1[9].d

if (rax_11 != 0 && rax_11 - 1 s> 0)
    strncpy(&arg2[0xa8], *(sub_140685ed0(&var_c8, arg1[8]) + 0x88), 0x80)
    *(arg2 + 0x31f) = 0
    
    if (var_48 != 0)
        sub_140a74f90(var_48)
    
    if (arg1[0xb].d != 0)
        rbp = arg1[0xa]
    
    strncpy(&arg2[0xc8], *(sub_140685ed0(&var_c8, rbp) + 0x88), 0x80)
    *(arg2 + 0x39f) = 0
    
    if (var_48 != 0)
        sub_140a74f90(var_48)

int64_t rdx_12 = arg1[0xc]
int64_t rax_15 = arg1[0xd]

if (rdx_12 != rax_15 && rax_15 s> 0)
    *(arg2 + 0x190) = sub_1406ebcc0(&arg1[0xc])
    *(arg2 + 0x198) = sub_1406ebcc0(&arg1[0xd])
else if (rdx_12 s> 0 && rax_15 s<= 0)
    *(arg2 + 0x190) = sub_1406ebcc0(&arg1[0xc])

int32_t rax_19 = arg1[0xe].d

if (rax_19 s> 0 && *(arg1 + 0x74) s> 0)
    arg2[0x108] = rax_19
    arg2[0x109] = *(arg1 + 0x74)

int32_t rax_21 = arg1[0x10].d

if (rax_21 != 0 && rax_21 - 1 s> 0)
    strncpy(&arg2[0xe8], *(sub_140685ed0(&var_c8, arg1[0xf]) + 0x88), 0x80)
    *(arg2 + 0x41f) = 0
    
    if (var_48 != 0)
        sub_140a74f90(var_48)

int32_t rax_24 = arg1[0x12].d

if (rax_24 != 0 && rax_24 - 1 s> 0)
    strncpy(&arg2[0x12a], *(sub_140685ed0(&var_c8, arg1[0x11]) + 0x88), 0x80)
    *(arg2 + 0x527) = 0
    
    if (var_48 != 0)
        sub_140a74f90(var_48)

int32_t rax_27 = arg1[0x14].d

if (rax_27 != 0 && rax_27 - 1 s> 0)
    strncpy(&arg2[0x14a], *(sub_140685ed0(&var_c8, arg1[0x13]) + 0x88), 0x80)
    *(arg2 + 0x5a7) = 0
    
    if (var_48 != 0)
        sub_140a74f90(var_48)

__security_check_cookie(rax_1 ^ &var_e8)
return arg2
