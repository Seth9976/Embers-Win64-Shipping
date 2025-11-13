// 函数: sub_14284ac90
// 地址: 0x14284ac90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8_7

if (arg1 - 0x44 u> 0x40)
label_14284aeaf:
    int64_t rdx_23
    
    if (test_bit(arg6, 0x10))
        rdx_23 = 0x18
    else if (test_bit(arg6, 0x11))
        rdx_23 = 0x10
    else if (not(test_bit(arg6, 0x12)))
        if (arg1 - 1 u> 0xbd)
            return 0x80070057
        
        switch (arg1)
            case 1, 2, 3, 4
                rdx_23 = 0x80
            case 5, 6, 7, 8
                rdx_23 = 0x60
            case 9, 0xa, 0xb, 0xc, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x66, 
                    0x6c, 0x6d
                rdx_23 = 0x40
            case 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 
                    0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x43, 
                    0x44, 0x45, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x64, 0x65, 0x6b, 0x74, 
                    0x75, 0xbd
                rdx_23 = 0x20
            case 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x55, 
                    0x56, 0x72, 0x73, 0x82, 0x83
                rdx_23 = 0x10
            case 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x52, 
                    0x53, 0x54, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63, 0x6f, 0x70, 0x71, 0xbe
                rdx_23 = 8
            case 0x42
                rdx_23 = 1
            case 0x46, 0x47, 0x48, 0x4f, 0x50, 0x51
                rdx_23 = 4
            case 0x67, 0x6a, 0x6e
                rdx_23 = 0xc
            case 0x68, 0x69, 0x76, 0x77, 0x78, 0x84
                rdx_23 = 0x18
            case 0x79, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e, 0x7f, 0x80, 0x81, 0x85, 0x86, 0x87, 0x88, 
                    0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 
                    0x96, 0x97, 0x98, 0x99, 0x9a, 0x9b, 0x9c, 0x9d, 0x9e, 0x9f, 0xa0, 0xa1, 0xa2, 
                    0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 
                    0xb0, 0xb1, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7, 0xb8, 0xb9, 0xba, 0xbb, 0xbc
                return 0x80070057
    else
        rdx_23 = 8
    
    int64_t rdx_24 = rdx_23 * arg2
    
    if ((arg6 & 0x20f) == 0)
        r8_7 = (rdx_24 + 7) u>> 3
    else if (test_bit(arg6, 9))
        r8_7 = (rdx_24 + 0x7fff) u>> 0xf << 0xc
    else if ((arg6.b & 8) != 0)
        r8_7 = (rdx_24 + 0x1ff) u>> 9 << 6
    else if ((arg6.b & 4) != 0)
        r8_7 = (rdx_24 + 0xff) u>> 8 << 5
    else if ((arg6.b & 2) == 0)
        r8_7 = (rdx_24 + 0x1f) u>> 5 << 2
    else
        r8_7 = (rdx_24 + 0x7f) u>> 7 << 4
    
    goto label_14284afb0

uint64_t rdx
uint64_t rbx_2

switch (arg1)
    case 0x44, 0x45, 0x6b
        r8_7 = (arg2 + 1) u>> 1 << 2
    label_14284afb0:
        *arg4 = r8_7
        *arg5 = r8_7 * arg3
        return 0
    case 0x46, 0x47, 0x48, 0x4f, 0x50, 0x51
        rdx = 1
        
        if ((arg6 & 0x1000) == 0)
            uint64_t r8_1 = 1
            uint64_t rcx_1 = (arg3 + 3) u>> 2
            uint64_t rax_6 = (arg2 + 3) u>> 2
            
            if (rax_6 u> 1)
                r8_1 = rax_6
            
            uint64_t r8_2 = r8_1 << 3
            *arg4 = r8_2
            
            if (rcx_1 u> 1)
                rdx = rcx_1
            
            *arg5 = rdx * r8_2
            return 0
        
        rbx_2 = arg2 u>> 2 << 3
    label_14284ace5:
        uint64_t r8 = 1
        
        if (rbx_2 u> 1)
            r8 = rbx_2
        
        uint64_t r11_2 = (arg3 u>> 2) * r8
        *arg4 = r8
        
        if (r11_2 u> 1)
            rdx = r11_2
        
        *arg5 = rdx
        return 0
    case 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x52, 0x53, 0x54, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x63
        rdx = 1
        
        if ((arg6 & 0x1000) != 0)
            rbx_2 = arg2 u>> 2 << 4
            goto label_14284ace5
        
        uint64_t r8_3 = 1
        uint64_t rcx_3 = (arg3 + 3) u>> 2
        uint64_t rax_10 = (arg2 + 3) u>> 2
        
        if (rax_10 u> 1)
            r8_3 = rax_10
        
        uint64_t r8_4 = r8_3 << 4
        *arg4 = r8_4
        
        if (rcx_3 u> 1)
            rdx = rcx_3
        
        *arg5 = rdx * r8_4
        return 0
    case 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x64, 0x65, 0x66, 0x6f, 0x70, 0x71, 
            0x72, 0x73, 0x74, 0x75, 0x79, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e, 0x7f, 0x80, 0x81
        goto label_14284aeaf
    case 0x67, 0x6a
        int64_t r8_11 = (arg2 + 1) & 0xfffffffffffffffe
        *arg4 = r8_11
        *arg5 = (((arg3 + 1) u>> 1) + arg3) * r8_11
        return 0
    case 0x68, 0x69, 0x76, 0x77, 0x78
        uint64_t r8_14 = (arg2 + 1) u>> 1 << 2
        *arg4 = r8_14
        *arg5 = (((arg3 + 1) u>> 1) + arg3) * r8_14
        return 0
    case 0x6c, 0x6d
        r8_7 = (arg2 + 1) u>> 1 << 3
        goto label_14284afb0
    case 0x6e
        int64_t r8_16 = (arg2 + 3) & 0xfffffffffffffffc
        *arg4 = r8_16
        *arg5 = r8_16 * arg3 * 2
        return 0
    case 0x82
        int64_t r8_18 = (arg2 + 1) & 0xfffffffffffffffe
        *arg4 = r8_18
        *arg5 = r8_18 * arg3 * 2
        return 0
    case 0x83
        *arg4 = arg2
        *arg5 = (((arg3 + 1) & 0xfffffffffffffffe) + arg3) * arg2
        return 0
    case 0x84
        *arg4 = arg2
        *arg5 = (arg3 + (arg3 u>> 1 << 2)) * arg2
        return 0
