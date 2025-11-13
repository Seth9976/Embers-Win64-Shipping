// 函数: sub_1410302a0
// 地址: 0x1410302a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = nullptr
void* const r9

if (arg4 == 0)
    r9 = nullptr
else
    void* rax = (*(*arg4 + 0x48))(arg4)
    r9 = rax
    
    if (rax != 0 && data_1439c7a34 u> 1)
        void* rcx_1 = *(rax + 0xe8)
        
        if (rcx_1 != rax)
            r9 = rcx_1
        
        if (r9 != 0)
            while (*(r9 + 8) != *(arg1 + 0x138))
                r9 = *(r9 + 0xb8)
                
                if (r9 == 0)
                    break

uint32_t rcx_2 = zx.d(*(arg2 + 0x2c))

if (rcx_2 == 0)
    if (r9 != 0)
        rbx = *(r9 + 0xf0)
    
    sub_14103d970(arg1 + 0x250, rbx, arg3)
else if (rcx_2 == 1)
    if (r9 != 0)
        rbx = *(r9 + 0xf0)
    
    sub_14103d600(arg1 + 0x250, rbx, arg3)
else if (rcx_2 == 2)
    if (r9 != 0)
        rbx = *(r9 + 0xf0)
    
    sub_14103d6b0(arg1 + 0x250, rbx, arg3)
else if (rcx_2 == 3)
    if (r9 != 0)
        rbx = *(r9 + 0xf0)
    
    sub_14103d760(arg1 + 0x250, rbx, arg3)
else if (rcx_2 == 4)
    if (r9 != 0)
        rbx = *(r9 + 0xf0)
    
    sub_14103d810(arg1 + 0x250, rbx, arg3)
