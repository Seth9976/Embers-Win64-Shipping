// 函数: sub_142374130
// 地址: 0x142374130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (**(arg1 - 0x10))(arg1 - 0x10)
int32_t result

if (rax_1 == arg2)
    result = (*(*(arg1 - 0x10) + 8))(arg1 - 0x10)

if (rax_1 != arg2 || result != arg3)
    if (sub_140a80f40() != 0)
        *(arg1 + 0x20) = arg2
        *(arg1 + 0x24) = arg3
        return sub_1419ba620(arg1 + 0x10) __tailcall
    
    int32_t arg_c = arg3
    int64_t var_40_1 = arg2.q
    char rax_6 = sub_140a80f40()
    
    if (rax_6 != 0)
    label_1423741d5:
        *(arg1 + 0x20) = arg2
        *(arg1 + 0x24) = arg3
        return sub_1419ba620(arg1 + 0x10) __tailcall
    
    if (data_143f138f4 == rax_6)
        if (data_143de5480 == rax_6)
            goto label_1423741d5
        
        uint32_t rax_7
        rax_7.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_7.b != 0)
            goto label_1423741d5
    
    void var_38
    int64_t* rax_9 = sub_14235f1e0(&var_38, nullptr, 0xff)
    *(*rax_9 + 0x10) = (arg1 - 0x10).o
    void* rcx_8 = *rax_9
    int32_t r8_2 = rax_9[2].d
    int64_t* rdx_2 = rax_9[1]
    void* rbx_1 = *(rcx_8 + 0x28)
    int32_t arg_8
    arg_8.q = rbx_1
    int32_t* rdi_1 = rbx_1 + 0x48
    
    if (rbx_1 != 0)
        *rdi_1 += 1
        rbx_1 = arg_8.q
    
    result = sub_1405e48c0(rcx_8, rdx_2, r8_2, 1)
    
    if (rbx_1 != 0)
        result = *rdi_1
        *rdi_1 -= 1
        
        if (result == 1)
            return sub_140a2f6e0(arg_8.q)

return result
