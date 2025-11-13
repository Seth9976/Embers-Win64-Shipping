// 函数: sub_140a41f80
// 地址: 0x140a41f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140b3d910(arg2, nullptr, 1) == 0)
    int64_t* rax_1 = __crt_deferred_errno_cache::get(&data_143db7b00)
    int64_t r8 = *rax_1
    char rax = (*(r8 + 0x70))(rax_1, arg2, r8)
    
    if (arg3 == 0)
        if (rax == 0)
            return 1
        
    label_140a41fe7:
        
        if (arg4 != 0)
            int64_t* rax_2 = __crt_deferred_errno_cache::get(&data_143db7b00)
            int64_t r9 = *rax_2
            (*(r9 + 0x98))(rax_2, arg2, 0, r9)
        
        int64_t* rax_3 = __crt_deferred_errno_cache::get(&data_143db7b00)
        int64_t r8_1 = *rax_3
        
        if ((*(r8_1 + 0x80))(rax_3, arg2, r8_1) != 0)
            return 1
    else if (rax != 0)
        goto label_140a41fe7

return 0
