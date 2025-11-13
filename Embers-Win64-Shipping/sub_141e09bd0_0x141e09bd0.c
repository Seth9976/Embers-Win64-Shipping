// 函数: sub_141e09bd0
// 地址: 0x141e09bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *arg1
int64_t result = sx.q(arg1[1].d)

for (void* rsi_1 = result * 0x98 + i; i != rsi_1; i = &i[0x13])
    int64_t rax = *arg2
    int16_t arg_8 = 0xffff
    (*(rax + 0x1d8))(arg2, &data_1439a9418)
    result = (*(*arg2 + 0x1d8))(arg2, &data_1439a94c8)
    
    if ((arg2[5].b & 1) != 0)
        int512_t zmm1_1
        result, zmm1_1 = sub_140b4e7c0(arg2, &data_1439a9418)
        
        if (result.d s< 7)
            if (arg2[8].d s>= 0x184)
                int64_t* rcx_3 = arg2[1]
                int16_t* rdx = *rcx_3
                
                if (&rdx[1] u> rcx_3[1])
                    int16_t* rdx_1 = &arg_8
                    
                    if ((*(arg2 + 0x29) & 0x20) != 0)
                        sub_140b54000(arg2, rdx_1, zmm1_1)
                    else
                        (*(*arg2 + 0x150))(arg2, rdx_1, 2)
                else
                    arg_8 = *rdx
                    *rcx_3 += 2
                
                i[2].w = arg_8
            
            result = *i
            i[1] = result

return result
