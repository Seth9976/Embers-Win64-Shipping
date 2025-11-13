// 函数: sub_1419af2a0
// 地址: 0x1419af2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_14399fa38()
int128_t zmm2
int128_t zmm3
zmm2, zmm3 = sub_1419a21e0(0)

if (data_143f01c90 != 0)
    if (data_143f02bac u> 0)
        zmm2, zmm3 = j_sub_14196ef60(&data_143f02b88, &data_143f02b98, zmm2, zmm3)
    
    int64_t* rax_1 = sub_140a242a0()
    int64_t r8_1 = *rax_1
    
    if ((*(r8_1 + 0x20))(rax_1, 0, r8_1) == 0)
        sub_1419a2ad0()
        data_143f1af78 = sub_140a6e140(&data_143f1af70, u"RHIThread", 0x80000, 5, -1, 0)
    
    void var_38
    int64_t* rax_4 = sub_14199c720(&var_38, nullptr, 2)
    *(*rax_4 + 0x10) = 1
    void* rcx_4 = *rax_4
    int32_t r8_2 = rax_4[2].d
    int64_t* rdx_1 = rax_4[1]
    int64_t* rsi_1 = *(rcx_4 + 0x18)
    int64_t* arg_20 = rsi_1
    
    if (rsi_1 != 0)
        rsi_1[9].d += 1
    
    sub_1419ae8f0(rcx_4, rdx_1, r8_2, 1)
    sub_1405a6220(sub_140a242a0(), &arg_20)
    sub_1419a2ad0()
    void* rcx_6 = data_143f1af78
    data_143db7ab0 = rcx_6
    data_143f01c93 = 1
    data_143f01c92 = 1
    data_143db7ab8 = *(rcx_6 + 0x44)
    sub_141976900(&data_143f02b88)
    
    if (rsi_1 != 0)
        rsi_1[9].d -= 1
        
        if (rsi_1[9].d == 1)
            sub_140a2f6e0(rsi_1)
else if (data_143f01c91 != 0)
    data_143f01c92 = 1
    data_143f01c94 = 1

data_143f138f4 = 1
void*** rax_8 = j_sub_140a82f30(0x18)
void*** rbx = rax_8

if (rax_8 == 0)
    rbx = nullptr
else
    rbx[1].b = 0
    *rbx = &data_14300a390
    rbx[2] = sub_140a491d0(1)
    int32_t rsi_2 = data_143f029c8
    sub_140b34200("FlushRHIThreadTotal", rsi_2)
    
    if (data_143f02bac u> 0)
        zmm3 = j_sub_14196ef60(&data_143f02b88, &data_143f02b98, zmm2, zmm3)
    
    sub_14198b230()
    
    if (data_143f01c92 != 0)
        sub_14198b3f0()
    
    int64_t rdx_4
    rdx_4.b = 1
    sub_14198b7d0()
    sub_140b38680("FlushRHIThreadTotal", rsi_2)
    int64_t* rcx_12 = data_143f0f180
    (*(*rcx_12 + 0x3a0))(rcx_12)

data_143f1af48 = rbx
data_143f1af94
void arg_10
int32_t arg_18 = *sub_140b5e500(&arg_10, 0xf6)
int32_t arg_1c = 0
int64_t var_48
int64_t* rax_12
int128_t zmm2_1
rax_12, zmm2_1 = sub_140b5e690(&arg_18, &var_48)
int16_t* const rsi_3 = &data_142d40450
int16_t* const r8_4

if (rax_12[1].d == 0)
    r8_4 = &data_142d40450
else
    r8_4 = *rax_12

int16_t* var_68
sub_140a2e390(&var_68, u"%s %u", r8_4)
int64_t rcx_17 = var_48

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int16_t* const rdx_7 = &data_142d40450
int32_t var_60

if (var_60 != 0)
    rdx_7 = var_68

void*** rax_13 = sub_140a6e140(data_143f1af48, rdx_7, 0, 0, -1, 0)
int16_t* rcx_19 = var_68
data_143db7aa8 = rax_13

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

int64_t* rcx_20 = *(data_143f1af48 + 0x10)
(*(*rcx_20 + 0x20))(rcx_20, 0xffffffff, 0)
int64_t* rbx_2 = data_143db18d0

if (rbx_2 == 0)
    sub_140a53c40()
    rbx_2 = data_143db18d0

TEB* gsbase

if (data_143f1af90 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f1af90)
    
    if (data_143f1af90 == 0xffffffff)
        data_143f1af88 = &data_14300a3f0
        _Init_thread_footer(&data_143f1af90)

int64_t r9_3 = *rbx_2
(*(r9_3 + 0xf0))(rbx_2, zx.q(*(data_143db7aa8 + 0x44)), &data_143f1af88, r9_3)
int64_t* result_1 = nullptr
sub_141997ac0(&result_1, 0, zmm2_1, zmm3)
sub_1419ba820(&result_1, 0)
char temp0_2 = data_143f0fdf1
data_143f0fdf1 = 1
int64_t rax_19
rax_19.b = temp0_2
void*** rax_20 = j_sub_140a82f30(8)

if (rax_20 != 0)
    *rax_20 = &data_14300a3c0

uint64_t r8_5 = zx.q(data_143f1af94)
data_143f13900 = rax_20
int16_t* var_58
sub_140a2e390(&var_58, u"RTHeartBeat %d", r8_5)
int32_t var_50

if (var_50 != 0)
    rsi_3 = var_58

void*** rax_21 = sub_140a6e140(data_143f13900, rsi_3, 0x4000, 1, -1, 0)
int16_t* rcx_28 = var_58
data_143f138f8 = rax_21

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

data_143f1af94 += 1
data_14399fa40()
int64_t* result = result_1

if (result != 0)
    result[9].d -= 1
    
    if (result[9].d == 1)
        return sub_140a2f6e0(result_1)

return result
