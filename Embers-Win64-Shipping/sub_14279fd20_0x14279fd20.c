// 函数: sub_14279fd20
// 地址: 0x14279fd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t var_c8 = 0
int64_t var_c0 = 0
int64_t* rax_3 = (*(*arg1 + 0x280))()
void* rbx = nullptr
var_c8 = 0
int64_t var_c0_1 = 0
void* result_1 = (*(*rax_3 + 0x280))(rax_3, &data_143f88a90, &var_c8, 0)
void* const result = result_1
void* rax_4
int64_t rax_5
void* rdx

if (result_1 != 0)
    rax_4 = sub_1427ba7e0()
    rdx = *(result + 0x10)
    rax_5 = sx.q(*(rax_4 + 0x38))

if (result_1 == 0 || rax_5.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
    result = nullptr

int64_t rcx_2 = var_c8

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

void* rsi = nullptr

if (arg4 != 0)
    void* rax_8 = (*(*arg4 + 8))(arg4)
    void* rax_9 = sub_140d41340()
    void* rdx_1 = *(rax_8 + 0x10)
    int64_t rcx_4 = sx.q(*(rax_9 + 0x38))
    
    if (rcx_4.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rcx_4 << 3)) == rax_9 + 0x30)
        rsi = rax_8

*(result + 0x48) = rsi
void* rax_12

if (rsi == 0)
    rax_12 = nullptr
else
    rax_12 = sub_140d21950(rsi, sub_1427baa40())

*(result + 0x50) = rax_12
sub_140d19010(arg1, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
var_c8 = 0
void* rax_14
int32_t zmm0
int32_t zmm6_1
int32_t zmm7_1
rax_14, zmm0, zmm6_1, zmm7_1 = sub_140d2dfc0(sub_1427c0dd0(), arg1, 0, 0, 0, 0, 0, 0, 0)
void* rsi_1 = nullptr

if (arg5 != 0)
    int64_t rdx_5 = *arg5
    void* rax_15 = (*(rdx_5 + 8))(arg5, rdx_5)
    void* rax_16
    rax_16, zmm0 = sub_140d41340()
    void* rdx_6 = *(rax_15 + 0x10)
    int64_t rcx_9 = sx.q(*(rax_16 + 0x38))
    
    if (rcx_9.d s<= *(rdx_6 + 0x38) && *(*(rdx_6 + 0x30) + (rcx_9 << 3)) == rax_16 + 0x30)
        rsi_1 = rax_15

*(rax_14 + 0x48) = rsi_1
void* rcx_11

if (rsi_1 == 0)
    rcx_11 = nullptr
else
    void* rax_19
    rax_19, zmm0 = sub_140d21950(rsi_1, sub_1427bae60())
    rcx_11 = rax_19

*(rax_14 + 0x50) = rcx_11

if (*(rax_14 + 0x48) == 0)
    rcx_11 = nullptr

(*(*rcx_11 + 0x10))(rcx_11)

if (zmm0 f>= zmm6_1)
    _mm_min_ss(zmm7_1, zmm0)

int64_t* rcx_12

if (*(rax_14 + 0x48) == 0)
    rcx_12 = nullptr
else
    rcx_12 = *(rax_14 + 0x50)

(*(*rcx_12 + 0x20))(rcx_12)
*(rax_14 + 0x58) = zmm6_1
*(rax_14 + 0x5c) = zmm7_1
*(result + 0x58) = rax_14
*(result + 0x60) = sub_140d21950(rax_14, sub_1427bae60())
void* rax_24 = sub_1427a34d0(arg3, arg1)

if (arg1[0x16] != 0)
    int64_t* var_b0_1 = arg1
    void** const var_88 = &data_142d42ed8
    int64_t (* rdx_11)(int64_t* arg1, char* arg2) = sub_1427a24f0
    void*** var_98_1 = nullptr
    int64_t (* var_a8)(int64_t* arg1, char* arg2) = sub_1427a24f0
    void*** rax_25 = nullptr
    int128_t var_80_1 = arg3.o
    
    if (rax_24 + 0x40 != &var_a8)
        int128_t zmm2_1 = *(rax_24 + 0x40)
        int128_t zmm3_1 = *(rax_24 + 0x50)
        int128_t zmm4_1 = *(rax_24 + 0x60)
        int128_t zmm5_1 = *(rax_24 + 0x70)
        *(rax_24 + 0x40) = var_a8.o
        int128_t zmm0_1 = var_88.o
        *(rax_24 + 0x50) = var_98_1.o
        *(rax_24 + 0x60) = zmm0_1
        var_a8.o = zmm2_1
        rdx_11 = var_a8
        var_98_1.o = zmm3_1
        rax_25 = var_98_1
        *(rax_24 + 0x70) = var_80_1
        var_88.o = zmm4_1
        var_80_1 = zmm5_1
    
    if (rdx_11 != 0)
        void** const* rcx_16 = &var_88
        
        if (rax_25 != 0)
            rcx_16 = rax_25
        
        (*rcx_16)[2](rcx_16, rdx_11)

*(result + 0x68) = rax_24
void* rax_28

if (rax_24 == 0)
    rax_28 = nullptr
else
    rax_28 = sub_140d21950(rax_24, sub_1427babc0())

*(result + 0x70) = rax_28
void* rsi_3 = nullptr

if (arg8 != 0)
    void* rax_30 = (*(*arg8 + 8))(arg8)
    void* rax_31 = sub_140d41340()
    void* rdx_13 = *(rax_30 + 0x10)
    int64_t rcx_19 = sx.q(*(rax_31 + 0x38))
    
    if (rcx_19.d s<= *(rdx_13 + 0x38) && *(*(rdx_13 + 0x30) + (rcx_19 << 3)) == rax_31 + 0x30)
        rsi_3 = rax_30

*(result + 0x78) = rsi_3

if (rsi_3 != 0)
    rbx = sub_140d21950(rsi_3, sub_1427bad50())

*(result + 0x80) = rbx
int64_t rsi_4 = sx.q(arg1[0xe].d)
int32_t rcx_21 = (rsi_4 + 1).d
arg1[0xe].d = rcx_21

if (rcx_21 s> *(arg1 + 0x74))
    sub_1405a4d70(&arg1[0xd])

*(arg1[0xd] + (rsi_4 << 3)) = result
__security_check_cookie(rax_1 ^ &var_118)
return result
