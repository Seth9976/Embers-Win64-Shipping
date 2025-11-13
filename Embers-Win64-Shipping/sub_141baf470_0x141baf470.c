// 函数: sub_141baf470
// 地址: 0x141baf470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x20)

if (rbx != 0)
    void* rax_1 = sub_141c243c0()
    void* rdx_1 = *(rbx + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        int64_t* rbx_1 = *(rbx + 0x20)
        
        if (rbx_1 != 0)
            void* rax_4 = sub_141c122a0()
            void* rcx_1 = rbx_1[2]
            int64_t rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_5.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30)
                jump(*(*rbx_1 + 0x290))

return 0
