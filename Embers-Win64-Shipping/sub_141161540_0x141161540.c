// 函数: sub_141161540
// 地址: 0x141161540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t* rax_3 = std::_Get_future_error_what((*U"1111")[sx.q(*(arg3 + 0x1548))])
int64_t var_a4
__builtin_memset(&var_a4, 0, 0x43)
int128_t var_100
__builtin_memset(&var_100, 0, 0x30)
int128_t var_b8 = zx.o(0)
int16_t var_60 = 0
sub_140fdc870(arg1, &var_100)
int64_t var_d0 = data_14395da00
int64_t var_c8 = data_14395da18
int64_t var_c0 = data_14395d9e8
void* var_120
sub_1419a2ec0(rax_3, &var_120, &data_143e6df80, 0)
void* var_110
sub_1419a2ec0(rax_3, &var_110, &data_143e6db60, 0)
void* r15 = var_120
var_100.q = data_1439b5ff8
int64_t rax_8 = 0

if (r15 != 0)
    int64_t rdx_3 = sx.q(*(r15 + 0x10c))
    void* var_118
    int64_t* rbx_1 = *(var_118 + 0x10)
    int64_t rax_10 = rbx_1[3]
    
    if (*(rax_10 + (rdx_3 << 3)) == 0)
        sub_1419ccf30(rbx_1, rdx_3.d)
        rax_10 = rbx_1[3]
    
    rax_8 = *(rax_10 + (rdx_3 << 3))

void* rsi_2 = var_110
var_100:8.q = rax_8
int64_t rax_11 = 0

if (rsi_2 != 0)
    int64_t rdx_4 = sx.q(*(rsi_2 + 0x10c))
    void* var_108
    int64_t* rbx_2 = *(var_108 + 0x10)
    int64_t rax_13 = rbx_2[3]
    
    if (*(rax_13 + (rdx_4 << 3)) == 0)
        sub_1419ccf30(rbx_2, rdx_4.d)
        rax_13 = rbx_2[3]
    
    rax_11 = *(rax_13 + (rdx_4 << 3))

int128_t var_e0
var_e0.q = rax_11
int32_t var_a8 = 0
sub_1419870b0(arg1, &var_100, 2)
sub_14119c000(rsi_2, arg1, arg3, arg4)
sub_141080be0(r15, arg1, *(arg1 + 0x188), *(arg3 + 0x10))
float zmm1 = arg5 * 200000f
int32_t result = int.d(-0.5f - (zmm1 + zmm1)) s>> 1
int32_t r14_2 = result * 0xfffffffd

if (r14_2 != 0)
    int32_t rsi_3
    int32_t temp2_1
    
    do
        rsi_3 = 0x927c0
        
        if (r14_2 u<= 0x927c0)
            rsi_3 = r14_2
        
        void*** rcx_11 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_15 = &rcx_11[5]
        
        if (rax_15 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x30)
            rcx_11 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_15 = &rcx_11[5]
        
        *(arg1 + 0x30) = rax_15
        int64_t* rax_16 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_16 = rcx_11
        *(arg1 + 8) = &rcx_11[1]
        rcx_11[1] = 0
        *rcx_11 = &data_142d56618
        rcx_11[2].d = 0
        rcx_11[3] = arg2
        rcx_11[4].d = 0
        void*** rcx_17 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_18 = &rcx_17[4]
        
        if (rax_18 u> *(arg1 + 0x38))
            sub_140b0e3d0(arg1 + 0x30, 0x28)
            rcx_17 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
            rax_18 = &rcx_17[4]
        
        *(arg1 + 0x30) = rax_18
        void**** rax_19 = *(arg1 + 8)
        *(arg1 + 0x14) += 1
        *rax_19 = rcx_17
        *(arg1 + 8) = &rcx_17[1]
        rcx_17[1] = 0
        result = 0x42d54988
        *rcx_17 = &data_142d54988
        rcx_17[2].d = 0
        *(rcx_17 + 0x14) = rsi_3 u/ 3
        rcx_17[3].d = 1
        temp2_1 = r14_2
        r14_2 -= rsi_3
    while (temp2_1 != rsi_3)

__security_check_cookie(rax_1 ^ &var_148)
return result
