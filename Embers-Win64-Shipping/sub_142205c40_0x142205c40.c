// 函数: sub_142205c40
// 地址: 0x142205c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = &__return_addr
uint64_t r14 = zx.q(arg3)

if (*(arg1 + 0x40) != 0 && arg2 != 0 && *(arg2 + 0x118) s> 0 && *(arg2 + 0xf0) != 0
        && *(arg2 + 0xf8) != 0)
    void* rax = sub_1421b85d0(arg1, arg2)
    int32_t r8 = *(arg1 + 0x40)
    void* r11_1 = rax
    int64_t rbp_1
    int64_t rsi_1
    int64_t r9_1
    float* r12_1
    int64_t r13_1
    
    if (r8 == 1)
        r12_1 = nullptr
        r9_1 = 0x10
        rbp_1 = 8
        rsi_1 = 0xc
        r13_1 = 0x18
    else if (r8 == 2)
        rbp_1 = 0x50
        r12_1 = 4
        r13_1 = 0x60
        r9_1 = 0x58
        rsi_1 = 0x54
    else if (r8 == 4)
        rbp_1 = 0x98
        r12_1 = 8
        r13_1 = 0xa8
        r9_1 = 0xa0
        rsi_1 = 0x9c
    else if (r8 == 8)
        rbp_1 = 0xe0
        r12_1 = 0xc
        r13_1 = 0xf0
        r9_1 = 0xe8
        rsi_1 = 0xe4
    else
        rbp_1 = -0x40
        r12_1 = -fffffffffffffffc
        r13_1 = -0x30
        r9_1 = -0x38
        rsi_1 = -0x3c
    
    int16_t* rdi_1 = *(arg2 + 0xf8)
    int32_t rdx_4 = *(arg2 + 0x114)
    int64_t r10_1 = *(arg2 + 0xf0)
    int128_t var_48_1 = arg4
    int64_t var_60_1 = r9_1
    int128_t var_58_1 = arg5
    int16_t* var_70_1 = rdi_1
    int32_t arg_8 = rdx_4
    int64_t var_68_1 = r10_1
    *rdi_1
    float zmm4
    float zmm0
    float zmm1
    float zmm2
    float zmm3
    
    if (r8 - 1 u> 0xe)
    label_1422069ef:
        void* rsi_6 = *(arg1 + 0x30)
        result = *(arg2 + 0x118) - 1
        int64_t result_5 = sx.q(result)
        
        if ((*(arg1 + 0x44) & 1) != 0)
            if (result s>= 0)
                arg5 = 0x3f800000
                int64_t result_6
                
                do
                    void* rdi_24 = zx.q(zx.d(rdi_1[result_5]) * rdx_4) + r10_1
                    
                    if ((*(rdi_24 + 0x5c) & 0x4000000) == 0)
                        void* rbp_12 = zx.q(arg3) + rdi_24
                        result = zx.d(var_70_1[result_5 + 1]) * rdx_4 + 0x40
                        
                        if ((*(arg1 + 0x40) & 1) == 0)
                            zmm3 = *rbp_12
                        else
                            uint32_t rdx_18 = zx.d(*(rsi_6 + 0xc))
                            arg4 = arg5
                            zmm3 = arg5.d
                            
                            if (rdx_18 == 2)
                                arg4 = *(rdi_24 + 0x30)
                            else if (rdx_18 == 3)
                                arg4 = *(rdi_24 + 0x34)
                            else if (rdx_18 == 4)
                                arg4 = *(rdi_24 + 0x38)
                            else if (rdx_18 == 5)
                                zmm0 = *(rdi_24 + 0x34)
                                zmm2 = *(rdi_24 + 0x30)
                                zmm1 = *(rdi_24 + 0x38)
                                arg4 = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm0 * zmm0 + zmm1 * zmm1)
                            
                            if ((*(rsi_6 + 0x10) & 1) != 0 || rdx_18.b == 0)
                                if ((*(rsi_6 + 8) & 1) == 0)
                                    zmm1 = *(rdi_24 + 0xc)
                                else
                                    zmm1 = *(arg2 + 0x12c)
                                
                                zmm0, result, arg4, arg5 = sub_141fe5610(rsi_6 + 0x18, zmm1, 
                                    *(arg2 + 0x18), r11_1, rax, var_70_1, var_68_1, var_60_1, 
                                    var_58_1, var_48_1)
                                r11_1 = rax
                                zmm3 = zmm0
                            
                            zmm3 = zmm3 f* arg4.d
                        
                        *rbp_12 = zmm3
                        
                        if ((*(arg1 + 0x40) & 2) == 0)
                            arg4 = *(rbp_12 + 4)
                        else
                            uint32_t rdx_19 = zx.d(*(rsi_6 + 0x54))
                            arg4 = arg5
                            zmm3 = arg5.d
                            
                            if (rdx_19 == 2)
                                arg4 = *(rdi_24 + 0x30)
                            else if (rdx_19 == 3)
                                arg4 = *(rdi_24 + 0x34)
                            else if (rdx_19 == 4)
                                arg4 = *(rdi_24 + 0x38)
                            else if (rdx_19 == 5)
                                zmm0 = *(rdi_24 + 0x34)
                                zmm2 = *(rdi_24 + 0x30)
                                zmm1 = *(rdi_24 + 0x38)
                                arg4 = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm0 * zmm0 + zmm1 * zmm1)
                            
                            if ((*(rsi_6 + 0x58) & 1) != 0 || rdx_19.b == 0)
                                if ((*(rsi_6 + 0x50) & 1) == 0)
                                    zmm1 = *(rdi_24 + 0xc)
                                else
                                    zmm1 = *(arg2 + 0x12c)
                                
                                zmm0, result, arg4, arg5 = sub_141fe5610(rsi_6 + 0x60, zmm1, 
                                    *(arg2 + 0x18), r11_1, rax, var_70_1, var_68_1, var_60_1, 
                                    var_58_1, var_48_1)
                                zmm3 = zmm0
                            
                            arg4.d = arg4.d f* zmm3
                        
                        *(rbp_12 + 4) = arg4.d
                        void* r12_6
                        
                        if ((*(arg1 + 0x40) & 4) == 0)
                            arg4 = *(rbp_12 + 8)
                            r12_6 = rax
                        else
                            uint32_t rdx_20 = zx.d(*(rsi_6 + 0x9c))
                            arg4 = arg5
                            
                            if (rdx_20 == 2)
                                arg4 = *(rdi_24 + 0x30)
                            else if (rdx_20 == 3)
                                arg4 = *(rdi_24 + 0x34)
                            else if (rdx_20 == 4)
                                arg4 = *(rdi_24 + 0x38)
                            else if (rdx_20 == 5)
                                zmm0 = *(rdi_24 + 0x34)
                                zmm2 = *(rdi_24 + 0x30)
                                zmm1 = *(rdi_24 + 0x38)
                                arg4 = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm0 * zmm0 + zmm1 * zmm1)
                            
                            if ((*(rsi_6 + 0xa0) & 1) != 0 || rdx_20.b == 0)
                                if ((*(rsi_6 + 0x98) & 1) == 0)
                                    zmm1 = *(rdi_24 + 0xc)
                                else
                                    zmm1 = *(arg2 + 0x12c)
                                
                                r12_6 = rax
                                zmm0, result, arg4, arg5 = sub_141fe5610(rsi_6 + 0xa8, zmm1, 
                                    *(arg2 + 0x18), r12_6, rax, var_70_1, var_68_1, var_60_1, 
                                    var_58_1, var_48_1)
                                arg4.d = arg4.d f* zmm0
                            else
                                r12_6 = rax
                                arg4.d = arg4.d f* arg5.d
                        
                        *(rbp_12 + 8) = arg4.d
                        
                        if ((*(arg1 + 0x40) & 8) == 0)
                            arg4 = *(rbp_12 + 0xc)
                        else
                            uint32_t rdx_21 = zx.d(*(rsi_6 + 0xe4))
                            arg4 = arg5
                            zmm3 = arg5.d
                            
                            if (rdx_21 == 2)
                                arg4 = *(rdi_24 + 0x30)
                            else if (rdx_21 == 3)
                                arg4 = *(rdi_24 + 0x34)
                            else if (rdx_21 == 4)
                                arg4 = *(rdi_24 + 0x38)
                            else if (rdx_21 == 5)
                                zmm0 = *(rdi_24 + 0x34)
                                zmm2 = *(rdi_24 + 0x30)
                                zmm1 = *(rdi_24 + 0x38)
                                arg4 = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm0 * zmm0 + zmm1 * zmm1)
                            
                            if ((*(rsi_6 + 0xe8) & 1) != 0 || rdx_21.b == 0)
                                if ((*(rsi_6 + 0xe0) & 1) == 0)
                                    zmm1 = *(rdi_24 + 0xc)
                                else
                                    zmm1 = *(arg2 + 0x12c)
                                
                                zmm0, result, arg4, arg5 = sub_141fe5610(rsi_6 + 0xf0, zmm1, 
                                    *(arg2 + 0x18), r12_6, rax, var_70_1, var_68_1, var_60_1, 
                                    var_58_1, var_48_1)
                                zmm3 = zmm0
                            
                            arg4.d = arg4.d f* zmm3
                        
                        r10_1 = var_68_1
                        r11_1 = rax
                        rdx_4 = arg_8
                        *(rbp_12 + 0xc) = arg4.d
                    
                    result_6 = result_5
                    result_5 -= 1
                    rdi_1 = var_70_1
                while (result_6 - 1 s>= 0)
        else if (result s>= 0)
            int64_t result_7
            
            do
                void* rbp_10 = zx.q(zx.d(rdi_1[result_5]) * rdx_4) + r10_1
                
                if ((*(rbp_10 + 0x5c) & 0x4000000) == 0)
                    void* rdi_21 = zx.q(arg3) + rbp_10
                    result = zx.d(var_70_1[result_5 + 1]) * rdx_4 + 0x40
                    
                    if ((*(arg1 + 0x40) & 1) == 0)
                        zmm0 = *rdi_21
                    else
                        if ((*(rsi_6 + 8) & 1) == 0)
                            zmm1 = *(rbp_10 + 0xc)
                        else
                            zmm1 = *(arg2 + 0x12c)
                        
                        zmm0, result = sub_141fe5610(rsi_6 + 0x18, zmm1, *(arg2 + 0x18), r11_1, 
                            rax, var_70_1, var_68_1, var_60_1, var_58_1, var_48_1)
                        r11_1 = rax
                    
                    *rdi_21 = zmm0
                    
                    if ((*(arg1 + 0x40) & 2) == 0)
                        zmm0 = *(rdi_21 + 4)
                    else
                        if ((*(rsi_6 + 0x50) & 1) == 0)
                            zmm1 = *(rbp_10 + 0xc)
                        else
                            zmm1 = *(arg2 + 0x12c)
                        
                        zmm0, result = sub_141fe5610(rsi_6 + 0x60, zmm1, *(arg2 + 0x18), r11_1, 
                            rax, var_70_1, var_68_1, var_60_1, var_58_1, var_48_1)
                    
                    *(rdi_21 + 4) = zmm0
                    void* r12_5
                    
                    if ((*(arg1 + 0x40) & 4) == 0)
                        zmm0 = *(rdi_21 + 8)
                        r12_5 = rax
                    else
                        if ((*(rsi_6 + 0x98) & 1) == 0)
                            zmm1 = *(rbp_10 + 0xc)
                        else
                            zmm1 = *(arg2 + 0x12c)
                        
                        r12_5 = rax
                        zmm0, result = sub_141fe5610(rsi_6 + 0xa8, zmm1, *(arg2 + 0x18), r12_5, 
                            rax, var_70_1, var_68_1, var_60_1, var_58_1, var_48_1)
                    
                    *(rdi_21 + 8) = zmm0
                    
                    if ((*(arg1 + 0x40) & 8) == 0)
                        zmm0 = *(rdi_21 + 0xc)
                    else
                        if ((*(rsi_6 + 0xe0) & 1) == 0)
                            zmm1 = *(rbp_10 + 0xc)
                        else
                            zmm1 = *(arg2 + 0x12c)
                        
                        zmm0, result = sub_141fe5610(rsi_6 + 0xf0, zmm1, *(arg2 + 0x18), r12_5, 
                            rax, var_70_1, var_68_1, var_60_1, var_58_1, var_48_1)
                    
                    r10_1 = var_68_1
                    r11_1 = rax
                    rdx_4 = arg_8
                    *(rdi_21 + 0xc) = zmm0
                    rdi_1 = var_70_1
                
                result_7 = result_5
                result_5 -= 1
            while (result_7 - 1 s>= 0)
    else
        switch (r8)
            case 1, 2, 4, 8
                char* r14_1 = *(arg1 + 0x30)
                result = *(arg2 + 0x118) - 1
                int64_t result_2 = sx.q(result)
                
                if ((*(arg1 + 0x44) & 1) != 0)
                    if (result s>= 0)
                        arg5 = 0x3f800000
                        int16_t* rcx_10 = var_70_1
                        int64_t result_9
                        
                        do
                            result = zx.d(rcx_10[result_2])
                            void* rdx_8 = zx.q(rdx_4 * result) + r10_1
                            
                            if ((*(rdx_8 + 0x5c) & 0x4000000) == 0)
                                result = zx.d(rcx_10[result_2 + 1]) * arg_8 + 0x40
                                uint32_t r8_3 = zx.d(r14_1[rsi_1])
                                arg4 = arg5
                                zmm3 = arg5.d
                                
                                if (r8_3 == 2)
                                    arg4 = *(rdx_8 + 0x30)
                                else if (r8_3 == 3)
                                    arg4 = *(rdx_8 + 0x34)
                                else if (r8_3 == 4)
                                    arg4 = *(rdx_8 + 0x38)
                                else if (r8_3 == 5)
                                    zmm0 = *(rdx_8 + 0x34)
                                    zmm2 = *(rdx_8 + 0x30)
                                    zmm1 = *(rdx_8 + 0x38)
                                    arg4 = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm0 * zmm0 + zmm1 * zmm1)
                                
                                if ((r14_1[r9_1] & 1) != 0 || r8_3.b == 0)
                                    if ((r14_1[rbp_1] & 1) == 0)
                                        zmm1 = *(rdx_8 + 0xc)
                                    else
                                        zmm1 = *(arg2 + 0x12c)
                                    
                                    zmm0, result, arg4, arg5 = sub_141fe5610(&r14_1[r13_1], zmm1, 
                                        *(arg2 + 0x18), r11_1, rax, var_70_1, var_68_1, var_60_1, 
                                        var_58_1, var_48_1)
                                    r9_1 = var_60_1
                                    zmm3 = zmm0
                                    r10_1 = var_68_1
                                    r11_1 = rax
                                
                                rcx_10 = var_70_1
                                *(r12_1 + zx.q(arg3) + rdx_8) = zmm3 f* arg4.d
                            
                            result_9 = result_2
                            result_2 -= 1
                            rdx_4 = arg_8
                        while (result_9 - 1 s>= 0)
                else if (result s>= 0)
                    int16_t* rcx_5 = var_70_1
                    int64_t result_10
                    
                    do
                        result = zx.d(rcx_5[result_2])
                        void* rdx_6 = zx.q(rdx_4 * result) + r10_1
                        
                        if ((*(rdx_6 + 0x5c) & 0x4000000) == 0)
                            rcx_5[result_2 + 1]
                            
                            if ((r14_1[rbp_1] & 1) == 0)
                                zmm1 = *(rdx_6 + 0xc)
                            else
                                zmm1 = *(arg2 + 0x12c)
                            
                            int32_t zmm0_1
                            zmm0_1, result = sub_141fe5610(&r14_1[r13_1], zmm1, *(arg2 + 0x18), 
                                r11_1, rax, var_70_1, var_68_1, var_60_1, var_58_1, var_48_1)
                            r10_1 = var_68_1
                            r11_1 = rax
                            rcx_5 = var_70_1
                            *(r12_1 + rdx_6 + zx.q(arg3)) = zmm0_1
                        
                        result_10 = result_2
                        result_2 -= 1
                        rdx_4 = arg_8
                    while (result_10 - 1 s>= 0)
            case 3
                void* rsi_3 = *(arg1 + 0x30)
                result = *(arg2 + 0x118) - 1
                int64_t result_1 = sx.q(result)
                
                if ((*(arg1 + 0x44) & 1) != 0)
                    if (result s>= 0)
                        arg5 = 0x3f800000
                        int64_t result_11
                        
                        do
                            void* rdi_7 = zx.q(zx.d(rdi_1[result_1]) * rdx_4) + r10_1
                            
                            if ((*(rdi_7 + 0x5c) & 0x4000000) == 0)
                                result = zx.d(var_70_1[result_1 + 1]) * rdx_4 + 0x40
                                uint32_t rdx_9 = zx.d(*(rsi_3 + 0xc))
                                arg4 = arg5
                                zmm3 = arg5.d
                                
                                if (rdx_9 == 2)
                                    arg4 = *(rdi_7 + 0x30)
                                else if (rdx_9 == 3)
                                    arg4 = *(rdi_7 + 0x34)
                                else if (rdx_9 == 4)
                                    arg4 = *(rdi_7 + 0x38)
                                else if (rdx_9 == 5)
                                    zmm0 = *(rdi_7 + 0x34)
                                    zmm2 = *(rdi_7 + 0x30)
                                    zmm1 = *(rdi_7 + 0x38)
                                    arg4 = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm0 * zmm0 + zmm1 * zmm1)
                                
                                if ((*(rsi_3 + 0x10) & 1) != 0 || rdx_9.b == 0)
                                    if ((*(rsi_3 + 8) & 1) == 0)
                                        zmm1 = *(rdi_7 + 0xc)
                                    else
                                        zmm1 = *(arg2 + 0x12c)
                                    
                                    zmm0, result, arg4, arg5 = sub_141fe5610(rsi_3 + 0x18, zmm1, 
                                        *(arg2 + 0x18), r11_1, rax, var_70_1, var_68_1, var_60_1, 
                                        var_58_1, var_48_1)
                                    r11_1 = rax
                                    zmm3 = zmm0
                                
                                zmm3 = zmm3 f* arg4.d
                                zmm4 = arg5.d
                                arg4 = arg5
                                *(r14 + rdi_7) = zmm3
                                uint32_t rdx_10 = zx.d(*(rsi_3 + 0x54))
                                
                                if (rdx_10 == 2)
                                    arg4 = *(rdi_7 + 0x30)
                                else if (rdx_10 == 3)
                                    arg4 = *(rdi_7 + 0x34)
                                else if (rdx_10 == 4)
                                    arg4 = *(rdi_7 + 0x38)
                                else if (rdx_10 == 5)
                                    zmm0 = *(rdi_7 + 0x34)
                                    zmm2 = *(rdi_7 + 0x30)
                                    zmm1 = *(rdi_7 + 0x38)
                                    arg4 = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm0 * zmm0 + zmm1 * zmm1)
                                
                                if ((*(rsi_3 + 0x58) & 1) != 0 || rdx_10.b == 0)
                                    if ((*(rsi_3 + 0x50) & 1) == 0)
                                        zmm1 = *(rdi_7 + 0xc)
                                    else
                                        zmm1 = *(arg2 + 0x12c)
                                    
                                    zmm0, result, arg4, arg5 = sub_141fe5610(rsi_3 + 0x60, zmm1, 
                                        *(arg2 + 0x18), r11_1, rax, var_70_1, var_68_1, var_60_1, 
                                        var_58_1, var_48_1)
                                    zmm4 = zmm0
                                
                                r10_1 = var_68_1
                                r11_1 = rax
                                rdx_4 = arg_8
                                arg4.d = arg4.d f* zmm4
                                *(r14 + rdi_7 + 4) = arg4.d
                                r14 = zx.q(arg3)
                            
                            result_11 = result_1
                            result_1 -= 1
                            rdi_1 = var_70_1
                        while (result_11 - 1 s>= 0)
                else if (result s>= 0)
                    int64_t result_12
                    
                    do
                        void* rdi_4 = zx.q(zx.d(rdi_1[result_1]) * rdx_4) + r10_1
                        
                        if ((*(rdi_4 + 0x5c) & 0x4000000) == 0)
                            var_70_1[result_1 + 1]
                            
                            if ((*(rsi_3 + 8) & 1) == 0)
                                zmm1 = *(rdi_4 + 0xc)
                            else
                                zmm1 = *(arg2 + 0x12c)
                            
                            int32_t zmm0_2
                            int512_t zmm1_1
                            zmm0_2, zmm1_1 = sub_141fe5610(rsi_3 + 0x18, zmm1, *(arg2 + 0x18), 
                                r11_1, rax, var_70_1, var_68_1, var_60_1, var_58_1, var_48_1)
                            *(r14 + rdi_4) = zmm0_2
                            
                            if ((*(rsi_3 + 0x50) & 1) == 0)
                                zmm1_1.o = *(rdi_4 + 0xc)
                            else
                                zmm1_1.o = *(arg2 + 0x12c)
                            
                            int32_t zmm0_3
                            zmm0_3, result =
                                sub_141fe5610(rsi_3 + 0x60, zmm1_1, *(arg2 + 0x18), rax)
                            r10_1 = var_68_1
                            r11_1 = rax
                            rdx_4 = arg_8
                            *(r14 + rdi_4 + 4) = zmm0_3
                            r14 = zx.q(arg3)
                        
                        result_12 = result_1
                        result_1 -= 1
                        rdi_1 = var_70_1
                    while (result_12 - 1 s>= 0)
            case 5, 6, 9, 0xa, 0xb, 0xc, 0xd, 0xe
                goto label_1422069ef
            case 7
                void* rsi_4 = *(arg1 + 0x30)
                result = *(arg2 + 0x118) - 1
                int64_t result_3 = sx.q(result)
                
                if ((*(arg1 + 0x44) & 1) != 0)
                    if (result s>= 0)
                        arg5 = 0x3f800000
                        int64_t result_13
                        
                        do
                            void* rdi_13 = zx.q(zx.d(rdi_1[result_3]) * rdx_4) + r10_1
                            
                            if ((*(rdi_13 + 0x5c) & 0x4000000) == 0)
                                float* rbp_3 = zx.q(arg3)
                                result = zx.d(var_70_1[result_3 + 1]) * rdx_4 + 0x40
                                uint32_t rdx_11 = zx.d(*(rsi_4 + 0xc))
                                arg4 = arg5
                                zmm3 = arg5.d
                                
                                if (rdx_11 == 2)
                                    arg4 = *(rdi_13 + 0x30)
                                else if (rdx_11 == 3)
                                    arg4 = *(rdi_13 + 0x34)
                                else if (rdx_11 == 4)
                                    arg4 = *(rdi_13 + 0x38)
                                else if (rdx_11 == 5)
                                    zmm0 = *(rdi_13 + 0x34)
                                    zmm2 = *(rdi_13 + 0x30)
                                    zmm1 = *(rdi_13 + 0x38)
                                    arg4 = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm0 * zmm0 + zmm1 * zmm1)
                                
                                if ((*(rsi_4 + 0x10) & 1) != 0 || rdx_11.b == 0)
                                    if ((*(rsi_4 + 8) & 1) == 0)
                                        zmm1 = *(rdi_13 + 0xc)
                                    else
                                        zmm1 = *(arg2 + 0x12c)
                                    
                                    zmm0, result, arg4, arg5 = sub_141fe5610(rsi_4 + 0x18, zmm1, 
                                        *(arg2 + 0x18), r11_1, rax, var_70_1, var_68_1, var_60_1, 
                                        var_58_1, var_48_1)
                                    r11_1 = rax
                                    zmm3 = zmm0
                                
                                zmm3 = zmm3 f* arg4.d
                                zmm4 = arg5.d
                                arg4 = arg5
                                *(rbp_3 + rdi_13) = zmm3
                                uint32_t rdx_12 = zx.d(*(rsi_4 + 0x54))
                                
                                if (rdx_12 == 2)
                                    arg4 = *(rdi_13 + 0x30)
                                else if (rdx_12 == 3)
                                    arg4 = *(rdi_13 + 0x34)
                                else if (rdx_12 == 4)
                                    arg4 = *(rdi_13 + 0x38)
                                else if (rdx_12 == 5)
                                    zmm0 = *(rdi_13 + 0x34)
                                    zmm2 = *(rdi_13 + 0x30)
                                    zmm1 = *(rdi_13 + 0x38)
                                    arg4 = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm0 * zmm0 + zmm1 * zmm1)
                                
                                if ((*(rsi_4 + 0x58) & 1) != 0 || rdx_12.b == 0)
                                    if ((*(rsi_4 + 0x50) & 1) == 0)
                                        zmm1 = *(rdi_13 + 0xc)
                                    else
                                        zmm1 = *(arg2 + 0x12c)
                                    
                                    zmm0, result, arg4, arg5 = sub_141fe5610(rsi_4 + 0x60, zmm1, 
                                        *(arg2 + 0x18), r11_1, rax, var_70_1, var_68_1, var_60_1, 
                                        var_58_1, var_48_1)
                                    zmm4 = zmm0
                                
                                arg4.d = arg4.d f* zmm4
                                zmm3 = arg5.d
                                *(rbp_3 + rdi_13 + 4) = arg4.d
                                arg4 = arg5
                                uint32_t rdx_13 = zx.d(*(rsi_4 + 0x9c))
                                
                                if (rdx_13 == 2)
                                    arg4 = *(rdi_13 + 0x30)
                                else if (rdx_13 == 3)
                                    arg4 = *(rdi_13 + 0x34)
                                else if (rdx_13 == 4)
                                    arg4 = *(rdi_13 + 0x38)
                                else if (rdx_13 == 5)
                                    zmm0 = *(rdi_13 + 0x34)
                                    zmm2 = *(rdi_13 + 0x30)
                                    zmm1 = *(rdi_13 + 0x38)
                                    arg4 = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm0 * zmm0 + zmm1 * zmm1)
                                
                                if ((*(rsi_4 + 0xa0) & 1) != 0 || rdx_13.b == 0)
                                    if ((*(rsi_4 + 0x98) & 1) == 0)
                                        zmm1 = *(rdi_13 + 0xc)
                                    else
                                        zmm1 = *(arg2 + 0x12c)
                                    
                                    zmm0, result, arg4, arg5 = sub_141fe5610(rsi_4 + 0xa8, zmm1, 
                                        *(arg2 + 0x18), rax, rax, var_70_1, var_68_1, var_60_1, 
                                        var_58_1, var_48_1)
                                    zmm3 = zmm0
                                
                                r10_1 = var_68_1
                                r11_1 = rax
                                rdx_4 = arg_8
                                arg4.d = arg4.d f* zmm3
                                *(rbp_3 + rdi_13 + 8) = arg4.d
                            
                            result_13 = result_3
                            result_3 -= 1
                            rdi_1 = var_70_1
                        while (result_13 - 1 s>= 0)
                else if (result s>= 0)
                    int64_t result_8
                    
                    do
                        void* rdi_10 = zx.q(zx.d(rdi_1[result_3]) * rdx_4) + r10_1
                        
                        if ((*(rdi_10 + 0x5c) & 0x4000000) == 0)
                            uint64_t rbp_2 = zx.q(arg3)
                            var_70_1[result_3 + 1]
                            
                            if ((*(rsi_4 + 8) & 1) == 0)
                                zmm1 = *(rdi_10 + 0xc)
                            else
                                zmm1 = *(arg2 + 0x12c)
                            
                            int32_t zmm0_4
                            int512_t zmm1_2
                            zmm0_4, zmm1_2 = sub_141fe5610(rsi_4 + 0x18, zmm1, *(arg2 + 0x18), 
                                r11_1, rax, var_70_1, var_68_1, var_60_1, var_58_1, var_48_1)
                            *(rbp_2 + rdi_10) = zmm0_4
                            
                            if ((*(rsi_4 + 0x50) & 1) == 0)
                                zmm1_2.o = *(rdi_10 + 0xc)
                            else
                                zmm1_2.o = *(arg2 + 0x12c)
                            
                            int32_t zmm0_5
                            int512_t zmm1_3
                            zmm0_5, zmm1_3 =
                                sub_141fe5610(rsi_4 + 0x60, zmm1_2, *(arg2 + 0x18), rax)
                            *(rbp_2 + rdi_10 + 4) = zmm0_5
                            
                            if ((*(rsi_4 + 0x98) & 1) == 0)
                                zmm1_3.o = *(rdi_10 + 0xc)
                            else
                                zmm1_3.o = *(arg2 + 0x12c)
                            
                            int32_t zmm0_6
                            zmm0_6, result =
                                sub_141fe5610(rsi_4 + 0xa8, zmm1_3, *(arg2 + 0x18), rax)
                            r10_1 = var_68_1
                            r11_1 = rax
                            rdx_4 = arg_8
                            *(rbp_2 + rdi_10 + 8) = zmm0_6
                        
                        result_8 = result_3
                        result_3 -= 1
                        rdi_1 = var_70_1
                    while (result_8 - 1 s>= 0)
            case 0xf
                void* rsi_5 = *(arg1 + 0x30)
                result = *(arg2 + 0x118) - 1
                int64_t result_4 = sx.q(result)
                
                if ((*(arg1 + 0x44) & 1) != 0)
                    if (result s>= 0)
                        arg5 = 0x3f800000
                        int64_t result_14
                        
                        do
                            void* rdi_19 = zx.q(zx.d(rdi_1[result_4]) * rdx_4) + r10_1
                            
                            if ((*(rdi_19 + 0x5c) & 0x4000000) == 0)
                                void* rbp_7 = zx.q(arg3) + rdi_19
                                result = zx.d(var_70_1[result_4 + 1]) * rdx_4 + 0x40
                                uint32_t rdx_14 = zx.d(*(rsi_5 + 0xc))
                                arg4 = arg5
                                zmm3 = arg5.d
                                
                                if (rdx_14 == 2)
                                    arg4 = *(rdi_19 + 0x30)
                                else if (rdx_14 == 3)
                                    arg4 = *(rdi_19 + 0x34)
                                else if (rdx_14 == 4)
                                    arg4 = *(rdi_19 + 0x38)
                                else if (rdx_14 == 5)
                                    zmm0 = *(rdi_19 + 0x34)
                                    zmm2 = *(rdi_19 + 0x30)
                                    zmm1 = *(rdi_19 + 0x38)
                                    arg4 = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm0 * zmm0 + zmm1 * zmm1)
                                
                                if ((*(rsi_5 + 0x10) & 1) != 0 || rdx_14.b == 0)
                                    if ((*(rsi_5 + 8) & 1) == 0)
                                        zmm1 = *(rdi_19 + 0xc)
                                    else
                                        zmm1 = *(arg2 + 0x12c)
                                    
                                    zmm0, result, arg4, arg5 = sub_141fe5610(rsi_5 + 0x18, zmm1, 
                                        *(arg2 + 0x18), r11_1, rax, var_70_1, var_68_1, var_60_1, 
                                        var_58_1, var_48_1)
                                    r11_1 = rax
                                    zmm3 = zmm0
                                
                                zmm3 = zmm3 f* arg4.d
                                zmm4 = arg5.d
                                arg4 = arg5
                                *rbp_7 = zmm3
                                uint32_t rdx_15 = zx.d(*(rsi_5 + 0x54))
                                
                                if (rdx_15 == 2)
                                    arg4 = *(rdi_19 + 0x30)
                                else if (rdx_15 == 3)
                                    arg4 = *(rdi_19 + 0x34)
                                else if (rdx_15 == 4)
                                    arg4 = *(rdi_19 + 0x38)
                                else if (rdx_15 == 5)
                                    zmm0 = *(rdi_19 + 0x34)
                                    zmm2 = *(rdi_19 + 0x30)
                                    zmm1 = *(rdi_19 + 0x38)
                                    arg4 = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm0 * zmm0 + zmm1 * zmm1)
                                
                                if ((*(rsi_5 + 0x58) & 1) != 0 || rdx_15.b == 0)
                                    if ((*(rsi_5 + 0x50) & 1) == 0)
                                        zmm1 = *(rdi_19 + 0xc)
                                    else
                                        zmm1 = *(arg2 + 0x12c)
                                    
                                    zmm0, result, arg4, arg5 = sub_141fe5610(rsi_5 + 0x60, zmm1, 
                                        *(arg2 + 0x18), r11_1, rax, var_70_1, var_68_1, var_60_1, 
                                        var_58_1, var_48_1)
                                    zmm4 = zmm0
                                
                                arg4.d = arg4.d f* zmm4
                                zmm3 = arg5.d
                                *(rbp_7 + 4) = arg4.d
                                arg4 = arg5
                                uint32_t rdx_16 = zx.d(*(rsi_5 + 0x9c))
                                
                                if (rdx_16 == 2)
                                    arg4 = *(rdi_19 + 0x30)
                                else if (rdx_16 == 3)
                                    arg4 = *(rdi_19 + 0x34)
                                else if (rdx_16 == 4)
                                    arg4 = *(rdi_19 + 0x38)
                                else if (rdx_16 == 5)
                                    zmm0 = *(rdi_19 + 0x34)
                                    zmm2 = *(rdi_19 + 0x30)
                                    zmm1 = *(rdi_19 + 0x38)
                                    arg4 = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm0 * zmm0 + zmm1 * zmm1)
                                
                                void* r12_4
                                
                                if ((*(rsi_5 + 0xa0) & 1) != 0 || rdx_16.b == 0)
                                    if ((*(rsi_5 + 0x98) & 1) == 0)
                                        zmm1 = *(rdi_19 + 0xc)
                                    else
                                        zmm1 = *(arg2 + 0x12c)
                                    
                                    r12_4 = rax
                                    zmm0, result, arg4, arg5 = sub_141fe5610(rsi_5 + 0xa8, zmm1, 
                                        *(arg2 + 0x18), r12_4, rax, var_70_1, var_68_1, var_60_1, 
                                        var_58_1, var_48_1)
                                    zmm3 = zmm0
                                else
                                    r12_4 = rax
                                
                                arg4.d = arg4.d f* zmm3
                                zmm3 = arg5.d
                                *(rbp_7 + 8) = arg4.d
                                arg4 = arg5
                                uint32_t rdx_17 = zx.d(*(rsi_5 + 0xe4))
                                
                                if (rdx_17 == 2)
                                    arg4 = *(rdi_19 + 0x30)
                                else if (rdx_17 == 3)
                                    arg4 = *(rdi_19 + 0x34)
                                else if (rdx_17 == 4)
                                    arg4 = *(rdi_19 + 0x38)
                                else if (rdx_17 == 5)
                                    zmm0 = *(rdi_19 + 0x34)
                                    zmm2 = *(rdi_19 + 0x30)
                                    zmm1 = *(rdi_19 + 0x38)
                                    arg4 = _mm_sqrt_ss(0, zmm2 * zmm2 + zmm0 * zmm0 + zmm1 * zmm1)
                                
                                if ((*(rsi_5 + 0xe8) & 1) != 0 || rdx_17.b == 0)
                                    if ((*(rsi_5 + 0xe0) & 1) == 0)
                                        zmm1 = *(rdi_19 + 0xc)
                                    else
                                        zmm1 = *(arg2 + 0x12c)
                                    
                                    zmm0, result, arg4, arg5 = sub_141fe5610(rsi_5 + 0xf0, zmm1, 
                                        *(arg2 + 0x18), r12_4, rax, var_70_1, var_68_1, var_60_1, 
                                        var_58_1, var_48_1)
                                    zmm3 = zmm0
                                
                                r10_1 = var_68_1
                                r11_1 = rax
                                rdx_4 = arg_8
                                arg4.d = arg4.d f* zmm3
                                *(rbp_7 + 0xc) = arg4.d
                            
                            result_14 = result_4
                            result_4 -= 1
                            rdi_1 = var_70_1
                        while (result_14 - 1 s>= 0)
                else if (result s>= 0)
                    int64_t result_15
                    
                    do
                        void* rdi_16 = zx.q(zx.d(rdi_1[result_4]) * rdx_4) + r10_1
                        
                        if ((*(rdi_16 + 0x5c) & 0x4000000) == 0)
                            void* rbp_5 = zx.q(arg3) + rdi_16
                            var_70_1[result_4 + 1]
                            
                            if ((*(rsi_5 + 8) & 1) == 0)
                                zmm1 = *(rdi_16 + 0xc)
                            else
                                zmm1 = *(arg2 + 0x12c)
                            
                            int32_t zmm0_7
                            int512_t zmm1_4
                            zmm0_7, zmm1_4 = sub_141fe5610(rsi_5 + 0x18, zmm1, *(arg2 + 0x18), 
                                r11_1, rax, var_70_1, var_68_1, var_60_1, var_58_1, var_48_1)
                            *rbp_5 = zmm0_7
                            
                            if ((*(rsi_5 + 0x50) & 1) == 0)
                                zmm1_4.o = *(rdi_16 + 0xc)
                            else
                                zmm1_4.o = *(arg2 + 0x12c)
                            
                            int32_t zmm0_8
                            int512_t zmm1_5
                            zmm0_8, zmm1_5 =
                                sub_141fe5610(rsi_5 + 0x60, zmm1_4, *(arg2 + 0x18), rax)
                            *(rbp_5 + 4) = zmm0_8
                            
                            if ((*(rsi_5 + 0x98) & 1) == 0)
                                zmm1_5.o = *(rdi_16 + 0xc)
                            else
                                zmm1_5.o = *(arg2 + 0x12c)
                            
                            int32_t zmm0_9
                            int512_t zmm1_6
                            zmm0_9, zmm1_6 =
                                sub_141fe5610(rsi_5 + 0xa8, zmm1_5, *(arg2 + 0x18), rax)
                            *(rbp_5 + 8) = zmm0_9
                            
                            if ((*(rsi_5 + 0xe0) & 1) == 0)
                                zmm1_6.o = *(rdi_16 + 0xc)
                            else
                                zmm1_6.o = *(arg2 + 0x12c)
                            
                            int32_t zmm0_10
                            zmm0_10, result =
                                sub_141fe5610(rsi_5 + 0xf0, zmm1_6, *(arg2 + 0x18), rax)
                            r10_1 = var_68_1
                            r11_1 = rax
                            rdx_4 = arg_8
                            *(rbp_5 + 0xc) = zmm0_10
                        
                        result_15 = result_4
                        result_4 -= 1
                        rdi_1 = var_70_1
                    while (result_15 - 1 s>= 0)

return result
