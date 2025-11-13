// 函数: sub_1425354f0
// 地址: 0x1425354f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* r14 = arg2

if (arg4 != 0)
    int32_t* rdi_1 = arg3 + 0x28
    int32_t i
    
    do
        int64_t* rbx_1 = r14
        r14 = &r14[8]
        
        if (rbx_1 != &rdi_1[-0xa])
            int64_t rsi_1 = sx.q(rdi_1[-8])
            int64_t rbp_1 = *(rdi_1 - 0x28)
            int32_t r8 = *(rbx_1 + 0xc)
            rbx_1[1].d = rsi_1.d
            
            if (rsi_1.d != 0 || r8 != 0)
                sub_1405c4a00(rbx_1, rsi_1.d, r8)
                memcpy(*rbx_1, rbp_1, (rsi_1 << 3).d)
            else
                *(rbx_1 + 0xc) = 0
        
        if (&rbx_1[2] != &rdi_1[-6])
            int64_t rbp_2 = sx.q(rdi_1[-4])
            int64_t r12_1 = *(rdi_1 - 0x18)
            int32_t r8_3 = *(rbx_1 + 0x1c)
            rbx_1[3].d = rbp_2.d
            
            if (rbp_2.d != 0 || r8_3 != 0)
                sub_1405a4be0(&rbx_1[2], rbp_2.d, r8_3)
                memcpy(rbx_1[2], r12_1, (rbp_2 << 4).d)
            else
                *(rbx_1 + 0x1c) = 0
        
        if (&rbx_1[4] != &rdi_1[-2])
            int64_t rbp_3 = sx.q(*rdi_1)
            int64_t r12_2 = *(rdi_1 - 8)
            int32_t r8_6 = *(rbx_1 + 0x2c)
            rbx_1[5].d = rbp_3.d
            
            if (rbp_3.d != 0 || r8_6 != 0)
                sub_1405a4be0(&rbx_1[4], rbp_3.d, r8_6)
                memcpy(rbx_1[4], r12_2, (rbp_3 << 4).d)
            else
                *(rbx_1 + 0x2c) = 0
        
        sub_14081d8c0(&rbx_1[6], &rdi_1[2])
        rdi_1 = &rdi_1[0x10]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
