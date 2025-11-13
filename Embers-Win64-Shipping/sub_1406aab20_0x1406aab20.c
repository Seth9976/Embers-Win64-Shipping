// 函数: sub_1406aab20
// 地址: 0x1406aab20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int32_t rbp = 0
int32_t code = _Mtx_lock(arg1 + 0x20)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

int32_t rax_2 = *(arg1 + 8)
uint64_t result

if (arg3 != 0)
    if (rax_2 != 4)
        void* rcx_1 = arg4[1]
        
        if (rcx_1 != 0)
            *(rcx_1 + 8) += 1
            rcx_1 = arg4[1]
        
        int64_t* rsi_1 = *(arg1 + 0x18)
        *(arg1 + 0x10) = *arg4
        *(arg1 + 0x18) = rcx_1
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t r14_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (r14_1 == 1)
                    (*(*rsi_1 + 8))(rsi_1)
        
        goto label_1406aabd7
    
    _Mtx_unlock(arg1 + 0x20)
    result.b = 0
else if (rax_2 == 3 || *(arg1 + 8) == 4)
    _Mtx_unlock(arg1 + 0x20)
    result.b = 0
else if (*(arg1 + 8) != 2)
label_1406aabd7:
    
    if (arg2 != 0)
        goto label_1406aabe4
    
    bool cond:0_1 = *(arg1 + 8) == 1
    *(arg1 + 8) = 2
    
    if (cond:0_1)
        rbp = 2
    
    Concurrency::details::_TaskEventLogger::_LogCancelTask(arg1 + 0x160)
    _Mtx_unlock(arg1 + 0x20)
    
    if (rbp == 1)
        goto label_1406aabf7
    
    if (rbp != 2)
        result.b = 1
    else
        int64_t* rcx_13 = *(arg1 + 0x1b0)
        
        if (rcx_13 == 0)
            result.b = 1
        else
            (*(*rcx_13 + 0x10))(rcx_13)
            result = zx.q((rbp - 1).b)
else if (arg2 != 0)
label_1406aabe4:
    *(arg1 + 8) = 4
    _Mtx_unlock(arg1 + 0x20)
label_1406aabf7:
    sub_1406ab5d0(arg1 + 0x88)
    
    if (*(arg1 + 0x70) != 0)
        void* var_60_1 = arg1
        void** const var_68 = &data_142d8c540
        void** const* var_30_1 = &var_68
        sub_1406af3e0(&var_68, 0x10)
        
        if (var_30_1 != 0)
            void** const* rdx
            rdx.b = var_30_1 != &var_68
            (*var_30_1)[4](var_30_1, rdx)
    
    result.b = 1
else
    _Mtx_unlock(arg1 + 0x20)
    result.b = 0

__security_check_cookie(rax_1 ^ &var_88)
return result
