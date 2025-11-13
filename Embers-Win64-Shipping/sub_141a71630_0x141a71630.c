// 函数: sub_141a71630
// 地址: 0x141a71630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
uint64_t* r14 = arg2

if (arg4 != 0)
    int32_t* rsi_1 = arg3 + 0x48
    int32_t i
    
    do
        uint64_t* rbp_1 = r14
        r14 = &r14[0x1e]
        
        if (rbp_1 != &rsi_1[-0x12])
            int64_t rdi_1 = sx.q(*rsi_1)
            void* rbx_1 = &rbp_1[7]
            sub_1405a4aa0(rbx_1, 0, rdi_1.d, 4)
            void* rax = *(rsi_1 - 8)
            void* rdx = &rsi_1[-4]
            void* r9 = *(rbx_1 + 8)
            
            if (rax != 0)
                rdx = rax
            
            if (r9 != 0)
                rbx_1 = r9
            
            memcpy(rbx_1, rdx, (rdi_1 << 2).d)
            rbp_1[9].d = rdi_1.d
            sub_141a6f930(rbp_1, &rsi_1[-0x12])
        
        sub_140597970(&rbp_1[0xa], &rsi_1[2])
        rbp_1[0xc] = *(rsi_1 + 0x18)
        rbp_1[0xd] = *(rsi_1 + 0x20)
        rbp_1[0xe] = *(rsi_1 + 0x28)
        rbp_1[0xf] = *(rsi_1 + 0x30)
        sub_140780cc0(&rbp_1[0x10], &rsi_1[0xe])
        *(rbp_1 + 0xd0) = *(rsi_1 + 0x88)
        int128_t zmm0_1 = *(rsi_1 + 0x98)
        rsi_1 = &rsi_1[0x3c]
        *(rbp_1 + 0xe0) = zmm0_1
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
