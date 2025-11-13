// 函数: sub_14090e900
// 地址: 0x14090e900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg3
int64_t rbp = arg2
int64_t result

if (arg3 s<= 0)
label_14090e9ad:
    result.b = 1
else
    int64_t rsi_1 = int.q(fconvert.t(10000000.0))
    
    while (true)
        int64_t* rcx = *(arg1 + 0x88)
        
        if ((*(*rcx + 0x78))(rcx, 1, rsi_1) != 0)
        label_14090e97e:
            int64_t* rcx_3 = *(arg1 + 0x88)
            int32_t result_1 = 0
            
            if ((*(*rcx_3 + 0x58))(rcx_3, rbp, zx.q(rdi), &result_1).b != 0)
                result = sx.q(result_1)
                rdi -= result.d
                rbp += result
                
                if (rdi s<= 0)
                    goto label_14090e9ad
                
                continue
        else
            while (true)
                int64_t* rcx_1 = *(arg1 + 0x88)
                
                if ((*(*rcx_1 + 0x80))(rcx_1).d == 2)
                    break
                
                int64_t* rcx_2 = *(arg1 + 0x88)
                
                if ((*(*rcx_2 + 0x78))(rcx_2, 1, rsi_1) != 0)
                    goto label_14090e97e
        
        result.b = 0
        break

return result
