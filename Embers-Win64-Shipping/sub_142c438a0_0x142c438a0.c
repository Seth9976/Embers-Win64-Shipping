// 函数: sub_142c438a0
// 地址: 0x142c438a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *arg1
uint32_t r8 = zx.d(sub_142c47040(rbx))
uint64_t result = zx.q(rbx - 0xfe00)
int32_t rdx_1 = r8 & 0x7f
uint32_t r8_1 = r8 u>> 8

if (result.d u<= 0xf)
    rdx_1 = 0x1e

if (rbx u<= 0x1004)
    if (rbx == 0x1004)
    label_142c439a5:
        *(arg1 + 0x13) = r8_1.b
        *(arg1 + 0x12) = 0x10
        return result
    
    if (rbx != 0x2d && rbx != 0xa0 && rbx != 0xd7)
    label_142c43901:
        
        if (rdx_1 == 7)
            if (r8_1 == 3)
                rdx_1 = 0x1c
                r8_1 = 2
            else
                if (r8_1 == 6)
                    *(arg1 + 0x13) = r8_1.b
                    *(arg1 + 0x12) = 0x1a
                    return result
                
                if (r8_1 == 8)
                    *(arg1 + 0x13) = r8_1.b
                    *(arg1 + 0x12) = 0x1b
                    return result
                
                if (r8_1 == 0xb)
                    *(arg1 + 0x13) = r8_1.b
                    *(arg1 + 0x12) = 0x1d
                    return result
        
        *(arg1 + 0x12) = rdx_1.b
        *(arg1 + 0x13) = r8_1.b
        return result
else if (rbx u> 0x2015)
    if (rbx u> 0x25fe)
        if (rbx u< 0xaa74)
            goto label_142c43901
        
        if (rbx u<= 0xaa76)
        label_142c4398e:
            *(arg1 + 0x13) = r8_1.b
            *(arg1 + 0x12) = 1
            return result
        
        if (rbx != 0xaa7b)
            goto label_142c43901
        
        goto label_142c43b01
    
    if (rbx u< 0x25fb && rbx != 0x2022 && rbx != 0x25cc)
        goto label_142c43901
else if (rbx u< 0x2012)
    uint64_t rbx_3 = zx.q(rbx - 0x101b)
    
    if (rbx_3.d u> 0x81)
        goto label_142c43901
    
    result = zx.q(lookup_table_142c43b98[rbx_3])
    
    switch (result)
        case 0
            goto label_142c439a5
        case 1
            *(arg1 + 0x13) = r8_1.b
            *(arg1 + 0x12) = 0xa
            return result
        case 2
            *(arg1 + 0x13) = r8_1.b
            *(arg1 + 0x12) = 8
            return result
        case 3
            *(arg1 + 0x13) = r8_1.b
            *(arg1 + 0x12) = 4
            return result
        case 4
            *(arg1 + 0x13) = r8_1.b
            *(arg1 + 0x12) = 0x12
            return result
        case 5
            *(arg1 + 0x13) = r8_1.b
            *(arg1 + 0x12) = 0x18
            return result
        case 6
            *(arg1 + 0x13) = r8_1.b
            *(arg1 + 0x12) = 0x16
            return result
        case 7
            *(arg1 + 0x13) = r8_1.b
            *(arg1 + 0x12) = 0x17
            return result
        case 8
            *(arg1 + 0x13) = r8_1.b
            *(arg1 + 0x12) = 0x15
            return result
        case 9
            *(arg1 + 0x13) = r8_1.b
            *(arg1 + 0x12) = 0x20
            return result
        case 0xa
            *(arg1 + 0x13) = r8_1.b
            *(arg1 + 0x12) = 0x1f
            return result
        case 0xb
            goto label_142c4398e
        case 0xc
        label_142c43b01:
            *(arg1 + 0x13) = r8_1.b
            *(arg1 + 0x12) = 0x19
            return result
        case 0xd
            goto label_142c43901

*(arg1 + 0x13) = r8_1.b
*(arg1 + 0x12) = 0xb
return result
