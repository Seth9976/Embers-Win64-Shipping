// 函数: sub_141396a90
// 地址: 0x141396a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t result = __security_cookie ^ &var_88
int64_t result_1 = result

if (data_1439c7a15 != 0)
    TEB* gsbase
    int32_t* rsi_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
    
    if (data_143ec6fb8 s> *rsi_2)
        _Init_thread_header(&data_143ec6fb8)
        
        if (data_143ec6fb8 == 0xffffffff)
            int64_t* rcx_9 = data_143db18d0
            
            if (rcx_9 == 0)
                sub_140a53c40()
                rcx_9 = data_143db18d0
            
            int64_t r8_2
            r8_2.b = 1
            data_143ec6fb0 = (*(*rcx_9 + 0xb0))(rcx_9, u"r.TranslucencyVolumeBlur", r8_2)
            _Init_thread_footer(&data_143ec6fb8)
    
    int64_t* rcx = data_143ec6fb0
    int32_t rax_4 = (*(*rcx + 0x90))(rcx)
    void* rbx_1 = arg1 + 0x148
    void* rcx_1 = *(rbx_1 + 0x18)
    void* rdi_1 = arg1 + 0x170
    int64_t r12
    r12.b = rax_4 s> 0
    void var_60
    void* r10_1 = &var_60
    int32_t r9_1 = 0
    
    if (rcx_1 != 0)
        rbx_1 = rcx_1
    
    void* rcx_2 = *(rdi_1 + 0x18)
    
    if (rcx_2 != 0)
        rdi_1 = rcx_2
    
    int64_t rax_6 = sx.q(arg3) * 0x18
    int64_t r11_1
    r11_1.b = rax_4 s> 0
    int64_t i_1 = r11_1 + 2
    void var_68
    int64_t i
    
    do
        void* rcx_3 = *(rax_6 + rbx_1)
        r10_1 += 0x10
        rax_6 += 8
        int64_t rdx_2 = sx.q(r9_1 * 2)
        r9_1 += 1
        *(&var_68 + (rdx_2 << 3)) = *(rcx_3 + 8)
        *(r10_1 - 0x10) = *(*(rax_6 + rdi_1 - 8) + 8)
        i = i_1
        i_1 -= 1
    while (i != 1)
    
    if (data_143ec7020 s> *rsi_2)
        _Init_thread_header(&data_143ec7020)
        
        if (data_143ec7020 == 0xffffffff)
            data_143ec6fc0 = data_143dbb1e0
            _Init_thread_footer(&data_143ec7020)
    
    int32_t rdx_4 = *(arg1 + 0x3d0)
    void* r8_1 = &var_68
    
    if (r12.b == 0)
        result = sub_14137acc0(arg2, rdx_4, r8_1, &data_143ec6fc0)
    else
        result = sub_14137b180(arg2, rdx_4, r8_1, &data_143ec6fc0)

__security_check_cookie(result_1 ^ &var_88)
return result
