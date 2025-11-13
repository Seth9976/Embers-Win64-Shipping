// 函数: sub_142c42c50
// 地址: 0x142c42c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg2 + 0x60))

if (result.d != 0)
    uint64_t i_1 = zx.q(result.d)
    void* rdi_1 = *(arg2 + 0x70) + 0x13
    uint64_t i
    
    do
        int32_t rbx_1 = *(rdi_1 - 0x13)
        uint32_t r8_1 = zx.d(sub_142c47040(rbx_1))
        result = zx.q(rbx_1 - 0xfe00)
        uint32_t r8_2 = r8_1 u>> 8
        int32_t rdx_1 = r8_1 & 0x7f
        
        if (result.d u<= 0xf)
            rdx_1 = 0x1e
        
        if (rbx_1 u> 0x1004)
            if (rbx_1 u> 0x2015)
                if (rbx_1 u> 0x25fe)
                    if (rbx_1 u< 0xaa74)
                        goto label_142c42cde
                    
                    if (rbx_1 u<= 0xaa76)
                        rdx_1 = 1
                    else
                        if (rbx_1 != 0xaa7b)
                            goto label_142c42cde
                        
                        rdx_1 = 0x19
                else
                    if (rbx_1 u< 0x25fb && rbx_1 != 0x2022 && rbx_1 != 0x25cc)
                        goto label_142c42cde
                    
                    rdx_1 = 0xb
            else if (rbx_1 u>= 0x2012)
                rdx_1 = 0xb
            else
                uint64_t rbx_4 = zx.q(rbx_1 - 0x101b)
                
                if (rbx_4.d u> 0x81)
                    goto label_142c42cde
                
                result = zx.q(lookup_table_142c42e9c[rbx_4])
                
                switch (result)
                    case 0
                        rdx_1 = 0x10
                    case 1
                        rdx_1 = 0xa
                    case 2
                        rdx_1 = 8
                    case 3
                        rdx_1 = 4
                    case 4
                        rdx_1 = 0x12
                    case 5
                        rdx_1 = 0x18
                    case 6
                        rdx_1 = 0x16
                    case 7
                        rdx_1 = 0x17
                    case 8
                        rdx_1 = 0x15
                    case 9
                        rdx_1 = 0x20
                    case 0xa
                        rdx_1 = 0x1f
                    case 0xb
                        rdx_1 = 1
                    case 0xc
                        rdx_1 = 0x19
                    case 0xd
                        goto label_142c42cde
        else if (rbx_1 == 0x1004)
            rdx_1 = 0x10
        else if (rbx_1 == 0x2d || rbx_1 == 0xa0 || rbx_1 == 0xd7)
            rdx_1 = 0xb
        else
        label_142c42cde:
            
            if (rdx_1 == 7)
                if (r8_2 == 3)
                    rdx_1 = 0x1c
                    r8_2 = 2
                else if (r8_2 == 6)
                    rdx_1 = 0x1a
                else if (r8_2 == 8)
                    rdx_1 = 0x1b
                else if (r8_2 == 0xb)
                    rdx_1 = r8_2 + 0x12
        
        *(rdi_1 - 1) = rdx_1.b
        *rdi_1 = r8_2.b
        rdi_1 += 0x14
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
