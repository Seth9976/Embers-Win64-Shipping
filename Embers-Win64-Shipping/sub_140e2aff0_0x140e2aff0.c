// 函数: sub_140e2aff0
// 地址: 0x140e2aff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r14 = arg2

if (arg4 != 0)
    int64_t* rsi_1 = arg3 + 8
    int32_t i
    
    do
        void* rbx_1 = r14
        r14 += 0x88
        *(rbx_1 + 8) = *rsi_1
        *(rbx_1 + 0x10) = *(rsi_1 + 8)
        sub_140693390(rbx_1 + 0x20, &rsi_1[3])
        *(rbx_1 + 0x48) = rsi_1[8]
        *(rbx_1 + 0x50) = rsi_1[9]
        *(rbx_1 + 0x58) = *(rsi_1 + 0x50)
        *(rbx_1 + 0x68) = rsi_1[0xc].d
        *(rbx_1 + 0x6c) = *(rsi_1 + 0x64)
        *(rbx_1 + 0x6d) = *(rsi_1 + 0x65)
        *(rbx_1 + 0x6e) = *(rsi_1 + 0x66)
        *(rbx_1 + 0x6f) = *(rsi_1 + 0x67)
        int64_t* rdi_1 = rsi_1[0xe]
        int64_t var_28 = rsi_1[0xd]
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
        
        if (&var_28 != rbx_1 + 0x70)
            var_28.o = *(rbx_1 + 0x70)
            *(rbx_1 + 0x70) = var_28.o
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp2_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        *(rbx_1 + 0x80) ^= (*(rbx_1 + 0x80) ^ rsi_1[0xf].b) & 1
        char rax = *(rbx_1 + 0x80)
        char rcx_4 = rax ^ rsi_1[0xf].b
        rsi_1 = &rsi_1[0x11]
        *(rbx_1 + 0x80) = (rcx_4 & 2) ^ rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
