// 函数: sub_1426af1e0
// 地址: 0x1426af1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f851c0(arg1, arg2, arg3, arg4, arg5)
TEB* gsbase

if (data_143f720f8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f720f8)
    
    if (data_143f720f8 == 0xffffffff)
        sub_140b58260(&data_143f720f0, &data_142e7b188, 1)
        _Init_thread_footer(&data_143f720f8)

int64_t* rcx = *arg3
int64_t result = sx.q(arg3[1].d)
void* rdx = &rcx[result]

if (rcx != rdx)
    result = data_143f720f0
    
    do
        if (*rcx == result)
            int64_t* rcx_1 = arg1[0x5b]
            
            if (rcx_1 != 0)
                (*(*rcx_1 + 0x480))(rcx_1, arg2, arg3, arg4, arg5)
            
            result = sub_1426b1e00(arg1)
            
            if (result != 0)
                int64_t var_48 = *(result + 0x18)
                int32_t arg_18[0x4]
                arg_18[0] = 0
                int16_t* var_40
                sub_140b63b70(&var_48, &var_40)
                int16_t* const r8_1 = &data_142d40450
                int32_t var_38
                
                if (var_38 != 0)
                    r8_1 = var_40
                
                int64_t var_30
                sub_140a2e390(&var_30, u"      Focus %s", r8_1)
                result = sub_142409af0(arg2 + 0x98, &var_30, &arg_18)
                int64_t rcx_6 = var_30
                
                if (rcx_6 != 0)
                    result = sub_140a74f90(rcx_6)
                
                int16_t* rcx_7 = var_40
                
                if (rcx_7 != 0)
                    return sub_140a74f90(rcx_7)
            
            break
        
        rcx = &rcx[1]
    while (rcx != rdx)

return result
