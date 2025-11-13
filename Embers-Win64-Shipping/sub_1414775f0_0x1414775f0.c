// 函数: sub_1414775f0
// 地址: 0x1414775f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *arg1
int64_t* rdi = *(*result + (sx.q(arg2) << 3))
int64_t* result_2 = rdi[2]

if (result_2 == 0)
    int64_t rbx = sx.q(rdi[3].d)
    
    if (rbx.d s< *(rdi + 0x1c) + rbx.d)
        int64_t rsi = rbx
        
        do
            void* rdx_2 = *rdi
            char r8_3 = *(rsi + *(rdx_2 + 0xdf8))
            
            if ((r8_3 & 1) != 0)
                sub_141489720(rdi, *(rdx_2 + 0xde8) + sx.q(rbx.d) * 0x28, r8_3, 
                    *(*(rdx_2 + 0xdb8) + (rsi << 3)), *(*(rdx_2 + 0xdd8) + (rsi << 3)))
            
            rbx = zx.q(rbx.d + 1)
            result = zx.q(*(rdi + 0x1c) + rdi[3].d)
            rsi += 1
        while (rbx.d s< result.d)
else
    for (int32_t i = 0; i s>= 0; i += 1)
        if (i s>= result_2[0x801].d)
            break
        
        result = result_2[0x800]
        int64_t* result_1 = result_2
        
        if (result != 0)
            result_1 = result
        
        if ((result_1[sx.q(i) * 8 + 7].b & 1) != 0)
            result = sub_141489720(rdi, &result_1[2 + sx.q(i) * 8], result_1[sx.q(i) * 8 + 7].b, 
                result_1[sx.q(i) * 8], result_1[sx.q(i) * 8 + 1])

return result
