// 函数: sub_142417f20
// 地址: 0x142417f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x428)

if (rbx != 0)
    if ((*(arg1 + 0x418) & 1) == 0)
        int64_t* rcx_6 = *(arg1 + 0x420)
        (*(*rcx_6 + 0x30))(rcx_6, arg1)
    else if (sub_140a80f40() == 0)
        if (data_143f138f4 == 0)
            if (data_143de5480 == 0)
                goto label_142417f5c
            
            uint32_t rax_3
            rax_3.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_3.b != 0)
                goto label_142417f5c
            
            goto label_142417fc1
        
    label_142417fc1:
        void var_28
        void** rax_4 = sub_142404ee0(&var_28, nullptr, 0xff)
        *(*rax_4 + 0x10) = rbx
        void* rcx_4 = *rax_4
        int32_t r8_1 = rax_4[2].d
        int64_t* rdx_2 = rax_4[1]
        int64_t* rbx_1 = *(rcx_4 + 0x20)
        int64_t* arg_10 = rbx_1
        int32_t* rsi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rsi_1 += 1
            rbx_1 = arg_10
        
        sub_1405a5630(rcx_4, rdx_2, r8_1, 1)
        
        if (rbx_1 != 0)
            int32_t rax_5 = *rsi_1
            *rsi_1 -= 1
            
            if (rax_5 == 1)
                sub_140a2f6e0(arg_10)
        
        *(arg1 + 0x428) = 0
    else
    label_142417f5c:
        
        if (rbx == 0)
            *(arg1 + 0x428) = 0
        else
            sub_1423ff2a0(rbx)
            j_sub_140a74f90(rbx)
            *(arg1 + 0x428) = 0

*(arg1 + 0x420) = 0
return sub_141f20b40(arg1) __tailcall
