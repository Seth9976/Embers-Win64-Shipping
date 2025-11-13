// 函数: sub_14273c200
// 地址: 0x14273c200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* rsi = arg2
int64_t result

if (arg4 != 0)
    int64_t* rdi_1 = arg3 + 0x10
    int32_t i
    
    do
        int64_t* rbx_1 = rsi
        rsi = &rsi[8]
        
        if (rbx_1 != &rdi_1[-2])
            int64_t rbp_1 = sx.q(rdi_1[-1].d)
            int64_t r15_1 = rdi_1[-2]
            int32_t r8 = *(rbx_1 + 0xc)
            rbx_1[1].d = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1405c4a00(rbx_1, rbp_1.d, r8)
                memcpy(*rbx_1, r15_1, (rbp_1 << 3).d)
            else
                *(rbx_1 + 0xc) = 0
        
        rbx_1[2] = *rdi_1
        sub_14081d8c0(&rbx_1[3], &rdi_1[1])
        rbx_1[5].d = rdi_1[3].d
        *(rbx_1 + 0x2c) = *(rdi_1 + 0x1c)
        rbx_1[6].d = rdi_1[4].d
        result = *(rdi_1 + 0x24)
        rdi_1 = &rdi_1[8]
        *(rbx_1 + 0x34) = result
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
