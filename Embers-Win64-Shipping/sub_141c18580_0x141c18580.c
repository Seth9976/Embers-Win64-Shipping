// 函数: sub_141c18580
// 地址: 0x141c18580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
uint64_t* r14 = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0x78
    int32_t i
    
    do
        uint64_t* rdi_1 = r14
        r14 -= -0x80
        sub_140780c40(rdi_1, &rbx_1[-0x1e])
        sub_140780c40(&rdi_1[2], &rbx_1[-0x1a])
        rdi_1[4] = *(rbx_1 - 0x58)
        rdi_1[5] = *(rbx_1 - 0x50)
        
        if (&rdi_1[6] != &rbx_1[-0x12])
            int64_t rsi_1 = sx.q(*rbx_1)
            void* rdi_2 = &rdi_1[0xd]
            sub_1405a4aa0(rdi_2, 0, rsi_1.d, 4)
            void* rax_1 = *(rbx_1 - 8)
            void* rdx_2 = &rbx_1[-4]
            void* r9 = *(rdi_2 + 8)
            
            if (rax_1 != 0)
                rdx_2 = rax_1
            
            if (r9 != 0)
                rdi_2 = r9
            
            memcpy(rdi_2, rdx_2, (rsi_1 << 2).d)
            rdi_1[0xf].d = rsi_1.d
            sub_140e29380(&rdi_1[6], &rbx_1[-0x12])
        
        rbx_1 -= -0x80
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
