// 函数: sub_141b16150
// 地址: 0x141b16150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int32_t rax_2 = *(arg3 + 0x24)
int32_t var_168 = 0x3f800000
int64_t rdx

if (rax_2 == 0x80000000)
    int64_t* rdx_1 = 0x10
    
    if (*(arg3 + 0x20) != 0)
        rdx_1 = 4
    
    rdx = *(rdx_1 + arg3)
else
    int32_t var_160_1 = (zx.o(0)).d
    rdx = rax_2.q

char result = sub_141a467f0(arg1 + 0x20, rdx, &var_168)

if (result != 0)
    int32_t zmm1_1 = var_168
    char var_f8
    char result_1 = var_f8 | 3
    uint128_t var_14c_1 = *(arg1 + 0xc0)
    char var_13c_1 = *(arg1 + 0xd0) & 1
    void** const var_138 = &data_1430560e0
    uint128_t zmm0_1
    zmm0_1.d = zmm1_1
    uint128_t var_130_1 = zmm0_1
    uint64_t var_120_1 = var_14c_1:0xc.q
    void var_f0
    int128_t* rax_4 = sub_1405ab790(&var_f0, &arg4[0x22], arg4 + 0x124, &arg4[0x27], &var_138)
    int64_t rdi_1 = sx.q(arg4[1].d)
    int32_t rcx_2 = (rdi_1 + 1).d
    arg4[1].d = rcx_2
    
    if (rcx_2 s> *(arg4 + 0xc))
        sub_1405c5190(arg4)
    
    sub_1405ab620(rdi_1 * 0xc8 + *arg4, rax_4)
    char var_30
    
    if ((var_30 & 1) != 0)
        int64_t* var_70
        int64_t* rcx_6 = &var_70
        
        if ((var_30 & 2) == 0)
            rcx_6 = var_70
        
        (**rcx_6)(rcx_6, 0)
        
        if ((var_30 & 2) == 0)
            sub_140a74f90(var_70)
    
    int64_t var_90
    
    if (var_90 != 0)
        sub_140a74f90(var_90)
    
    result = result_1
    
    if ((result & 1) != 0)
        void** const rcx_9 = &var_138
        
        if ((result & 2) == 0)
            rcx_9 = var_138
        
        char var_f8_1 = result & 0xfe
        result = (**rcx_9)(rcx_9, 0)
        
        if ((var_f8_1 & 2) == 0)
            result = sub_140a74f90(var_138)

__security_check_cookie(rax_1 ^ &var_198)
return result
