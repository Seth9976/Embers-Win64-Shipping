// 函数: sub_142576c40
// 地址: 0x142576c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* rbp = arg2

if (arg4 != 0)
    int32_t* rdi_1 = arg3 + 8
    int32_t i
    
    do
        int64_t* rbx_1 = rbp
        rbp = &rbp[0x12]
        
        if (rbx_1 != &rdi_1[-2])
            int64_t rsi_1 = sx.q(*rdi_1)
            int64_t r15_1 = *(rdi_1 - 8)
            int32_t r8 = *(rbx_1 + 0xc)
            rbx_1[1].d = rsi_1.d
            
            if (rsi_1.d != 0 || r8 != 0)
                sub_1407c3650(rbx_1, rsi_1.d, r8)
                memcpy(*rbx_1, r15_1, (rsi_1 * 0xc).d)
            else
                *(rbx_1 + 0xc) = 0
        
        sub_140780c40(&rbx_1[2], &rdi_1[2])
        sub_1405cd980(&rbx_1[4], &rdi_1[6])
        sub_142576320(&rbx_1[0xe], &rdi_1[0x1a])
        
        if (rbx_1 + 0x80 != &rdi_1[0x1e])
            int64_t rsi_2 = sx.q(rdi_1[0x20])
            int64_t r15_2 = *(rdi_1 + 0x78)
            int32_t r8_3 = *(rbx_1 + 0x8c)
            rbx_1[0x11].d = rsi_2.d
            
            if (rsi_2.d != 0 || r8_3 != 0)
                sub_140808f70(rbx_1 + 0x80, rsi_2.d, r8_3)
                memcpy(*(rbx_1 + 0x80), r15_2, (rsi_2 * 0x18).d)
            else
                *(rbx_1 + 0x8c) = 0
        
        rdi_1 = &rdi_1[0x24]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result
result.b = 1
return result
