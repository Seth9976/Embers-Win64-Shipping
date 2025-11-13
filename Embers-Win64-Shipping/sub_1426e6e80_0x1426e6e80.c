// 函数: sub_1426e6e80
// 地址: 0x1426e6e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_140ce3290(arg1)

if (arg1[0x15].d s> 0)
    result = sub_1426d8250(arg1, &arg1[0x16], &arg1[0x14])
    arg1[0x15].d = 0
    
    if (*(arg1 + 0xac) != 0)
        result = sub_1405a5410(&arg1[0x14], 0)

if (arg1[0x1f] == 0 && (*(arg1 + 0x13c) & 1) == 0)
    arg1[0x1f] = arg1[0x13]
    
    if (&arg1[0x20] != &arg1[0x16])
        int32_t i_2 = arg1[0x21].d
        
        if (i_2 != 0)
            int64_t* rbx_2 = arg1[0x20] + 0x10
            int32_t i
            
            do
                int64_t rcx_2 = *rbx_2
                
                if (rcx_2 != 0)
                    sub_140a74f90(rcx_2)
                
                rbx_2 = &rbx_2[7]
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        int32_t i_3 = arg1[0x17].d
        void* rdi_1 = arg1[0x16]
        int32_t r8_2 = *(arg1 + 0x10c)
        arg1[0x21].d = i_3
        
        if (i_3 != 0 || r8_2 != 0)
            sub_140874c00(&arg1[0x20], i_3, r8_2)
            int64_t* r14_2 = arg1[0x20]
            
            if (i_3 != 0)
                void* rdi_2 = rdi_1 + 0x20
                void* rbx_3 = r14_2 + 0x1c
                int32_t i_1
                
                do
                    *r14_2 = *(rdi_2 - 0x20)
                    *(rbx_3 - 0x14) = *(rdi_2 - 0x18)
                    *(rbx_3 - 0x10) = *(rdi_2 - 0x14)
                    *(rbx_3 - 0xc) = 0
                    int64_t rbp_1 = sx.q(*(rdi_2 - 8))
                    int64_t r13_1 = *(rdi_2 - 0x10)
                    *(rbx_3 - 4) = rbp_1.d
                    
                    if (rbp_1.d != 0)
                        sub_1405c4a00(rbx_3 - 0xc, rbp_1.d, 0)
                        memcpy(*(rbx_3 - 0xc), r13_1, (rbp_1 << 3).d)
                    else
                        *rbx_3 = 0
                    
                    r14_2 = &r14_2[7]
                    *(rbx_3 + 4) = *rdi_2
                    *(rbx_3 + 0xc) = *(rdi_2 + 8)
                    *(rbx_3 + 0x14) = *(rdi_2 + 0x10)
                    int32_t rax_7 = *(rdi_2 + 0x14)
                    rdi_2 += 0x38
                    *(rbx_3 + 0x18) ^= (rax_7 ^ *(rbx_3 + 0x18)) & 1
                    rbx_3 += 0x38
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
        else
            *(arg1 + 0x10c) = 0
    
    arg1[0x27].b = arg1[0x18].b
    
    if (&arg1[0x22] != &arg1[0x19])
        int64_t rbp_2 = sx.q(arg1[0x1a].d)
        int64_t r14_3 = arg1[0x19]
        int32_t r8_5 = *(arg1 + 0x11c)
        arg1[0x23].d = rbp_2.d
        
        if (rbp_2.d != 0 || r8_5 != 0)
            sub_1405c4a00(&arg1[0x22], rbp_2.d, r8_5)
            memcpy(arg1[0x22], r14_3, (rbp_2 << 3).d)
        else
            *(arg1 + 0x11c) = 0
    
    arg1[0x24] = arg1[0x1b]
    arg1[0x25] = arg1[0x1c]
    arg1[0x26].b = arg1[0x1d].b
    *(arg1 + 0x134) ^= (*(arg1 + 0xec) ^ *(arg1 + 0x134)) & 1
    uint32_t rax_17 = zx.d(arg1[0x1e].b)
    *(arg1 + 0x13c) &= 0xfffffffe
    result = rax_17 & 1
    *(arg1 + 0x13c) |= result

return result
