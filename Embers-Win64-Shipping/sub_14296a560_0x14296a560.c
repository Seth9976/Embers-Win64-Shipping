// 函数: sub_14296a560
// 地址: 0x14296a560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t* rax = sub_14289a060(arg1)
int64_t* rax_1 = sub_14289a660(arg1)

if (rax != 0)
    if (arg2 - 1 u> 0x80)
        return sub_142899cf0(rax_1, arg2, arg3, arg4)
    
    switch (arg2)
        case 1
            void* rcx_4 = *(rax + 0x18)
            rax[4] = 1
            rax[3] = 0
            int32_t rax_4 = sub_142890eb0(rcx_4)
            
            if (sub_142892480(*(rax + 0x18), nullptr, nullptr, 0, nullptr, rax_4) != 0)
                return sub_142899cf0(rax_1, arg2, arg3, arg4)
        case 2
            if (rax[2] s<= 0)
                return 1
            
            return sub_142899cf0(rax_1, arg2, arg3, arg4)
        case 3, 4, 5, 6, 7, 8, 9, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 
                0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 
                0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 
                0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x41, 0x42, 
                0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, 0x50, 
                0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 
                0x5f, 0x60, 0x61, 0x62, 0x63, 0x64, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 
                0x6e, 0x6f, 0x70, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 0x78, 0x79, 0x7a, 0x7b, 0x7c, 
                0x7d, 0x7e, 0x7f, 0x80
            return sub_142899cf0(rax_1, arg2, arg3, arg4)
        case 0xa, 0xd
            int32_t rbx = *rax - rax[1]
            
            if (rbx s> 0)
                return rbx
            
            return sub_142899cf0(rax_1, arg2, arg3, arg4)
        case 0xb
            int32_t i
            
            do
                while (*rax != rax[1])
                    int32_t* rax_8 = sub_14289a060(arg1)
                    int64_t* rax_9 = sub_14289a660(arg1)
                    
                    if (rax_8 != 0 && rax_9 != 0)
                        sub_142899cc0(arg1, 0xf)
                        int32_t rcx_10 = rax_8[1]
                        int32_t j = *rax_8 - rcx_10
                        
                        while (j s> 0)
                            int32_t rax_11 = sub_14289aa40(rax_9, &rax_8[0xc] + sx.q(rcx_10), j)
                            
                            if (rax_11 s<= 0)
                                sub_142899cd0(arg1)
                                
                                if (rax_11 s< 0)
                                    return rax_11
                                
                                break
                            
                            rax_8[1] += rax_11
                            j -= rax_11
                            rcx_10 = rax_8[1]
                
                if (rax[3] != 0)
                    i = sub_142899cf0(rax_1, arg2, arg3, arg4)
                    break
                
                int64_t* rcx_13 = *(rax + 0x18)
                rax[3] = 1
                rax[1] = 0
                i = sub_142892450(rcx_13, &rax[0xc], rax, arg5)
                rax[4] = i
            while (i s> 0)
            
            return i
        case 0xc
            void* rax_15 = sub_14289a060(arg4)
            int64_t* rax_16 = sub_142892200()
            *(rax_15 + 0x18) = rax_16
            
            if (rax_16 != 0)
                int32_t rax_17 = sub_142891fd0(rax_16, *(rax + 0x18))
                
                if (rax_17 == 0)
                    return rax_17
                
                sub_14289a9b0(arg4, 1)
                return rax_17
        case 0x65
            sub_142899cc0(arg1, 0xf)
            int32_t rax_13 = sub_142899cf0(rax_1, arg2, arg3, arg4)
            sub_142899cd0(arg1)
            return rax_13
        case 0x71
            return rax[4]
        case 0x81
            *arg4 = *(rax + 0x18)
            sub_14289a9b0(arg1, 1)
            return 1

return 0
