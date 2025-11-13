// 函数: sub_1421cb620
// 地址: 0x1421cb620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x10)
int32_t i = 0
void* r13 = **(result + 0x40)

if (*(arg3 + 0x88) s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        result = *(arg3 + 0x80)
        int64_t* rsi_1 = *(rdi_1 + result)
        
        if (rsi_1 != 0)
            result = zx.q(rsi_1[5].b)
            
            if (result.b s< 0)
                result.b &= 0xc
                
                if (result.b == 0xc)
                    int512_t zmm3
                    zmm3.o = arg2
                    result = (*(*rsi_1 + 0x278))(rsi_1, arg1, 
                        zx.q(sub_1421b7be0(arg1, *(*(r13 + 0x80) + rdi_1))), zmm3, arg4)
        
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< *(arg3 + 0x88))

return result
