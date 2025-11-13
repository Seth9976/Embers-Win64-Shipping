// 函数: sub_14188abd0
// 地址: 0x14188abd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x300) != 0)
    while (true)
        void* rax_1 = *(arg1 + 0x300)
        
        if (rax_1 != 0)
            int64_t* rcx = *(rax_1 + 0x70)
            
            if ((*(*rcx + 0x20))(rcx, 0xffffffff, 0) != 0)
                break

void arg_8
int32_t* result
result.b = *sub_140b162a0(arg1 + 0x258, &arg_8, arg2) != 0xffffffff
return result
