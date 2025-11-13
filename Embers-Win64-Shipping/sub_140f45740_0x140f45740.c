// 函数: sub_140f45740
// 地址: 0x140f45740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1)
int64_t rsi = rdi

if (arg1 s< 0)
    return zx.q(rdi.d)

int64_t temp0_1

do
    char* rbx_2 = *(*(*(arg2 + 0x10) + (rsi << 3)) + 0x10) + 0x1a8
    
    if (*(rbx_2 + 0x10) != 0)
        int64_t* rcx_1 = *(rbx_2 + 8)
        
        if (rcx_1 != 0 && (*(*rcx_1 + 0x28))(rcx_1) != 0)
            int64_t* rcx_2
            
            if (*(rbx_2 + 0x10) == 0)
                rcx_2 = nullptr
            else
                rcx_2 = *(rbx_2 + 8)
            
            char arg_8
            (*(*rcx_2 + 0x48))(rcx_2, &arg_8)
            *rbx_2 = arg_8
    
    if (*rbx_2 != data_1439ae51d)
        void* rbx_4 = *(*(arg2 + 0x10) + (rsi << 3))
        
        if (*(rbx_4 + 0x30) != 0)
            int64_t* rcx_3 = *(rbx_4 + 0x28)
            
            if (rcx_3 != 0 && (*(*rcx_3 + 0x28))(rcx_3) != 0)
                int64_t* rcx_4
                
                if (*(rbx_4 + 0x30) == 0)
                    rcx_4 = nullptr
                else
                    rcx_4 = *(rbx_4 + 0x28)
                
                *(rbx_4 + 0x20) = (*(*rcx_4 + 0x48))(rcx_4)
        
        if (*(rbx_4 + 0x20) != 0)
            break
    
    rdi = zx.q(rdi.d - 1)
    temp0_1 = rsi
    rsi -= 1
while (temp0_1 - 1 s>= 0)
return zx.q(rdi.d)
