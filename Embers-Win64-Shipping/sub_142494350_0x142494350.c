// 函数: sub_142494350
// 地址: 0x142494350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int32_t* rbp = arg2

if (arg4 != 0)
    void* rbx_1 = arg3 + 8
    int32_t i
    
    do
        int32_t* rdi_1 = rbp
        rbp = &rbp[0x6e]
        int64_t j_1 = 2
        *rdi_1 = *(rbx_1 - 8)
        void* rcx = &rdi_1[0x23]
        *(rdi_1 + 8) = *rbx_1
        *(rdi_1 + 0x10) = *(rbx_1 + 8)
        *(rdi_1 + 0x18) = *(rbx_1 + 0x10)
        *(rdi_1 + 0x20) = *(rbx_1 + 0x18)
        *(rdi_1 + 0x28) = *(rbx_1 + 0x20)
        *(rdi_1 + 0x30) = *(rbx_1 + 0x28)
        rdi_1[0xe] = *(rbx_1 + 0x30)
        *(rdi_1 + 0x3c) = *(rbx_1 + 0x34)
        rdi_1[0x11] = *(rbx_1 + 0x3c)
        *(rdi_1 + 0x48) = *(rbx_1 + 0x40)
        rdi_1[0x14] = *(rbx_1 + 0x48)
        *(rdi_1 + 0x54) = *(rbx_1 + 0x4c)
        rdi_1[0x17] = *(rbx_1 + 0x54)
        *(rdi_1 + 0x60) = *(rbx_1 + 0x58)
        rdi_1[0x1a] = *(rbx_1 + 0x60)
        *(rdi_1 + 0x6c) = *(rbx_1 + 0x64)
        rdi_1[0x1d] = *(rbx_1 + 0x6c)
        *(rdi_1 + 0x78) = *(rbx_1 + 0x70)
        rdi_1[0x20] = *(rbx_1 + 0x78)
        rdi_1[0x21] ^= (*(rbx_1 + 0x7c) ^ rdi_1[0x21]) & 1
        rdi_1[0x22] = *(rbx_1 + 0x80)
        int32_t* rax_17 = rbx_1 + 0x84
        int64_t j
        
        do
            rcx += 0x80
            uint128_t zmm0 = *rax_17
            rax_17 = &rax_17[0x20]
            *(rcx - 0x80) = zmm0
            *(rcx - 0x70) = *(rax_17 - 0x70)
            *(rcx - 0x60) = *(rax_17 - 0x60)
            *(rcx - 0x50) = *(rax_17 - 0x50)
            *(rcx - 0x40) = *(rax_17 - 0x40)
            *(rcx - 0x30) = *(rax_17 - 0x30)
            *(rcx - 0x20) = *(rax_17 - 0x20)
            *(rcx - 0x10) = *(rax_17 - 0x10)
            j = j_1
            j_1 -= 1
        while (j != 1)
        *rcx = *rax_17
        *(rdi_1 + 0x190) = *(rbx_1 + 0x188)
        rdi_1[0x68] = *(rbx_1 + 0x198)
        
        if (rbx_1 + 0x1a0 != &rdi_1[0x6a])
            int64_t* rcx_2
            
            if (*(rbx_1 + 0x1a8) != 0)
                rcx_2 = *(rbx_1 + 0x1a0)
            
            if (*(rbx_1 + 0x1a8) != 0 && rcx_2 != 0)
                (*(*rcx_2 + 0x40))(rcx_2, &rdi_1[0x6a])
            else if (rdi_1[0x6c] != 0)
                int64_t* rcx_3 = *(rdi_1 + 0x1a8)
                
                if (rcx_3 != 0)
                    (*(*rcx_3 + 0x38))(rcx_3, 0)
                    int64_t rcx_4 = *(rdi_1 + 0x1a8)
                    
                    if (rcx_4 != 0)
                        *(rdi_1 + 0x1a8) = sub_140a84c80(rcx_4, 0, 0)
                    
                    rdi_1[0x6c] = 0
        
        rbx_1 += 0x1b8
        i = i_1
        i_1 -= 1
    while (i != 1)

uint64_t result
result.b = 1
return result
