// 函数: sub_14087ee00
// 地址: 0x14087ee00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r14 = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0xb8
    int32_t i
    
    do
        void* rdi_1 = r14
        r14 += 0xd8
        sub_14081d9c0(rdi_1, &rbx_1[-0x2e])
        *(rdi_1 + 0xb8) = *rbx_1
        *(rdi_1 + 0xbc) = rbx_1[1]
        
        if (rdi_1 + 0xc0 != &rbx_1[2])
            int64_t rbp_1 = sx.q(rbx_1[4])
            int64_t r12_1 = *(rbx_1 + 8)
            int32_t r8 = *(rdi_1 + 0xcc)
            *(rdi_1 + 0xc8) = rbp_1.d
            
            if (rbp_1.d != 0 || r8 != 0)
                sub_1405c4a00(rdi_1 + 0xc0, rbp_1.d, r8)
                memcpy(*(rdi_1 + 0xc0), r12_1, (rbp_1 << 3).d)
            else
                *(rdi_1 + 0xcc) = 0
        
        char rax = rbx_1[6].b
        rbx_1 = &rbx_1[0x36]
        *(rdi_1 + 0xd0) ^= (rax ^ *(rdi_1 + 0xd0)) & 1
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
