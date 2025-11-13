// 函数: sub_14139d4c0
// 地址: 0x14139d4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg3 + 0x38))(arg3, 0)
int128_t zmm0

if (rax_1 == 0)
    zmm0 = *(arg1 + 8)
else
    void* rbx_1 = *(rax_1 + 0x50)
    
    if (rbx_1 == 0)
        zmm0 = *(arg1 + 8)
    else
        int64_t* rcx_2 = *(**arg1 + 0x18)
        
        if (*(rbx_1 + 0x10) != *(*(*rcx_2 + 8))(rcx_2))
            zmm0 = *(arg1 + 8)
        else
            void* rax_5 = *arg1
            
            if (*(rax_5 + 0x1524) != 2)
                zmm0 = *(rax_5 + 0x258)
            else
                zmm0 = *(rax_5 + 0x1598)

*arg2 = zmm0
return arg2
