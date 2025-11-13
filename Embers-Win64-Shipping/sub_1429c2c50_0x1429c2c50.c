// 函数: sub_1429c2c50
// 地址: 0x1429c2c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
sub_1429c3350(*(arg1 + 0x18) + 0x78)
int32_t code_2

while (true)
    sub_1429c3430(*(arg1 + 0x18))
    struct _Mtx_internal_imp_t* mtx = *(arg1 + 0x18) + 0x10
    int32_t code = _Mtx_lock(mtx)
    
    if (code != 0)
        std::_Throw_C_error(code)
        noreturn
    
    char var_18_1 = 1
    void* rcx_5 = *(arg1 + 0x18)
    void* rax_1 = *(rcx_5 + 0x68)
    
    if (*(rcx_5 + 0x60) != rax_1)
        int64_t* rsi_1 = *(rax_1 - 8)
        *(rcx_5 + 0x68) = rax_1 - 8
        int32_t code_1 = _Mtx_unlock(mtx)
        
        if (code_1 != 0)
            std::_Throw_C_error(code_1)
            noreturn
        
        var_18_1 = 0
        int64_t* rbx_2 = rsi_1[1]
        (*(*rsi_1 + 8))(rsi_1)
        (**rsi_1)(rsi_1, 1)
        int32_t* rcx_10 = *rbx_2
        int32_t rax_5 = *rcx_10
        *rcx_10 -= 1
        
        if (rax_5 == 1)
            sub_1429c3350(&rcx_10[2])
    else if (*(rcx_5 + 0xf1) != 0)
        int32_t code_3 = _Mtx_unlock(mtx)
        
        if (code_3 == 0)
            return code_3
        
        std::_Throw_C_error(code_3)
        noreturn
    
    if (var_18_1 != 0)
        code_2 = _Mtx_unlock(mtx)
        
        if (code_2 != 0)
            break

std::_Throw_C_error(code_2)
noreturn
