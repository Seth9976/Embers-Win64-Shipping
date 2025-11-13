// 函数: sub_1426fb720
// 地址: 0x1426fb720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x20)

if (rbx != 0)
    void* rax_1 = sub_142497110()
    void* rdx_1 = *(rbx + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        return *(rbx + 0x250)
    
    void* const result = *(arg1 + 0x20)
    
    if (result != 0)
        void* rax_5 = sub_142452380()
        void* rdx_2 = *(result + 0x10)
        int64_t rax_6 = sx.q(*(rax_5 + 0x38))
        
        if (rax_6.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_6 << 3)) == rax_5 + 0x30)
            return result

return nullptr
