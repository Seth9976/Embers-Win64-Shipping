// 函数: sub_140bb8c20
// 地址: 0x140bb8c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18 = arg3
void* rbx = arg3

if (((*(arg2 + 8) u>> 4).b & 1) != 0)
    int32_t arg_10
    sub_140ba6ce0(arg1 + 0x58, &arg_10, arg3)
    int64_t rax_2 = sx.q(arg_10)
    int32_t* result
    
    if (rax_2.d == 0xffffffff)
        result = nullptr
    else
        result = rax_2 * 0x160 + *(arg1 + 0x58)
    
    void* rcx_1 = &result[2]
    
    if (result == 0)
        rcx_1 = nullptr
    
    if (rcx_1 == 0)
        result.b = 0
        return result
    
    void* rcx_2 = *(rcx_1 + 8)
    void* arg_20 = rcx_2
    int32_t r9_1 = *(rbx + 8)
    
    if (((r9_1 u>> 4).b & 1) != 0)
        void* rax_6 = _ultow_s(*(rbx + 0x10), *(rbx + 0x20), *(rbx + 0x18), r9_1)
        rbx = arg_18
        rcx_2 = rax_6
        arg_20 = rax_6
    
    if (rcx_2 != 0)
        int32_t rcx_4 = *(rcx_2 + 8)
        
        if (((rcx_4 u>> 0xa).b & 1) != 0)
        label_140bb8cea:
            void** var_28 = &arg_20
            void** var_20_1 = &arg_18
            sub_140b92320(arg1 + 8, &arg_10, &var_28, nullptr)
            result.b = 0
            return result
        
        if (((rcx_4 u>> 0x13).b & 1) != 0 && ((rcx_4 u>> 0x15).b & 1) == 0)
            goto label_140bb8cea
    
    arg3 = rbx

return sub_140bb8bb0(arg1, arg2, arg3)
