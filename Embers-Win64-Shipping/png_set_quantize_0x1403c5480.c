// 函数: png_set_quantize
// 地址: 0x1403c5480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg6
void var_d8
void** result = __security_cookie ^ &var_d8
void** result_1 = result

if (arg1 != 0)
    int32_t r13_1 = arg4
    *(arg1 + 0x15c) |= 0x40
    int32_t var_9c_1 = rbx
    
    if (rbx == 0)
        int32_t rsi_4 = arg3.d
        uint64_t r15_2 = zx.q(rsi_4)
        result = png_malloc(arg1, r15_2)
        rbx = var_9c_1
        *(arg1 + 0x3a0) = result
        
        if (rsi_4 s> 0)
            *result = nullptr
            
            if (arg3.d != 1)
                result = zx.q(arg3.d - 1) & 3
                int64_t rcx_6 = 1
                
                if (r15_2 - 2 u>= 3)
                    int64_t i = 0
                    
                    do
                        *(*(arg1 + 0x3a0) + i + 1) = (i + 1).b
                        *(*(arg1 + 0x3a0) + i + 2) = (i + 2).b
                        *(*(arg1 + 0x3a0) + i + 3) = (i + 3).b
                        *(*(arg1 + 0x3a0) + i + 4) = (i + 4).b
                        i += 4
                    while (r15_2 - 1 - result != i)
                    
                    rcx_6 = i + 1
                
                if (result.d != 0)
                    result = neg.q(result)
                    void** i_1
                    
                    do
                        (*(arg1 + 0x3a0))[rcx_6] = rcx_6.b
                        rcx_6 += 1
                        i_1 = result
                        result += 1
                    while (i_1 != -1)
    
    if (arg3.d s<= r13_1)
        r13_1 = arg3.d
        
        if (*(arg1 + 0x248) == 0)
            result = arg2
            *(arg1 + 0x248) = result
    else
        uint64_t r15_1 = zx.q(arg3.d)
        char* rax_1 = png_malloc(arg1, r15_1)
        int32_t var_8c_1 = r13_1
        uint64_t var_68_1 = r15_1
        
        if (arg5 == 0)
            *(arg1 + 0x448) = rax_1
            *(arg1 + 0x450) = png_malloc(arg1, r15_1)
            uint64_t r12_1 = arg3
            
            if (arg3.d s> 0)
                uint64_t rax_13 = zx.q(r15_1.d) & 1
                int64_t i_2
                
                if (r12_1.d != 1)
                    i_2 = 0
                    
                    do
                        (*(arg1 + 0x448))[i_2] = i_2.b
                        (*(arg1 + 0x450))[i_2] = i_2.b
                        rbx = (i_2 + 1).d
                        *(*(arg1 + 0x448) + i_2 + 1) = rbx.b
                        *(*(arg1 + 0x450) + i_2 + 1) = rbx.b
                        i_2 += 2
                    while (r15_1 - rax_13 != i_2)
                    
                    if (rax_13 != 0)
                        (*(arg1 + 0x448))[i_2] = i_2.b
                        (*(arg1 + 0x450))[i_2] = i_2.b
                else
                    i_2 = 0
                    
                    if (rax_13 != 0)
                        (*(arg1 + 0x448))[i_2] = i_2.b
                        (*(arg1 + 0x450))[i_2] = i_2.b
            
            rbx.b = var_9c_1 != 0
            int64_t rbp_27 = png_calloc(arg1, 0x1808)
            int64_t rax_26
            rax_26.b = r12_1.d s<= 0
            rax_26.b |= rbx.b
            char var_b1_1 = rax_26.b
            int64_t var_78_1 = 0x60
            int64_t* rax_29 = nullptr
            int64_t rbp_28
            
            while (true)
                int64_t rbp_37 = sx.q(r12_1.d)
                int64_t rcx_31 = sx.q((r12_1 - 1).d)
                int32_t rcx_32 = 1
                int64_t r8_3 = 0
                uint64_t var_b0_1 = r12_1
                
                while (true)
                    if (r8_3 s>= rcx_31)
                        if (rax_29 != 0)
                            int64_t rcx_18 = 0
                            rbp_28 = rbp_27
                            int64_t rcx_29
                            
                            do
                                void** i_3 = *(rbp_28 + (rcx_18 << 3))
                                int32_t var_80
                                var_80.q = rcx_18
                                
                                if (i_3 != 0)
                                    int32_t rsi_12 = r12_1.d
                                    
                                    do
                                        void* rcx_20 = *(arg1 + 0x448)
                                        uint64_t rbp_29 = zx.q(i_3[1].b)
                                        uint64_t r10_2
                                        
                                        if (rsi_12 s> zx.d(*(rcx_20 + rbp_29)))
                                            r10_2 = zx.q(*(i_3 + 9))
                                        
                                        if (rsi_12 s<= zx.d(*(rcx_20 + rbp_29))
                                                || rsi_12 s<= zx.d(*(rcx_20 + r10_2)))
                                            r12_1 = zx.q(rsi_12)
                                        else
                                            char r9_2 = r10_2.b
                                            
                                            if ((rsi_12.b & 1) != 0)
                                                r9_2 = rbp_29.b
                                            
                                            r12_1 = sx.q(rsi_12) - 1
                                            uint64_t rdi_13 = zx.q(r9_2)
                                            uint64_t r11_2 = zx.q(*(rcx_20 + rdi_13)) * 3
                                            uint64_t r15_7 = r12_1 * 3
                                            uint64_t rcx_21
                                            rcx_21.b = *(arg2 + r15_7 + 2)
                                            *(arg2 + r11_2 + 2) = rcx_21.b
                                            *(arg2 + r11_2) = *(arg2 + r15_7)
                                            int16_t* rbx_18
                                            
                                            if (var_b1_1 == 0)
                                                if ((rsi_12.b & 1) != 0)
                                                    rbp_29 = zx.q(r10_2.d)
                                                
                                                int64_t rcx_23 = 0
                                                
                                                do
                                                    char* rsi_13 = *(arg1 + 0x3a0)
                                                    char* rbp_30 = *(arg1 + 0x448)
                                                    rbx_18 = zx.q(rsi_13[rcx_23])
                                                    
                                                    if (rbx_18.b == rbp_30[rdi_13])
                                                        rsi_13[rcx_23] = rbp_30[zx.q(rbp_29.b)]
                                                        rsi_13 = *(arg1 + 0x3a0)
                                                        rbx_18 = zx.q(rsi_13[rcx_23])
                                                    
                                                    if (r12_1.d == zx.d(rbx_18.b))
                                                        rsi_13[rcx_23] = *(*(arg1 + 0x448) + rdi_13)
                                                    
                                                    rcx_23 += 1
                                                while (var_68_1 != rcx_23)
                                            
                                            char* rcx_24 = *(arg1 + 0x448)
                                            rbx_18.b = rcx_24[rdi_13]
                                            rcx_24[zx.q(*(*(arg1 + 0x450) + r12_1))] = rbx_18.b
                                            char* rbp_36 = *(arg1 + 0x450)
                                            rbx_18.b = rbp_36[r12_1]
                                            rbp_36[zx.q(*(*(arg1 + 0x448) + rdi_13))] = rbx_18.b
                                            *(*(arg1 + 0x448) + rdi_13) = r12_1.b
                                            (*(arg1 + 0x450))[r12_1] = r9_2
                                        
                                        rbp_28 = rbp_27
                                        
                                        if (r12_1.d s<= r13_1)
                                            goto label_1403c5d51
                                        
                                        i_3 = *i_3
                                        rsi_12 = r12_1.d
                                    while (i_3 != 0)
                                
                                rcx_29 = var_80.q
                                rcx_18 = rcx_29 + 1
                            while (rcx_29 u< var_78_1)
                            break
                        
                        rax_29 = nullptr
                    else
                        int64_t rdx_24 = r8_3 + 1
                        
                        if (r12_1.d s<= rdx_24.d)
                        label_1403c5d13:
                            rcx_32 += 1
                            r8_3 = rdx_24
                            r13_1 = var_8c_1
                            r12_1 = var_b0_1
                            
                            if (rax_29 != 0)
                                continue
                            
                            rax_29 = nullptr
                        else
                            int64_t r15_8 = sx.q(rcx_32)
                            void* rdi_15 = r15_8 * 3 + &arg2[1]
                            int64_t rcx_33 = r8_3 * 3
                            
                            while (true)
                                uint32_t rcx_35 = zx.d(*(arg2 + rcx_33)) - zx.d(*(rdi_15 - 2))
                                uint32_t rdx_28 = neg.d(rcx_35)
                                
                                if (neg.d(rcx_35) s< 0 != neg.d(rcx_35) == 0x80000000)
                                    rdx_28 = rcx_35
                                
                                uint32_t rsi_15 = zx.d(*(arg2 + rcx_33 + 1)) - zx.d(*(rdi_15 - 1))
                                uint32_t rcx_37 = neg.d(rsi_15)
                                
                                if (neg.d(rsi_15) s< 0 != neg.d(rsi_15) == 0x80000000)
                                    rcx_37 = rsi_15
                                
                                uint32_t rdx_30 = zx.d(*(arg2 + rcx_33 + 2)) - zx.d(*rdi_15)
                                uint32_t rbx_23 = neg.d(rdx_30)
                                
                                if (neg.d(rdx_30) s< 0 != neg.d(rdx_30) == 0x80000000)
                                    rbx_23 = rdx_30
                                
                                uint64_t rbx_24 = zx.q(rbx_23 + rcx_37 + rdx_28)
                                
                                if (var_78_1 s>= rbx_24)
                                    rax_29 = png_malloc_warn(arg1, 0x10)
                                    
                                    if (rax_29 == 0)
                                        rax_29 = nullptr
                                        r13_1 = var_8c_1
                                        r12_1 = var_b0_1
                                        break
                                    
                                    uint64_t rcx_40 = zx.q(rbx_24.d)
                                    *rax_29 = *(rbp_27 + (rcx_40 << 3))
                                    rax_29[1].b = r8_3.b
                                    *(rax_29 + 9) = r15_8.b
                                    *(rbp_27 + (rcx_40 << 3)) = rax_29
                                
                                r15_8 += 1
                                rdi_15 += 3
                                
                                if (r15_8 s>= rbp_37)
                                    goto label_1403c5d13
                    
                    rbp_28 = rbp_27
                    break
                
            label_1403c5d51:
                
                for (int64_t i_4 = 0; i_4 != 0x301; i_4 += 1)
                    int64_t* j_2 = *(rbp_28 + (i_4 << 3))
                    
                    if (j_2 != 0)
                        int64_t* j
                        
                        do
                            j = *j_2
                            png_free(arg1, j_2)
                            j_2 = j
                        while (j != 0)
                        rax_29 = nullptr
                    
                    *(rbp_28 + (i_4 << 3)) = 0
                
                var_78_1 += 0x60
                
                if (r12_1.d s<= r13_1)
                    break
            
            png_free(arg1, rbp_28)
            png_free(arg1, *(arg1 + 0x450))
            png_free(arg1, *(arg1 + 0x448))
            result = arg1 + 0x448
            *result = zx.o(0)
        else
            *(arg1 + 0x440) = rax_1
            
            if (arg3.d s> 0)
                *rax_1 = 0
                
                if (arg3.d != 1)
                    uint64_t rax_4 = zx.q(arg3.d - 1) & 3
                    int64_t rcx_1 = 1
                    
                    if (r15_1 - 2 u>= 3)
                        int64_t i_5 = 0
                        
                        do
                            *(*(arg1 + 0x440) + i_5 + 1) = (i_5 + 1).b
                            *(*(arg1 + 0x440) + i_5 + 2) = (i_5 + 2).b
                            *(*(arg1 + 0x440) + i_5 + 3) = (i_5 + 3).b
                            *(*(arg1 + 0x440) + i_5 + 4) = (i_5 + 4).b
                            i_5 += 4
                        while (r15_1 - 1 - rax_4 != i_5)
                        
                        rcx_1 = i_5 + 1
                    
                    if (rax_4.d != 0)
                        int64_t i_10 = neg.q(rax_4)
                        int64_t i_6
                        
                        do
                            (*(arg1 + 0x440))[rcx_1] = rcx_1.b
                            rcx_1 += 1
                            i_6 = i_10
                            i_10 += 1
                        while (i_6 != -1)
            
            int32_t rax_5 = arg3.d
            uint64_t rax_6 = zx.q(rax_5 - 1)
            int32_t r8 = rax_5
            
            while (r8 s> r13_1)
                r8 -= 1
                
                if (r8 s<= 0)
                    break
                
                uint64_t rax_7 = zx.q(rax_6.d)
                int32_t r9 = 1
                int64_t rbp_5 = 0
                int64_t rdi_1
                
                do
                    char* rcx_3 = *(arg1 + 0x440)
                    uint64_t rsi_2 = zx.q(rcx_3[rbp_5])
                    rdi_1 = rbp_5 + 1
                    uint64_t rbx_5 = zx.q(rcx_3[rbp_5 + 1])
                    
                    if (*(arg5 + (rsi_2 << 1)) u< *(arg5 + (rbx_5 << 1)))
                        rcx_3[rbp_5] = rbx_5.b
                        *(*(arg1 + 0x440) + rbp_5 + 1) = rsi_2.b
                        r9 = 0
                    
                    rbp_5 = rdi_1
                while (rax_7 != rdi_1)
                rax_6 = zx.q(rax_7.d - 1)
                
                if (r9 != 0)
                    break
            
            if (var_9c_1 == 0)
                int32_t r8_1 = arg3.d
                
                if (r13_1 s> 0)
                    int64_t i_7 = 0
                    uint64_t rdx_18 = zx.q(r8_1)
                    
                    do
                        void* rbx_8 = *(arg1 + 0x440)
                        
                        if (zx.d(*(rbx_8 + i_7)) s>= r13_1)
                            rdx_18 = sx.q(rdx_18.d)
                            int16_t* rbp_16 = rdx_18 * 3 + arg2
                            uint32_t rdi_4
                            
                            do
                                rdi_4 = zx.d(*(rbx_8 + rdx_18 - 1))
                                rdx_18 -= 1
                                rbp_16 -= 3
                            while (rdi_4 s>= r13_1)
                            rbx_8.b = rbp_16[1].b
                            char var_4e_1 = rbx_8.b
                            int16_t rbx_9 = *rbp_16
                            int64_t rbx_10 = i_7 * 3
                            rax_6.b = *(arg2 + rbx_10 + 2)
                            rbp_16[1].b = rax_6.b
                            *rbp_16 = *(arg2 + rbx_10)
                            int16_t rax_14
                            rax_14.b = var_4e_1
                            *(arg2 + rbx_10 + 2) = rax_14.b
                            *(arg2 + rbx_10) = rbx_9
                            *(*(arg1 + 0x3a0) + rdx_18) = i_7.b
                            *(*(arg1 + 0x3a0) + i_7) = rdx_18.b
                        
                        i_7 += 1
                    while (i_7 != zx.q(r13_1))
                
                if (r8_1 s> 0)
                    uint64_t r10_1 = zx.q(r13_1)
                    int64_t r11_1 = 0
                    
                    do
                        char* r9_1 = *(arg1 + 0x3a0)
                        uint64_t rax_18 = zx.q(r9_1[r11_1])
                        
                        if (rax_18.d s>= r13_1)
                            char rsi_6 = 0
                            
                            if (r13_1 s>= 2)
                                uint64_t rax_19 = rax_18 * 3
                                uint32_t r15_5 = zx.d(*(arg2 + rax_19))
                                uint32_t rdx_20 = r15_5 - zx.d(*arg2)
                                uint32_t r12_2 = zx.d(*(arg2 + rax_19 + 1))
                                uint32_t rsi_8 = r12_2 - zx.d(*(arg2 + 1))
                                uint32_t r13_2 = zx.d(*(arg2 + rax_19 + 2))
                                uint32_t rax_21 = r13_2 - zx.d(arg2[1].b)
                                uint32_t rbp_19 = neg.d(rsi_8)
                                
                                if (neg.d(rsi_8) s< 0 != neg.d(rsi_8) == 0x80000000)
                                    rbp_19 = rsi_8
                                
                                uint32_t rsi_10 = neg.d(rdx_20)
                                
                                if (neg.d(rdx_20) s< 0 != neg.d(rdx_20) == 0x80000000)
                                    rsi_10 = rdx_20
                                
                                uint32_t rbp_21 = neg.d(rax_21)
                                
                                if (neg.d(rax_21) s< 0 != neg.d(rax_21) == 0x80000000)
                                    rbp_21 = rax_21
                                
                                uint32_t rbp_22 = rbp_21 + rsi_10 + rbp_19
                                rsi_6 = 0
                                int64_t rax_22 = 1
                                void* rdx_21 = arg2 + 5
                                
                                do
                                    uint32_t rdi_8 = r15_5 - zx.d(*(rdx_21 - 2))
                                    uint32_t rbx_13 = neg.d(rdi_8)
                                    
                                    if (neg.d(rdi_8) s< 0 != neg.d(rdi_8) == 0x80000000)
                                        rbx_13 = rdi_8
                                    
                                    uint32_t rcx_11 = r12_2 - zx.d(*(rdx_21 - 1))
                                    uint32_t rdi_11 = neg.d(rcx_11)
                                    
                                    if (neg.d(rcx_11) s< 0 != neg.d(rcx_11) == 0x80000000)
                                        rdi_11 = rcx_11
                                    
                                    uint32_t rbx_15 = r13_2 - zx.d(*rdx_21)
                                    uint32_t rcx_14 = neg.d(rbx_15)
                                    
                                    if (neg.d(rbx_15) s< 0 != neg.d(rbx_15) == 0x80000000)
                                        rcx_14 = rbx_15
                                    
                                    uint32_t rcx_15 = rcx_14 + rdi_11 + rbx_13
                                    
                                    if (rcx_15 s< rbp_22)
                                        rsi_6 = rax_22.b
                                    
                                    if (rcx_15 s<= rbp_22)
                                        rbp_22 = rcx_15
                                    
                                    rax_22 += 1
                                    rdx_21 += 3
                                while (r10_1 != rax_22)
                            
                            r9_1[r11_1] = rsi_6
                            r13_1 = var_8c_1
                            r15_1 = var_68_1
                        
                        r11_1 += 1
                    while (r11_1 != r15_1)
            else
                int32_t rsi_3 = arg3.d
                
                if (r13_1 s> 0)
                    int64_t i_8 = 0
                    
                    do
                        void* rbp_6 = *(arg1 + 0x440)
                        
                        if (zx.d(*(rbp_6 + i_8)) s>= r13_1)
                            int64_t rbx_6 = sx.q(rsi_3)
                            int16_t* rdx_8 = rbx_6 * 3 + arg2
                            void* rbp_8 = rbp_6 + rbx_6 - 1
                            uint32_t rbx_7
                            
                            do
                                rbx_7 = zx.d(*rbp_8)
                                rdx_8 -= 3
                                rsi_3 -= 1
                                rbp_8 -= 1
                            while (rbx_7 s>= r13_1)
                            
                            int64_t rbp_9 = i_8 * 3
                            rbx_7.b = rdx_8[1].b
                            *(arg2 + rbp_9 + 2) = rbx_7.b
                            *(arg2 + rbp_9) = *rdx_8
                        
                        i_8 += 1
                    while (i_8 != zx.q(r13_1))
            
            result = png_free(arg1, *(arg1 + 0x440))
            *(arg1 + 0x440) = 0
        
        rbx = var_9c_1
        
        if (*(arg1 + 0x248) == 0)
            result = arg2
            *(arg1 + 0x248) = result
    
    *(arg1 + 0x250) = r13_1.w
    
    if (rbx != 0)
        *(arg1 + 0x398) = png_calloc(arg1, 0x8000)
        char* rax_31
        int32_t c
        rax_31, c = png_malloc(arg1, 0x8000)
        c.b = 0xff
        memset(rax_31, c, 0x8000)
        
        if (r13_1 s> 0)
            int64_t i_9 = 0
            
            do
                int64_t rax_33 = i_9 * 3
                void** var_88
                var_88.d = zx.d(*(arg2 + rax_33)) u>> 3
                uint32_t rdx_38 = zx.d(*(arg2 + rax_33 + 1)) u>> 3
                uint32_t r8_5 = zx.d(*(arg2 + rax_33 + 2)) u>> 3
                int64_t var_70
                
                for (int32_t j_1 = 0; j_1 != 0x20; j_1 = var_70.d + 1)
                    int32_t rcx_50 = var_88.d
                    uint32_t rbx_27 = j_1 - rcx_50
                    
                    if (j_1 u<= rcx_50)
                        rbx_27 = rcx_50 - j_1
                    
                    var_70.d = j_1
                    int64_t var_98
                    var_98.d = j_1 << 0xa
                    
                    for (int32_t k = 0; k != 0x20; k += 1)
                        uint32_t rbp_40 = k - rdx_38
                        
                        if (k u<= rdx_38)
                            rbp_40 = rdx_38 - k
                        
                        uint32_t rdx_43 = rbx_27 + rbp_40
                        
                        if (rbx_27 s>= rbp_40)
                            rbp_40 = rbx_27
                        
                        uint32_t rbx_28 = r8_5
                        
                        for (int32_t r9_3 = 0; r9_3 != 0x20; )
                            uint32_t r10_4 = neg.d(r8_5) + r9_3
                            
                            if (r9_3 u<= r8_5)
                                r10_4 = rbx_28
                            
                            uint32_t rcx_53 = r10_4
                            
                            if (rbp_40 s>= r10_4)
                                rcx_53 = rbp_40
                            
                            uint32_t r10_6 = r10_4 + rdx_43 + rcx_53
                            int64_t r11_3 = sx.q(k << 5 | var_98.d | r9_3)
                            
                            if (r10_6 s< zx.d(rax_31[r11_3]))
                                rax_31[r11_3] = r10_6.b
                                (*(arg1 + 0x398))[r11_3] = i_9.b
                            
                            r9_3 += 1
                            rbx_28 -= 1
                
                i_9 += 1
            while (i_9 != zx.q(r13_1))
        
        __security_check_cookie(result_1 ^ &var_d8)
        return png_free(arg1, rax_31) __tailcall

__security_check_cookie(result_1 ^ &var_d8)
return result
