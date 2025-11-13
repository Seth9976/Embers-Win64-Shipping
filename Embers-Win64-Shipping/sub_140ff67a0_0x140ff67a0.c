// 函数: sub_140ff67a0
// 地址: 0x140ff67a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp
rbp.b = 1

if (*(arg2 + 0x2c) != 2 || arg4 != 0)
    sub_140fe76a0()
    int32_t rcx = data_143e2c0d0
    
    if (data_1439b49d8 != rcx && *(arg2 + 0x2c) == 1)
        data_1439b49d8 = rcx
        sub_140fe76a0()
        void* rbx_1 = nullptr
        
        if (data_143f01c92 != 0)
            void* rdi_1 = &data_143f02b98
            
            if (sub_141989210() == 0)
                rdi_1 = nullptr
            
            rbx_1 = rdi_1
        
        sub_140fed2a0(&data_143e2c0c8)
        
        if (rbx_1 != 0)
            _initp_eh_hooks()
    
    if ((*(arg2 + 0x28) & 1) == 0)
        char rax_2 = sub_140fe86f0(arg1, *(arg2 + 0x18), arg2 + 0x20, 8, *(arg2 + 0x2c), arg4, 1)
        *(arg2 + 0x28) &= 0xfe
        rbp = zx.q(rax_2)
        *(arg2 + 0x28) |= rax_2
else if ((*(arg2 + 0x28) & 1) == 0)
    int64_t result
    result.b = 0
    return result

uint64_t rax_5

if (*(arg2 + 0x2c) != 2)
    rax_5 = *(arg2 + 0x20)
else
    int64_t rax_3
    int64_t rdx_1
    rdx_1:rax_3 = mulu.dp.q(0x431bde82d7b634db, data_143f0f168)
    uint64_t rcx_5 = rdx_1 u>> 0x12
    
    if (rcx_5 u<= 1)
        rcx_5 = 1
    
    rax_5 = divu.dp.q(0:(*(arg2 + 0x20)), rcx_5)

*arg3 = rax_5
return zx.q(rbp.b)
