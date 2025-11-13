// 函数: sub_1424bfc70
// 地址: 0x1424bfc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* rbp = arg2

if (arg4 != 0)
    int128_t* rdi_1 = arg3 + 0x10
    int32_t i
    
    do
        int64_t* rbx_1 = rbp
        rbp = &rbp[0x17]
        
        if (rbx_1 != &rdi_1[-1])
            int32_t rsi_1 = *(rdi_1 - 8)
            int64_t r14_1 = rdi_1[-1].q
            int32_t r8 = *(rbx_1 + 0xc)
            rbx_1[1].d = rsi_1
            
            if (rsi_1 != 0 || r8 != 0)
                sub_1405c4b20(rbx_1, rsi_1, r8)
                memcpy(*rbx_1, r14_1, rsi_1 * 0x1c)
            else
                *(rbx_1 + 0xc) = 0
        
        *(rbx_1 + 0x10) = *rdi_1
        rbx_1[4] = rdi_1[1].q
        rbx_1[5].d = *(rdi_1 + 0x18)
        *(rbx_1 + 0x2c) = *(rdi_1 + 0x1c)
        *(rbx_1 + 0x3c) = *(rdi_1 + 0x2c)
        *(rbx_1 + 0x4c) = *(rdi_1 + 0x3c)
        *(rbx_1 + 0x5c) = *(rdi_1 + 0x4c)
        *(rbx_1 + 0x6c) = *(rdi_1 + 0x5c)
        *(rbx_1 + 0x7c) = *(rdi_1 + 0x6c)
        *(rbx_1 + 0x8c) = *(rdi_1 + 0x7c)
        *(rbx_1 + 0x9c) = *(rdi_1 + 0x8c)
        uint128_t zmm0 = zx.o(*(rdi_1 + 0x9c))
        rdi_1 += 0xb8
        *(rbx_1 + 0xac) = zmm0.q
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
