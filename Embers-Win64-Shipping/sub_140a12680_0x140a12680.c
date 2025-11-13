// 函数: sub_140a12680
// 地址: 0x140a12680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
void* var_28 = __security_cookie ^ &var_168
void* result

if (arg3 != 0 || arg2 == 0xffffffff || arg2 s>= *(arg1 + 0x60))
    result.b = 0
else
    int64_t rbx_1 = sx.q(arg2)
    *arg4 = Concurrency::details::ContextBase::GetIndirectAlias(*(*(arg1 + 0x58) + (rbx_1 << 3)))
    arg4[1] = sub_140bc8890(*(*(arg1 + 0x58) + (rbx_1 << 3)))
    arg4[2] = (int.q(sub_142a38630(*(*(arg1 + 0x58) + (rbx_1 << 3))))).d
    void var_148
    int16_t* rsi_1 =
        *(sub_14060c4d0(&var_148, sub_1410626c0(*(*(arg1 + 0x58) + (rbx_1 << 3)))) + 0x108)
    
    if (*(arg4 + 0x10) != rsi_1)
        int32_t rdx_1 = 0
        int32_t rbx_3
        
        if (rsi_1 == 0 || *rsi_1 == 0)
            rbx_3 = 0
        else
            int64_t rbx_2 = -1
            
            do
                rbx_2 += 1
            while (rsi_1[rbx_2] != 0)
            
            rbx_3 = rbx_2.d + 1
        
        arg4[6] = 0
        
        if (arg4[7] != rbx_3)
            sub_1405947f0(&arg4[4], rbx_3)
            rdx_1 = arg4[6]
        
        result = zx.q(rdx_1 + rbx_3)
        arg4[6] = result.d
        
        if (result.d s> arg4[7])
            sub_140594770(&arg4[4])
        
        if (rbx_3 != 0)
            memcpy(*(arg4 + 0x10), rsi_1, rbx_3 * 2)
    
    int64_t var_48
    
    if (var_48 != 0)
        sub_140a74f90(var_48)
    
    result.b = 1

__security_check_cookie(var_28 ^ &var_168)
return result
