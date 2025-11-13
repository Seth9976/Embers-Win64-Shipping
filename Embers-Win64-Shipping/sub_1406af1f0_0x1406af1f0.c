// 函数: sub_1406af1f0
// 地址: 0x1406af1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t* rbx = arg2
arg2.b = 1
Concurrency::details::_TaskEventLogger::_LogScheduleTask(arg1 + 0x160)
int32_t rsi = *(rbx + 0x24)
int32_t result

if (rbx[2] != 0)
    if (rsi != 0xffffffff)
        rsi = 0x10
        *(rbx + 0x24) = 0x10
    
    int64_t* var_50_1 = rbx
    void** const var_58 = &data_142d8bea0
    void** const* var_20_1 = &var_58
    void* rax_2 = j_sub_140a82f30(0x40)
    void* const rdi_1 = rax_2
    
    if (rax_2 == 0)
        rdi_1 = nullptr
    else
        *(rax_2 + 0x38) = 0
        
        if (var_20_1 != 0)
            *(rdi_1 + 0x38) = (**var_20_1)(var_20_1, rdi_1)
    
    if (rsi != 0xffffffff)
        int64_t* rax_7 = sub_1406b06e0()
        int64_t* rbx_1 = rax_7[1]
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
            rbx_1 = rax_7[1]
        
        int64_t* rcx_5 = *rax_7
        
        if (rcx_5 == 0)
            void** const var_68 = &data_142d8b300
            result = sub_1406b0b90(&var_68, sub_1406aa8b0, rdi_1)
        else
            result = (**rcx_5)(rcx_5, sub_1406aa8b0, rdi_1)
        
        if (rbx_1 != 0)
            result = rbx_1[1].d
            rbx_1[1].d -= 1
            
            if (result == 1)
                result = (**rbx_1)(rbx_1)
                int32_t rdi_2 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rdi_2 == 1)
                    result = (*(*rbx_1 + 8))(rbx_1)
    else
        int64_t* rcx_2 = *(rdi_1 + 0x38)
        
        if (rcx_2 == 0)
            std::_Xbad_function_call()
            noreturn
        
        (*(*rcx_2 + 0x10))(rcx_2)
        int64_t* rcx_3 = *(rdi_1 + 0x38)
        
        if (rcx_3 != 0)
            int64_t rdx_1
            rdx_1.b = rcx_3 != rdi_1
            (*(*rcx_3 + 0x20))(rcx_3, rdx_1)
            *(rdi_1 + 0x38) = 0
        
        result = j_sub_140a74f90(rdi_1)
    
    if (var_20_1 != 0)
        void** const* rdx_3
        rdx_3.b = var_20_1 != &var_58
        result = (*var_20_1)[4](var_20_1, rdx_3)
else if (rsi != 0xffffffff)
    int64_t* rcx_12 = *(arg1 + 0x130)
    
    if (rcx_12 == 0)
        void** const var_60 = &data_142d8b300
        result = sub_1406b0b90(&var_60, sub_1406af030, rbx)
    else
        result = (**rcx_12)(rcx_12, sub_1406af030, rbx)
else
    (*(*rbx + 8))(rbx)
    result = (**rbx)(rbx, zx.q(rsi + 2))

__security_check_cookie(rax_1 ^ &var_88)
return result
