// 函数: sub_140f45640
// 地址: 0x140f45640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg1 + 1
int64_t rdi = sx.q(rsi)
int64_t rbp = sx.q((**arg2)(arg2))

if (rdi s>= rbp)
    return zx.q(rsi)

do
    char* rbx_2 = *(*(arg2[2] + (rdi << 3)) + 0x10) + 0x1a8
    
    if (*(rbx_2 + 0x10) != 0)
        int64_t* rcx_2 = *(rbx_2 + 8)
        
        if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
            int64_t* rcx_3
            
            if (*(rbx_2 + 0x10) == 0)
                rcx_3 = nullptr
            else
                rcx_3 = *(rbx_2 + 8)
            
            char arg_8
            (*(*rcx_3 + 0x48))(rcx_3, &arg_8)
            *rbx_2 = arg_8
    
    if (*rbx_2 != data_1439ae51d)
        void* rbx_3 = *(arg2[2] + (rdi << 3))
        
        if (*(rbx_3 + 0x30) != 0)
            int64_t* rcx_4 = *(rbx_3 + 0x28)
            
            if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4) != 0)
                int64_t* rcx_5
                
                if (*(rbx_3 + 0x30) == 0)
                    rcx_5 = nullptr
                else
                    rcx_5 = *(rbx_3 + 0x28)
                
                *(rbx_3 + 0x20) = (*(*rcx_5 + 0x48))(rcx_5)
        
        if (*(rbx_3 + 0x20) != 0)
            break
    
    rsi += 1
    rdi += 1
while (rdi s< rbp)

return zx.q(rsi)
