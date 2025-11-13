// 函数: sub_14076eee0
// 地址: 0x14076eee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
uint64_t var_38 = __security_cookie ^ &var_188
uint64_t result

if (*(arg1 + 0x60) != 0)
    TEB* gsbase
    
    if (data_143cdfeb8
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143cdfeb8)
        
        if (data_143cdfeb8 == 0xffffffff)
            sub_140b58170(&data_143cdfeb0, "NiagaraSync", 1)
            _Init_thread_footer(&data_143cdfeb8)
    
    void var_148
    void var_a8
    sub_141eb54c0(&var_a8, data_143cdfeb0, &var_148, 0, nullptr)
    int64_t var_a0_1 = data_143cdfb48
    int16_t var_97_1 = 0
    char var_95_1 = 1
    char var_98_1 = 0
    char var_93_1 = 1
    uint8_t var_138
    memset(&var_138, 0, 0x88)
    int32_t var_130_1 = 0x3f800000
    void* const var_168_1
    var_168_1.d = arg5
    char result_1 =
        sub_141ec6a20(*(arg1 + 0x60), &var_138, arg2, arg3, var_168_1.b, &var_a8, &data_143f3a660)
    
    if (result_1 != 0)
        uint8_t rcx_5 = var_138 u>> 1 & 1
        int64_t var_11c
        *arg4 = var_11c
        arg4[6].b = rcx_5
        int32_t var_114
        arg4[1].d = var_114
        int64_t var_104
        *(arg4 + 0xc) = var_104
        int32_t var_fc
        *(arg4 + 0x14) = var_fc
        void var_d8
        
        if (sub_140d3e110(&var_d8) == 0)
            *(arg4 + 0x24) = 0xffffffff
            arg4[5] = 0
        else
            *(arg4 + 0x24) = *(sub_140d3c6e0(&var_d8) + 0xc)
            arg4[5].d = *(sub_140d3c6e0(&var_d8) + 0x28)
            *(arg4 + 0x2c) = *(sub_140d3c6e0(&var_d8) + 0x30)
    
    int64_t var_48
    
    if (var_48 != 0)
        sub_140a74f90(var_48)
    
    int64_t var_68
    
    if (var_68 != 0)
        sub_140a74f90(var_68)
    
    result = zx.q(result_1)
else
    result.b = 0

__security_check_cookie(var_38 ^ &var_188)
return result
