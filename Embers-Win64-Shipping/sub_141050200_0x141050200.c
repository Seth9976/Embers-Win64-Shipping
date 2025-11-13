// 函数: sub_141050200
// 地址: 0x141050200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
void* rdi

if (arg2 != 0)
    rdi = (*(*arg2 + 0x48))(arg2)
else
    rdi = nullptr

void* r12

if (arg3 != 0)
    r12 = (*(*arg3 + 0x48))(arg3)
else
    r12 = nullptr

void* rax_6 = *(rdi + 0x58)
void* r14 = arg1 + 0x1c0
int32_t var_188 = 0xffffffff
int32_t var_184 = 0xffffffff
char var_197 = 0
int32_t var_1c8

if (*(rax_6 + 0xfc) != 0)
    sub_141037220(r14, rax_6, 0x800, 0xffffffff)
else
    int32_t rdi_1 = *(rax_6 + 0xf0)
    var_184 = rdi_1
    
    if (rdi_1 != 0x800)
        var_197 = 1
        var_1c8 = 0xffffffff
        sub_1410129f0(r14, rax_6, rdi_1, 0x800, var_1c8)

void* rax_7 = *(r12 + 0x58)
char var_198 = 0

if (*(rax_7 + 0xfc) != 0)
    sub_141037220(r14, rax_7, 0x400, 0xffffffff)
else
    int32_t rcx_4 = *(rax_7 + 0xf0)
    var_188 = rcx_4
    
    if (rcx_4 != 0x400)
        var_198 = 1
        var_1c8 = 0xffffffff
        sub_1410129f0(r14, rax_7, rcx_4, 0x400, var_1c8)

*(arg1 + 0x3b90) += 1
void* rdi_2 = *(arg1 + 0x1c8)
int32_t rdx_4 = *(rdi_2 + 0x128)
int64_t* rcx_7 = *(rdi_2 + 0x30)

if (rdx_4 != 0)
    (*(*rcx_7 + 0xd0))(rcx_7, rdx_4, *(rdi_2 + 0x120))
    *(rdi_2 + 0x128) = 0
    rdi_2 = *(arg1 + 0x1c8)

int32_t rdx_5 = *arg4
int32_t r8_3 = data_143dbb188
int32_t rcx_8 = data_143dbb190
int32_t rax_9 = data_143dbb18c
uint8_t r9_1 = (arg3[8].d u>> 0x12).b & 1
void** var_160
int64_t* rax_12

if (rdx_5 != r8_3)
label_14105040f:
    int32_t var_120_1 = arg4[2]
    void** var_128
    rax_12 = &var_128
    var_128 = *arg4
label_14105041b:
    void** zmm0 = *rax_12
    int32_t rsi_1 = rax_12[1].d
    int32_t rax_14 = arg4[3]
    int32_t rcx_11 = arg4[5]
    int32_t rdx_10 = arg4[4]
    uint8_t rdi_3 = r9_1
    int32_t var_a8 = rax_14
    int32_t var_a4_1 = rdx_10
    var_160 = zmm0
    int32_t var_9c_1 = rax_14 + var_160.d
    int32_t var_a0_1 = rcx_11
    int32_t var_98_1 = (var_160 u>> 0x20).d + rdx_10
    int32_t var_94_1 = rcx_11 + rsi_1
    int32_t var_190_1 = rsi_1
    void* rax_21 = *(r12 + 0x58)
    int64_t var_d8 = *(*(rdi + 0x58) + 0x20)
    int32_t var_d0_1 = 0
    uint32_t var_110_1 = zx.d(rdi_3)
    int64_t rax_23 = *arg3
    int64_t var_118 = *(rax_21 + 0x20)
    int64_t var_8c_1 = 0
    int32_t var_84_1 = 0
    int128_t var_68_1 = zx.o(0)
    int32_t var_150
    (*(rax_23 + 0x30))(arg3, &var_150)
    bool cond:1_1 = (*(*arg3 + 0x18))(arg3) != 0
    int64_t var_80_1 = sx.q(var_150)
    int32_t rcx_16
    rcx_16.b = cond:1_1
    int32_t var_14c
    int32_t var_78_1 = var_14c
    int32_t i = 0
    int16_t var_148
    int16_t var_74_1 = var_148
    int16_t var_72_1 = *(arg3 + 0x34)
    int64_t rax_30 = sx.q(*(arg3 + 0x3c))
    int32_t var_90 = rcx_16 + 3
    int32_t i_1 = 0
    int32_t var_70_1 = (&data_1439c85fc)[rax_30 * 0xa]
    int32_t var_6c_1 = arg3[7].d
    
    if (arg4[0xb] u> 0)
        do
            int32_t j = 0
            int32_t r10_2 = arg4[9] + i
            int32_t r11_2 = arg4[0xa] + i
            int32_t var_178_1 = r10_2
            int32_t var_174_1 = r11_2
            
            if (arg4[0xe] u> 0)
                do
                    char rcx_19 = j.b
                    int32_t rax_33 = 1
                    int32_t rdx_14 = var_160.d s>> rcx_19
                    int32_t r8_7 = var_160:4.d s>> rcx_19
                    int32_t r9_3 = rsi_1 s>> rcx_19
                    
                    if (rdx_14 s>= 1)
                        rax_33 = rdx_14
                    
                    int32_t var_9c_2 = rax_33 + arg4[3]
                    int32_t rax_35 = 1
                    
                    if (r8_7 s>= 1)
                        rax_35 = r8_7
                    
                    int32_t var_98_2 = rax_35 + arg4[4]
                    int32_t rax_37 = 1
                    
                    if (r9_3 s>= 1)
                        rax_37 = r9_3
                    
                    int32_t var_94_2 = rax_37 + arg4[5]
                    int32_t rax_40 = *(arg2 + 0x34) * r10_2
                    int32_t rsi_5 = *(arg3 + 0x34) * r11_2 + arg4[0xd] + j
                    int32_t var_108 = rsi_5
                    int32_t var_c8_1 = rax_40 + arg4[0xc] + j
                    int64_t var_1b0
                    int64_t var_1a8
                    
                    if (rdi_3 != 0)
                        int64_t* rax_43 = sub_141022ce0(*(arg1 + 0x138))
                        int64_t var_170 = 0
                        int64_t rcx_21 = 0
                        
                        if (rsi_5 != 0)
                            int64_t r10_3 = *rax_43
                            int64_t* var_1a8_1 = &var_170
                            __builtin_memset(&var_1c8, 0, 0x20)
                            int64_t var_1c0_1
                            int64_t var_1b8_1
                            int64_t var_1b0_1
                            (*(r10_3 + 0x130))(rax_43, &var_90, 0, zx.q(rsi_5), var_1c8, var_1c0_1, 
                                var_1b8_1, var_1b0_1, var_1a8_1)
                            rcx_21 = (var_170 + 0x1ff) & 0xfffffffffffffe00
                            var_170 = rcx_21
                        
                        int64_t rax_44 = *rax_43
                        int64_t var_1b8_2
                        __builtin_memset(&var_1b8_2, 0, 0x18)
                        var_1c8.q = rcx_21
                        (*(rax_44 + 0x130))(rax_43, &var_90, zx.q(rsi_5), 1, var_1c8, &var_108, 
                            var_1b8_2, var_1b0, var_1a8)
                        rdi_3 = r9_1
                    
                    uint64_t r9_5 = zx.q(arg4[7])
                    uint64_t r8_9 = zx.q(arg4[6])
                    int64_t* rcx_26 = *(*(arg1 + 0x1c8) + 0x30)
                    int32_t* var_1b8_3 = &var_a8
                    int64_t* var_1c0_3 = &var_d8
                    int64_t r10_4 = *rcx_26
                    var_1c8 = arg4[8]
                    (*(r10_4 + 0x80))(rcx_26, &var_118, r8_9, r9_5, var_1c8, var_1c0_3, var_1b8_3, 
                        var_1b0, var_1a8)
                    r10_2 = var_178_1
                    j += 1
                    r11_2 = var_174_1
                    rsi_1 = var_190_1
                while (j u< arg4[0xe])
                
                i = i_1
            
            i += 1
            i_1 = i
        while (i u< arg4[0xb])
        
        r14 = arg1 + 0x1c0
else
    if (arg4[1] != rax_9 || arg4[2] != rcx_8 || r9_1 != 0)
        if (rdx_5 != r8_3 || arg4[1] != rax_9 || arg4[2] != rcx_8)
            goto label_14105040f
        
        void var_e8
        rax_12 = (*(*arg2 + 0x30))(arg2, &var_e8)
        goto label_14105041b
    
    int64_t* rcx_9 = *(rdi_2 + 0x30)
    (*(*rcx_9 + 0x88))(rcx_9, *(*(r12 + 0x58) + 0x20), *(*(rdi + 0x58) + 0x20))
void* rdx_18 = *(rdi + 0x58)
char rax_48 = data_1439b4ad4
void* rcx_27 = *(rdx_18 + 0x28)

if (rcx_27 == 0)
    if (rax_48 != 0 && *(rdx_18 + 0x38) != 0)
        sub_141026da0(*(*(arg1 + 0x1c8) + 0x118), rdx_18 + 0x30)
        rax_48 = data_1439b4ad4
else if (rax_48 != 0 && *(rcx_27 + 0x30) != 0)
    sub_141026da0(*(*(arg1 + 0x1c8) + 0x118), rcx_27 + 0x28)
    rax_48 = data_1439b4ad4

void* rdx_20 = *(r12 + 0x58)
void* rcx_30 = *(rdx_20 + 0x28)

if (rcx_30 == 0)
    if (rax_48 != 0 && *(rdx_20 + 0x38) != 0)
        sub_141026da0(*(*(arg1 + 0x1c8) + 0x118), rdx_20 + 0x30)
else if (rax_48 != 0 && *(rcx_30 + 0x30) != 0)
    sub_141026da0(*(*(arg1 + 0x1c8) + 0x118), rcx_30 + 0x28)

void* rax_49 = *(arg1 + 0x1c8)
void* var_158 = rax_49

if (rax_49 != 0)
    *(rax_49 + 0x14) += 1

var_160 = &data_142efcd90
int64_t result = sub_14105ab40(r12, &var_160)

if (var_198 != 0)
    result = sub_1410129f0(r14, rax_7, 0x400, var_188, 0xffffffff)

if (var_197 != 0)
    result = sub_1410129f0(r14, rax_6, 0x800, var_184, 0xffffffff)

__security_check_cookie(rax_1 ^ &var_1e8)
return result
