// 函数: sub_1421beba0
// 地址: 0x1421beba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1[0x42].d
arg1[0x42].d -= 1

if (rbx == 1)
    if (sub_140a80f40() != 0)
        int64_t rdx_1 = *arg1
        (*(rdx_1 + 0x30))(arg1, rdx_1)
        int64_t r8_1 = *arg1
        (*r8_1)(arg1, 1, r8_1)
        return zx.q(rbx - 1)
    
    if (data_143f138f4 == 0)
        uint32_t rax_3
        
        if (data_143de5480 != 0)
            rax_3.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_3.b != 0)
            (*(*arg1 + 0x30))(arg1)
            (**arg1)(arg1, 1)
            return zx.q(rbx - 1)
    
    void var_28
    void** rax_7 = sub_1421b1a80(&var_28, nullptr, 0xff)
    *(*rax_7 + 0x10) = arg1
    void* rcx_6 = *rax_7
    int64_t* rbp_1 = *(rcx_6 + 0x20)
    
    if (rbp_1 != 0)
        rbp_1[9].d += 1
    
    sub_1407c9450(rcx_6, rax_7[1], rax_7[2].d, 1)
    
    if (rbp_1 != 0)
        rbp_1[9].d -= 1
        
        if (rbp_1[9].d == 1)
            sub_140a2f6e0(rbp_1)

return zx.q(rbx - 1)
