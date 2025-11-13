// 函数: sub_1423b0ea0
// 地址: 0x1423b0ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_18 = nullptr
int32_t var_10 = 0
sub_140af2b60()
int16_t* rdx_1
wchar16* result

if (sub_140b2acc0(&data_143dbb3f0, u"-SystemSettings=", &var_18, 1) == 0)
    result = data_143a30020
    rdx_1 = var_18
    
    if (arg1 != 0)
        result = data_143a30028
else
    result = u"SystemSettings"
    TEB* gsbase
    
    if (data_143f5a430
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f5a430)
        
        if (data_143f5a430 == 0xffffffff)
            int64_t rax_7 = -1
            
            do
                rax_7 += 1
            while ((*u"SystemSettings")[rax_7] != 0)
            
            data_143f5a42c = rax_7.d
            _Init_thread_footer(&data_143f5a430)
    
    int16_t* const rbx_1 = &data_142d40450
    int16_t* const rcx_1 = &data_142d40450
    
    if (var_10 != 0)
        rcx_1 = var_18
    
    int32_t rax_3 = sub_140a546e0(rcx_1, u"SystemSettings", sx.q(data_143f5a42c))
    rdx_1 = var_18
    int64_t rax_4 = sx.q(data_143f5a42c)
    
    if (rax_3 != 0)
        if (var_10 != 0)
            rbx_1 = rdx_1
        
        int16_t* rcx_5 = rax_4 * 2 - rbx_1 + u"SystemSettings"
        int16_t i
        
        do
            i = *rbx_1
            *(rcx_5 + rbx_1) = i
            rbx_1 = &rbx_1[1]
        while (i != 0)
    else
        if (var_10 != 0)
            rbx_1 = rdx_1
        
        void* rcx_2 = &rbx_1[rax_4]
        int16_t* r8_2 = rax_4 * 2 - rcx_2 + u"SystemSettings"
        int16_t i_1
        
        do
            i_1 = *rcx_2
            *(r8_2 + rcx_2) = i_1
            rcx_2 += 2
        while (i_1 != 0)

if (rdx_1 != 0)
    sub_140a74f90(rdx_1)

return result
