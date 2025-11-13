// 函数: sub_14141f4d0
// 地址: 0x14141f4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_14141f3a0(arg2)

if (rax != 0)
    void* r8_1 = *arg2
    
    if (r8_1 != 0 && *(r8_1 + 0x43) != 0 && (*(r8_1 + 0x28) & 1) != 0 && *(rax + 0x488) != 0)
        uint64_t rsi = *arg1
        void* rax_1 = sub_14141f3a0(arg2)
        int64_t* rcx_2 = nullptr
        
        if (rax_1 != 0)
            rcx_2 = *sub_1413147b0(rax_1 + 0x428, rsi, *(rax_1 + 0x428))
        
        int64_t* arg_18 = rcx_2
        
        if (rcx_2 != 0)
            (*(*rcx_2 + 0x30))()
        
        void*** result = sub_1410fccd0(arg1, &arg_18, u"ViewEyeAdaptation", 0)
        int64_t* rcx_5 = arg_18
        
        if (rcx_5 != 0)
            int64_t rdx_2 = *rcx_5
            (*(rdx_2 + 0x38))(rcx_5, rdx_2)
        
        return result

return sub_1410fccd0(arg1, &data_1439b70c0, u"DefaultViewEyeAdaptation", 0) __tailcall
