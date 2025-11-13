// 函数: sub_14121bdb0
// 地址: 0x14121bdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *(arg1 + 0x88)
int32_t rsi = arg3
int32_t r11 = arg2
int32_t rax_2

while (true)
    int64_t rcx_1 = sx.q(r11) * 0x18
    void* rcx_2 = &arg1[4]
    
    if (r10 != 0)
        rcx_2 = r10
    
    int64_t r10_1 = rcx_1
    void* rcx_3 = rcx_2 + r10_1
    int32_t rdx = *rcx_3
    int128_t var_68
    int64_t var_58
    int128_t var_50
    int64_t var_40
    
    if (rdx == 0xffffffff)
        if (*(rcx_3 + 0x14) != 0)
            return -1
        
        uint32_t r8_1 = zx.d(*(rcx_3 + 0xe))
        
        if (r8_1 u< rsi)
            return -1
        
        uint32_t r9_1 = zx.d(*(rcx_3 + 0x10))
        
        if (r9_1 u< arg4)
            return -1
        
        uint32_t rdx_1 = zx.d(*(rcx_3 + 0x12))
        
        if (rdx_1 u< arg5)
            return -1
        
        if (arg6 == 0 && (zx.d(*(rcx_3 + 8)) + rsi u> *arg1
                || zx.d(*(rcx_3 + 0xa)) + arg4 u> arg1[1]
                || zx.d(*(rcx_3 + 0xc)) + arg4 u> arg1[2]))
            return -1
        
        if (r8_1 == rsi && r9_1 == arg4 && rdx_1 == arg5)
            return r11
        
        int128_t zmm0 = *rcx_3
        int32_t r8_2 = r8_1 - rsi
        int32_t rax_10 = arg1[0x24]
        int64_t zmm1 = *(rcx_3 + 0x10)
        int32_t r9_2 = r9_1 - arg4
        int32_t rdx_2 = rdx_1 - arg5
        int16_t rax_27
        void* r8_4
        int16_t r12_3
        int16_t r13_2
        
        if (r8_2 u<= r9_2)
            var_40 = zmm1
            var_50 = zmm0
            *rcx_3 = rax_10
            int64_t rsi_4 = sx.q(arg1[0x24])
            int32_t rax_28 = (rsi_4 + 1).d
            arg1[0x24] = rax_28
            
            if (r9_2 u<= rdx_2)
                if (rax_28 s> arg1[0x25])
                    sub_141238670(&arg1[4], rsi_4.d)
                    r10_1 = rcx_1
                
                void* r8_7 = *(arg1 + 0x88)
                void* rdx_16 = &arg1[4]
                r12_3 = var_40.w
                r13_2 = var_50:0xe.w
                
                if (r8_7 != 0)
                    rdx_16 = r8_7
                
                void* rax_37 = rdx_16 + rsi_4 * 0x18
                
                if (rax_37 != 0)
                    *(rax_37 + 8) = var_50:8.w
                    *(rax_37 + 0xa) = var_50:0xa.w
                    *(rax_37 + 0xc) = var_50:0xc.w
                    *rax_37 = -1
                    *(rax_37 + 0xe) = r13_2
                    *(rax_37 + 0x10) = r12_3
                    *(rax_37 + 0x12) = arg5.w
                    *(rax_37 + 0x14) = 0
                    r8_7 = *(arg1 + 0x88)
                
                void* rcx_36 = &arg1[4]
                
                if (r8_7 != 0)
                    rcx_36 = r8_7
                
                *(rcx_36 + r10_1 + 4) = arg1[0x24]
                int64_t rsi_6 = sx.q(arg1[0x24])
                int32_t rax_39 = (rsi_6 + 1).d
                arg1[0x24] = rax_39
                
                if (rax_39 s> arg1[0x25])
                    sub_141238670(&arg1[4], rsi_6.d)
                
                void* rax_40 = *(arg1 + 0x88)
                rsi = arg3
                void* rdx_18 = &arg1[4]
                
                if (rax_40 != 0)
                    rdx_18 = rax_40
                
                r8_4 = rdx_18 + rsi_6 * 0x18
                
                if (r8_4 != 0)
                    *(r8_4 + 8) = var_50:8.w
                    *(r8_4 + 0xa) = var_50:0xa.w
                    *(r8_4 + 0xc) = arg5.w + var_50:0xc.w
                    rax_27 = var_40:2.w
                label_14121c357:
                    *(r8_4 + 0x12) = rax_27 - arg5.w
                    *(r8_4 + 0x10) = r12_3
                    goto label_14121c361
            else
                if (rax_28 s> arg1[0x25])
                    sub_141238670(&arg1[4], rsi_4.d)
                    r10_1 = rcx_1
                
                void* r8_6 = *(arg1 + 0x88)
                void* rdx_12 = &arg1[4]
                int16_t r12_4 = var_40:2.w
                r13_2 = var_50:0xe.w
                
                if (r8_6 != 0)
                    rdx_12 = r8_6
                
                void* rax_29 = rdx_12 + rsi_4 * 0x18
                
                if (rax_29 != 0)
                    *(rax_29 + 8) = var_50:8.w
                    *(rax_29 + 0xa) = var_50:0xa.w
                    *(rax_29 + 0xc) = var_50:0xc.w
                    *rax_29 = -1
                    *(rax_29 + 0xe) = r13_2
                    *(rax_29 + 0x10) = arg4.w
                    *(rax_29 + 0x12) = r12_4
                    *(rax_29 + 0x14) = 0
                    r8_6 = *(arg1 + 0x88)
                
                void* rcx_28 = &arg1[4]
                
                if (r8_6 != 0)
                    rcx_28 = r8_6
                
                *(rcx_28 + r10_1 + 4) = arg1[0x24]
                int64_t rsi_5 = sx.q(arg1[0x24])
                int32_t rax_31 = (rsi_5 + 1).d
                arg1[0x24] = rax_31
                
                if (rax_31 s> arg1[0x25])
                    sub_141238670(&arg1[4], rsi_5.d)
                
                void* rax_32 = *(arg1 + 0x88)
                rsi = arg3
                void* rdx_14 = &arg1[4]
                
                if (rax_32 != 0)
                    rdx_14 = rax_32
                
                r8_4 = rdx_14 + rsi_5 * 0x18
                
                if (r8_4 != 0)
                    *(r8_4 + 8) = var_50:8.w
                    *(r8_4 + 0xa) = arg4.w + var_50:0xa.w
                    *(r8_4 + 0xc) = var_50:0xc.w
                    *(r8_4 + 0x12) = r12_4
                    *(r8_4 + 0x10) = var_40.w - arg4.w
                label_14121c361:
                    *(r8_4 + 0xe) = r13_2
                    *(r8_4 + 0x14) = 0
                    *r8_4 = -1
        else
            var_58 = zmm1
            var_68 = zmm0
            *rcx_3 = rax_10
            int64_t rsi_1 = sx.q(arg1[0x24])
            int32_t rax_11 = (rsi_1 + 1).d
            arg1[0x24] = rax_11
            
            if (r8_2 u<= rdx_2)
                if (rax_11 s> arg1[0x25])
                    sub_141238670(&arg1[4], rsi_1.d)
                    r10_1 = rcx_1
                
                void* r8_5 = *(arg1 + 0x88)
                void* rdx_8 = &arg1[4]
                r12_3 = var_58.w
                r13_2 = var_68:0xe.w
                
                if (r8_5 != 0)
                    rdx_8 = r8_5
                
                void* rax_20 = rdx_8 + rsi_1 * 0x18
                
                if (rax_20 != 0)
                    *(rax_20 + 8) = var_68:8.w
                    *(rax_20 + 0xa) = var_68:0xa.w
                    *(rax_20 + 0xc) = var_68:0xc.w
                    *rax_20 = -1
                    *(rax_20 + 0xe) = r13_2
                    *(rax_20 + 0x10) = r12_3
                    *(rax_20 + 0x12) = arg5.w
                    *(rax_20 + 0x14) = 0
                    r8_5 = *(arg1 + 0x88)
                
                void* rcx_20 = &arg1[4]
                
                if (r8_5 != 0)
                    rcx_20 = r8_5
                
                *(rcx_20 + r10_1 + 4) = arg1[0x24]
                int64_t rsi_3 = sx.q(arg1[0x24])
                int32_t rax_22 = (rsi_3 + 1).d
                arg1[0x24] = rax_22
                
                if (rax_22 s> arg1[0x25])
                    sub_141238670(&arg1[4], rsi_3.d)
                
                void* rax_23 = *(arg1 + 0x88)
                rsi = arg3
                void* rdx_10 = &arg1[4]
                
                if (rax_23 != 0)
                    rdx_10 = rax_23
                
                r8_4 = rdx_10 + rsi_3 * 0x18
                
                if (r8_4 != 0)
                    *(r8_4 + 8) = var_68:8.w
                    *(r8_4 + 0xa) = var_68:0xa.w
                    *(r8_4 + 0xc) = arg5.w + var_68:0xc.w
                    rax_27 = var_58:2.w
                    goto label_14121c357
            else
                if (rax_11 s> arg1[0x25])
                    sub_141238670(&arg1[4], rsi_1.d)
                    r10_1 = rcx_1
                
                void* r8_3 = *(arg1 + 0x88)
                void* rdx_4 = &arg1[4]
                int16_t r12_2 = var_58:2.w
                int16_t r13_1 = var_58.w
                
                if (r8_3 != 0)
                    rdx_4 = r8_3
                
                void* rax_12 = rdx_4 + rsi_1 * 0x18
                
                if (rax_12 != 0)
                    *(rax_12 + 8) = var_68:8.w
                    *(rax_12 + 0xa) = var_68:0xa.w
                    *(rax_12 + 0xc) = var_68:0xc.w
                    *(rax_12 + 0xe) = arg3.w
                    *rax_12 = -1
                    *(rax_12 + 0x10) = r13_1
                    *(rax_12 + 0x12) = r12_2
                    *(rax_12 + 0x14) = 0
                    r8_3 = *(arg1 + 0x88)
                
                void* rcx_12 = &arg1[4]
                
                if (r8_3 != 0)
                    rcx_12 = r8_3
                
                *(rcx_12 + r10_1 + 4) = arg1[0x24]
                int64_t rsi_2 = sx.q(arg1[0x24])
                int32_t rax_14 = (rsi_2 + 1).d
                arg1[0x24] = rax_14
                
                if (rax_14 s> arg1[0x25])
                    sub_141238670(&arg1[4], rsi_2.d)
                
                void* rax_15 = *(arg1 + 0x88)
                rsi = arg3
                void* rdx_6 = &arg1[4]
                
                if (rax_15 != 0)
                    rdx_6 = rax_15
                
                r8_4 = rdx_6 + rsi_2 * 0x18
                
                if (r8_4 != 0)
                    *(r8_4 + 0x10) = r13_1
                    *(r8_4 + 8) = rsi.w + var_68:8.w
                    *(r8_4 + 0xa) = var_68:0xa.w
                    *(r8_4 + 0xc) = var_68:0xc.w
                    *(r8_4 + 0x12) = r12_2
                    *(r8_4 + 0xe) = var_68:0xe.w - rsi.w
                    *(r8_4 + 0x14) = 0
                    *r8_4 = -1
        r10 = *(arg1 + 0x88)
        void* rax_44 = &arg1[4]
        
        if (r10 != 0)
            rax_44 = r10
        
        r11 = *(rax_44 + rcx_1)
    else
        rax_2 = sub_14121bdb0(arg1, rdx, zx.q(rsi), zx.q(arg4), arg5, arg6, var_68, var_58, var_50, 
            var_40)
        
        if (rax_2 != 0xffffffff)
            break
        
        r10 = *(arg1 + 0x88)
        void* rax_3 = &arg1[4]
        
        if (r10 != 0)
            rax_3 = r10
        
        r11 = *(rax_3 + rcx_1 + 4)

return rax_2
