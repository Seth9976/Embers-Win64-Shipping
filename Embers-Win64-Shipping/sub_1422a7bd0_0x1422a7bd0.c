// 函数: sub_1422a7bd0
// 地址: 0x1422a7bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm0 = sub_141dd1570(arg1)
int64_t result = (*(*arg1 + 0x150))(arg1)
int64_t* rsi = *(result + 0x130)

if (rsi != 0)
    result = (*(*rsi + 0x670))(rsi, arg1)

if (arg1[0x1e].b u>= 3)
    int64_t result_2 = arg1[0x1c]
    
    if (result_2 == 0)
        result_2 = 0
    else
        void* rax_2
        rax_2, zmm0 = sub_142497110()
        void* rdx_2 = *(result_2 + 0x10)
        result = sx.q(*(rax_2 + 0x38))
        
        if (result.d s> *(rdx_2 + 0x38))
            result_2 = 0
        else
            int64_t result_1 = result
            result = *(rdx_2 + 0x30)
            
            if (*(result + (result_1 << 3)) != rax_2 + 0x30)
                result_2 = 0
            else
                void* rax_3
                rax_3, zmm0 = sub_14256a090()
                void* r8_2 = *(result_2 + 0x10)
                char rdx_3 = 0
                int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                
                if (rax_4.d s<= *(r8_2 + 0x38))
                    result = result_2
                
                if (rax_4.d s> *(r8_2 + 0x38) || *(*(r8_2 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                    result = 0
                
                *(arg1 + 0x22a) &= 0xf7
                
                if (result == 0)
                    rdx_3 = 8
                
                *(arg1 + 0x22a) |= rdx_3
    
    if (rsi != 0)
        (*(*rsi + 0x648))(rsi, result_2)
        result = zx.q(int.d(zmm0))
        *(arg1 + 0x22c) = result.d

return result
