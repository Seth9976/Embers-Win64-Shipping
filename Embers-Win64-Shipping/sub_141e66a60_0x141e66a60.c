// 函数: sub_141e66a60
// 地址: 0x141e66a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = sx.q(arg3) + arg2
arg1[0xb] = i
int64_t rax

if (arg3 != 0)
    if (*(arg2 + 8) != 0x45564157)
    label_141e66c80:
        
        if (arg4 != 0 && *arg4 != u"Invalid WAVE file.")
            int32_t rdx_2 = 0
            arg4[1].d = 0
            
            if (*(arg4 + 0xc) != 0x13)
                sub_1405947f0(arg4, 0x13)
                rdx_2 = arg4[1].d
            
            arg4[1].d = rdx_2 + 0x13
            
            if (rdx_2 + 0x13 s> *(arg4 + 0xc))
                sub_140594770(arg4)
            
            __builtin_wcscpy(*arg4, u"Invalid WAVE file.")
            int64_t rax_16
            rax_16.b = 0
            return 0
    else
        void* rdx = arg2 + 0xc
        void* rcx = rdx
        arg1[7] = arg2 + 4
        
        if (rdx + 8 u< i)
            do
                if (*rcx == 0x20746d66)
                    goto label_141e66aea
                
                rcx += (zx.q(*(rcx + 4) + 1) & 0xfffffffe) + 8
            while (rcx + 8 u< i)
        
        if (*rcx != 0x20746d66)
            goto label_141e66c80
        
    label_141e66aea:
        arg1[5] = rcx + 8
        *arg1 = rcx + 0xc
        arg1[3] = rcx + 0x16
        arg1[1] = rcx + 0x10
        arg1[2] = rcx + 0x14
        arg1[4] = rcx + 0xa
        
        if (arg6 != 0)
            *arg6 = rcx + 8
        
        if (*(rcx + 4) u< 0x28 || *(rcx + 8) != 0xfffe)
            goto label_141e66c44
        
        if (*(rcx + 0x20) == 1)
            rax = zx.q(*(rcx + 0x1a))
        
        if (*(rcx + 0x20) != 1 || rax.w == 0 || rax.w == *(rcx + 0x16))
            if (*(rcx + 0x24) == data_143a2d344 && *(rcx + 0x2c) == data_143a2d34c)
                arg1[5] = rcx + 0x20
            label_141e66c44:
                int64_t i_1 = arg1[0xb]
                
                while (rdx + 8 u<= i_1)
                    if (*rdx == 0x61746164)
                        goto label_141e66de0
                    
                    rdx += (zx.q(*(rdx + 4) + 1) & 0xfffffffe) + 8
                
                if (*rdx != 0x61746164)
                    goto label_141e66c80
                
            label_141e66de0:
                arg1[8] = rdx + 8
                arg1[6] = rdx + 4
                uint64_t rax_19 = zx.q(*(rdx + 4))
                arg1[0xa].d = rax_19.d
                void* r10_2 = rdx + 8 + rax_19
                arg1[9] = r10_2
                
                if (arg5 == 0 && r10_2 u> i_1)
                    arg1[9] = i_1
                    int32_t rcx_10 = i_1.d - (rdx + 8).d
                    arg1[0xa].d = rcx_10
                    *(rdx + 4) = rcx_10
                
                uint32_t rcx_11 = zx.d(*arg1[5])
                
                if ((0xffee & (rcx_11 - 1).w) == 0 && rcx_11.w != 0x12)
                    if (arg5 == 0)
                        int64_t rax_22 = arg1[0xb]
                        
                        if (arg1[9] u> rax_22)
                            arg1[9] = rax_22
                            int32_t rax_23 = rax_22.d - arg1[8].d
                            arg1[0xa].d = rax_23
                            *(rdx + 4) = rax_23
                        
                        arg1[0xc].d = arg1[0xa].d
                    
                    int32_t rax_21
                    rax_21.b = 1
                    return rax_21
                
                sub_141e69400(arg1)
                
                if (arg4 != 0 && *arg4 != Unsupported wave file format.  Only PCM, ADPCM, and DVI ADPCM can be imported.")
                    int32_t rdx_5 = 0
                    arg4[1].d = 0
                    
                    if (*(arg4 + 0xc) != 0x4f)
                        sub_1405947f0(arg4, 0x4f)
                        rdx_5 = arg4[1].d
                    
                    arg4[1].d = rdx_5 + 0x4f
                    
                    if (rdx_5 + 0x4f s> *(arg4 + 0xc))
                        sub_140594770(arg4)
                    
                    int64_t rcx_15 = *arg4
                    __builtin_memcpy(rcx_15, 
                        Unsupported wave file format.  Only PCM, ADPCM, and DVI ADPCM can be imp", 0x90)
                    *(rcx_15 + 0x90) = 0x6500740072006f
                    *(rcx_15 + 0x98) = 0x2e0064
                    *(rcx_15 + 0x9c) = 0
            else if (arg4 != 0 && *arg4
                    != Unsupported WAVE file format: subformat identifier not recognized.")
                int32_t rdx_3 = 0
                arg4[1].d = 0
                
                if (*(arg4 + 0xc) != 0x43)
                    sub_1405947f0(arg4, 0x43)
                    rdx_3 = arg4[1].d
                
                arg4[1].d = rdx_3 + 0x43
                
                if (rdx_3 + 0x43 s> *(arg4 + 0xc))
                    sub_140594770(arg4)
                
                __builtin_wcscpy(*arg4, 
                    Unsupported WAVE file format: subformat identifier not recognized.")
                int64_t rax_18
                rax_18.b = 0
                return 0
        else if (arg4 != 0 && *arg4 !=
                Unsupported WAVE file format: actual bit rate does not match the container size.")
            int32_t rdx_1 = 0
            arg4[1].d = 0
            
            if (*(arg4 + 0xc) != 0x51)
                sub_1405947f0(arg4, 0x51)
                rdx_1 = arg4[1].d
            
            arg4[1].d = rdx_1 + 0x51
            
            if (rdx_1 + 0x51 s> *(arg4 + 0xc))
                sub_140594770(arg4)
            
            __builtin_wcscpy(*arg4, 
                Unsupported WAVE file format: actual bit rate does not match the container size.")
            int64_t rax_10
            rax_10.b = 0
            return 0

rax.b = 0
return rax
