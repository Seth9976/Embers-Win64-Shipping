// 函数: sub_141e0a140
// 地址: 0x141e0a140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1

if (arg1 != 0)
    void* rdi_1 = arg1[4]
    
    if (rdi_1 != 0)
        void* rax_1 = sub_142591550()
        void* rdx_1 = *(rdi_1 + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            void* r8_1
            r8_1.b = 1
            sub_141f3e990(rbx[4], 1, r8_1.b)
    
    arg1 = rbx[0x48]
    
    if (arg1 == 0)
        int64_t* rax_5 = (*(*rbx + 0x300))(rbx)
        rbx[0x48] = rax_5
        jump(*(*rax_5 + 0x48))

jump(*(*arg1 + 0x48))
