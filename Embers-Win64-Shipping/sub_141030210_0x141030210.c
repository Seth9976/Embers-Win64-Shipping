// 函数: sub_141030210
// 地址: 0x141030210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rdx

if (arg4 == 0)
labelid_1:
    rdx = nullptr
else
    void* rax_2 = (*(*arg4 + 0x48))(arg4)
    
    if (rax_2 == 0)
    labelid_1:
        rdx = nullptr
    else if (data_1439c7a34 u<= 1)
    label_141030283:
        
        if (rax_2 == 0)
        label_141030268:
            rdx = nullptr
        else
            rdx = *(rax_2 + 0xf0)
    else
        void* rcx_1 = *(rax_2 + 0xe8)
        
        if (rcx_1 != rax_2)
            rax_2 = rcx_1
        
        if (rax_2 != 0)
            while (*(rax_2 + 8) != *(arg1 + 0x138))
                rax_2 = *(rax_2 + 0xb8)
                
                if (rax_2 == 0)
                    goto label_141030268_1
            
            goto label_141030283
        
    label_141030268_1:
        rdx = nullptr

return sub_14103d8c0(arg1 + 0x250, rdx, arg3) __tailcall
