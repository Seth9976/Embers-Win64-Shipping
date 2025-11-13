// 函数: sub_141feb5d0
// 地址: 0x141feb5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 8)
void* result

if (sub_140a80f40() == 0)
    if (data_143f138f4 == 0)
        uint32_t rax_2
        
        if (data_143de5480 != 0)
            rax_2.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_2.b != 0)
            int64_t* arg_8 = rbx
            return sub_141fd9210(&arg_8)
    
    void var_28
    void** rax_4 = sub_141fde0c0(&var_28, nullptr, 0xff)
    *(*rax_4 + 0x10) = rbx
    void* rcx_5 = *rax_4
    int32_t r8_1 = rax_4[2].d
    int64_t* rdx_2 = rax_4[1]
    int64_t* rbx_1 = *(rcx_5 + 0x20)
    int64_t* arg_10 = rbx_1
    void* rsi_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rsi_1 += 1
        rbx_1 = arg_10
    
    result = sub_1407c9450(rcx_5, rdx_2, r8_1, 1)
    
    if (rbx_1 != 0)
        int32_t rdi_1 = *rsi_1
        *rsi_1 -= 1
        
        if (rdi_1 == 1)
            return sub_140a2f6e0(arg_10)
else
    rbx[2].d = 0xffffffff
    *(rbx + 0x14) = 0
    rbx[1].d = 0
    
    if (*(rbx + 0xc) s<= 0xffffffff)
        sub_1405a5130(rbx, 0)
    
    rbx[3].d = 0
    rbx[4].d = 0x3f800000
    *(rbx + 0x1c) = 1
    void* rdx = rbx[7]
    result = rdx + sx.q(rbx[8].d) * 0x48
    
    if (rdx != result)
        do
            *(rdx + 0x40) = -1
            rdx += 0x48
        while (rdx != result)

return result
