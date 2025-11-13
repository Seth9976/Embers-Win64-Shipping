// 函数: sub_141223c70
// 地址: 0x141223c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *(arg1 + 0x4b8)

if (rax != 0)
    rax[1].d += 1
    int64_t* rbx_1 = *(arg1 + 0x4b8)
    *(arg1 + 0x4b8) = 0
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1, 1)
    
    if (sub_140a80f40() == 0)
        if (data_143f138f4 == 0)
            if (data_143de5480 == 0)
                goto label_141223cc4
            
            uint32_t rax_5
            rax_5.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_5.b != 0)
                goto label_141223cc4
        
        void var_28
        void** rax_6 = sub_1412239a0(&var_28, nullptr, 0xff)
        *(*rax_6 + 0x10) = rbx_1
        void* rcx_4 = *rax_6
        int32_t r8_1 = rax_6[2].d
        int64_t* rdx_1 = rax_6[1]
        int64_t* rbx_2 = *(rcx_4 + 0x20)
        int64_t* arg_10 = rbx_2
        int32_t* rdi_1 = &rbx_2[9]
        
        if (rbx_2 != 0)
            *rdi_1 += 1
            rbx_2 = arg_10
        
        rax = sub_1405a5630(rcx_4, rdx_1, r8_1, 1)
        
        if (rbx_2 != 0)
            rax = zx.q(*rdi_1)
            *rdi_1 -= 1
            
            if (rax.d == 1)
                rax = sub_140a2f6e0(arg_10)
    else
    label_141223cc4:
        rax = sub_1419a2d00()
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            int64_t rax_4 = (**rbx_1)(rbx_1, 1)
            *(arg1 + 0x4c0) = 0
            return rax_4
    
    *(arg1 + 0x4c0) = 0

return rax
