// 函数: sub_141ec0c90
// 地址: 0x141ec0c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*arg1 + 0x150))()
void* rdi = *(result + 0x128)

if (rdi != 0)
    int64_t* rcx = *(rdi + 0x288)
    
    if (rcx != 0)
        sub_141dbe590(rcx, 1, 1)
        void* rcx_1 = nullptr
        *(rdi + 0x288) = 0
        
        if (((arg1[1].d u>> 4).b & 1) == 0)
            rcx_1 = arg1[4]
        
        result = *(rcx_1 + 0x418)
        
        if (result != 0)
            result = *(result + 0x58)
            
            if (result != 0)
                *(result + 0x2b4) = 0

return result
