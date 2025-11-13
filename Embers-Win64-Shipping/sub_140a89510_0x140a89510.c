// 函数: sub_140a89510
// 地址: 0x140a89510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0xc)
int64_t r8 = sx.q(arg1[1].d)
int32_t result_1 = r9 - r8.d
int64_t result = sx.q(result_1)

if (result * 0x28 u>= 0x4000)
label_140a89547:
    
    if (result_1 s> 0x40)
        if (r8.d s> 0)
            int64_t* r10_1 = data_143ddb3f0
            int64_t rcx_2 = r8 * 0x28
            
            if (r10_1 != 0)
                int64_t rax_1 = (*(*r10_1 + 0x38))(r10_1, rcx_2, 0)
                r9 = *(arg1 + 0xc)
                rcx_2 = rax_1
            
            int64_t rdx_3
            rdx_3:result = mulu.dp.q(-0x3333333333333333, rcx_2)
            r8 = rcx_2 u/ 0x28
    else if (r8.d != 0)
        r8 = zx.q(r9)
else
    result = zx.q(r9 * 2)
    
    if ((r8 * 3).d s< result.d)
        goto label_140a89547
    
    r8 = zx.q(r9)

if (r8.d != r9)
    *(arg1 + 0xc) = r8.d
    int64_t rsi_1 = *arg1
    
    if (rsi_1 != 0 || r8.d != 0)
        int64_t* rcx_4 = data_143ddb3f0
        
        if (rcx_4 == 0)
            sub_140a750a0()
            rcx_4 = data_143ddb3f0
        
        result = (*(*rcx_4 + 0x20))(rcx_4, rsi_1, sx.q(r8.d) * 0x28, 0)
        *arg1 = result

return result
