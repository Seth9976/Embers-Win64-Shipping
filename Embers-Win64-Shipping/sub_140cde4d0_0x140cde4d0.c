// 函数: sub_140cde4d0
// 地址: 0x140cde4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = arg4
int32_t r13 = *(arg1 + 0x80)
int32_t r15 = arg2[1].d
void* r9 = arg1
int32_t r12 = *(*(arg1 + 0x78) + 0x3c)
uint64_t result

if (arg3 == 0)
    result.b = r15 == 0
    return result

int32_t var_44 = r13

if (r15 != arg3[1].d)
label_140cde5e7:
    result.b = 0
else
    int32_t rsi_1 = 0
    
    if (r15 s> 0)
        int32_t r14_1 = 0
        result.b = not.b(r13.b)
        r13.b = not.b(r13.b)
        result.b &= 1
        r13.b &= 1
        char result_1 = result.b
        int32_t rbp_1 = 0
        
        do
            void* r8
            
            if (arg3[1].d != 0)
                void* rcx = *arg3
                
                if (result.b == 0 && (rcx.b & 1) != 0)
                    rcx = (rcx s>> 1) + arg3
                
                r8 = sx.q(rbp_1) + rcx
            else
                r8 = nullptr
            
            void* rdx
            
            if (arg2[1].d != 0)
                void* rcx_2 = *arg2
                
                if (r13.b == 0 && (rcx_2.b & 1) != 0)
                    rcx_2 = (rcx_2 s>> 1) + arg2
                
                rdx = sx.q(r14_1) + rcx_2
            else
                rdx = nullptr
            
            int64_t* rcx_4 = *(r9 + 0x78)
            
            if ((*(*rcx_4 + 0x80))(rcx_4, rdx, r8, zx.q(r10)).b == 0)
                goto label_140cde5e7
            
            result = zx.q(result_1)
            rsi_1 += 1
            r9 = arg1
            rbp_1 += r12
            r10 = arg4
            r14_1 += r12
        while (rsi_1 s< r15)
    
    result.b = 1

return result
