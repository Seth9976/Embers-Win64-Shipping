// 函数: sub_140a89600
// 地址: 0x140a89600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg1 + 0xc)
int64_t r9 = sx.q(arg1[1].d)
int32_t result_1 = r8 - r9.d
int64_t result = sx.q(result_1)

if (result * 0xc8 u>= 0x4000)
label_140a89636:
    
    if (result_1 s> 0x40)
        if (r9.d s> 0)
            int64_t* rcx_1 = data_143ddb3f0
            int64_t r9_1 = r9 * 0xc8
            
            if (rcx_1 != 0)
                int64_t rax_1 = (*(*rcx_1 + 0x38))(rcx_1, r9_1, 0, r9_1)
                r8 = *(arg1 + 0xc)
                r9_1 = rax_1
            
            int64_t rdx_2
            rdx_2:result = mulu.dp.q(0x47ae147ae147ae15, r9_1)
            r9 = r9_1 u/ 0xc8
    else if (r9.d != 0)
        r9 = zx.q(r8)
else
    result = zx.q(r8 * 2)
    
    if ((r9 * 3).d s< result.d)
        goto label_140a89636
    
    r9 = zx.q(r8)

if (r9.d != r8)
    *(arg1 + 0xc) = r9.d
    int64_t rdi_1 = *arg1
    
    if (rdi_1 != 0 || r9.d != 0)
        int64_t* rcx_2 = data_143ddb3f0
        
        if (rcx_2 == 0)
            sub_140a750a0()
            rcx_2 = data_143ddb3f0
        
        result = (*(*rcx_2 + 0x20))(rcx_2, rdi_1, sx.q(r9.d) * 0xc8, 0)
        *arg1 = result

return result
