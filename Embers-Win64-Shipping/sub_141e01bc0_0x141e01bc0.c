// 函数: sub_141e01bc0
// 地址: 0x141e01bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    void* result = sub_140d21950(arg1, sub_14245d9a0())
    
    if (result != 0)
        return result
    
    void* rax_2 = sub_140bdf670()
    void* rdx_2 = arg1[2]
    int64_t rax_3 = sx.q(*(rax_2 + 0x38))
    
    if (rax_3.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_3 << 3)) == rax_2 + 0x30)
        if (arg1[0x23] == 0)
            (*(*arg1 + 0x390))(arg1)
        
        void* rbx_1 = arg1[0x54]
        
        if (rbx_1 != 0)
            return sub_140d21950(rbx_1, sub_14245d9a0()) __tailcall

return nullptr
