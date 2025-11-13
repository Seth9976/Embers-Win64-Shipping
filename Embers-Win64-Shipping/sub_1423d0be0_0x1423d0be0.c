// 函数: sub_1423d0be0
// 地址: 0x1423d0be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg3
int32_t i = 0
arg3.b = 1
uint8_t result = sub_140d3ccc0(arg2, rdi, arg3.b, 0, 0)

if (rdi[1].d s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        void* rbp_1 = *(rsi_1 + *rdi)
        result = sub_140d23cf0(rbp_1)
        
        if (result == 0)
            result = (*(rbp_1 + 8) u>> 0x12).b
            
            if ((1 & result) == 0)
                int32_t rdx_1 = rdi[1].d
                int32_t rax_4 = rdx_1 - i - 1
                
                if (rax_4 s>= 1)
                    rax_4 = 1
                
                if (rax_4 != 0)
                    int64_t rcx_2 = *rdi
                    memcpy(rcx_2 + (sx.q(i) << 3), rcx_2 + (sx.q(rdx_1 - rax_4) << 3), rax_4 << 3)
                    rdx_1 = rdi[1].d
                
                rdi[1].d = rdx_1 - 1
                result = sub_1405c53d0(rdi)
                i -= 1
                rsi_1 -= 8
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< rdi[1].d)

return result
