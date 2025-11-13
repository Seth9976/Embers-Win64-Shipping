// 函数: sub_14141c980
// 地址: 0x14141c980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140a80f40() == 0)
    if (data_143f138f4 != 0)
    label_14141c9f0:
        void var_28
        void** rax_4 = sub_14141bf70(&var_28, nullptr, 0xff)
        *(*rax_4 + 0x10) = arg1
        void* rcx_4 = *rax_4
        int32_t r8 = rax_4[2].d
        int64_t* rdx_1 = rax_4[1]
        int64_t* rbx_1 = *(rcx_4 + 0x20)
        int64_t* arg_10 = rbx_1
        int32_t* rdi = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi += 1
            rbx_1 = arg_10
        
        int32_t result = sub_1405a5630(rcx_4, rdx_1, r8, 1)
        
        if (rbx_1 != 0)
            result = *rdi
            *rdi -= 1
            
            if (result == 1)
                return sub_140a2f6e0(arg_10)
        
        return result
    
    if (data_143de5480 != 0)
        uint32_t rax_3
        rax_3.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_3.b == 0)
            goto label_14141c9f0

(*(arg1[3] + 0x30))(&arg1[3])
jump(*(*arg1 + 0x90))
