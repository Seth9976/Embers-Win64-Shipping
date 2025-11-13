// 函数: sub_141f5b770
// 地址: 0x141f5b770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int96_t var_18 = (*(arg1 + 0x1e0)).12
void* rcx = *(arg1 + 0x440)

if (rcx != 0)
    int64_t* rcx_1 = *(rcx + 0x130)
    
    if (rcx_1 != 0 && (var_18.d.d f!= 0f || var_18:4.d.d f!= 0f || not(var_18:8.d.d f== 0f)))
        uint8_t rax = *(arg1 + 0x44c)
        
        if ((rax & 8) == 0)
            rax = rcx_1[5].b
        else
            rax u>>= 4
        
        if ((rax & 1) != 0)
            return 0
        
        if ((*(*rcx_1 + 0x268))(rcx_1, arg1 + 0x1c0) != 0)
            return 0

return 1
