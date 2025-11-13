// 函数: sub_14087eac0
// 地址: 0x14087eac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* rbp = arg2

if (arg4 != 0)
    int64_t* rsi_1 = arg3 + 0x50
    int32_t i
    
    do
        int64_t* rbx_1 = rbp
        rbp = &rbp[0x28]
        
        if (rbx_1 != &rsi_1[-0xa])
            int64_t rdi_1 = sx.q(rsi_1[-9].d)
            int64_t r14_1 = rsi_1[-0xa]
            int32_t r8 = *(rbx_1 + 0xc)
            rbx_1[1].d = rdi_1.d
            
            if (rdi_1.d != 0 || r8 != 0)
                sub_1405c4a00(rbx_1, rdi_1.d, r8)
                memcpy(*rbx_1, r14_1, (rdi_1 << 3).d)
            else
                *(rbx_1 + 0xc) = 0
        
        *(rbx_1 + 0x10) = *(rsi_1 - 0x40)
        rbx_1[4] = rsi_1[-6]
        sub_14081d8c0(&rbx_1[5], &rsi_1[-5])
        *(rbx_1 + 0x38) = *(rsi_1 - 0x18)
        rbx_1[9] = rsi_1[-1]
        sub_14081d8c0(&rbx_1[0xa], rsi_1)
        *(rbx_1 + 0x60) = *(rsi_1 + 0x10)
        rbx_1[0xe] = rsi_1[4]
        sub_14081d8c0(&rbx_1[0xf], &rsi_1[5])
        *(rbx_1 + 0x88) = *(rsi_1 + 0x38)
        rbx_1[0x13] = rsi_1[9]
        sub_14081d8c0(&rbx_1[0x14], &rsi_1[0xa])
        *(rbx_1 + 0xb0) = *(rsi_1 + 0x60)
        rbx_1[0x18] = rsi_1[0xe]
        sub_14081d8c0(&rbx_1[0x19], &rsi_1[0xf])
        *(rbx_1 + 0xd8) = *(rsi_1 + 0x88)
        rbx_1[0x1d] = rsi_1[0x13]
        sub_14081d8c0(&rbx_1[0x1e], &rsi_1[0x14])
        sub_1407e50a0(&rbx_1[0x20], &rsi_1[0x16])
        rsi_1 = &rsi_1[0x28]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
