// 函数: sub_140e2ab00
// 地址: 0x140e2ab00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r14 = arg2

if (arg4 != 0)
    void* rsi_1 = arg3 + 0xa
    int32_t i
    
    do
        void* rbp_1 = r14
        r14 += 0x70
        uint64_t* r13_1 = *(rbp_1 + 0x30)
        *(rbp_1 + 8) = *(rsi_1 - 2)
        *(rbp_1 + 0xa) = *rsi_1
        *(rbp_1 + 0xc) = *(rsi_1 + 2)
        *(rbp_1 + 0x10) = *(rsi_1 + 6)
        *(rbp_1 + 0x18) = *(rsi_1 + 0xe)
        *(rbp_1 + 0x20) = *(rsi_1 + 0x16)
        *(rbp_1 + 0x28) = *(rsi_1 + 0x1e)
        int64_t* r15_1 = *(rsi_1 + 0x26)
        
        if (r13_1 != r15_1)
            int64_t rdi_1 = sx.q(r15_1[9].d)
            void* rbx_1 = &r13_1[7]
            sub_1405a4aa0(rbx_1, 0, rdi_1.d, 4)
            void* rax_5 = r15_1[8]
            void* rdx = &r15_1[7]
            void* r9 = *(rbx_1 + 8)
            
            if (rax_5 != 0)
                rdx = rax_5
            
            if (r9 != 0)
                rbx_1 = r9
            
            memcpy(rbx_1, rdx, (rdi_1 << 2).d)
            r13_1[9].d = rdi_1.d
            sub_140e29380(r13_1, r15_1)
        
        sub_140627710(rbp_1 + 0x38, rsi_1 + 0x2e)
        *(rbp_1 + 0xc) = *(rsi_1 + 2)
        *(rbp_1 + 0x50) = *(rsi_1 + 0x46)
        *(rbp_1 + 0x54) = *(rsi_1 + 0x4a)
        *(rbp_1 + 0x58) = *(rsi_1 + 0x4e)
        *(rbp_1 + 0x5c) = *(rsi_1 + 0x52)
        *(rbp_1 + 0x5d) = *(rsi_1 + 0x53)
        *(rbp_1 + 0x60) = *(rsi_1 + 0x56)
        *(rbp_1 + 0x68) = *(rsi_1 + 0x5e)
        *(rbp_1 + 0x69) = *(rsi_1 + 0x5f)
        char rax = *(rsi_1 + 0x60)
        rsi_1 += 0x70
        *(rbp_1 + 0x6a) = rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
