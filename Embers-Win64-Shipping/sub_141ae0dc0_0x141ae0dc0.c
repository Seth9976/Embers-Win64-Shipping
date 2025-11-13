// 函数: sub_141ae0dc0
// 地址: 0x141ae0dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r14 = arg2

if (arg4 != 0)
    int128_t* rbx_1 = arg3 + 0x78
    int32_t i
    
    do
        void* rdi_1 = r14
        r14 += 0x128
        sub_141adeef0(rdi_1, rbx_1 - 0x78)
        *(rdi_1 + 0x78) = *rbx_1
        sub_1405b0be0(rdi_1 + 0x88, &rbx_1[1])
        sub_1405b0be0(rdi_1 + 0x98, &rbx_1[2])
        sub_141aded30(rdi_1 + 0xa8, &rbx_1[3])
        
        if (rdi_1 + 0xb8 != &rbx_1[4])
            int64_t rbp_1 = sx.q(*(rbx_1 + 0x48))
            int64_t r15_1 = rbx_1[4].q
            int32_t r8 = *(rdi_1 + 0xc4)
            *(rdi_1 + 0xc0) = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1405c4a00(rdi_1 + 0xb8, rbp_1.d, r8)
                memcpy(*(rdi_1 + 0xb8), r15_1, (rbp_1 << 3).d)
            else
                *(rdi_1 + 0xc4) = 0
        
        sub_140780b40(rdi_1 + 0xc8, &rbx_1[5])
        sub_14086c240(rdi_1 + 0xd8, &rbx_1[6])
        *(rdi_1 + 0xe8) = rbx_1[7]
        *(rdi_1 + 0xf8) = rbx_1[8]
        *(rdi_1 + 0x108) = rbx_1[9]
        *(rdi_1 + 0x118) = rbx_1[0xa].q
        *(rdi_1 + 0x120) = *(rbx_1 + 0xa8)
        *(rdi_1 + 0x124) = *(rbx_1 + 0xac)
        *(rdi_1 + 0x125) = *(rbx_1 + 0xad)
        *(rdi_1 + 0x126) ^= (*(rbx_1 + 0xae) ^ *(rdi_1 + 0x126)) & 1
        char rax = *(rdi_1 + 0x126)
        char rcx_8 = *(rbx_1 + 0xae)
        rbx_1 += 0x128
        *(rdi_1 + 0x126) = ((rcx_8 ^ rax) & 2) ^ rax
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
