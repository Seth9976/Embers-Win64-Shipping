// 函数: sub_1418ba090
// 地址: 0x1418ba090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const result = &data_142fec170
uint64_t r14 = 0
*arg1 = &data_142fec170

if (arg1[3].d u> 0)
    do
        int64_t* rbp_1 = arg1[r14 + 4]
        int64_t* rbx_1 = rbp_1
        int64_t* arg_10 = rbx_1
        
        if (rbp_1 != 0)
            rbp_1[1].d += 1
            rbx_1 = arg_10
        
        void* r15_1 = arg1[1]
        void* rsi_1 = *(*(r15_1 + 0x3b0) + 0x1558)
        EnterCriticalSection(rsi_1 + 0x18)
        void** result_2 = *(rsi_1 + 0x48)
        int64_t r13_1 = *(rsi_1 + 0x40)
        void** result_1 = result_2
        
        if (rsi_1 != -0x18)
            LeaveCriticalSection(rsi_1 + 0x18)
        
        int32_t rsi_2 = data_143efb2fc
        
        if (rbp_1 != 0)
            rbp_1[1].d += 1
            rbx_1 = arg_10
            result_1 = result_2
        
        EnterCriticalSection(r15_1 + 0x3b8)
        int64_t r15_2 = sx.q(*(r15_1 + 0x3e8))
        int32_t rax_2 = (r15_2 + 1).d
        *(r15_1 + 0x3e8) = rax_2
        
        if (rax_2 s> *(r15_1 + 0x3ec))
            sub_1407c3b60(r15_1 + 0x3e0)
        
        result = result_1
        int32_t* rcx_5 = r15_2 * 0x38 + *(r15_1 + 0x3e0)
        rcx_5[1] = rsi_2
        *(rcx_5 + 0x18) = 0
        *rcx_5 = 0xe
        *(rcx_5 + 8) = result
        *(rcx_5 + 0x10) = r13_1
        *(rcx_5 + 0x20) = 0
        *(rcx_5 + 0x28) = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
            rbx_1 = arg_10
        
        *(rcx_5 + 0x30) = 0
        
        if (r15_1 != -0x3b8)
            result = LeaveCriticalSection(r15_1 + 0x3b8)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**arg_10)(arg_10, 1)
            
            result = zx.q(rbx_1[1].d)
            rbx_1[1].d -= 1
            
            if (result.d == 1)
                result = (**arg_10)(arg_10, 1)
        
        r14 = zx.q(r14.d + 1)
    while (r14.d u< arg1[3].d)

void* rdi_3 = &arg1[7]

for (int64_t i = 3; i != 0; )
    int64_t* rcx_9 = *(rdi_3 - 8)
    rdi_3 -= 8
    i -= 1
    
    if (rcx_9 != 0)
        result = zx.q(rcx_9[1].d)
        rcx_9[1].d -= 1
        
        if (result.d == 1 && rcx_9 != 0)
            result = (**rcx_9)(rcx_9, 1)

return result
