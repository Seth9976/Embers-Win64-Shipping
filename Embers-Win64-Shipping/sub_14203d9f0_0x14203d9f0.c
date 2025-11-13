// 函数: sub_14203d9f0
// 地址: 0x14203d9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t result = *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))

if (data_143f407f0 s> result)
    int64_t r8_2
    result, r8_2 = _Init_thread_header(&data_143f407f0)
    
    if (data_143f407f0 == 0xffffffff)
        int64_t* rcx_6 = data_143db18d0
        
        if (rcx_6 == 0)
            sub_140a53c40()
            rcx_6 = data_143db18d0
        
        r8_2.b = 1
        data_143f407e8 = (*(*rcx_6 + 0xb0))(rcx_6, u"r.DebugSafeZone.Mode", r8_2)
        result = _Init_thread_footer(&data_143f407f0)

int64_t* rcx_2 = data_143f407e8

if (rcx_2 != 0)
    int32_t rax_2 = (*(*rcx_2 + 0x90))(rcx_2)
    int64_t* rbx_1 = data_143f407e8
    int64_t r8_1
    
    r8_1 = rax_2 == 1 ? 0 : 1
    
    int16_t* var_18
    sub_140a2e390(&var_18, u"%d", r8_1)
    int16_t* const rdx_1 = &data_142d40450
    int32_t var_10
    
    if (var_10 != 0)
        rdx_1 = var_18
    
    result = (*(*rbx_1 + 0x80))(rbx_1, rdx_1, 0x8000000)
    int16_t* rcx_5 = var_18
    
    if (rcx_5 != 0)
        return sub_140a74f90(rcx_5)

return result
