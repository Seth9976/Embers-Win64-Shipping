// 函数: sub_1406ac370
// 地址: 0x1406ac370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 8)
int64_t var_98
(*(*rcx + 0x10))(rcx, &var_98)
class Concurrency::details::_ContextCallback arg_8
__builtin_memset(&arg_8, 0, 8)
Concurrency::details::_ContextCallback::_Capture(&arg_8)
int64_t rdi
rdi.b = arg_8 == *(*(arg1 + 8) + 0x10)
Concurrency::details::_ContextCallback::_Reset(&arg_8)
int64_t* rbx = *(arg1 + 8)
int64_t* var_90
int32_t result

if (rdi.b == 0)
    int64_t* rcx_5 = var_90
    int64_t* rdx_2 = rbx
    
    if (rcx_5 != 0)
        rcx_5[1].d += 1
        rdx_2 = *(arg1 + 8)
        rcx_5 = var_90
    
    int64_t* var_80_1 = rbx
    void** const var_88 = &data_142d8be70
    int64_t var_78_1 = var_98
    int64_t* var_70_1 = rcx_5
    void** const* var_50_1 = &var_88
    int64_t var_10_1 = 0
    void _Func
    void*** var_10_2 = sub_1406ab750(&var_88, &_Func)
    result = Concurrency::details::_ContextCallback::_CallInContext(&rdx_2[2], &_Func, 0)
    
    if (var_50_1 != 0)
        void** const* rdx_5
        rdx_5.b = var_50_1 != &var_88
        result = (*var_50_1)[4](var_50_1, rdx_5)
else
    (*(*rbx + 8))(rbx)
    result = (**rbx)(rbx, 1)

if (var_90 != 0)
    result = var_90[1].d
    var_90[1].d -= 1
    
    if (result == 1)
        result = (**var_90)(var_90)
        int32_t rdi_1 = *(var_90 + 0xc)
        *(var_90 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*var_90 + 8))(var_90)

return result
