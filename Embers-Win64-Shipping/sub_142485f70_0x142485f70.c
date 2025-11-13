// 函数: sub_142485f70
// 地址: 0x142485f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* rsi = arg2
int32_t result

if (arg4 != 0)
    int32_t* rdi_1 = arg3 + 0x10
    int32_t i
    
    do
        int64_t* rbx_1 = rsi
        rsi = &rsi[4]
        
        if (rbx_1 != &rdi_1[-4])
            int64_t rbp_1 = sx.q(rdi_1[-2])
            int64_t r15_1 = *(rdi_1 - 0x10)
            int32_t r8 = *(rbx_1 + 0xc)
            rbx_1[1].d = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_140638750(rbx_1, rbp_1.d, r8)
                memcpy(*rbx_1, r15_1, (rbp_1 << 2).d)
            else
                *(rbx_1 + 0xc) = 0
        
        rbx_1[2].d = *rdi_1
        *(rbx_1 + 0x14) = *(rdi_1 + 4)
        result = rdi_1[3]
        rdi_1 = &rdi_1[8]
        *(rbx_1 + 0x1c) = result
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
