// 函数: sub_14134dd40
// 地址: 0x14134dd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = arg3[0x2b3].d
int32_t r15 = *(arg3 + 0x159c)
int32_t rbx = arg3[0x2b4].d
int32_t rdi = *(arg3 + 0x15a4)
int32_t temp2 = *(arg3 + 0x1524)
char var_d3 = 0
int32_t rax
rax.b = temp2 == 1
int64_t var_a0 = 0
int32_t var_d8 = rax
int32_t var_ac = 1
int32_t var_cc = r14
int32_t var_c8 = r15
int32_t var_c4 = rbx
int32_t var_c0 = rdi
int32_t var_bc
int64_t arg_18

if (temp2 != 1)
    var_bc = r14
    int32_t var_b8_1 = r15
else
    r14 = 0
    r15 = 0
    var_bc.q = 0
    int32_t* rax_1 = sub_14141fde0(arg3, &arg_18)
    rbx = *rax_1
    rdi = rax_1[1]

int32_t var_b0 = rdi
int32_t var_b4 = rbx
int64_t r12
r12.b = sub_1413146d0() == 3
char var_d4 = r12.b
uint128_t var_f8 = var_bc.o
int32_t rax_3 = sub_1422e5a30(arg3)
int32_t r8

if (rax_3 u> 0x1b || not(test_bit(0x857c041, rax_3)))
    r8 = *(&data_143f025fc + sx.q(rax_3) * 0x14)

if (((rax_3 u<= 0x1b && test_bit(0x857c041, rax_3)) || ((r8 u>> 2).b & 1) != 0
        || ((r8 u>> 0x1b).b & 1) != 0) && sub_1405fba70(rax_3, 3) != 0)
    float zmm6[0x4] = *(data_143ebbfd8 + 4)
    zmm6[0] = zmm6[0] * 0.00999999978f
    
    if (zmm6[0] >= 1f)
        float temp0_1[0x4] = __minss_xmmss_memss(zmm6[0], 0x40000000)
        
        if (not(temp0_1[0] <= 1f))
            var_d8 = 2
            r12.b = 0
            char var_d4_1 = 0
            var_bc.q = 0
            uint128_t zmm0
            zmm0.d = _mm_cvtepi32_ps(zx.o(rbx - r14)).d f* temp0_1[0]
            int32_t var_b4_1 = int.d(zmm0.d)
            zmm0.d = _mm_cvtepi32_ps(zx.o(rdi - r15)).d f* temp0_1[0]
            int32_t var_b0_1 = int.d(zmm0.d)

int32_t var_d0 = arg6

if (arg4 != 0)
    char var_d2_1 = 1

if (arg4 == 0 || r12.b == 0)
    char var_d2_2 = 0

void* arg_30
void* r14_1 = arg_30
void* var_a8 = r14_1
void*** var_78
void**** rax_9
float zmm6_1
float zmm7
rax_9, zmm6_1, zmm7 =
    sub_14134cc40(&var_78, arg1, arg2, arg3, &var_d8, &arg3[0x9b2], arg3[0x2b5] + 0x8d0)
int32_t r15_1 = var_f8:0xc.d
int64_t rbx_2 = var_f8:8.q
int32_t r12_1 = (var_f8:4.q).d
void* rdi_2 = var_f8.q
void*** r13_1 = (*rax_9).q
uint64_t var_68 = rax_9[2]

if (not(zmm6_1 <= zmm7))
    arg_30.d = rbx_2.d - rdi_2.d
    arg_30:4.d = r15_1 - r12_1
    sub_1419a97d0(&arg_30, &arg_18)
    int32_t rcx_11 = arg5
    int32_t rax_14 = arg_18.d
    double zmm2_1[0x2] = var_bc.o
    
    if (*(r14_1 + 0x44) s>= rax_14)
        rax_14 = *(r14_1 + 0x44)
    
    var_f8:8.d = rdi_2.d
    
    if (*(r14_1 + 0x48) s>= rcx_11)
        rcx_11 = *(r14_1 + 0x48)
    
    var_f8:4.d = rcx_11
    var_f8:0xc.d = r12_1
    var_f8.d = rax_14
    uint128_t zmm0_1 = var_f8
    int32_t var_e4_1 = r15_1
    var_f8 = zmm2_1
    var_f8.q = r13_1
    uint128_t var_98 = zmm0_1
    zmm0_1 = var_f8
    double temp0_4[0x2] = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
    var_f8 = zmm0_1
    int64_t var_88_1 = rbx_2.d.q
    int32_t var_e8_1
    var_e8_1.q = temp0_4.q
    r13_1 = sub_1413502c0(arg1, arg3, &var_f8, &var_98)

arg_30.d = 2
*arg7 = r13_1
*arg8 = rdi_2.d
arg8[1] = r12_1
arg8[2] = rbx_2.d
arg8[3] = r15_1
*arg9 = var_68
arg_30:4.d = 2
void* rcx_15 = arg_30
int32_t temp0_5 = divs.dp.d(sx.q(1 + rbx_2.d), 2)
arg7.d = temp0_5
uint32_t r8_5 = (rcx_15 u>> 0x20).d
arg_30 = rdi_2
arg7:4.d = divs.dp.d(sx.q((rbx_2 u>> 0x20).d - 1 + r8_5), r8_5)
int32_t temp15
int32_t temp16
temp15:temp16 = sx.q(rdi_2.d)
int32_t rax_28 = (temp16 - temp15) s>> 1
arg_30.d = rax_28
arg_30:4.d = divs.dp.d(sx.q(arg_30:4.d), (rcx_15 u>> 0x20).d)
arg10[1] = (arg_30 u>> 0x20).d
*arg10 = rax_28
uint32_t result = (arg7 u>> 0x20).d
arg10[3] = result
arg10[2] = temp0_5
return result
