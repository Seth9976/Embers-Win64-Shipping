// 函数: sub_14299c610
// 地址: 0x14299c610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_e8 = -2
void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t* var_78
sub_142991270(&var_78, &arg1[6])
sub_142997bd0(arg1, &var_78, &arg1[8], &arg1[0xb])
int32_t rsi = 0
int32_t rbp = 0
int32_t r15 = 0
int32_t var_100 = 0
int32_t rbx = 0
int32_t var_108 = 0
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o((*(*arg1 + 8))(arg1))).d f* 0.125f
uint128_t zmm6 = ceilf(zmm0.d)
uint128_t zmm0_1
zmm0_1.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x24) - *(arg1 + 0x1c) + 1)).d f* 0.125f
uint64_t r13 = zx.q(int.d(ceilf(zmm0_1.d).d) * int.d(zmm6.d) * 0x7e)
uint128_t zmm0_2
zmm0_2.d = _mm_cvtepi32_ps(zx.o((*(*arg1 + 8))(arg1))).d f* 0.125f
zmm6 = ceilf(zmm0_2.d)
uint128_t zmm0_3
zmm0_3.d = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x24) - *(arg1 + 0x1c) + 1)).d f* 0.125f
int32_t rcx_8 = int.d(ceilf(zmm0_3.d)) * int.d(zmm6.d) * 2
int32_t i_4 = 0
int64_t r8_1 = arg1[8]
int64_t rax_14
int64_t rdx_2
rdx_2:rax_14 = muls.dp.q(0x6bca1af286bca1b, arg1[9] - r8_1)
int64_t rdx_3 = rdx_2 s>> 2
struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject

if (rdx_3 != neg.q(rdx_3 u>> 0x3f))
    uint64_t i = 0
    int64_t rdx_9
    
    do
        int64_t rdx_5 = i * 0x98
        int32_t rcx_11 = *(rdx_5 + r8_1 + 0x20)
        
        if (rcx_11 == 0)
            int32_t rax_20 = sub_1429a6580(*(rdx_5 + r8_1 + 0x2c))
            int64_t rdx_7 = *arg1
            int32_t rbx_5 = rax_20 * (*(rdx_7 + 8))(arg1, rdx_7)
            var_100 += (*(arg1 + 0x24) - *(arg1 + 0x1c) + 1) * rbx_5
            rbx = var_108
        else if (rcx_11 == 1)
            int32_t rax_19 = sub_1403742e0(r13.d)
            int32_t rcx_21 = ((r13 << 1) + 0x10000).d
            
            if (rcx_21 s< rax_19)
                rcx_21 = rax_19
            
            rbp += rcx_21
            r15 += 1
            rbx = var_108
        else
            if (rcx_11 != 2)
                sub_142996c30(&exceptionObject, "Unhandled compression scheme case")
                _CxxThrowException(&exceptionObject, &data_1439468a0)
                noreturn
            
            int32_t rax_17 = sub_1429a6580(*(rdx_5 + r8_1 + 0x2c))
            int64_t rdx_6 = *arg1
            int32_t rbx_2 = rax_17 * (*(rdx_6 + 8))(arg1, rdx_6)
            rbx = var_108 + (*(arg1 + 0x24) - *(arg1 + 0x1c) + 1) * rbx_2 * 2
            var_108 = rbx
        
        i_4 += 1
        r8_1 = arg1[8]
        int64_t rax_22
        int64_t rdx_8
        rdx_8:rax_22 = muls.dp.q(0x6bca1af286bca1b, arg1[9] - r8_1)
        rdx_9 = rdx_8 s>> 2
        i = zx.q(i_4)
    while (i u< rdx_9 + (rdx_9 u>> 0x3f))

int32_t rbp_2 = rbp + sub_1403742e0(rbx) + sub_1403742e0(var_100)
int64_t* rcx_32 = arg1[0x1f]
int32_t r12
int64_t* rax_28

if (rcx_32 != 0)
    r12 = rcx_8
    var_100.q = sx.q(r12 * r15)
    
    if (sub_14183e350(rcx_32) u< var_100.q)
        void* r12_1 = arg1[0x1f]
        
        if (r12_1 != 0)
            sub_1429bb100(r12_1)
            j_sub_140a74f90(r12_1)
        
        int64_t* rax_33 = j_sub_140a82f30(0x10)
        var_78 = rax_33
        
        if (rax_33 == 0)
            rax_28 = nullptr
        else
            rax_28 = sub_1429bb0d0(rax_33, var_100.q)
        
        r12 = rcx_8
        arg1[0x1f] = rax_28
else
    int64_t* rax_27 = j_sub_140a82f30(0x10)
    var_78 = rax_27
    
    if (rax_27 == 0)
        rax_28 = nullptr
    else
        rax_28 = sub_1429bb0d0(rax_27, sx.q(rcx_8 * r15))
    
    r12 = rcx_8
    arg1[0x1f] = rax_28
*arg2 = sx.q(sub_1429bb240(arg1[0x1f]) + 0x58 + rbp_2)
int64_t rcx_41 = sx.q(r13.d * r15)

if (rcx_41 u> arg1[0x12])
    arg1[0x12] = rcx_41
    int64_t rax_38 = arg1[0x11]
    
    if (rax_38 != 0)
        j_sub_140a74f90(rax_38)
        rcx_41 = arg1[0x12]
    
    arg1[0x11] = j_sub_140a82f30(rcx_41)

int64_t rcx_43 = sx.q(r12 * r15)

if (rcx_43 u> arg1[0x14])
    arg1[0x14] = rcx_43
    int64_t rax_40 = arg1[0x13]
    
    if (rax_40 != 0)
        j_sub_140a74f90(rax_40)
        rcx_43 = arg1[0x14]
    
    arg1[0x13] = j_sub_140a82f30(rcx_43)

int64_t rbx_6 = sx.q(rbx)

if (rbx_6 u> arg1[0x16])
    arg1[0x16] = rbx_6
    int64_t rcx_45 = arg1[0x15]
    
    if (rcx_45 != 0)
        j_sub_140a74f90(rcx_45)
    
    arg1[0x15] = j_sub_140a82f30(rbx_6)

var_78 = nullptr
int32_t rbp_3 = 0
int32_t var_70 = 0
int32_t i_5 = 0
int64_t r8_2 = arg1[8]
int64_t rax_43
int64_t rdx_14
rdx_14:rax_43 = muls.dp.q(0x6bca1af286bca1b, arg1[9] - r8_2)
int64_t rdx_15 = rdx_14 s>> 2
uint64_t result = rdx_15 u>> 0x3f

if (rdx_15 != neg.q(result))
    uint64_t i_1 = 0
    int64_t rdx_21
    
    do
        int64_t rdx_17 = i_1 * 0x98
        int32_t rcx_49 = *(rdx_17 + r8_2 + 0x20)
        
        if (rcx_49 == 0)
            int32_t rax_47 = sub_1429a6580(*(rdx_17 + r8_2 + 0x2c))
            int64_t rdx_19 = *arg1
            int32_t rbx_10 = rax_47 * (*(rdx_19 + 8))(arg1, rdx_19)
            rsi += (*(arg1 + 0x24) - *(arg1 + 0x1c) + 1) * rbx_10
            var_78.d = rsi
        else if (rcx_49 != 1)
            if (rcx_49 != 2)
                sub_142996c30(&exceptionObject, "Unhandled compression scheme case")
                _CxxThrowException(&exceptionObject, &data_1439468a0)
                noreturn
            
            int32_t rax_45 = sub_1429a6580(*(rdx_17 + r8_2 + 0x2c))
            int64_t rdx_18 = *arg1
            int32_t rbx_8 = rax_45 * (*(rdx_18 + 8))(arg1, rdx_18)
            rbp_3 += (*(arg1 + 0x24) - *(arg1 + 0x1c) + 1) * rbx_8
            int32_t var_70_1 = rbp_3
        
        i_5 += 1
        r8_2 = arg1[8]
        i_1 = zx.q(i_5)
        int64_t rax_49
        int64_t rdx_20
        rdx_20:rax_49 = muls.dp.q(0x6bca1af286bca1b, arg1[9] - r8_2)
        rdx_21 = rdx_20 s>> 2
        result = rdx_21 u>> 0x3f
    while (i_1 u< rdx_21 + result)
    
    if (rsi s> 0)
        result = sub_1403742e0(rsi)
        var_78.d = result.d

int64_t** rsi_1 = &var_78
void* rdi_1 = &arg1[0x19]
int64_t i_3 = 3
int64_t i_2

do
    int64_t rbx_11 = sx.q(*rsi_1)
    
    if (rbx_11 u> *(rdi_1 + 0x18))
        *(rdi_1 + 0x18) = rbx_11
        int64_t rcx_66 = *rdi_1
        
        if (rcx_66 != 0)
            j_sub_140a74f90(rcx_66)
        
        result = j_sub_140a82f30(rbx_11)
        *rdi_1 = result
    
    rdi_1 += 8
    rsi_1 += 4
    i_2 = i_3
    i_3 -= 1
while (i_2 != 1)
__security_check_cookie(rax_1 ^ &var_128)
return result
