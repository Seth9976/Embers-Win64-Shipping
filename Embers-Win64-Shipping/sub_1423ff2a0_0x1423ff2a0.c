// 函数: sub_1423ff2a0
// 地址: 0x1423ff2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1
int32_t rax

if (rbx != 0 && arg1[0x20].b != 0)
    *(rbx + 0x44) += 1
    
    if (sub_140a80f40() == 0)
        if (data_143f138f4 == 0)
            if (data_143de5480 == 0)
                goto label_1423ff2e9
            
            uint32_t rax_4
            rax_4.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_4.b != 0)
                goto label_1423ff2e9
        
        void var_38
        void** rax_5 = sub_142405030(&var_38, nullptr, 0xff)
        *(*rax_5 + 0x10) = rbx
        void* rcx_4 = *rax_5
        int32_t r8_1 = rax_5[2].d
        int64_t* rdx_1 = rax_5[1]
        int64_t* rbx_1 = *(rcx_4 + 0x20)
        int64_t* arg_10 = rbx_1
        int32_t* rbp_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rbp_1 += 1
            rbx_1 = arg_10
        
        sub_1405a5630(rcx_4, rdx_1, r8_1, 1)
        
        if (rbx_1 != 0)
            rax = *rbp_1
            *rbp_1 -= 1
            
            if (rax == 1)
                sub_140a2f6e0(arg_10)
    else
    label_1423ff2e9:
        (*(*rbx + 0x30))(rbx)
        rax = *(rbx + 0x44)
        *(rbx + 0x44) -= 1
        
        if (rax == 1)
            (**rbx)(rbx, 1)

int64_t* rcx_6 = *arg1
*arg1 = 0

if (rcx_6 != 0)
    rax = *(rcx_6 + 0x44)
    *(rcx_6 + 0x44) -= 1
    
    if (rax == 1)
        (**rcx_6)(rcx_6, 1)

int64_t* rcx_7 = *arg1

if (rcx_7 == 0)
    return 

int32_t rdi_1 = *(rcx_7 + 0x44)
*(rcx_7 + 0x44) -= 1

if (rdi_1 == 1 && rcx_7 != 0)
    jump(**rcx_7)
