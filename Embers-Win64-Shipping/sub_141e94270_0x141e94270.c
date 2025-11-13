// 函数: sub_141e94270
// 地址: 0x141e94270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t* rbx_1

if (arg3[1] == 0)
    rbx_1 = nullptr
else
    result = sub_142496c20()
    
    if (result == 0)
        rbx_1 = nullptr
    else
        rbx_1 = arg3[1]
        result = sx.q(result[7].d)
        
        if (result.d s> rbx_1[7].d)
            rbx_1 = nullptr
        else
            void* const* result_1 = result
            result = rbx_1[6]
            
            if (result[result_1] != &result[6])
                rbx_1 = nullptr

void* rsi = rbx_1[0x23]

if (rsi == 0)
    result = (*(*rbx_1 + 0x390))(rbx_1)
    rsi = rbx_1[0x23]

int128_t zmm7 = *(rsi + 0x2c)

if (zmm7.d f<= 3f || *(arg1 + 0x288) == 0)
    return result

void var_b8
memset(&var_b8, 0, 0x88)
int32_t var_b0_1 = 0x3f800000
int32_t var_d8
(*(*arg3 + 0x18))(arg3, arg1, arg4, &var_b8, &var_d8)
int64_t zmm0_1
zmm0_1.d = var_d8.d f* zmm7.d
int32_t var_d0
int128_t zmm6
zmm6.d = var_d0.d f* zmm7.d
int32_t var_e8_1 = zmm0_1.d
float var_d4
float var_e4_1 = var_d4 f* zmm7.d
int32_t var_e0_1 = zmm6.d
zmm7 = zmm6
uint8_t rsi_2 = not.b((*(rsi + 0x28) u>> 1).b) & 1

if (rsi_2 == 0)
    zmm0_1 = *(*(arg1 + 0x288) + 0x208)
    
    if (not(zmm0_1.d f<= 9.99999994e-09f))
        zmm7.d = zmm7.d f/ zmm0_1.d

int64_t* rcx_3 = *(arg1 + 0x288)
int64_t* rbx_2 = rcx_3[2]
void* rax_3 = rbx_2[0x23]

if (rax_3 == 0)
    (*(*rbx_2 + 0x390))(rbx_2)
    rcx_3 = *(arg1 + 0x288)
    rax_3 = rbx_2[0x23]

if (not((*(rax_3 + 0x158)).d f>= *(rcx_3 + 0xcc)) && not(zmm7.d f<= 0f))
    zmm6.d = zmm6.d f* 0.5f
    var_e0_1 = zmm6.d

int32_t var_c0_1 = var_e0_1
int64_t rax_6 = *rcx_3
int64_t var_c8 = var_e8_1.q
return (*(rax_6 + 0x7f0))(rcx_3, &var_c8, zx.q(rsi_2))
