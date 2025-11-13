// 函数: sub_141db8f30
// 地址: 0x141db8f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
void* result = sub_140d3c6e0(arg1)

if (result != 0)
    TEB* gsbase
    
    if (data_143f38db0
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f38db0)
        
        if (data_143f38db0 == 0xffffffff)
            sub_140b58170(&data_143f38da8, "SoundOcclusion", 1)
            _Init_thread_footer(&data_143f38db0)
    
    void var_98
    void var_88
    sub_141eb54c0(&var_88, data_143f38da8, &var_98, arg1[0xa].b, nullptr)
    int32_t rdx_4 = arg1[9]
    
    if (rdx_4 != 0)
        sub_141eb8ac0(&var_88, rdx_4)
    
    void var_90
    SZNameFromTSRecord(result, &var_90, 0, &arg1[2], &arg1[5], arg1[8], &var_88, &data_143f3a660, 
        &data_143f38c50, 0)
    result = sub_141db2840(&data_143a2cfb0, &var_90, &arg1[0xc])
    int64_t var_28
    
    if (var_28 != 0)
        result = sub_140a74f90(var_28)
    
    int64_t var_48
    
    if (var_48 != 0)
        result = sub_140a74f90(var_48)

__security_check_cookie(rax_1 ^ &var_e8)
return result
