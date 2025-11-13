// 函数: sub_1418d9250
// 地址: 0x1418d9250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[2])
int64_t* rdx = arg1[7]
void* r8 = &rdx[sx.q(arg1[8].d)]
int64_t* result

if (rdx == r8)
label_1418d92a1:
    int64_t* result_1 = j_sub_140a82f30(0x60)
    result = result_1
    
    if (result_1 == 0)
        result = nullptr
    else
        void* rcx_1 = &result[3]
        *result = *arg1
        result[1] = 0
        result[2] = 0
        *(rcx_1 + 0x10) = 0
        *(rcx_1 + 0x18) = 0
        *(rcx_1 + 0x1c) = 0x80
        void* rax_2 = *(rcx_1 + 0x10)
        
        if (rax_2 != 0)
            rcx_1 = rax_2
        
        *rcx_1 = 0
        *(rcx_1 + 8) = 0
        result[7].d = 0xffffffff
        *(result + 0x3c) = 0
        result[9] = 0
        result[0xa].d = 0
        result[0xb].d = data_14399fa54
        *(result + 0x5c) = 1
    
    int64_t rbp_1 = sx.q(arg1[8].d)
    int32_t rax_5 = (rbp_1 + 1).d
    arg1[8].d = rax_5
    
    if (rax_5 s> *(arg1 + 0x44))
        sub_1405a4d70(&arg1[7])
    
    *(arg1[7] + (rbp_1 << 3)) = result
else
    while (true)
        result = *rdx
        
        if (*(result + 0x5c) == 0)
            *(result + 0x5c) = 1
            result[0xb].d = data_14399fa54
            break
        
        rdx = &rdx[1]
        
        if (rdx == r8)
            goto label_1418d92a1

if (arg1 != -0x10)
    LeaveCriticalSection(&arg1[2])

return result
