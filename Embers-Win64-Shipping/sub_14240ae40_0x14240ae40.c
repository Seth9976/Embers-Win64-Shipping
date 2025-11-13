// 函数: sub_14240ae40
// 地址: 0x14240ae40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2c8
int64_t rax_1 = __security_cookie ^ &var_2c8
void var_238
int64_t* rax_2 = sub_140aae420(&var_238, arg3)
int32_t var_254 = 0
int32_t var_258 = 0
int64_t* rax_3
int32_t* r9
rax_3, r9 = sub_140ac6680(rax_2)
int128_t* r8

if (rax_3[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *rax_3

int32_t rcx_2 = *(arg1 + 0x3c)
int32_t rax_4 = rcx_2
rcx_2.b &= 1
char* var_268 = arg8
uint128_t result
uint128_t zmm7_1
int32_t zmm8_1
int32_t zmm9_1
result, zmm7_1, zmm8_1, zmm9_1 = sub_142426320(arg1, not.b(*arg8) & 1, r8, arg4, r9, &var_254, 
    &var_258, arg2.d, arg6.d, arg7.b, rcx_2.b, (rax_4 u>> 1).b & 1, r8)

if ((*arg8 & 1) != 0)
    void var_248
    sub_140acc920(&var_248, arg1 + 0x38)
    result.d = result.d f+ *(arg1 + 0x2c)
    truncf(result.d)
    zmm7_1.d = zmm7_1.d f+ *(arg1 + 0x28)
    truncf(zmm7_1.d)
    int32_t var_24c_1 = result.d
    uint128_t* var_2a8_1 = &var_248
    int32_t var_250 = zmm7_1.d
    void** var_220
    sub_1420767c0(&var_220, &var_250, rax_2, arg2, var_2a8_1)
    int32_t var_20c_1 = 2
    uint128_t var_1e0_1 = *arg8
    void* rbx_1 = *(arg1 + 0x260)
    int32_t var_180_1 = zmm9_1
    int32_t var_17c_1 = zmm8_1
    int128_t var_1d0_1 = *(arg8 + 0x10)
    uint64_t var_1c0_1 = *(arg8 + 0x20)
    var_220[3](&var_220, rbx_1)
    
    if (*(rbx_1 + 0xa0) == 1)
        sub_14240e030(rbx_1, 0)
    
    sub_141fa61e0(&var_220)

result = _mm_cvtepi32_ps(zx.o(var_258))
int64_t* var_230

if (var_230 != 0)
    var_230[1].d -= 1
    
    if (var_230[1].d == 1)
        (**var_230)(var_230)
        int32_t rdi_1 = *(var_230 + 0xc)
        *(var_230 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_230 + 8))(var_230, zx.q(rdi_1))

__security_check_cookie(rax_1 ^ &var_2c8)
return result
