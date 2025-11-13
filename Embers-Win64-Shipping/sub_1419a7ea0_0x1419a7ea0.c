// 函数: sub_1419a7ea0
// 地址: 0x1419a7ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_50
sub_140596d10(&var_50, arg3)
int32_t result

if (sub_140a80f40() == 0)
    uint32_t rax_1
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_1.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_1.b == 0))
        void var_28
        void** rax_3 = sub_14199c060(&var_28, nullptr, 0xff)
        void* rdx_5 = *rax_3
        *(rdx_5 + 0x10) = arg2
        sub_140596d10(rdx_5 + 0x18, &var_50)
        void* rcx_9 = *rax_3
        int32_t r8_3 = rax_3[2].d
        int64_t* rdx_7 = rax_3[1]
        int64_t* rbx_3 = *(rcx_9 + 0x30)
        int64_t* arg_20 = rbx_3
        int32_t* rdi_2 = &rbx_3[9]
        
        if (rbx_3 != 0)
            *rdi_2 += 1
            rbx_3 = arg_20
        
        result = sub_14119c2b0(rcx_9, rdx_7, r8_3, 1)
        
        if (rbx_3 != 0)
            result = *rdi_2
            *rdi_2 -= 1
            
            if (result == 1)
                result = sub_140a2f6e0(arg_20)
    else
        int64_t* var_40 = arg2
        int64_t var_38
        sub_140596d10(&var_38, &var_50)
        result = sub_141995510(&var_40)
        int64_t rcx_5 = var_38
        
        if (rcx_5 != 0)
            result = sub_140a74f90(rcx_5)
else
    result = &var_50
    
    if (arg2 != &var_50)
        int32_t r8 = *(arg2 + 0xc)
        int32_t var_48
        arg2[1].d = var_48
        
        if (var_48 != 0 || r8 != 0)
            sub_1405a4c70(arg2, var_48, r8)
            result = memcpy(*arg2, var_50, var_48 * 2)
        else
            *(arg2 + 0xc) = var_48

int64_t rcx_11 = var_50

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11) __tailcall
