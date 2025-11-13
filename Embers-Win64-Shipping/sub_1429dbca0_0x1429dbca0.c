// 函数: sub_1429dbca0
// 地址: 0x1429dbca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp = zx.q(arg3)

if (*(arg1 + 0xec) == 0)
    int64_t r9 = arg1[0x21]
    int64_t r10_1 = arg1[0x22]
    void* rcx = *arg2
    int32_t arg_8 = 0
    int32_t result = sub_1429dbf20(rcx, rbp.d, arg1 + 0xe4, &arg_8, arg5, r9, r10_1)
    
    if (result != 0)
        return result
    
    if (arg1[0x1e].d == 0 && arg_8 == 0)
        return 1

if (arg1[0x37].d != 0)
    int64_t rdx_1 = sx.q(*(arg1 + 0x1cc))
    int64_t r8_1 = arg1[0x38]
    int64_t rax_7 = sx.q(arg1[0x3a].d)
    void* r14_3 = rdx_1 * 0x30 + r8_1
    int64_t* rbx_2 = *(r14_3 + 0x18)
    
    if (rdx_1.d != rax_7.d)
        sub_1429e70c0(r14_3, rax_7 * 0x30 + r8_1)
    
    *(*rbx_2 + 0x4810) = 0
    
    if (rbx_2[8] u< rbp)
        sub_1429dde60(rbx_2[7])
        void* rax_9 = sub_1429dde80(rbp)
        rbx_2[7] = rax_9
        
        if (rax_9 == 0)
            *arg1 = "Failed to reallocate scratch buffer"
            return 2
        
        rbx_2[8] = rbp
    
    int64_t rcx_8 = rbx_2[7]
    rbx_2[3] = rbp
    memcpy(rcx_8, *arg2, rbp.d)
    int64_t rax_10 = rbx_2[7]
    rbx_2[0xf] = 0
    rbx_2[1] = rax_10
    rbx_2[6].d = 1
    rbx_2[4] = arg4
    int32_t rcx_9 = *(arg1 + 0x1cc)
    int32_t rax_11 = arg1[0x3a].d
    
    if (rcx_9 != rax_11)
        arg1[0x39].d
        arg1[0x3a].d = mods.dp.d(sx.q(rax_11 + 1), arg1[0x39].d)
    
    arg1[0x3b].d -= 1
    arg1[0x39].d
    int32_t temp1_2 = mods.dp.d(sx.q(rcx_9 + 1), arg1[0x39].d)
    *(arg1 + 0x1cc) = temp1_2
    *(r14_3 + 0x28) = 0
    data_143cc7030(r14_3, temp1_2, 0)
else
    void* rbx_1 = arg1[0x38]
    int64_t* rsi_1 = *(rbx_1 + 0x18)
    void* rcx_1 = *rsi_1
    rsi_1[1] = *arg2
    rsi_1[3] = rbp
    rsi_1[4] = arg4
    rsi_1[6].d = 1
    *(rcx_1 + 0x4ea8) = arg1[0x21]
    *(*rsi_1 + 0x4eb0) = arg1[0x22]
    *(rbx_1 + 0x28) = 0
    data_143cc7038(rbx_1)
    *arg2 = rsi_1[2]
    void* rax_6 = *rsi_1
    
    if (*(rbx_1 + 0x28) != 0)
        if (*(rax_6 + 0x270) != 0)
            void* rcx_4 = rax_6 + 0x278
            
            if (*(rax_6 + 0x274) == 0)
                rcx_4 = nullptr
            
            *arg1 = rcx_4
        
        return *(rax_6 + 0x270)
    
    if (*(arg1 + 0x54c) == 1 && *(rax_6 + 0x4ec0) == 0
            && (*(rax_6 + 0x5b8) != 0 || *(rax_6 + 0x5a8) == 0))
        *(arg1 + 0x54c) = 0

return 0
