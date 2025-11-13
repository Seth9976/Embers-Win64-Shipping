// 函数: sub_141c05fe0
// 地址: 0x141c05fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* rbp = arg2

if (arg4 != 0)
    void* rbx_1 = arg3 + 0x18
    int32_t i
    
    do
        void* rsi_1 = rbp
        rbp += 0x270
        *(rsi_1 + 0x10) = *(rbx_1 - 8)
        *(rsi_1 + 0x18) = *rbx_1
        *(rsi_1 + 0x20) = *(rbx_1 + 8)
        *(rsi_1 + 0x30) = *(rbx_1 + 0x18)
        int64_t* rdi_1 = *(rbx_1 + 0x30)
        int64_t var_28 = *(rbx_1 + 0x28)
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        if (&var_28 != rsi_1 + 0x40)
            var_28.o = *(rsi_1 + 0x40)
            *(rsi_1 + 0x40) = var_28.o
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp2_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        *(rsi_1 + 0x50) = *(rbx_1 + 0x38)
        *(rsi_1 + 0x58) = *(rbx_1 + 0x40)
        *(rsi_1 + 0x5c) = *(rbx_1 + 0x44)
        sub_140693390(rsi_1 + 0x60, rbx_1 + 0x48)
        *(rsi_1 + 0x88) = *(rbx_1 + 0x70)
        *(rsi_1 + 0x90) = *(rbx_1 + 0x78)
        sub_140693390(rsi_1 + 0xa0, rbx_1 + 0x88)
        *(rsi_1 + 0xc8) = *(rbx_1 + 0xb0)
        sub_140693270(rsi_1 + 0xd8, rbx_1 + 0xc0)
        sub_140693270(rsi_1 + 0x160, rbx_1 + 0x148)
        sub_140693270(rsi_1 + 0x1e8, rbx_1 + 0x1d0)
        rbx_1 += 0x270
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result
result.b = 1
return result
