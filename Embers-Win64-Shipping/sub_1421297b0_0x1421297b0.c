// 函数: sub_1421297b0
// 地址: 0x1421297b0
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

if (*(rcx + arg1 + 0x13a) != 0)
    result.b = 0
else
    int32_t i = 0
    
    if (*(arg1 + 0xf8) s> 0)
        int64_t r15_1 = 0
        
        do
            int32_t* rdi_2 = *(arg1 + 0xf0) + r15_1
            void arg_8
            
            if (*sub_140b4c620(&arg_8, rdi_2) == *arg2 && rdi_2[3] == arg2[1].d
                    && rdi_2[2].b == *(arg2 + 0xc))
                result.b = 1
                *arg3 = *(rdi_2 + 0x10)
                goto label_142129968
            
            i += 1
            r15_1 += 0x30
        while (i s< *(arg1 + 0xf8))
    
    int64_t rdi_3
    
    if (*(arg2 + 0xc) != 2)
        rdi_3 = sx.q(sub_14210eb80(arg1 + 0x188, 1, arg2).d)
    
    if (*(arg2 + 0xc) == 2 || rdi_3.d == 0xffffffff)
        if (*(arg1 + 0xd0) != 0)
            if (data_143de5480 != 0)
                GetCurrentThreadId()
            
            int64_t rcx_6
            
            if (data_143de5480 == 0 || data_143de5480 == 0)
                rcx_6 = 0
            else
                rcx_6.b = GetCurrentThreadId() != data_143de5470
            
            *(rcx_6 + arg1 + 0x13a) = 1
            int64_t* rcx_7 = *(arg1 + 0xd0)
            char rax_2 = (*(*rcx_7 + 0x3a8))(rcx_7, arg2, arg3, zx.q(arg4))
            
            if (data_143de5480 != 0)
                rsi.b = GetCurrentThreadId() != data_143de5470
            
            *(rsi + arg1 + 0x13a) = 0
            return zx.q(rax_2)
        
        result.b = 0
    else
        result = sub_142111f50(arg1 + 0x188, 1, rdi_3.d, arg4)
        *arg3 = *(*(arg1 + 0x2d8) + rdi_3 * 0x10)

label_142129968:
return result
