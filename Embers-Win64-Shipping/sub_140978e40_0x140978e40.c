// 函数: sub_140978e40
// 地址: 0x140978e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143cecf88 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cecf88)
    
    if (data_143cecf88 == 0xffffffff)
        sub_140b58260(&data_143cecf80, u"OnlineSubsystem", 1)
        _Init_thread_footer(&data_143cecf88)

int64_t rbx = data_143cecf80
j_sub_140b3db50()
int64_t* rax_2 = sub_140b3da90(&data_143de7d78, rbx)
int64_t r8 = *rax_2
int64_t* result = (*(r8 + 0x50))(rax_2, 0, r8)

if (result != 0)
    int64_t r8_1 = *result
    int64_t* var_60
    result = (*(r8_1 + 0x70))(result, &var_60, r8_1)
    int64_t* rcx_3 = var_60
    
    if (rcx_3 != 0)
        char var_50 = *arg3
        char var_4e_1 = arg3[2]
        char var_4f_1 = arg3[1]
        char var_4d_1 = arg3[3]
        int32_t var_48_1 = *(arg3 + 8)
        int32_t var_44_1 = *(arg3 + 0xc)
        int32_t var_40_1 = *(arg3 + 0x10)
        int32_t var_3c_1 = *(arg3 + 0x14)
        char var_4c_1 = 0
        int64_t* var_38_1 = nullptr
        int32_t i_2 = 0
        int64_t var_28_1 = 0
        int64_t var_20_1 = 0
        result = (*(*rcx_3 + 0x38))(rcx_3, arg2, &var_50, arg4, 0)
        
        if (var_28_1 != 0)
            result = sub_140a74f90(var_28_1)
        
        int32_t i_1 = i_2
        int64_t* rbx_1 = var_38_1
        
        if (i_1 != 0)
            int32_t i
            
            do
                int64_t rcx_5 = *rbx_1
                
                if (rcx_5 != 0)
                    result = sub_140a74f90(rcx_5)
                
                rbx_1 = &rbx_1[2]
                i = i_1
                i_1 -= 1
            while (i != 1)
            rbx_1 = var_38_1
        
        if (rbx_1 != 0)
            result = sub_140a74f90(rbx_1)
    
    int64_t* var_58
    
    if (var_58 != 0)
        result = zx.q(var_58[1].d)
        var_58[1].d -= 1
        
        if (result.d == 1)
            result = (**var_58)(var_58)
            int32_t rdi_1 = *(var_58 + 0xc)
            *(var_58 + 0xc) -= 1
            
            if (rdi_1 == 1)
                return (*(*var_58 + 8))(var_58, zx.q(rdi_1))

return result
