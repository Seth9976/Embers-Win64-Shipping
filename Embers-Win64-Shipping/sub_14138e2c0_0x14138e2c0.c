// 函数: sub_14138e2c0
// 地址: 0x14138e2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = arg5.q
void* r12 = arg2
uint128_t zmm7 = *arg4
uint128_t var_210 = arg4[1]
void* rax = zmm7.q
void* var_240 = rax
uint128_t var_220 = zmm7
int32_t arg_20
int32_t rcx
uint32_t rcx_2
int32_t rdi_1

if (rax != 0)
    rdi_1 = var_210.d
    rcx = _mm_bsrli_si128(zmm7, 8).d
    arg_20 = rcx
    
    if (rdi_1 == rcx)
        rcx_2 = (_mm_bsrli_si128(zmm7, 8).q u>> 0x20).d

uint128_t var_268
uint64_t var_258
uint128_t var_1f8
uint64_t* var_1e8
uint32_t rbx
uint32_t r13

if (rax == 0 || (rdi_1 == rcx && (var_210.q u>> 0x20).d == rcx_2))
    uint128_t zmm1 = arg4[2]
    var_1e8 = arg4[3].q
    rdi_1 = var_1e8.d
    var_220.q = zmm1.q
    uint128_t temp0_3 = _mm_bsrli_si128(zmm1, 8)
    var_240 = zmm1.q
    var_220:8.d = temp0_3.d
    r13 = (_mm_bsrli_si128(zmm1, 8).q u>> 0x20).d
    rbx = (var_1e8 u>> 0x20).d
    var_220:0xc.d = r13
    zmm7 = var_220
    var_210:4.d = rbx
    arg_20 = temp0_3.d
    var_210.d = rdi_1
else
    uint128_t zmm0 = arg4[2]
    var_1e8.o = arg4[1]
    var_258 = arg4[3].q
    var_1f8 = zmm7
    var_268 = zmm0
    zmm7 = sub_141446eb0(r12, arg3, &var_268, &var_1f8)
    rbx = var_210:4.d
    r13 = var_220:0xc.d

int32_t rcx_5 = arg4[4].d
void* rsi = nullptr
int32_t r14 = 0
var_210:8.b = 1
void* var_2b0 = nullptr
int64_t var_2a8 = 0

if (rcx_5 s> 0)
    sub_1413a8ae0(&var_2b0, rcx_5)
    rcx_5 = arg4[4].d
    r14 = var_2a8.d
    rsi = var_2b0

int32_t i = 0
int32_t temp0_5
int32_t temp1
temp0_5:temp1 = sx.q(rdi_1 - arg_20)
int32_t rax_6 = (temp1 + (temp0_5 & 3)) s>> 2
int32_t r10_1 = rax_6
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rbx - r13)
int32_t rax_10 = (temp3 + (temp2 & 3)) s>> 2
int32_t r9_1 = rax_10
int64_t rax_11 = data_14395f4d0
void* var_278

if (rcx_5 s> 0)
    int64_t rdi_3 = 0
    int128_t zmm8
    int128_t var_78_1 = zmm8
    int64_t var_200_1 = 0
    
    do
        int64_t* rdi_4 = rdi_3 + *(arg4 + 0x38)
        
        if (*rdi_4 != 0 && (rdi_4[2].d != rdi_4[1].d || *(rdi_4 + 0x14) != *(rdi_4 + 0xc)))
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(i)
            int64_t var_238 = data_143dbb180
            int32_t rdx_7 = temp4_1 & 3
            int32_t rax_16 = temp5_1 + rdx_7
            int32_t r8_2 = rax_16 s>> 2
            int64_t* rdx_8 = *(arg2 + 8)
            uint128_t var_230_1 = zx.o(0)
            int32_t r12_2 = ((rax_16 & 3) - rdx_7) * r10_1
            var_238.d = *(var_240 + 0x44)
            var_230_1.d = r12_2
            var_238:4.d = *(var_240 + 0x48)
            var_230_1:4.d = r8_2 * r9_1
            int64_t var_298 = var_230_1.q
            int32_t rax_23 = r12_2 + r10_1
            var_298:4.d += r9_1
            var_230_1:8.d = rax_23
            var_298.d = rax_23
            var_230_1:0xc.d = (var_298 u>> 0x20).d
            int128_t* rax_26 = &data_143dbb1e0
            
            if (rdi_4[5].b != 0)
                rax_26 = &data_14399f620
            
            *rax_26
            uint64_t* rax_27 = sub_14081d830(0x120, rdx_8, 1, 0)
            uint64_t* rsi_1 = rax_27
            
            if (rax_27 == 0)
                rsi_1 = nullptr
            else
                rsi_1[0xe] = 0
                rsi_1[0xf] = 0
                sub_14117af20(&rsi_1[0x12])
            
            memset(rsi_1, 0, 0x120)
            int32_t var_e8[0x8]
            int32_t* rax_28
            int128_t zmm6
            rax_28, zmm6, zmm7 = sub_141455b70(&var_e8, &var_238)
            int32_t var_270
            var_270.w = 1
            var_270:2.b = 0
            int32_t var_26c_1 = 0xffffffff
            *rsi_1 = *rax_28
            rsi_1[1] = *(rax_28 + 8)
            rsi_1[2] = *(rax_28 + 0x10)
            rsi_1[3] = *(rax_28 + 0x18)
            rsi_1[4].d = rax_28[8]
            *(rsi_1 + 0x24) = rax_28[9]
            rsi_1[5].d = rax_28[0xa]
            *(rsi_1 + 0x2c) = rax_28[0xb]
            rsi_1[6] = *(rax_28 + 0x30)
            rsi_1[7] = *(rax_28 + 0x38)
            rsi_1[8] = *(rax_28 + 0x40)
            rsi_1[9] = *(rax_28 + 0x48)
            rsi_1[0xa] = *(rax_28 + 0x50)
            rsi_1[0xb] = *(rax_28 + 0x58)
            rsi_1[0xc] = *(rax_28 + 0x60)
            rsi_1[0xd] = *(rax_28 + 0x68)
            var_278 = var_240
            *(rsi_1 + 0x90) = var_278.o
            rsi_1[0xe] = *rdi_4
            rsi_1[0xf] = rax_11
            *(rsi_1 + 0x80) = zmm6
            int128_t var_1a8
            sub_1419a2ec0(*(arg3 + 0x5150), &var_1a8, &data_143ed5e80, 0)
            int128_t var_1b8
            sub_1419a2ec0(*(arg3 + 0x5150), &var_1b8, &data_143ec4480, 0)
            int64_t rax_35 = data_1439b5788
            uint128_t zmm1_1 = *rdi_4
            void* rcx_17 = zmm1_1.q
            zmm6 = var_1b8
            int128_t zmm2_1 = var_1a8
            int64_t var_c0_1 = data_14395d9e8
            int64_t rax_37 = data_1439c9210
            var_298.d = *(rcx_17 + 0x44)
            var_298:4.d = *(rcx_17 + 0x48)
            uint64_t var_188_1 = rdi_4[2]
            int64_t* rdx_13 = *(arg2 + 8)
            int32_t var_290_1 = _mm_bsrli_si128(zmm1_1, 8).d
            uint128_t zmm0_2 = var_238.o
            char var_f0_1 = 0
            uint32_t var_28c_1 = (_mm_bsrli_si128(zmm1_1, 8).q u>> 0x20).d
            zmm8 = var_298.o
            uint32_t var_284_1 = (var_188_1 u>> 0x20).d
            uint64_t var_148_1 = var_188_1.d.q
            uint64_t var_160_1 = var_230_1:8.q
            uint128_t var_120_1 = rax_35.o
            uint64_t var_f8_1 = rsi_1
            uint64_t var_110_1 = rax_37
            void*** rax_46
            char rcx_18
            rax_46, rcx_18 = sub_14081d830(0xc8, rdx_13, 1, 0)
            void*** rbx_4 = rax_46
            
            if (rax_46 == 0)
                rbx_4 = nullptr
            else
                int128_t zmm6_1 = sub_14139eea0(rcx_18)
                void* var_1c0_1 = &data_143ec66b0
                var_298.o = rsi_1.o
                sub_141992bd0(rbx_4, &arg_20, &var_298, 1)
                *rbx_4 = &data_142f6e230
                *(rbx_4 + 0x38) = arg3.o
                *(rbx_4 + 0x48) = zmm0_2
                *(rbx_4 + 0x58) = zmm8
                *(rbx_4 + 0x68) = var_148_1.o
                *(rbx_4 + 0x78) = zmm2_1
                *(rbx_4 + 0x88) = zmm6
                *(rbx_4 + 0x98) = var_120_1
                *(rbx_4 + 0xa8) = zmm6_1
                *(rbx_4 + 0xb8) = var_f8_1.o
            
            sub_1419968d0(arg2, rbx_4)
            var_268.q = 0
            var_268:8.q = 0
            
            if (&var_268 != &rdi_4[3])
                int32_t rbx_5 = rdi_4[4].d
                int64_t rdi_6 = rdi_4[3]
                var_268:8.d = rbx_5
                
                if (rbx_5 != 0)
                    sub_1405a4c70(&var_268, rbx_5, 0)
                    memcpy(var_268.q, rdi_6, rbx_5 * 2)
            
            int64_t rbx_6 = sx.q(r14)
            var_258.d = r12_2 + 8
            r14 = (rbx_6 + 1).d
            var_2a8.d = r14
            var_258:4.d = (r8_2 + 1) * rax_10 - 0x13
            
            if (r14 s> var_2a8:4.d)
                sub_140ac0d60(&var_2b0)
                r14 = var_2a8.d
            
            rsi = var_2b0
            int64_t* rbx_7 = rsi + rbx_6 * 0x18
            sub_140596d10(rbx_7, &var_268)
            int64_t rcx_26 = var_268.q
            rbx_7[2] = var_258
            
            if (rcx_26 != 0)
                sub_140a74f90(rcx_26)
            
            r10_1 = rax_6
            r9_1 = rax_10
        
        i += 1
        rdi_3 = var_200_1 + 0x30
        var_200_1 = rdi_3
    while (i s< arg4[4].d)
    
    r12 = arg2

int32_t var_26c_2 = var_2a8:4.d
var_1e8.o = var_210
var_1f8 = zmm7
var_278 = rsi
int32_t var_270_1 = r14
int64_t zmm6_2 = sub_14137aa20(r12, &arg_20, arg3, &var_1f8, &var_278)
*arg1 = zmm7
arg1[1].q = zmm6_2
return arg1
