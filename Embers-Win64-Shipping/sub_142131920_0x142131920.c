// 函数: sub_142131920
// 地址: 0x142131920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 8)
*(arg1 + 8) = arg2

if (arg2 != 0)
    EnterCriticalSection(&data_143f4ab20)
    *(arg2 + 0x74) += 1
    LeaveCriticalSection(&data_143f4ab20)

if (rsi != 0)
    sub_14212fcb0(rsi)

char rax = sub_140a80f40()

if (rax == 0)
    if (data_143f138f4 != rax)
    label_1421319c2:
        void var_28
        void** rax_3 = sub_14210e3a0(&var_28, nullptr, 0xff)
        *(*rax_3 + 0x10) = arg1
        void* rcx_3 = *rax_3
        int32_t r8 = rax_3[2].d
        int64_t* rdx = rax_3[1]
        int64_t* rbx_1 = *(rcx_3 + 0x20)
        int64_t* arg_10 = rbx_1
        int32_t* rdi_1 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rdi_1 += 1
            rbx_1 = arg_10
        
        int32_t rax_4 = sub_1407c9450(rcx_3, rdx, r8, 1)
        
        if (rbx_1 != 0)
            rax_4 = *rdi_1
            *rdi_1 -= 1
            
            if (rax_4 == 1)
                return sub_140a2f6e0(arg_10)
        
        return rax_4
    
    if (data_143de5480 != rax)
        uint32_t rax_1
        rax_1.b = GetCurrentThreadId() == data_143de5470
        
        if (rax_1.b == 0)
            goto label_1421319c2

int64_t rax_2 = *(arg1 + 8)
*(arg1 + 0x10) = rax_2
return rax_2
