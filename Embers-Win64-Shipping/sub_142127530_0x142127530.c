// 函数: sub_142127530
// 地址: 0x142127530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx
int64_t rbx

if (data_143de5480 == 0)
    rbx = 0
    rcx = 0
else
    rbx = 0
    rcx.b = GetCurrentThreadId().d != data_143de5470

int32_t* result

if (*(rcx + arg1 + 0x13a) != 0)
    result.b = 0
else
    result = sub_1421180c0(arg1 + 0xe0, arg2)
    
    if (result == 0)
        int64_t rbp_1
        
        if (*(arg2 + 0xc) != 2)
            rbp_1 = sx.q(sub_14210eb80(arg1 + 0x188, 0, arg2).d)
        
        if (*(arg2 + 0xc) == 2 || rbp_1.d == 0xffffffff)
            if (*(arg1 + 0xd0) != 0)
                if (data_143de5480 != 0)
                    GetCurrentThreadId()
                
                int64_t rcx_5
                
                if (data_143de5480 == 0 || data_143de5480 == 0)
                    rcx_5 = 0
                else
                    rcx_5.b = GetCurrentThreadId() != data_143de5470
                
                *(rcx_5 + arg1 + 0x13a) = 1
                int64_t* rcx_6 = *(arg1 + 0xd0)
                char rax_2 = (*(*rcx_6 + 0x398))(rcx_6, arg2, arg3, zx.q(arg4))
                
                if (data_143de5480 != 0)
                    rbx.b = GetCurrentThreadId() != data_143de5470
                
                *(rbx + arg1 + 0x13a) = 0
                return zx.q(rax_2)
            
            result.b = 0
        else
            result = sub_142111f50(arg1 + 0x188, 0, rbp_1.d, arg4)
            *arg3 = *(*(arg1 + 0x2c8) + (rbp_1 << 2))
    else
        *arg3 = result[4]
        result.b = 1

return result
