// 函数: sub_142489ba0
// 地址: 0x142489ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
uint64_t* rbp = arg2

if (arg4 != 0)
    int64_t* rdi_1 = arg3 + 0xc
    int32_t i
    
    do
        uint64_t* rbx_1 = rbp
        rbp = &rbp[0xba]
        *rbx_1 = *(rdi_1 - 0xc)
        rbx_1[1].d = *(rdi_1 - 4)
        *(rbx_1 + 0xc) = *rdi_1
        *(rbx_1 + 0x14) = rdi_1[1].d
        rbx_1[3].d = *(rdi_1 + 0xc)
        *(rbx_1 + 0x1c) = rdi_1[2].d
        rbx_1[4].d = *(rdi_1 + 0x14)
        *(rbx_1 + 0x24) = rdi_1[3].d
        rbx_1[5].d = *(rdi_1 + 0x1c)
        *(rbx_1 + 0x2c) = rdi_1[4].d
        rbx_1[6].d ^= (rbx_1[6].d ^ *(rdi_1 + 0x24)) & 1
        rbx_1[6].d ^= (rbx_1[6].d ^ *(rdi_1 + 0x24)) & 2
        *(rbx_1 + 0x34) = rdi_1[5].b
        rbx_1[7].d = *(rdi_1 + 0x2c)
        sub_1405af800(&rbx_1[8], rdi_1 + 0x34)
        rbx_1[0xb0] = *(rdi_1 + 0x574)
        
        if (rdi_1 + 0x584 != &rbx_1[0xb2])
            if (rbx_1[0xb8].b != 0)
                rbx_1[0xb8].b = 0
            
            if (*(rdi_1 + 0x5b4) != 0)
                *(rbx_1 + 0x590) = *(rdi_1 + 0x584)
                *(rbx_1 + 0x5a0) = *(rdi_1 + 0x594)
                *(rbx_1 + 0x5b0) = *(rdi_1 + 0x5a4)
                rbx_1[0xb8].b = 1
        
        rdi_1 = &rdi_1[0xba]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result
result.b = 1
return result
