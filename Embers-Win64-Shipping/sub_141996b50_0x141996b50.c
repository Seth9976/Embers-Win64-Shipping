// 函数: sub_141996b50
// 地址: 0x141996b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8
int32_t var_30 = r8
uint32_t result = sub_140a80f40()

if (result.b == 0)
    if (data_143f138f4 != result.b)
    label_141996bb1:
        void var_28
        int64_t* rax = sub_14199c300(&var_28, nullptr, 0xff)
        *(*rax + 0x10) = arg2.o
        void* rcx_2 = *rax
        int32_t r8_1 = rax[2].d
        int64_t* rdx = rax[1]
        int64_t* rbx_1 = *(rcx_2 + 0x28)
        int64_t* arg_10 = rbx_1
        void* rdi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_1 += 1
            rbx_1 = arg_10
        
        result = sub_1405e48c0(rcx_2, rdx, r8_1, 1)
        
        if (rbx_1 != 0)
            result = *rdi_1
            *rdi_1 -= 1
            
            if (result == 1)
                result = sub_140a2f6e0(arg_10)
    else if (data_143de5480 != result.b)
        result.b = GetCurrentThreadId() == data_143de5470
        
        if (result.b == 0)
            goto label_141996bb1

if (arg1 == 0)
    return result

return sub_1419a21e0(0) __tailcall
