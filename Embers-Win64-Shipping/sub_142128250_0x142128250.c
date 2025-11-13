// 函数: sub_142128250
// 地址: 0x142128250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx
int64_t rsi

if (data_143de5480 == 0)
    rsi = 0
    rcx = 0
else
    rsi = 0
    rcx.b = GetCurrentThreadId().d != data_143de5470

int64_t* result

if (*(rcx + arg1 + 0x13a) == 0)
    int32_t i = 0
    
    if (*(arg1 + 0x170) s> 0)
        void* r14_1 = nullptr
        
        do
            result = *(arg1 + 0x168)
            int32_t* rbx_1 = r14_1 + result
            void arg_8
            
            if (*(r14_1 + result + 0x10) != 0 && *sub_140b4c620(&arg_8, rbx_1) == *arg2
                    && rbx_1[3] == arg2[1].d && rbx_1[2].b == *(arg2 + 0xc))
                *arg3 = rbx_1[9]
                result.b = 1
                *arg4 = *(rbx_1 + 0x14)
                goto label_1421283c1
            
            i += 1
            r14_1 += 0x2c
        while (i s< *(arg1 + 0x170))
    
    if (*(arg1 + 0xd0) != 0)
        if (data_143de5480 != 0)
            GetCurrentThreadId()
        
        int64_t rcx_3
        
        if (data_143de5480 == 0 || data_143de5480 == 0)
            rcx_3 = 0
        else
            rcx_3.b = GetCurrentThreadId() != data_143de5470
        
        *(rcx_3 + arg1 + 0x13a) = 1
        int64_t* rcx_4 = *(arg1 + 0xd0)
        char rax_2 = (*(*rcx_4 + 0x2f0))(rcx_4, arg2, arg3, arg4)
        
        if (data_143de5480 != 0)
            rsi.b = GetCurrentThreadId() != data_143de5470
        
        *(rsi + arg1 + 0x13a) = 0
        return zx.q(rax_2)

result.b = 0
label_1421283c1:
return result
