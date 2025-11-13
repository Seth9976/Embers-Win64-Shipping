// 函数: sub_1415548b0
// 地址: 0x1415548b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = 0
    return arg5

int32_t rax_1 = sub_1407c35c0(arg1, arg3 + arg5, arg4)
uint64_t rbp_1 = *arg1

if (i_1 != 0)
    void* rdi_1 = arg2 + 0x34
    void* rbx_1 = rbp_1 + 0x24
    int32_t i
    
    do
        *rbp_1 = *(rdi_1 - 0x34)
        *(rbp_1 + 8) = *(rdi_1 - 0x2c)
        *(rbx_1 - 0x18) = *(rdi_1 - 0x28)
        *(rbx_1 - 0x10) = *(rdi_1 - 0x20)
        *(rbx_1 - 0xc) = 0
        int32_t j_1 = *(rdi_1 - 0x14)
        void* r13_1 = *(rdi_1 - 0x1c)
        *(rbx_1 - 4) = j_1
        
        if (j_1 != 0)
            sub_1407c35c0(rbx_1 - 0xc, j_1, 0)
            void* r8_1 = *(rbx_1 - 0xc)
            void* rax_4 = r13_1 + 0x28
            void* rdx_2 = r8_1 + 0x28
            int32_t j
            
            do
                rdx_2 += 0x40
                r8_1 += 0x40
                uint128_t zmm0_1 = *(rax_4 - 0x28)
                rax_4 += 0x40
                *(r8_1 - 0x40) = zmm0_1
                *(r8_1 - 0x30) = *(rax_4 - 0x58)
                *(r8_1 - 0x20) = *(rax_4 - 0x48)
                *(rdx_2 - 0x40) = *(rax_4 - 0x40)
                *(rdx_2 - 0x38) = *(rax_4 - 0x38)
                *(rdx_2 - 0x34) = *(rax_4 - 0x34)
                *(rdx_2 - 0x2c) = *(rax_4 - 0x2c)
                j = j_1
                j_1 -= 1
            while (j != 1)
        else
            *rbx_1 = 0
        
        rbp_1 += 0x40
        *(rbx_1 + 4) = *(rdi_1 - 0xc)
        *(rbx_1 + 0xc) = *(rdi_1 - 4)
        *(rbx_1 + 0x10) = *rdi_1
        rax_1 = *(rdi_1 + 8)
        rdi_1 += 0x40
        *(rbx_1 + 0x18) = rax_1
        rbx_1 += 0x40
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
