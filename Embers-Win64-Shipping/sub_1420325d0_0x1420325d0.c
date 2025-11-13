// 函数: sub_1420325d0
// 地址: 0x1420325d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = data_143f5b298

if (rcx != 0)
    void* rcx_1 = *(rcx + 0x788)
    
    if (rcx_1 != 0 && *(rcx_1 + 0xc0) != 0)
        int64_t* rcx_2 = *(rcx_1 + 0xb8)
        int32_t rax_2 = (*(*rcx_2 + 0x100))(rcx_2)
        int32_t rcx_3 = *(arg1 + 0x98)
        
        if (rcx_3 == 0)
            int64_t rax_5
            rax_5.b = rax_2 != 0
            return rax_5
        
        if (rcx_3 == 1)
            int64_t rax_4
            rax_4.b = rax_2 != 1
            return rax_4
        
        int64_t rax_3
        rax_3.b = rax_2 != 2
        return rax_3

int64_t rax
rax.b = 0
return rax
