// 函数: sub_14233cf30
// 地址: 0x14233cf30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr

if (*(arg1 + 0x15) == 0)
    int32_t i = 0
    
    if (arg1[1].d s> 0)
        int64_t* rsi_1 = nullptr
        
        do
            int64_t* rcx = *(rsi_1 + *arg1)
            
            if (*(rcx + 0xec) u> 0)
                sub_14233a1a0(rcx, arg2, i, arg3, arg4)
            
            i += 1
            rsi_1 = &rsi_1[1]
        while (i s< arg1[1].d)
    
    void* var_40_1 = arg4
    char rax_1 = sub_140a80f40()
    
    if (rax_1 != 0)
    label_14233cfd5:
        result = sub_1419a2d00()
        arg1[2].b = 1
        *(arg4 + 0x3d) |= 1
    else
        if (data_143f138f4 == rax_1)
            if (data_143de5480 == rax_1)
                goto label_14233cfd5
            
            uint32_t rax_2
            rax_2.b = GetCurrentThreadId() == data_143de5470
            
            if (rax_2.b != 0)
                goto label_14233cfd5
        
        void var_38
        int64_t* rax_3 = sub_142331b00(&var_38, nullptr, 0xff)
        *(*rax_3 + 0x10) = arg1.o
        void* rcx_3 = *rax_3
        int32_t r8_1 = rax_3[2].d
        int64_t* rdx_1 = rax_3[1]
        int64_t* rbx_1 = *(rcx_3 + 0x28)
        int64_t* var_48_2 = rbx_1
        int32_t* rsi_2 = &rbx_1[9]
        
        if (rbx_1 != 0)
            *rsi_2 += 1
            rbx_1 = var_48_2
        
        result = sub_1405e48c0(rcx_3, rdx_1, r8_1, 1)
        
        if (rbx_1 != 0)
            result = *rsi_2
            *rsi_2 -= 1
            
            if (result == 1)
                result = sub_140a2f6e0(var_48_2)
    
    *(arg1 + 0x15) = 1

return result
