// 函数: sub_140dc00e0
// 地址: 0x140dc00e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0xe8)
int64_t* rsi = arg2[1]
int64_t rcx_1 = *arg2
int64_t arg_8 = rcx_1

if (rsi != 0)
    *(rsi + 0xc) += 1

uint64_t result = *(arg1 + 0x10)
uint64_t result_2 = result
int64_t r12_2 = (sx.q(*(arg1 + 0x18)) << 4) + result
uint64_t result_1 = result

if (result != r12_2)
    do
        int64_t* rdi_1 = *(result_2 + 8)
        int64_t r15_1 = 0
        
        if (rdi_1 != 0)
            result = zx.q(rdi_1[1].d)
            
            if (result.d == 0)
                rdi_1 = nullptr
            else
                result = zx.q(result.d + 1)
                rdi_1[1].d = result.d
                r15_1 = *result_2
        
        int64_t rbp_1 = 0
        
        if (rsi != 0)
            result = zx.q(rsi[1].d)
            
            if (result.d != 0)
                rbp_1 = rcx_1
                rsi[1].d = result.d
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                result = (**rdi_1)(rdi_1)
                int32_t temp2_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    result = (*(*rdi_1 + 8))(rdi_1, 1)
        
        if (r15_1 == rbp_1)
            int32_t r14_1 = ((result_2 - result_1) s>> 4).d
            
            if (r14_1 != 0xffffffff)
                int64_t rdi_3 = sx.q(r14_1) * 2
                int64_t* rcx_4 = *(*(arg1 + 0x10) + (rdi_3 << 3) + 8)
                
                if (rcx_4 != 0)
                    int32_t temp3_1 = *(rcx_4 + 0xc)
                    *(rcx_4 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rcx_4 + 8))(rcx_4, 1)
                
                int32_t r9_2 = *(arg1 + 0x18)
                int32_t rdx_2 = r9_2 - r14_1 - 1
                
                if (rdx_2 s>= 1)
                    rdx_2 = 1
                
                if (rdx_2 != 0)
                    int64_t rax_4 = *(arg1 + 0x10)
                    memcpy(rax_4 + (rdi_3 << 3), (sx.q(r9_2 - rdx_2) << 4) + rax_4, rdx_2 << 4)
                    r9_2 = *(arg1 + 0x18)
                
                *(arg1 + 0x18) = r9_2 - 1
                result = sub_1405a5010(arg1 + 0x10)
            
            break
        
        rcx_1 = arg_8
        result_2 += 0x10
    while (result_2 != r12_2)

if (rsi != 0)
    int32_t temp0_1 = *(rsi + 0xc)
    *(rsi + 0xc) -= 1
    
    if (temp0_1 == 1)
        result = (*(*rsi + 8))(rsi)

if (arg1 == -0xe8)
    return result

return LeaveCriticalSection(arg1 + 0xe8) __tailcall
