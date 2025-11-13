// 函数: sub_1417d2920
// 地址: 0x1417d2920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t rsi = *(arg1 + 0x158)
int32_t rsi_1 = rsi - 1

if (rsi - 1 s>= 0)
    int64_t r14_1 = sx.q(rsi_1) << 3
    int64_t r15_1 = r14_1
    int32_t temp1_1
    
    do
        void* rbx_1 = *(r14_1 + *(arg1 + 0x150))
        (*(*(rbx_1 + 8) + 0x30))(rbx_1 + 8)
        (*(*(rbx_1 + 0x28) + 0x30))(rbx_1 + 0x28)
        (*(*(rbx_1 + 0x48) + 0x30))(rbx_1 + 0x48)
        (*(*(rbx_1 + 0x68) + 0x30))(rbx_1 + 0x68)
        (*(*(rbx_1 + 0x88) + 0x30))(rbx_1 + 0x88)
        (*(*(rbx_1 + 0xa8) + 0x30))(rbx_1 + 0xa8)
        void* rbp_1 = *(r14_1 + *(arg1 + 0x150))
        
        if (rbp_1 != 0)
            sub_1405ec8a0(rbp_1 + 0x2f0)
            sub_1405ec8a0(rbp_1 + 0x2e8)
            sub_1405ec8a0(rbp_1 + 0x2e0)
            sub_1405ec8a0(rbp_1 + 0x2d8)
            sub_1405d1550(rbp_1 + 0x2a8)
            sub_14081d2f0(rbp_1 + 0xa8)
            *(rbp_1 + 0x88) = &data_142e0ef98
            sub_14081c9d0(rbp_1 + 0x98)
            sub_1419948a0(rbp_1 + 0x88)
            *(rbp_1 + 0x68) = &data_142dda848
            sub_1405d1550(rbp_1 + 0x78)
            sub_1419948a0(rbp_1 + 0x68)
            *(rbp_1 + 0x48) = &data_142dda848
            sub_1405d1550(rbp_1 + 0x58)
            sub_1419948a0(rbp_1 + 0x48)
            *(rbp_1 + 0x28) = &data_142dda848
            sub_1405d1550(rbp_1 + 0x38)
            sub_1419948a0(rbp_1 + 0x28)
            *(rbp_1 + 8) = &data_142dda848
            sub_1405d1550(rbp_1 + 0x18)
            sub_1419948a0(rbp_1 + 8)
            j_sub_140a74f90(rbp_1)
        
        int32_t rdx_4 = *(arg1 + 0x158)
        int32_t rax_11 = rdx_4 - rsi_1 - 1
        
        if (rax_11 s>= 1)
            rax_11 = 1
        
        if (rax_11 != 0)
            int64_t rcx_23 = *(arg1 + 0x150)
            memcpy(rcx_23 + r15_1, rcx_23 + (sx.q(rdx_4 - rax_11) << 3), rax_11 << 3)
            rdx_4 = *(arg1 + 0x158)
        
        *(arg1 + 0x158) = rdx_4 - 1
        result = sub_1405c53d0(arg1 + 0x150)
        r15_1 -= 8
        r14_1 -= 8
        temp1_1 = rsi_1
        rsi_1 -= 1
    while (temp1_1 - 1 s>= 0)

return result
