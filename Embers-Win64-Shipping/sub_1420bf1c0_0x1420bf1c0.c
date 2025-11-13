// 函数: sub_1420bf1c0
// 地址: 0x1420bf1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg3[1].d = 0

if (*(arg3 + 0xc) != 0)
    sub_140638c50(arg3, 0)

int32_t rdi = 0
uint64_t result

while (true)
    if (rdi s< 0 || rdi s>= arg1[1].d)
        result.b = 0
    else
        result.b = 1
    
    if (result.b == 0)
        break
    
    void* rbp_1 = *(*arg1 + (sx.q(rdi) << 3))
    
    if (rbp_1 != 0)
        void* const rax_3
        
        if (arg2 == 0)
            rax_3 = nullptr
        else
            void* rax = sub_142452380()
            
            if (rax == 0)
                rax_3 = nullptr
            else
                int64_t rax_1 = sx.q(*(rax + 0x38))
                
                if (rax_1.d s> *(arg2 + 0x38) || *(*(arg2 + 0x30) + (rax_1 << 3)) != rax + 0x30)
                    rax_3 = nullptr
                else
                    rax_3 = arg2
        
        void* rdx_1 = *(rbp_1 + 0x10)
        result = sx.q(*(rax_3 + 0x38))
        
        if (result.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (result << 3)) == rax_3 + 0x30)
            int64_t rsi_1 = sx.q(arg3[1].d)
            int32_t rax_4 = (rsi_1 + 1).d
            arg3[1].d = rax_4
            
            if (rax_4 s> *(arg3 + 0xc))
                sub_1405a4d70(arg3)
            
            *(*arg3 + (rsi_1 << 3)) = rbp_1
    
    rdi += 1

return result
