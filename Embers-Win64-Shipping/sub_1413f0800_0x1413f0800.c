// 函数: sub_1413f0800
// 地址: 0x1413f0800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_142006940()
int64_t r8 = *rax
(*(r8 + 0x58))(rax, arg1, r8)

if (sub_140a80f40() == 0)
    if (data_143f138f4 != 0)
    label_1413f0887:
        void var_28
        void** rax_4 = sub_1413db480(&var_28, nullptr, 0xff)
        *(*rax_4 + 0x10) = arg1
        void* rcx_5 = *rax_4
        int32_t r8_1 = rax_4[2].d
        int64_t* rdx_2 = rax_4[1]
        int64_t* rbx_1 = *(rcx_5 + 0x20)
        int64_t* arg_10 = rbx_1
        int32_t* rdi = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi += 1
            rbx_1 = arg_10
        
        int32_t result = sub_1405a5630(rcx_5, rdx_2, r8_1, 1)
        
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
            goto label_1413f0887

int64_t r9 = *arg1
(*(r9 + 0x18))(arg1, &data_143f02b98, 0, r9)
jump(*(*arg1 + 0x2e0))
