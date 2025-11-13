// 函数: sub_14226ec60
// 地址: 0x14226ec60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *arg1

if (result != 0)
    void* rax_1 = sub_14255d000()
    void* rdx_1 = *(result + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        return result
    
    void* rbx = *arg1
    
    if (rbx != 0)
        void* rax_5 = sub_142497110()
        void* rcx_1 = *(rbx + 0x10)
        int64_t rdx_2 = sx.q(*(rax_5 + 0x38))
        
        if (rdx_2.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rdx_2 << 3)) == rax_5 + 0x30)
            return *(rbx + 0x250)

return 0
