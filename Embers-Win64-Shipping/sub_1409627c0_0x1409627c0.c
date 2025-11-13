// 函数: sub_1409627c0
// 地址: 0x1409627c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143cecf98 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cecf98)
    
    if (data_143cecf98 == 0xffffffff)
        arg2 = sub_140b58260(&data_143cecf90, u"OnlineSubsystem", 1)
        _Init_thread_footer(&data_143cecf98)

j_sub_140b3db50()
uint64_t result

if (sub_140b404d0(&data_143de7d78, data_143cecf90, arg2).b != 0)
    int64_t rbx_1 = data_143cecf90
    j_sub_140b3db50()
    int64_t* rax_2 = sub_140b3da90(&data_143de7d78, rbx_1)
    int64_t r8 = *rax_2
    result = (*(r8 + 0x58))(rax_2, 0, r8)
    
    if (result != 0)
        int64_t r8_1 = *result
        int64_t* var_28
        (*(r8_1 + 0x80))(result, &var_28, r8_1)
        int64_t* rcx_3 = var_28
        int64_t* var_20
        
        if (rcx_3 != 0)
            int64_t var_18
            result = (*(*rcx_3 + 0x128))(rcx_3, &var_18, zx.q(arg3))
            
            if (arg4 != result)
                int64_t rcx_4 = *arg4
                
                if (rcx_4 != 0)
                    sub_140a74f90(rcx_4)
                
                *arg4 = *result
                *result = 0
                arg4[1].d = *(result + 8)
                *(arg4 + 0xc) = *(result + 0xc)
                *(result + 8) = 0
            
            int64_t rcx_6 = var_18
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            if (arg4[1].d s> 1)
                if (var_20 != 0)
                    var_20[1].d -= 1
                    
                    if (var_20[1].d == 1)
                        (**var_20)(var_20)
                        int32_t rbx_3 = *(var_20 + 0xc)
                        *(var_20 + 0xc) -= 1
                        
                        if (rbx_3 == 1)
                            (*(*var_20 + 8))(var_20, zx.q(rbx_3))
                
                result.b = 1
                return result
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                (**var_20)(var_20)
                int32_t rbx_4 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (rbx_4 == 1)
                    (*(*var_20 + 8))(var_20, zx.q(rbx_4))

result.b = 0
return result
