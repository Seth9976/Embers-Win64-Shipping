// 函数: sub_141021860
// 地址: 0x141021860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void* var_a0
memset(&var_a0, 0, 0x60)
bool cond:0 = *(arg2 + 0x40) s<= 0
void* rax_2 = *(arg2 + 0xe8)
int128_t zmm1 = *(arg2 + 0x68)
var_a0 = rax_2
int128_t zmm2 = *(arg2 + 0x58)
int64_t var_98 = *(rax_2 + 8)
int128_t var_90 = zmm1
int128_t var_60 = zmm2
int128_t var_50

if (not(cond:0))
    var_50:8.q = arg2 + 0x38

int32_t rax_5 = 1
*arg3 = var_a0.o
arg3[1] = zmm1
int128_t var_80
arg3[2] = var_80
int128_t var_70
arg3[3] = var_70
arg3[4] = zmm2
arg3[5] = var_50

if (data_143f0f1d8 == 0)
    rax_5 = (1 << (data_1439c7a34).b) - 1

arg3[2].d = rax_5
int32_t var_30 = rax_5
int32_t var_2c = *(arg3 + 0x38)
int128_t var_40 = zmm2
arg3[5].q = sub_140a6b260(&var_40, 0x18)
AcquireSRWLockShared(arg1 + 0xb8)
int32_t var_a8
sub_141021390(arg1 + 0x60, &var_a8, arg3)
int64_t rax_9 = sx.q(var_a8)
void* const rax_11

if (rax_9.d == 0xffffffff)
    rax_11 = nullptr
else
    rax_11 = rax_9 * 0x70 + *(arg1 + 0x60)

int64_t* rbx_1 = rax_11 + 0x60

if (rax_11 == 0)
    rbx_1 = nullptr

void*** result

if (rbx_1 == 0)
    ReleaseSRWLockShared(arg1 + 0xb8)
    result = nullptr
else
    void* rbx_2 = *rbx_1
    ReleaseSRWLockShared(arg1 + 0xb8)
    
    if (rbx_2 == 0)
        result = nullptr
    else
        int64_t rax_13
        
        if (*(rbx_2 + 0x28) == 0)
            rax_13 = sub_141026e90(rbx_2)
        else
            rax_13 = *(rbx_2 + 0x10)
        
        if (rax_13 == 0)
            result = nullptr
        else
            result = j_sub_140a82f30(0x28)
            
            if (result == 0)
                result = nullptr
            else
                *result = &data_142d3ff08
                result[1].d = 0
                *result = &data_142efcaf8
                *(result + 0xc) = 0
                result[2].w = 0x100
                result[3] = arg2
                *(arg2 + 8) += 1
                result[4] = rbx_2

__security_check_cookie(rax_1 ^ &var_c8)
return result
