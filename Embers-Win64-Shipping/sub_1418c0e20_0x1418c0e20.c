// 函数: sub_1418c0e20
// 地址: 0x1418c0e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1

if (arg1 != 0)
    void* rax_2 = (*(*arg1 + 0x28))()
    
    if (rax_2 != 0)
        rbx = *(rax_2 + 0x60)
    
    if (rax_2 == 0 || rbx != 0)
        int64_t rax_4 = (*(*rbx + 8))(rbx)
        
        if (rax_4 != 0)
            return rax_4 + 0x68
        
        int64_t rax_7 = (*(*rbx + 0x10))(rbx)
        
        if (rax_7 != 0)
            return rax_7 + 0x70
        
        rax_7 = (*(*rbx + 0x18))(rbx)
        
        if (rax_7 != 0)
            return rax_7 + 0x70
        
        int64_t r9_1
        rax_4, r9_1 = (*(*rbx + 0x20))(rbx)
        
        if (rax_4 != 0)
            return rax_4 + 0x68
        
        sub_140af98a0("Unknown", 0x2f1, u"Unknown Vulkan RHI texture type", r9_1)
        sub_140afbb40()

return 0
