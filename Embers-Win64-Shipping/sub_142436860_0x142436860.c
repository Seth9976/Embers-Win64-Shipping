// 函数: sub_142436860
// 地址: 0x142436860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0

while (true)
    int64_t rax
    
    if (rbx s< 0 || rbx s>= *(arg1 + 0x1d0))
        rax.b = 0
    else
        rax.b = 1
    
    if (rax.b == 0)
        break
    
    rax = sub_140d3c6e0(*(arg1 + 0x1c8) + (sx.q(rbx) << 3))
    
    if (rax != 0)
        void* result = *(rax + 0x298)
        
        if (result != 0)
            void* rax_2 = sub_142531230()
            void* rdx_1 = *(result + 0x10)
            rax = sx.q(*(rax_2 + 0x38))
            
            if (rax.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax << 3)) == rax_2 + 0x30)
                return result
    
    rbx += 1

return 0
