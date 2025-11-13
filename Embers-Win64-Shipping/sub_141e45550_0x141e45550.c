// 函数: sub_141e45550
// 地址: 0x141e45550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1

if (arg1 != 0)
    void* rsi_1 = arg1[4]
    
    if (rsi_1 != 0)
        void* rax_1 = sub_142591550()
        void* rdx = *(rsi_1 + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
            void* r8_1
            r8_1.b = 1
            sub_141f3e990(rbx[4], 1, r8_1.b)
    
    arg1 = rbx[0x48]
    
    if (arg1 == 0)
        int64_t* rax_5 = (*(*rbx + 0x300))(rbx)
        rbx[0x48] = rax_5
        arg1 = rax_5

if (*arg2 == rbx[0x4d])
    *(arg1 + 0x80c) = arg2[0x25].d

return j_sub_141df5a80(rbx, arg2) __tailcall
