// 函数: sub_1406aae90
// 地址: 0x1406aae90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x7c) != 0xffffffff)
    int32_t rcx = arg1[0x10].d
    
    if (not(test_bit(rcx, 0x10)))
    label_1406aaf38:
        
        if (test_bit(rcx, 0xf))
            char rax_2 = arg1[0xf].b
            
            if (rax_2 == 0x61)
                *(arg1 + 0x74) = 7
                sub_1406aec20(arg1)
                goto label_1406ab0be
            
            if (rax_2 != 0x62)
                goto label_1406aaf70
            
            *(arg1 + 0x74) = 8
            sub_1406aec20(arg1)
            goto label_1406ab0be
        
    label_1406aaf70:
        char rax_3 = arg1[0xf].b
        
        if (rax_3 != 0x63)
            if (rax_3 != 0x78)
                if (rax_3 != 0x75 || not(test_bit(rcx, 0xb)))
                    goto label_1406ab01d
                
                sub_1406aec20(arg1)
                sub_1406ade90(arg1, 4)
                goto label_1406ab0be
            
            if (not(test_bit(rcx, 0xc)))
                goto label_1406ab01d
            
            sub_1406aec20(arg1)
            sub_1406ade90(arg1, 2)
            goto label_1406ab0be
        
        if (not(test_bit(rcx, 0x12)))
        label_1406ab01d:
            int32_t i
            
            if (test_bit(rcx, 0xd))
                i = 3
                *(arg1 + 0x74) = 0
                
                do
                    int32_t rcx_15 = sx.d(arg1[0xf].b)
                    
                    if (rcx_15.b - 0x30 u> 7)
                        break
                    
                    if (rcx_15 == 0x2f)
                        break
                    
                    i -= 1
                    int64_t rax_14 = arg1[2]
                    *(arg1 + 0x74) = rcx_15 - 0x30 + (*(arg1 + 0x74) << 3)
                    char* rcx_18 = *arg1
                    
                    if (rcx_18 != rax_14)
                        if (*rcx_18 == 0x5c)
                            void* rdx_2 = &rcx_18[1]
                            rcx_18 = rdx_2
                            
                            if (rdx_2 == rax_14)
                                rcx_18 = *arg1
                            else
                                char r8_1 = (arg1[0x10].d).b
                                
                                if (((r8_1 & 8) != 0 || *rdx_2 - 0x28 u> 1)
                                        && ((r8_1 & 0x10) != 0 || ((*rdx_2 - 0x7b) & 0xfd) != 0))
                                    rcx_18 = *arg1
                        
                        *arg1 = &rcx_18[1]
                    
                    sub_1406af960(arg1)
                while (i != 0)
            
            if (not(test_bit(rcx, 0xd)) || i == 3)
                int32_t r8_2 = arg1[0x10].d
                int32_t r9 = sx.d(arg1[0xf].b)
                uint64_t rax_22
                
                if (not(test_bit(r8_2, 0x16)))
                    rax_22 = zx.q(r9 - 0x22)
                    
                    if (rax_22.d u> 0x5b)
                        rax_22.b = 0
                        return rax_22
                    
                    switch (&__dos_header.e_magic[zx.q(jump_table_1406ab1fc[zx.q(
                            lookup_table_1406ab20c[sx.q(rax_22.d)])])])
                        case 0x1406ab13d
                            rax_22 = zx.q(r8_2 u>> 0x17)
                        label_1406ab14b:
                            
                            if ((rax_22.b & 1) != 0)
                                goto label_1406ab14f
                            
                            rax_22.b = 0
                            return rax_22
                        case 0x1406ab145
                            rax_22 = zx.q(r8_2 u>> 0x18)
                            goto label_1406ab14b
                        case 0x1406ab14f
                            goto label_1406ab14f
                        case 0x1406ab1a8
                            rax_22.b = 0
                            return rax_22
                else
                    if (r9 - 0x44 u> 0x33)
                    label_1406ab14f:
                        char* rcx_24 = *arg1
                        int64_t rax_26 = arg1[2]
                        *(arg1 + 0x74) = r9
                        
                        if (rcx_24 != rax_26)
                            if (*rcx_24 == 0x5c)
                                void* rdx_3 = &rcx_24[1]
                                rcx_24 = rdx_3
                                
                                if (rdx_3 == rax_26)
                                    rcx_24 = *arg1
                                else if (((r8_2.b & 8) != 0 || *rdx_3 - 0x28 u> 1)
                                        && ((r8_2.b & 0x10) != 0 || ((*rdx_3 - 0x7b) & 0xfd) != 0))
                                    rcx_24 = *arg1
                            
                            *arg1 = &rcx_24[1]
                        
                        sub_1406af960(arg1)
                        uint64_t rax_30
                        rax_30.b = 1
                        return rax_30
                    
                    switch (r9)
                        case 0x44, 0x53, 0x57, 0x63, 0x64, 0x73, 0x77
                            rax_22.b = 0
                            return rax_22
                        case 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 
                                0x50, 0x51, 0x52, 0x54, 0x55, 0x56, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 
                                0x5d, 0x5e, 0x5f, 0x60, 0x61, 0x62, 0x65, 0x66, 0x67, 0x68, 0x69, 
                                0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 0x74, 0x75, 
                                0x76
                            goto label_1406ab14f
            else if (*(arg1 + 0x74) != 0)
                goto label_1406ab0be
        else
            sub_1406aec20(arg1)
            int32_t rdx_1 = sx.d(arg1[0xf].b)
            
            if ((*(*(*(arg1[0xd] + 8) + 0x18) + (zx.q(rdx_1.b) << 1)) & 0x103) != 0)
                int32_t rax_8 = rdx_1 & 0x8000001f
                
                if (rax_8 s< 0)
                    rax_8 = ((rax_8 - 1) | 0xffffffe0) + 1
                
                *(arg1 + 0x74) = sx.d(rax_8.b)
                sub_1406aec20(arg1)
                goto label_1406ab0be
    else
        char rax_1 = arg1[0xf].b
        
        if (rax_1 != 0x66)
            if (rax_1 == 0x6e)
                *(arg1 + 0x74) = 0xa
                sub_1406aec20(arg1)
                goto label_1406ab0be
            
            if (rax_1 == 0x72)
                *(arg1 + 0x74) = 0xd
                sub_1406aec20(arg1)
                goto label_1406ab0be
            
            if (rax_1 == 0x74)
                *(arg1 + 0x74) = 9
                sub_1406aec20(arg1)
                goto label_1406ab0be
            
            if (rax_1 != 0x76)
                goto label_1406aaf38
            
            *(arg1 + 0x74) = 0xb
            sub_1406aec20(arg1)
            goto label_1406ab0be
        
        *(arg1 + 0x74) = 0xc
        sub_1406aec20(arg1)
    label_1406ab0be:
        int32_t rax_18 = *(arg1 + 0x74)
        
        if (rax_18 u<= 0xff)
            *(arg1 + 0x74) = sx.d(rax_18.b)
            int32_t rax_19
            rax_19.b = 1
            return rax_19

sub_1406ad7b0(arg1, error_escape)
noreturn
