// 函数: sub_140e71020
// 地址: 0x140e71020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t r14 = 0
int32_t arg_18 = 0
int32_t rcx = 0x14
TEB* gsbase

if (data_143e29fb8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    rcx = _Init_thread_header(&data_143e29fb8)
    
    if (data_143e29fb8 == 0xffffffff)
        sub_1405947f0(&data_143e29fa8, 0xb)
        int32_t rax_22 = data_143e29fb0 + 0xb
        bool cond:0_1 = rax_22 s<= data_143e29fb4
        data_143e29fb0 = rax_22
        
        if (not(cond:0_1))
            sub_140594770(&data_143e29fa8)
        
        UnDecorator::getReferenceType(data_143e29fa8, u"UICommands", 0x16)
        atexit(sub_142ccb3d0)
        rcx = _Init_thread_footer(&data_143e29fb8)

int64_t rax_2

if (arg3 != 0)
    rax_2 = -1
    
    do
        rax_2 += 1
    while (arg3[rax_2] != 0)

int64_t* rax_8
int32_t rbx_2
uint64_t rdi_1
int64_t r12
int64_t r13
int64_t var_f8
uint64_t var_e8

if (arg3 == 0 || rax_2.d s<= 0)
    int32_t rbx_3 = data_143e29fb0
    rdi_1 = 0
    int64_t rsi_1 = data_143e29fa8
    var_e8 = 0
    int32_t var_e0_1 = rbx_3
    
    if (rbx_3 != 0)
        sub_1405a4c70(&var_e8, rbx_3, 0)
        rdi_1 = var_e8
        memcpy(rdi_1, rsi_1, rbx_3 * 2)
    else
        int32_t var_dc_1 = 0
    
    int64_t var_c8
    r13 = var_c8
    rax_8 = &var_e8
    r12 = var_f8
    rbx_2 = 4
else
    int32_t rdi = data_143e29fb0
    int64_t rbx = data_143e29fa8
    int64_t var_118 = 0
    sub_1405a4c70(&var_118, sbb.d(rcx, rcx, rdi != 0) + 2 + rdi, 0)
    memcpy(var_118, rbx, rdi * 2)
    sub_140a20ba0(&var_118, &data_142d404c4, 1)
    r12 = var_118
    int32_t var_c0_1 = rdi
    int32_t var_10c
    int32_t var_bc_1 = var_10c
    int32_t var_110_1
    var_110_1.q = 0
    var_118 = 0
    
    if (*arg3 == 0)
        r13 = 0
        int64_t var_c8_2 = 0
        int32_t var_f0_2 = rdi
        int32_t var_ec_2 = var_10c
    else
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg3[rbx_1] != 0)
        
        int32_t rdx_3
        
        if (rdi == 0)
            rdx_3 = rdi + 1
        
        if (rdi != 0 || rbx_1.d == 0)
            rdx_3 = 0
        
        int64_t var_108 = r12
        int32_t rdx_5 = rdx_3 + rdi + rbx_1.d
        int64_t var_c8_1 = 0
        r13 = 0
        
        if (rdx_5 s> var_10c)
            sub_1405947f0(&var_108, rdx_5)
        
        sub_140a20ba0(&var_108, arg3, rbx_1.d)
        r12 = var_108
        int32_t var_f0_1 = rdi
        int32_t var_ec_1 = var_10c
    
    rdi_1 = var_e8
    rax_8 = &var_f8
    var_f8 = r12
    rbx_2 = 3
int32_t rsi_2 = rax_8[1].d
arg_18.q = rax_8
uint64_t var_d8 = 0

if (rsi_2 != 0)
    sub_1405a4c70(&var_d8, rsi_2, 0)
    memcpy(var_d8, *arg_18.q, rsi_2 * 2)

if ((rbx_2.b & 4) != 0)
    rbx_2 &= 0xfffffffb
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)

if ((rbx_2.b & 2) != 0)
    rbx_2 &= 0xfffffffd
    
    if (r12 != 0)
        sub_140a74f90(r12)

if ((rbx_2.b & 1) != 0 && r13 != 0)
    sub_140a74f90(r13)

int64_t* rdx_12 = arg_8
int16_t* const r12_1 = &data_142d40450

if (rsi_2 != 0)
    r12_1 = var_d8

int64_t* rcx_15 = rdx_12[1]
int64_t rbx_4 = rdx_12[2]
arg_8 = rdx_12[7]

if (rcx_15 != 0)
    int32_t rax_10 = rcx_15[1].d
    
    if (rax_10 != 0)
        rcx_15[1].d = rax_10 + 1
        rax_10.b = 1
    
    if (rax_10.b == 0)
        rcx_15 = nullptr
    
    if (rcx_15 != 0)
        r14 = *rdx_12

int64_t var_b8 = r14
int64_t* rax_11 = sub_140b58260(&arg_18, arg4, 1)
void var_a8
void var_70
int64_t* rax_13 = sub_140dda8b0(&var_70, &arg_8, sub_140e1ad30(&var_a8, rbx_4, arg6))
void var_88
int64_t* rax_14 = _vfprintf_p_l(&var_88, arg8, r12_1)
void var_a0
int64_t* rax_15 = _vfprintf_p_l(&var_a0, arg7, r12_1)
int32_t result = sub_140e6d930(&var_b8, arg2, *rax_11, rax_15, rax_14, rax_13, arg9, arg10, arg11)

if (rcx_15 != 0)
    rcx_15[1].d -= 1
    
    if (rcx_15[1].d == 1)
        result = (**rcx_15)(rcx_15)
        int32_t temp3_1 = *(rcx_15 + 0xc)
        *(rcx_15 + 0xc) -= 1
        
        if (temp3_1 == 1)
            result = (*(*rcx_15 + 8))(rcx_15, 1)

int64_t* var_98

if (var_98 != 0)
    result = var_98[1].d
    var_98[1].d -= 1
    
    if (result == 1)
        (**var_98)(var_98)
        result = *(var_98 + 0xc)
        *(var_98 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*var_98 + 8))(var_98, 1)

int64_t* var_80

if (var_80 != 0)
    result = var_80[1].d
    var_80[1].d -= 1
    
    if (result == 1)
        result = (**var_80)(var_80)
        int32_t r15_1 = *(var_80 + 0xc)
        *(var_80 + 0xc) -= 1
        
        if (r15_1 == 1)
            result = (*(*var_80 + 8))(var_80, zx.q(r15_1))

uint64_t rcx_31 = var_d8

if (rcx_31 == 0)
    return result

return sub_140a74f90(rcx_31)
