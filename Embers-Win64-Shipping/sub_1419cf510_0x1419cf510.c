// 函数: sub_1419cf510
// 地址: 0x1419cf510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    uint32_t rax
    
    if (*(arg1 + 0xa1) != arg3 && arg2 s> 1)
        rax = sub_1419d5c70(data_143f0f1a0)
    
    int64_t r12
    
    if (*(arg1 + 0xa1) == arg3 || arg2 s<= 1 || rax.b == 0)
        r12.b = 0
    else
        r12.b = 1
    
    int32_t i = 0
    
    if (*(arg1 + 0x98) s> 0)
        int64_t r15_1 = 0
        
        do
            void* rax_1 = *(arg1 + 0x90)
            void* rcx_1 = arg1 + 0x10
            
            if (rax_1 != 0)
                rcx_1 = rax_1
            
            rax = zx.d(*(rcx_1 + r15_1 + 0xe))
            
            if ((rax.b & 4) == 0 || r12.b == 0)
                void* rdx = *(rcx_1 + r15_1)
                void* rdx_2
                int64_t rbp_1
                int64_t zmm0
                
                if (rdx == 0)
                    rbp_1 = sx.q(*(arg4 + 0x38))
                    int64_t var_54_1 = 0
                    int32_t rax_4 = (rbp_1 + 1).d
                    *(arg4 + 0x38) = rax_4
                    
                    if (rax_4 s> *(arg4 + 0x3c))
                        sub_1419d6df0(arg4, rbp_1.d)
                    
                    void* rax_5 = *(arg4 + 0x30)
                    rdx_2 = arg4
                    zmm0 = (i & 0xf).q
                    
                    if (rax_5 != 0)
                        rdx_2 = rax_5
                    
                    rax = 0
                else if ((rax.b & 2) == 0 || *(rdx + 8) != 0xffffffff)
                    rbp_1 = sx.q(*(arg4 + 0x38))
                    int32_t rcx_6 = *(rcx_1 + r15_1 + 8) << 4 | (i & 0xf)
                    int64_t rax_12 = *(rdx + 0x10)
                    int32_t rax_13 = (rbp_1 + 1).d
                    *(arg4 + 0x38) = rax_13
                    
                    if (rax_13 s> *(arg4 + 0x3c))
                        sub_1419d6df0(arg4, rbp_1.d)
                    
                    void* rax_14 = *(arg4 + 0x30)
                    rdx_2 = arg4
                    zmm0 = rcx_6.q
                    
                    if (rax_14 != 0)
                        rdx_2 = rax_14
                    
                    rax = rax_12:4.d
                else
                    rbp_1 = sx.q(*(arg4 + 0x38))
                    int64_t var_48_1 = 0
                    int32_t rax_8 = (rbp_1 + 1).d
                    *(arg4 + 0x38) = rax_8
                    
                    if (rax_8 s> *(arg4 + 0x3c))
                        sub_1419d6df0(arg4, rbp_1.d)
                    
                    void* rax_9 = *(arg4 + 0x30)
                    rdx_2 = arg4
                    zmm0 = (i & 0xf).q
                    
                    if (rax_9 != 0)
                        rdx_2 = rax_9
                    
                    rax = 0
                
                int64_t rcx_9 = rbp_1 * 3
                *(rdx_2 + (rcx_9 << 2)) = zmm0
                *(rdx_2 + (rcx_9 << 2) + 8) = rax
            
            i += 1
            r15_1 += 0x10
        while (i s< *(arg1 + 0x98))
else if (arg3 == 1)
    int32_t i_1 = 0
    
    if (*(arg1 + 0xd0) s> 0)
        int64_t rbp_2 = 0
        
        do
            void* rax_15 = *(arg1 + 0xc8)
            void* rdx_5 = arg1 + 0xa8
            int64_t rsi_1 = sx.q(*(arg4 + 0x38))
            
            if (rax_15 != 0)
                rdx_5 = rax_15
            
            int32_t rcx_12 = *(rdx_5 + rbp_2 + 8) << 4 | (i_1 & 0xf)
            int64_t rcx_13 = *(*(rdx_5 + rbp_2) + 0x10)
            int32_t rax_19 = (rsi_1 + 1).d
            *(arg4 + 0x38) = rax_19
            
            if (rax_19 s> *(arg4 + 0x3c))
                sub_1419d6df0(arg4, rsi_1.d)
            
            void* rax_20 = *(arg4 + 0x30)
            int64_t rcx_15 = rsi_1 * 3
            void* rdx_7 = arg4
            
            if (rax_20 != 0)
                rdx_7 = rax_20
            
            i_1 += 1
            rbp_2 += 0x10
            *(rdx_7 + (rcx_15 << 2)) = rcx_12.q
            *(rdx_7 + (rcx_15 << 2) + 8) = rcx_13:4.d
        while (i_1 s< *(arg1 + 0xd0))
else if (arg3 == 2)
    int32_t i_2 = 0
    
    if (*(arg1 + 0x110) s> 0)
        int64_t rbp_3 = 0
        
        do
            void* rax_21 = *(arg1 + 0x108)
            void* rdx_8 = arg1 + 0xd8
            int64_t rsi_2 = sx.q(*(arg4 + 0x38))
            
            if (rax_21 != 0)
                rdx_8 = rax_21
            
            int32_t rcx_18 = *(rdx_8 + rbp_3 + 8) << 4 | (i_2 & 0xf)
            int64_t rcx_19 = *(*(rdx_8 + rbp_3) + 0x10)
            int32_t rax_25 = (rsi_2 + 1).d
            *(arg4 + 0x38) = rax_25
            
            if (rax_25 s> *(arg4 + 0x3c))
                sub_1419d6df0(arg4, rsi_2.d)
            
            void* rax_26 = *(arg4 + 0x30)
            int64_t rcx_21 = rsi_2 * 3
            void* rdx_10 = arg4
            
            if (rax_26 != 0)
                rdx_10 = rax_26
            
            i_2 += 1
            rbp_3 += 0x10
            *(rdx_10 + (rcx_21 << 2)) = rcx_18.q
            *(rdx_10 + (rcx_21 << 2) + 8) = rcx_19:4.d
        while (i_2 s< *(arg1 + 0x110))
