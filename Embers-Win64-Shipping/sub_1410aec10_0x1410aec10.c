// 函数: sub_1410aec10
// 地址: 0x1410aec10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_30 = arg2
int32_t rax_5

if (sub_140a80f40() == 0)
    if (data_143f138f4 == 0)
        if (data_143de5480 == 0)
            goto label_1410aec33
        
        uint32_t rax_3
        rax_3.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_3.b != 0)
            goto label_1410aec33
    
    void var_28
    int64_t* rax_4 = sub_1410954a0(&var_28, nullptr, 0xff)
    *(*rax_4 + 0x10) = arg1.o
    void* rcx_3 = *rax_4
    int32_t r8_1 = rax_4[2].d
    int64_t* rdx = rax_4[1]
    int64_t* rbx_1 = *(rcx_3 + 0x28)
    int64_t* arg_10 = rbx_1
    int32_t* rdi_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rdi_1 += 1
        rbx_1 = arg_10
    
    rax_5 = sub_1405e48c0(rcx_3, rdx, r8_1, 1)
    
    if (rbx_1 != 0)
        rax_5 = *rdi_1
        *rdi_1 -= 1
        
        if (rax_5 == 1)
            return sub_140a2f6e0(arg_10)
else
label_1410aec33:
    rax_5 = sub_1419a2d00()
    int64_t* rcx = *(arg1 + 0x1c28)
    
    if (rcx != 0 && rcx[2] == arg2)
        int64_t rax_2 = (**rcx)(rcx, 1)
        *(arg1 + 0x1c28) = 0
        return rax_2

return rax_5
