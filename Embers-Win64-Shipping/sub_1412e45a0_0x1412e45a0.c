// 函数: sub_1412e45a0
// 地址: 0x1412e45a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1d8
int64_t rax_1 = __security_cookie ^ &var_1d8
int32_t r14 = arg1[0x18].d
int64_t* r15 = arg1
uint64_t rsi_1 = zx.q(r14) & 0x3fffffff
int64_t* var_198
int64_t* rsi_3

if (not(test_bit(r14, 0x1e)))
    EnterCriticalSection(&data_143e8eab0)
    rsi_3 = rsi_1 * 0x88 + data_143e8eaf0
    var_198 = rsi_3
    LeaveCriticalSection(&data_143e8eab0)
else
    rsi_3 = (rsi_1 << 7) + *arg2
    var_198 = rsi_3

int64_t r13 = 0
int64_t var_188
int64_t var_178

if (r14 != *arg7)
    uint128_t zmm0 = *(rsi_3 + 0x60)
    int64_t* rax_2 = sub_14125fef0(rsi_3, &var_188)
    int64_t var_1b0_1 = 0
    int128_t zmm1_1 = *(rax_2 + 0x10)
    int128_t zmm2 = *(rax_2 + 0x20)
    int64_t var_d0_1 = rsi_3[9]
    int64_t var_c8_1 = rsi_3[0xa]
    int64_t var_c0_1 = rsi_3[0xb]
    int32_t var_a8_1 = *(rsi_3 + 0x74)
    int64_t var_a0_1 = 0
    char rax_7 = rsi_3[0xe].b
    uint128_t var_100 = *rax_2
    char var_64_1 = rax_7
    int128_t var_f0_1 = zmm1_1
    char var_63_1 = *(rsi_3 + 0x71)
    char rax_9 = *(rsi_3 + 0x72)
    uint128_t var_b8_1 = zmm0
    __builtin_memset(&var_188, 0, 0x20)
    char var_62_1 = rax_9
    int128_t var_e0_1 = zmm2
    int32_t var_a4_1 = 0
    uint128_t var_98_1 = var_188.o
    int64_t var_78
    __builtin_memset(&var_78, 0, 0x14)
    int128_t var_88_1 = var_178.o
    int16_t var_60_1 = 0
    sub_140fdc870(arg6, &var_100)
    sub_1419870b0(arg6, &var_100, 2)
    sub_141298750(arg7, r14)

uint32_t r12 = zx.d(*(r15 + 0xe1))

if (r12 != arg7[1])
    void*** rcx_6 = (*(arg6 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_10 = &rcx_6[3]
    
    if (rax_10 u> *(arg6 + 0x38))
        sub_140b0e3d0(arg6 + 0x30, 0x20)
        rcx_6 = (*(arg6 + 0x30) + 7) & 0xfffffffffffffff8
        rax_10 = &rcx_6[3]
    
    *(arg6 + 0x30) = rax_10
    void**** rax_11 = *(arg6 + 8)
    *(arg6 + 0x14) += 1
    *rax_11 = rcx_6
    *(arg6 + 8) = &rcx_6[1]
    rcx_6[1] = 0
    *rcx_6 = &data_142f18bb8
    arg7[1] = zx.d(*(r15 + 0xe1))
    rcx_6[2].d = r12

int64_t i_1 = sx.q(r15[0x16].d)
int64_t i_2 = i_1

if (i_1 s> 0)
    char rcx_10 = r15[0x1c].b
    void* rdx_4 = &r15[0xf]
    char var_1b8_1 = rcx_10
    uint128_t var_148
    var_148.q = rdx_4
    int64_t i
    
    do
        void* rax_14 = *(rdx_4 + 0x30)
        void* rdi_1 = rdx_4
        
        if (rax_14 != 0)
            rdi_1 = rax_14
        
        void* rdi_2 = rdi_1 + r13
        int32_t r14_2
        
        if (rcx_10 != 0xff)
            r14_2 = *rdi_2 & 0xf
        
        if (rcx_10 == 0xff || r14_2 != sx.d(rcx_10))
            int32_t rsi_5 = *rdi_2
            int32_t r12_2 = rsi_5 & 0xf
            void* rdx_5 = &arg7[(zx.q(rsi_5) & 0xf) * 3]
            int32_t rcx_20 = *(rdx_5 + 0x3968)
            
            if ((rcx_20 & 0xf) != r12_2 || rcx_20 u>> 4 != rsi_5 u>> 4
                    || *(rdx_5 + 0x396c) != *(rdi_2 + 4))
                int64_t rax_32 = *(rdi_2 + 4)
                void*** rcx_24 = (*(arg6 + 0x30) + 7) & 0xfffffffffffffff8
                void* rax_33 = &rcx_24[5]
                
                if (rax_33 u> *(arg6 + 0x38))
                    sub_140b0e3d0(arg6 + 0x30, 0x30)
                    i_1 = i_2
                    rcx_24 = (*(arg6 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_33 = &rcx_24[5]
                
                *(arg6 + 0x30) = rax_33
                *(arg6 + 0x14) += 1
                **(arg6 + 8) = rcx_24
                *(arg6 + 8) = &rcx_24[1]
                rcx_24[1] = 0
                *rcx_24 = &data_142d56618
                rcx_24[3] = rax_32
                rcx_24[2].d = r12_2
                rcx_24[4].d = rsi_5 u>> 4
                void* rdx_6 = &arg7[(zx.q(*rdi_2) & 0xf) * 3]
                *(rdx_6 + 0x3968) = *rdi_2
                *(rdx_6 + 0x3970) = *(rdi_2 + 8)
        else
            void*** rax_18 = (*(arg6 + 0x30) + 7) & 0xfffffffffffffff8
            void* rcx_11 = &rax_18[5]
            
            if (rcx_11 u> *(arg6 + 0x38))
                sub_140b0e3d0(arg6 + 0x30, 0x30)
                i_1 = i_2
                rax_18 = (*(arg6 + 0x30) + 7) & 0xfffffffffffffff8
                rcx_11 = &rax_18[5]
            
            *(arg6 + 0x30) = rcx_11
            *(arg6 + 0x14) += 1
            **(arg6 + 8) = rax_18
            *(arg6 + 8) = &rax_18[1]
            rax_18[1] = 0
            rax_18[3] = arg3
            rax_18[4].d = arg4
            *rax_18 = &data_142d56618
            rax_18[2].d = r14_2
            uint64_t rax_22 = zx.q(*rdi_2) & 0xf
            void* rcx_19 = &arg7[rax_22 + ((rax_22 + 0x72d) << 1)]
            *rcx_19 = *rdi_2
            *(rcx_19 + 8) = *(rdi_2 + 8)
        
        rcx_10 = var_1b8_1
        r13 += 0xc
        rdx_4 = var_148.q
        i = i_1
        i_1 -= 1
        i_2 = i_1
    while (i != 1)
    r15 = arg1
    rsi_3 = var_198

void var_130
int64_t* rax_41 = sub_14125fef0(rsi_3, &var_130)
var_188.o = *rax_41
var_178.o = *(rax_41 + 0x10)
int128_t var_168 = *(rax_41 + 0x20)
sub_1412968b0(r15, arg6, &var_188, &arg7[2])
int64_t r12_3 = r15[0x17]
int32_t rsi_7 = r15[0x19].d
void*** rcx_32 = (*(arg6 + 0x30) + 7) & 0xfffffffffffffff8
uint64_t result

if (r12_3 == 0)
    void* rax_48 = &rcx_32[4]
    
    if (rsi_7 == 0)
        int32_t rsi_9 = r15[0x1b].d
        int64_t r14_8 = r15[0x1a]
        
        if (rax_48 u> *(arg6 + 0x38))
            sub_140b0e3d0(arg6 + 0x30, 0x28)
            rcx_32 = (*(arg6 + 0x30) + 7) & 0xfffffffffffffff8
            rax_48 = &rcx_32[4]
        
        *(arg6 + 0x30) = rax_48
        void**** rax_51 = *(arg6 + 8)
        *(arg6 + 0x14) += 1
        *rax_51 = rcx_32
        *(arg6 + 8) = &rcx_32[1]
        rcx_32[1] = 0
        result = &data_142f284e8
        rcx_32[2] = r14_8
        rcx_32[3].d = rsi_9
    else
        int32_t r14_7 = *(r15 + 0xcc) * arg5
        int32_t r12_5 = *(r15 + 0xc4) + r15[0x1a].d
        
        if (rax_48 u> *(arg6 + 0x38))
            sub_140b0e3d0(arg6 + 0x30, 0x28)
            rcx_32 = (*(arg6 + 0x30) + 7) & 0xfffffffffffffff8
            rax_48 = &rcx_32[4]
        
        *(arg6 + 0x30) = rax_48
        void**** rax_49 = *(arg6 + 8)
        *(arg6 + 0x14) += 1
        *rax_49 = rcx_32
        *(arg6 + 8) = &rcx_32[1]
        rcx_32[1] = 0
        result = &data_142d54988
        rcx_32[2].d = r12_5
        *(rcx_32 + 0x14) = rsi_7
        rcx_32[3].d = r14_7
    
    *rcx_32 = result
else if (rsi_7 == 0)
    int32_t rsi_8 = r15[0x1b].d
    void* rax_45 = &rcx_32[5]
    int64_t r14_5 = r15[0x1a]
    
    if (rax_45 u> *(arg6 + 0x38))
        sub_140b0e3d0(arg6 + 0x30, 0x30)
        rcx_32 = (*(arg6 + 0x30) + 7) & 0xfffffffffffffff8
        rax_45 = &rcx_32[5]
    
    *(arg6 + 0x30) = rax_45
    void**** rax_46 = *(arg6 + 8)
    *(arg6 + 0x14) += 1
    *rax_46 = rcx_32
    *(arg6 + 8) = &rcx_32[1]
    rcx_32[1] = 0
    result = &data_142f21880
    rcx_32[2] = r12_3
    rcx_32[3] = r14_5
    rcx_32[4].d = rsi_8
    *rcx_32 = result
else
    int32_t result_1 = *(r15 + 0xd4)
    int32_t r14_4 = *(r15 + 0xcc) * arg5
    int32_t r13_1 = *(r15 + 0xc4)
    int32_t r15_2 = r15[0x1a].d
    void* rax_42 = &rcx_32[6]
    
    if (rax_42 u> *(arg6 + 0x38))
        sub_140b0e3d0(arg6 + 0x30, 0x38)
        rcx_32 = (*(arg6 + 0x30) + 7) & 0xfffffffffffffff8
        rax_42 = &rcx_32[6]
    
    *(arg6 + 0x30) = rax_42
    int64_t* rax_43 = *(arg6 + 8)
    *(arg6 + 0x14) += 1
    *rax_43 = rcx_32
    *(arg6 + 8) = &rcx_32[1]
    rcx_32[1] = 0
    *rcx_32 = &data_142f11598
    result = zx.q(result_1)
    rcx_32[4].d = result.d
    rcx_32[2] = r12_3
    rcx_32[3].d = r15_2
    *(rcx_32 + 0x1c) = 0
    *(rcx_32 + 0x24) = r13_1
    rcx_32[5].d = rsi_7
    *(rcx_32 + 0x2c) = r14_4

__security_check_cookie(rax_1 ^ &var_1d8)
return result
