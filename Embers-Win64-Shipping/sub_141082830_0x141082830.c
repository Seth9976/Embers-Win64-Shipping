// 函数: sub_141082830
// 地址: 0x141082830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
uint128_t zmm0 = data_142d3f660
uint128_t var_58 = zmm0
int128_t var_48 = zx.o(0)
void var_68
sub_1410b78a0(arg4, &var_68, arg3, zmm0, zx.o(0))
uint64_t rbp = zx.q(arg1[2])

if (rbp.d u>= 0x10)
    rbp = 0x10

if (rbp.d != 0)
    uint32_t rax_1 = zx.d(arg1[1])
    uint32_t rax_2 = zx.d(*arg1)
    int64_t rsi_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
    int64_t rax_3 = rsi_3 + rbp
    
    if (rax_3 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, (rbp + 0x10).d)
        rsi_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        rax_3 = rsi_3 + rbp
    
    *(arg2 + 0x30) = rax_3
    memcpy(rsi_3, &var_68, rbp.d)
    void*** rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_4 = &rcx_5[6]
    
    if (rax_4 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_4 = &rcx_5[6]
    
    *(arg2 + 0x30) = rax_4
    void** rax_5 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_5 = rcx_5
    *(arg2 + 8) = &rcx_5[1]
    rcx_5[1] = 0
    *rcx_5 = &data_142d549d8
    rcx_5[4].d = rax_2
    *(rcx_5 + 0x24) = rax_1
    rcx_5[2] = arg3
    rcx_5[3] = rsi_3
    rcx_5[5].d = rbp.d

char result = sub_1405d0e10(arg2, &arg_18, &arg1[3], &var_58, 0)
void* rsi_6 = arg4[1].q
void* rsi_7

if (rsi_6 == 0)
    rsi_7 = data_143f11688
else
    rsi_7 = *(rsi_6 + 0x78)

if (arg1[7] u> 0)
    *(rsi_7 + 0x28) = data_143dbb3b8
    
    if (0 u< arg1[7])
        int64_t rbp_1 = *(rsi_7 + 0x10)
        uint32_t r15_1 = zx.d(arg1[6])
        void*** rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_9 = &rcx_12[5]
        
        if (rax_9 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_9 = &rcx_12[5]
        
        *(arg2 + 0x30) = rax_9
        void**** rax_10 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_10 = rcx_12
        *(arg2 + 8) = &rcx_12[1]
        rcx_12[1] = 0
        result = 0x70
        *rcx_12 = &data_142d5a070
        rcx_12[2] = arg3
        rcx_12[3].d = r15_1
        rcx_12[4] = rbp_1

if (arg1[9] u> 0)
    int64_t* rsi_8 = *(rsi_7 + 0x18)
    uint32_t rbp_2 = zx.d(arg1[8])
    result = (*(*rsi_8 + 8))(rsi_8)
    
    if (result == 0)
        void*** rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_13 = &rcx_19[5]
        
        if (rax_13 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_13 = &rcx_19[5]
        
        *(arg2 + 0x30) = rax_13
        void**** rax_14 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_14 = rcx_19
        *(arg2 + 8) = &rcx_19[1]
        rcx_19[1] = 0
        result = -0x80
        *rcx_19 = &data_142d5a080
        rcx_19[2] = arg3
        rcx_19[3].d = rbp_2
        rcx_19[4] = rsi_8

return result
