// 函数: sub_142140ae0
// 地址: 0x142140ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x13]
wchar16 const* const rsi = u"NULL"
int32_t rbx = 0
int16_t* const rdi = &data_142d40450
int32_t arg_8 = 0
int16_t* var_90
int16_t* const r12

if (rax == 0)
    r12 = u"NULL"
else
    int64_t arg_18 = *(rax + 0x18)
    sub_140b63b70(&arg_18, &var_90)
    r12 = &data_142d40450
    rbx = 1
    int32_t var_88
    
    if (var_88 != 0)
        r12 = var_90

void* rax_2 = arg1[6]
int16_t* var_a0

if (rax_2 == 0)
    arg_8.q = u"NULL"
else
    int64_t arg_20 = *(rax_2 + 0x18)
    rbx |= 2
    sub_140b63b70(&arg_20, &var_a0)
    int16_t* const rax_4 = &data_142d40450
    int32_t var_98
    
    if (var_98 != 0)
        rax_4 = var_a0
    
    arg_8.q = rax_4

int64_t* rcx_2 = arg1[0xb]
void* const rax_7
bool cond:2_1

if (rcx_2 != 0)
    cond:2_1 = (*(*rcx_2 + 0x368))(rcx_2) != 0
    rax_7 = &data_1432ddbb0

if (rcx_2 == 0 || not(cond:2_1))
    rax_7 = &data_1432ddbb8

void* r13 = arg1[0xb]
wchar16* var_b0

if (r13 != 0)
    int64_t var_e8 = *(r13 + 0x18)
    rbx |= 4
    int16_t* var_d0
    sub_140b63b70(&var_e8, &var_d0)
    int64_t var_80
    int64_t* rax_9 = sub_140b63b70(r13 + 0x190, &var_80)
    int16_t* const r8_1
    
    if (rax_9[1].d == 0)
        r8_1 = &data_142d40450
    else
        r8_1 = *rax_9
    
    int16_t* const rax_10 = &data_142d40450
    
    if (*(r13 + 0x228) != 0)
        rax_10 = u"(PEER)"
    
    int16_t* const var_118_1 = rax_10
    sub_140a2e390(&var_b0, u"%s %s%s", r8_1)
    int64_t rcx_6 = var_80
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    int16_t* rcx_7 = var_d0
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    rsi = &data_142d40450
    int32_t var_a8
    
    if (var_a8 != 0)
        rsi = var_b0

int64_t var_60
int64_t* rax_11 = sub_142157160(&arg1[0x2c], &var_60)
int16_t* const r13_1

if (rax_11[1].d == 0)
    r13_1 = &data_142d40450
else
    r13_1 = *rax_11

int64_t var_e0 = arg1[3]
int16_t* var_c0
sub_140b63b70(&var_e0, &var_c0)
int16_t* const rax_13 = &data_142d40450
int64_t r8_2
r8_2.b = 1
int32_t var_b8

if (var_b8 != 0)
    rax_13 = var_c0

int16_t* const var_d8 = rax_13
int64_t var_70
int16_t** rax_15 = (*(*arg1 + 0x270))(arg1, &var_70, r8_2)

if (rax_15[1].d != 0)
    rdi = *rax_15

int16_t* const var_f8 = r13_1
int16_t* const var_100 = r12
int64_t var_108 = arg_8.q
void* const var_110 = rax_7
wchar16 const* const var_118_2 = rsi
sub_140a2e390(arg2, 
    [UNetConnection] RemoteAddr: %s, Name: %s, Driver: %s, IsServer: %s, PC: %s, Owner: %s, UniqueI", 
    rdi)
int64_t rcx_12 = var_70

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int16_t* rcx_13 = var_c0

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int64_t rcx_14 = var_60

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

if ((rbx.b & 4) != 0)
    wchar16* rcx_15 = var_b0
    rbx &= 0xfffffffb
    
    if (rcx_15 != 0)
        sub_140a74f90(rcx_15)

if ((rbx.b & 2) != 0)
    int16_t* rcx_16 = var_a0
    rbx &= 0xfffffffd
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)

if ((rbx.b & 1) != 0)
    int16_t* rcx_17 = var_90
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)

return arg2
