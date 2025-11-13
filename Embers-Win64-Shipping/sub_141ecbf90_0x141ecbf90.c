// 函数: sub_141ecbf90
// 地址: 0x141ecbf90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *((*(*arg1 + 0x150))() + 0x128)

if (rdi != 0)
    int64_t* rcx = *(rdi + 0x288)
    
    if (rcx != 0)
        sub_141dbe590(rcx, 1, 1)
        void* rcx_1 = nullptr
        *(rdi + 0x288) = 0
        
        if (((arg1[1].d u>> 4).b & 1) == 0)
            rcx_1 = arg1[4]
        
        void* rax_4 = *(rcx_1 + 0x418)
        
        if (rax_4 != 0)
            void* rax_5 = *(rax_4 + 0x58)
            
            if (rax_5 != 0)
                *(rax_5 + 0x2b4) = 0

jump(*(*arg1 + 0x150))
