// 函数: sub_141997f50
// 地址: 0x141997f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f1afdc != 0)
    uint32_t rax_1
    
    if (data_143de5480 != 0)
        rax_1.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_1.b != 0)
        int32_t rax_2 = data_143f137f0
        
        if (rax_2 s>= 0x10)
            sub_1419a1e40(&data_143f137f0)
            rax_2 = data_143f137f0
        
        int64_t rax_3 = sx.q(rax_2)
        *((rax_3 << 3) + 0x143f137f8) = arg1
        data_143f137f0 += 1
        return rax_3

char rax_4 = sub_140a80f40()

if (rax_4 == 0)
    if (data_143f138f4 != rax_4)
    label_141998007:
        void var_28
        void** rax_7 = sub_14199c1b0(&var_28, nullptr, 0xff)
        *(*rax_7 + 0x10) = arg1
        void* rcx_3 = *rax_7
        int32_t r8 = rax_7[2].d
        int64_t* rdx = rax_7[1]
        int64_t* rbx_1 = *(rcx_3 + 0x20)
        int64_t* arg_18 = rbx_1
        int32_t* rdi = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi += 1
            rbx_1 = arg_18
        
        int32_t rax_8 = sub_1405a5630(rcx_3, rdx, r8, 1)
        
        if (rbx_1 != 0)
            rax_8 = *rdi
            *rdi -= 1
            
            if (rax_8 == 1)
                return sub_140a2f6e0(arg_18)
        
        return rax_8
    
    if (data_143de5480 != rax_4)
        uint32_t rax_5
        rax_5.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_5.b == 0)
            goto label_141998007

jump(*(*arg1 + 0x30))
