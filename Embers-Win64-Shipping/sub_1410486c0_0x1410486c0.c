// 函数: sub_1410486c0
// 地址: 0x1410486c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
int32_t arg_18 = arg3
void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int64_t rax_2 = sx.q(arg5)
int32_t arg_40
int32_t r14 = arg_40
void* var_98 = arg2
int32_t var_180 = rax_2.d
int32_t rbx = (&data_1439c85fc)[rax_2 * 0xa]
int32_t rax_3 = sub_140fe7330(rbx, (r14 u>> 4).b & 1)
int16_t arg_28
int16_t var_144 = arg_28
int16_t arg_38
int16_t rcx_3 = arg_38
int32_t var_178 = rax_3
int32_t var_174 = rax_3
int16_t var_142 = rcx_3
int32_t var_148 = arg4
int64_t var_158 = 0
uint128_t var_78 = zx.o(arg3)
int64_t var_13c = 1
uint32_t rdx_2 = (0).d

if (test_bit(r14, 0x10))
    rdx_2 = 4

char var_188 = 0
int128_t var_88 = 4.o
char rax_4 = 0
uint32_t var_58 = rdx_2
int128_t var_68 = rbx.o

if ((r14.b & 1) != 0)
    rdx_2 |= 1
    var_188 = 1
    var_58 = rdx_2
    rax_4 = 1

int32_t* var_168 = nullptr

if (rax_4 != 0 && arg6[2].d == 1)
    uint128_t zmm1 = *(arg6 + 0x14)
    int32_t var_b0 = rax_3
    var_168 = &var_b0
    uint128_t var_ac_1 = zmm1
    int128_t zmm0 = var_b0.o
    uint128_t temp0_1 = _mm_bsrli_si128(zmm1, 0xc)
    var_b0.o = zmm0
    var_ac_1:0xc.d = temp0_1.d

int32_t rcx_11 = ((((rdx_2 & 1) * 2) | (rdx_2 & 4)) * 2) | (not.d(rdx_2 u>> 3) & 1) | (rdx_2 & 2)
    | (var_178 & 0xfffffff0)
int32_t rax_13
rax_13.b = rcx_11.b & 0xe
char temp1 = rax_13.b
rax_13.b = neg.b(rax_13.b)
char rax_16 = ((sbb.d(rax_13, rax_13, temp1 != 0)).b & 0x10) | (rcx_11.b & 0xef)
char rcx_13 = 0

if ((rax_16 & 0x11) == 1)
    rcx_13 = 0x20

char rdx_5 = 0

if (var_88.d == 1)
    rdx_5 = 0x40

char rcx_15 = rcx_13 | rdx_5 | (rax_16 & 0x1f)
int32_t rax_18

if ((0x20 & rcx_15) != 0)
    rax_18 = 0xc0
else if ((0x40 & rcx_15) == 0 || (rcx_15 & 8) != 0)
    rax_18 = 0
else
    rax_18 = 0xac3

int32_t i_1 = *(arg6 + 0x24)
void*** result_2 = nullptr
int32_t var_184 = rax_18
int64_t* var_e8 = arg6
void*** result = nullptr
int64_t rcx_16 = **(arg1 + 0x20)
int32_t* var_118 = &arg_18
int32_t* var_110 = &arg_20
int16_t* var_108 = &arg_28
int16_t* var_100 = &arg_38
int32_t* var_f8 = &var_180
int32_t* var_f0 = &arg_40
int128_t* var_e0 = &var_88
int32_t** var_d8 = &var_168
int32_t* var_d0 = &var_184
char* var_c8 = &var_188
int32_t* var_c0 = &var_174
int32_t* var_b8 = &var_178
int64_t var_120 = rcx_16
int64_t* rsi_2

if (i_1 == 0)
    rsi_2 = arg6
else
    uint64_t rflags_1
    int32_t temp0_2
    temp0_2, rflags_1 = _bit_scan_forward(i_1)
    int32_t rdi_1 = temp0_2
    int32_t var_128_1 = rdi_1
    int32_t i
    
    do
        void*** result_1 = sub_141040910(&var_118, *(rcx_16 + (zx.q(rdi_1) << 3) + 0x9d8))
        
        if (result_2 != 0)
            void* rbx_1
            
            if (result_1 == 0)
                rbx_1 = nullptr
            else
                rbx_1 = &result_1[0xe]
            
            int64_t* r15_1 = result_2[0x25]
            result_2[0x25] = rbx_1
            
            if (rbx_1 != 0)
                (*(*rbx_1 + 8))(rbx_1)
            
            if (r15_1 != 0)
                (*(*r15_1 + 0x10))(r15_1)
            
            if (rbx_1 != 0)
                *(rbx_1 + 0xc0) = 0
        else
            result = result_1
        
        result_2 = result_1
        i = not.d(1 << rdi_1.b) & i_1
        i_1 = i
        
        if (i != 0)
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_forward(i)
            rdi_1 = temp0_3
            int32_t var_124_1 = rdi_1
        else
            rdi_1 = 0x20
        
        rcx_16 = var_120
    while (i != 0)
    rsi_2 = arg6
    
    if (result != 0)
        int64_t* rdi_2 = *rsi_2
        int32_t var_1c0
        int32_t var_1b8
        int32_t var_1b0
        int32_t var_1a8
        int32_t var_1a0
        int32_t var_198
        
        if (rdi_2 != 0)
            int32_t rax_26 = (*(*rdi_2 + 0x10))(rdi_2)
            int64_t rdx_7 = *rdi_2
            int64_t rax_27 = (*(rdx_7 + 8))(rdi_2, rdx_7)
            var_198 = var_184
            var_1a0 = var_180
            var_1a8 = arg_38.d
            var_1b0 = 1
            var_1b8 = arg_28.d
            var_1c0 = arg_20
            sub_14104ce20(&result[0xe], var_98, rax_27, rax_26, arg_18, var_1c0)
        
        void* rax_30 = result[0x19]
        
        if (rax_30 != 0)
            int64_t* rax_31 = sub_141022ce0(result[0xf])
            int32_t var_1c8
            var_1c8.q = rax_30 + 0x88
            (*(*rax_31 + 0xc8))(rax_31, &var_98, 0, 1, var_1c8, var_1c0, var_1b8, var_1b0, var_1a8, 
                var_1a0, var_198)
            void* rcx_26 = var_98
            result[0x2a].d = rcx_26.d
            
            if (rcx_26 != 0)
                int32_t rcx_28
                
                if (rcx_26 s<= 0)
                    int64_t rax_37
                    int32_t rdx_12
                    rdx_12:rax_37 = sx.o((0x3ff - rcx_26) & 0xfffffffffffffc00)
                    rcx_28 = (neg.q(((zx.q(rdx_12) & 0x3ff) + rax_37) s>> 0xa)).d
                else
                    int64_t rax_34
                    int32_t rdx_10
                    rdx_10:rax_34 = sx.o((rcx_26 + 0x3ff) & 0xfffffffffffffc00)
                    rcx_28 = (((zx.q(rdx_10) & 0x3ff) + rax_34) s>> 0xa).d
                
                if (((*(rax_30 + 0xb8)).b & 7) != 0)
                    data_143f0f1fc
                    data_143f0f1fc += rcx_28
                else
                    data_143f0f1f8
                    data_143f0f1f8 += rcx_28

int64_t* rcx_33 = *rsi_2

if (rcx_33 != 0)
    int64_t rdx_14 = *rcx_33
    (*(rdx_14 + 0x18))(rcx_33, rdx_14)

__security_check_cookie(rax_1 ^ &var_1e8)
return result
