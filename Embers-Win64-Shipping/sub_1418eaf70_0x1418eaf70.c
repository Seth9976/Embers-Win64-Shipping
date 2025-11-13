// 函数: sub_1418eaf70
// 地址: 0x1418eaf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t result = sx.q(arg5)

if (result.d s> 0)
    void* r8 = nullptr
    void* var_a8_1 = nullptr
    int32_t rcx = 9
    int32_t var_a0_1 = 0
    int64_t result_1 = result
    int32_t var_9c_1 = 9
    int32_t rdi_1 = 0
    int64_t var_78_1 = 0
    int32_t var_70_1 = 0
    int32_t var_6c_1 = 4
    int64_t var_68_1 = 0
    
    if (result.d s> 0)
        int64_t rbx_1 = 0
        
        do
            int64_t* rsi_1 = *(arg4 + (rbx_1 << 3))
            
            if (rsi_1 != 0)
                void var_f0
                
                if (rdi_1 + 1 s> rcx)
                    sub_140dbc900(&var_f0, rdi_1)
                    r8 = var_a8_1
                
                void* rcx_2 = &var_f0
                
                if (r8 != 0)
                    rcx_2 = r8
                
                *(rcx_2 + (sx.q(rdi_1) << 3)) = rsi_1
                int64_t* rax_5 = (*(*rsi_1 + 0x48))(rsi_1)
                int64_t r9 = *rax_5
                result = (*(r9 + 0x20))(rax_5, arg1, zx.q(arg2), r9)
                rcx = var_9c_1
                r8 = var_a8_1
                rdi_1 += 1
            
            rbx_1 += 1
        while (rbx_1 s< result_1)
        
        if (rdi_1 s> 0)
            int32_t var_f8 = arg2
            int32_t var_60_1 = arg3
            result = sub_1418ef580(arg1, &var_f8)
            r8 = var_a8_1
        
        if (var_78_1 != 0)
            result = sub_140a74f90(var_78_1)
            r8 = var_a8_1
        
        if (r8 != 0)
            result = sub_140a74f90(r8)

__security_check_cookie(rax_1 ^ &var_118)
return result
