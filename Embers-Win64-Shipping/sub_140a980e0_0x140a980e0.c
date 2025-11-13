// 函数: sub_140a980e0
// 地址: 0x140a980e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *arg1
*arg1 = 1
arg1[1].w = 0

if (result == 0)
    int64_t* rbx_1 = *(arg1 + 0x108)
    
    if (rbx_1 != 0)
        result = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (result == 1 && rbx_1 != 0)
            if ((*(rbx_1 + 0x19) & result.b) != 0)
                sub_140a74f90(*rbx_1)
            
            int64_t* rcx_1 = rbx_1[2]
            
            if (rcx_1 != 0)
                sub_140abfb60(rcx_1)
            
            return j_sub_140a74f90(rbx_1) __tailcall

return result
