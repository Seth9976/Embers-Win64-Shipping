// 函数: sub_14254ec00
// 地址: 0x14254ec00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r14 = arg2

if (arg4 != 0)
    int32_t* rdi_1 = arg3 + 0x20
    int32_t i
    
    do
        int64_t* rbx_1 = *(rdi_1 - 0x10)
        void* rsi_1 = r14
        r14 += 0x28
        int64_t var_38 = *(rdi_1 - 0x18)
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        if (&var_38 != rsi_1 + 8)
            var_38.o = *(rsi_1 + 8)
            *(rsi_1 + 8) = var_38.o
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        if (rsi_1 + 0x18 != &rdi_1[-2])
            uint32_t count = *rdi_1
            int64_t r15_1 = *(rdi_1 - 8)
            int32_t r8 = *(rsi_1 + 0x24)
            *(rsi_1 + 0x20) = count
            
            if (count != 0 || r8 != 0)
                sub_1405da9e0(rsi_1 + 0x18, count, r8)
                memcpy(*(rsi_1 + 0x18), r15_1, count)
            else
                *(rsi_1 + 0x24) = 0
        
        rdi_1 = &rdi_1[0xa]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result
result.b = 1
return result
