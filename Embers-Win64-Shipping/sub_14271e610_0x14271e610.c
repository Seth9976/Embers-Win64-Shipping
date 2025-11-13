// 函数: sub_14271e610
// 地址: 0x14271e610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2[0xb])
uint32_t rcx = zx.d(*(arg1 + 0x44))
bool c = test_bit(arg2[2], rcx)
int32_t arg_8 = rbx.d

if (not(c))
    return sub_1427206b0(arg1 + 0x98, &arg_8)

int64_t rax_1 = *(arg1 + 0x48)
char var_38 = rcx.b
int64_t var_34 = rax_1
void* rax_3 = sub_142702010(sub_140d3c6e0(arg2), &var_38)
void* const rsi = rax_3
void* rax_4
int64_t rax_5
void* rdx_1

if (rax_3 != 0)
    rax_4 = sub_14272a790()
    rdx_1 = *(rsi + 0x10)
    rax_5 = sx.q(*(rax_4 + 0x38))

if (rax_3 == 0 || rax_5.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
    rsi = nullptr

int32_t var_2c
int32_t var_20
int32_t* r8_4

if (*(arg1 + 0xa0) == *(arg1 + 0xcc))
label_14271e6ec:
    int32_t var_18
    sub_14271bba0(arg1 + 0x98, &var_18)
    int32_t rax_9 = var_18
    var_20 &= 0xfffffffe
    var_2c = 0xbf800000
    int32_t* var_10
    *var_10 = rbx.d
    int32_t var_28_1 = 0xbf800000
    char var_24_1 = 0xff
    *(var_10 + 4) = var_2c.o
    var_10[5] = 0xffffffff
    sub_14271cb30(arg1 + 0x98, &arg_8, rbx.d, var_10, rax_9, nullptr)
    r8_4 = sx.q(arg_8) * 0x1c + *(arg1 + 0x98)
else
    void* rcx_4 = *(arg1 + 0xd8)
    void* r8_2 = arg1 + 0xd0
    
    if (rcx_4 != 0)
        r8_2 = rcx_4
    
    int32_t rax_8 = *(r8_2 + (((sx.q(*(arg1 + 0xe0)) - 1) & rbx) << 2))
    
    if (rax_8 == 0xffffffff)
        goto label_14271e6ec
    
    while (true)
        r8_4 = sx.q(rax_8) * 0x1c + *(arg1 + 0x98)
        
        if (*r8_4 == rbx.d)
            break
        
        rax_8 = r8_4[5]
        
        if (rax_8 == 0xffffffff)
            goto label_14271e6ec
    
    if (rax_8 == 0xffffffff || r8_4 == 0)
        goto label_14271e6ec

int32_t rdx_7 = *(rsi + 0x5c)
float zmm1 = *(rsi + 0x50)
float zmm2 = *(rsi + 0x54)
uint8_t var_24_2 = ((((rdx_7 u>> 1).b & 1) | ((rdx_7.b & 1) * 2)) * 2) | ((rdx_7 u>> 2).b & 1)
int32_t result = var_20 ^ ((*(rsi + 0x58) ^ var_20) & 1)
int32_t result_1 = result
float zmm0_1[0x4] = var_2c.o
zmm0_1[0] = zmm1 * zmm1
float temp0[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xe1)
temp0[0] = zmm2 * zmm2
*(r8_4 + 4) = _mm_shuffle_ps(temp0, temp0, 0xe1)
return result
