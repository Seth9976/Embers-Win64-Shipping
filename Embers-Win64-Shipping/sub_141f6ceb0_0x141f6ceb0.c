// 函数: sub_141f6ceb0
// 地址: 0x141f6ceb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 8) & 0x30) == 0)
    EnterCriticalSection(&data_143f3b838)
    int64_t* r8_1 = data_143f3b9c0
    int64_t rdi_1 = sx.q(data_143f3b9c8)
    int64_t* rdx_1 = r8_1
    void* rcx = &r8_1[rdi_1]
    
    if (r8_1 != rcx)
        while (*rdx_1 != arg1)
            rdx_1 = &rdx_1[1]
            
            if (rdx_1 == rcx)
                goto label_141f6cf0c
    
    if (r8_1 == rcx || ((rdx_1 - r8_1) s>> 3).d == 0xffffffff)
    label_141f6cf0c:
        int32_t rax_1 = (rdi_1 + 1).d
        bool cond:1_1 = rax_1 s<= data_143f3b9cc
        data_143f3b9c8 = rax_1
        
        if (not(cond:1_1))
            sub_1405a4d70(&data_143f3b9c0)
            r8_1 = data_143f3b9c0
        
        r8_1[rdi_1] = arg1
    
    LeaveCriticalSection(&data_143f3b838)

return sub_141eefd40(arg1) __tailcall
