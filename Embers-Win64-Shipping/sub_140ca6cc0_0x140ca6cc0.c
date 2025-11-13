// 函数: sub_140ca6cc0
// 地址: 0x140ca6cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
int64_t* rbx = arg2
int64_t* rcx = *(*arg2 + 8)
int64_t* result
void* i_21
int32_t var_2b8

if ((rcx[5].b & 1) == 0)
    int64_t rax_35 = arg6
    char var_2c0_1
    
    if (*(rcx + 0x29) s< 0)
        var_2c0_1 = 1
    else if (rax_35 != 0)
        var_2c0_1 = 0
    else if (arg1 == 0)
        var_2c0_1 = 1
    else
        void* rax_36
        rax_36, arg5 = sub_140bdf2e0()
        void* rdx_7 = *(arg1 + 0x10)
        int64_t rax_37 = sx.q(*(rax_36 + 0x38))
        
        if (rax_37.d s> *(rdx_7 + 0x38))
            rax_35 = arg6
            var_2c0_1 = 1
        else
            rax_35 = arg6
            
            if (*(*(rdx_7 + 0x30) + (rax_37 << 3)) != rax_36 + 0x30)
                var_2c0_1 = 1
            else
                var_2c0_1 = 0
    
    int32_t r12_2 = 0
    int32_t var_2b0_1
    
    if (rax_35 == 0)
        var_2b0_1 = 0
    else
        var_2b0_1 = *(arg4 + 0x58)
    
    int32_t* rsi_2 = *(arg1 + 0xa8)
    
    if (rsi_2 == 0)
        int32_t* rax_40
        rax_40, arg5 = sub_140bd9e40(arg1)
        int32_t* rax_41 = nullptr
        bool z_2
        
        if (0 == *(arg1 + 0xa8))
            *(arg1 + 0xa8) = rax_40
            z_2 = true
        else
            rax_41 = *(arg1 + 0xa8)
            z_2 = false
        
        rsi_2 = rax_41
        
        if (z_2)
            rsi_2 = rax_40
        else
            arg5 = j_sub_140a74f90(rax_40)
    
    int64_t* i_6 = &rsi_2[2]
    int32_t* i_20 = nullptr
    int64_t* i_10 = i_6
    void* rdx_12 = (zx.q(*rsi_2) << 4) + 8 + rsi_2
    int32_t* i_12 = nullptr
    var_2b8.q = rdx_12
    int32_t i_14 = 1
    int32_t var_1f4_1 = 0x20
    char var_1f0_1 = 0
    int32_t var_1bc_1 = 0x100
    int64_t var_1e8
    __builtin_memset(&var_1e8, 0, 0x2c)
    int32_t i_5 = 1
    int32_t var_280 = 0
    uint128_t zmm0
    
    if (i_6 != rdx_12)
        int64_t* i = i_6
        
        do
            zmm0 = *i
            int64_t* r14_4 = zmm0.q
            int64_t* var_298
            var_298.o = zmm0
            
            if (sub_140cea0a0(r14_4, rcx) == 0)
            label_140ca731b:
                i_6 = i_12
                int64_t* i_15 = &var_280
                int32_t i_18 = i_5
                
                if (i_6 != 0)
                    i_15 = i_6
                
                int64_t rcx_31 = sx.q(i_18 - 1)
                void* rdx_17 = i_15 + (rcx_31 << 2)
                
                if (*(i_15 + (rcx_31 << 2) + 2) != 0 || *rdx_17 == 0x7f)
                    sub_140ca8ec0(&var_280, rdx_17)
                    int64_t i_17 = sx.q(i_5)
                    int32_t i_13 = (i_17 + 1).d
                    i_5 = i_13
                    
                    if (i_13 s> var_1f4_1)
                        sub_1407c3770(&var_280, i_17.d)
                    
                    int32_t* i_22 = &var_280
                    
                    if (i_12 != 0)
                        i_22 = i_12
                    
                    i_22[i_17] = 0
                    i_18 = i_5
                    i_6 = i_12
                
                int64_t* i_16 = &var_280
                
                if (i_6 != 0)
                    i_16 = i_6
                
                int64_t rcx_34 = sx.q(i_18 - 1)
                *(i_16 + (rcx_34 << 2)) += 1
            else
                int32_t i_11
                i_6 = zx.q(i_11)
                
                if (var_2c0_1 == 0)
                    int64_t r8_10
                    
                    if (i_6.d u>= var_2b0_1)
                        r8_10 = 0
                    else
                        r8_10 = zx.q(i_6.d) + arg6
                    
                    if ((*(*r14_4 + 0x80))(r14_4, arg3 + i_6, r8_10, zx.q(rcx[6].d)) != 0)
                        goto label_140ca731b
                    
                    goto label_140ca72a8
                
            label_140ca72a8:
                char var_28a
                char var_28b
                
                if (var_28a == 1)
                    sub_140be15e0(&var_280, 
                        (&data_142e891e8)[zx.q(var_28b)](arg3 + i_6, &__dos_header))
                else if (var_28a == 0)
                    sub_140be15e0(&var_280, 0)
                else
                    int64_t rcx_28 = arg3 + i_6
                    i_6 = &__dos_header
                    
                    if ((&data_142e89208)[zx.q(var_28b)](rcx_28, zx.q(var_28a)) == 0)
                        sub_140be15e0(&var_280, 0)
                    else
                        sub_140be15e0(&var_280, 1)
            
            i = &i[2]
        while (i != var_2b8.q)
        
        i_14 = i_5
        i_20 = i_12
        rbx = arg2
    
    int32_t* i_26 = &var_280
    
    if (i_20 != 0)
        i_26 = i_20
    
    sub_140ca8ec0(&var_280, &i_26[sx.q(i_14 - 1)])
    int32_t i_1 = i_5
    int32_t* i_19 = i_12
    
    while (i_1 s> 1)
        i_6 = &var_280
        
        if (i_19 != 0)
            i_6 = i_19
        
        if (*(i_6 + (sx.q(i_1 - 1) << 2) + 2) != 0)
            break
        
        if (0 != 0)
            memmove(i_6 + (sx.q(i_1 - 1) << 2), i_6 + (sx.q(i_1) << 2), 0 << 2)
            i_1 = i_5
            i_19 = i_12
        
        i_1 -= 1
        i_5 = i_1
    
    int32_t* i_23 = &var_280
    
    if (i_19 != 0)
        i_23 = i_19
    
    int32_t* i_29 = &var_280
    int64_t rsi_3 = 0
    *(&i_23[sx.q(i_1 - 1)] + 3) = 1
    i_21 = i_12
    
    if (i_21 != 0)
        i_29 = i_21
    
    result = &i_29[sx.q(i_5)]
    uint64_t r13_3 = sx.q(i_5) << 2 u>> 2
    
    if (i_29 u> result)
        r13_3 = 0
    
    if (r13_3 != 0)
        do
            int32_t rax_59 = *i_29
            i_6.w = sbb.w(i_6.w, i_6.w, (rax_59 u>> 0x18).b != 0)
            i_6.w &= 0x100
            i_23.w = sbb.w(i_23.w, i_23.w, (rax_59 u>> 8).b != 0)
            i_23.w &= 0x80
            i_6.w |= i_23.w
            i_6.w |= zx.w((rax_59 u>> 0x10).b) << 9
            i_6.w |= zx.w(rax_59.b)
            var_2b8.w = i_6.w
            i_6 = *(*rbx + 8)
            int32_t** rcx_47 = i_6[1]
            i_23 = *rcx_47
            
            if (i_23 + 2 u> rcx_47[1])
                int16_t* rdx_22 = &var_2b8
                
                if ((*(i_6 + 0x29) & 0x20) != 0)
                    result, i_23 = sub_140b54000(i_6, rdx_22, arg5)
                else
                    result, i_23 = (*(*i_6 + 0x150))(i_6, rdx_22, 2)
            else
                var_2b8.w = *i_23
                result = i_6[1]
                *result += 2
            
            i_29 = &i_29[1]
            rsi_3 += 1
        while (rsi_3 != r13_3)
        
        i_21 = i_12
    
    int32_t var_1c0
    int32_t rdx_24 = var_1c0
    int64_t* var_1c8
    
    if (rdx_24 s> 0)
        int64_t* r9_5 = &var_1e8
        
        if (var_1c8 != 0)
            r9_5 = var_1c8
        
        result = sub_140ca2d70(&var_280, rbx, rdx_24, r9_5, arg5)
        rdx_24 = var_1c0
        i_21 = i_12
    
    void* i_28
    
    if (var_1f0_1 != 0)
        i_28 = &var_280
        
        if (i_21 != 0)
            i_28 = i_21
        
        result.b = rdx_24 s> 0
        result.b |= var_1f0_1
    
    int64_t* r8_14
    
    if (var_1f0_1 == 0 || result.b == 0)
        r8_14 = var_1c8
    else
        void* r14_7 = &i_10[zx.q(*i_28) * 2]
        
        while (*(i_28 + 2) == 0)
            uint64_t rax_65 = zx.q(*(i_28 + 4))
            i_28 += 4
            r14_7 += rax_65 << 4
        
        r8_14 = var_1c8
        
        while (true)
            uint32_t i_9 = zx.d(*(i_28 + 2))
            uint32_t i_2
            
            do
                int32_t rax_66
                int64_t* rcx_50
                
                if (*(i_28 + 1) != 0)
                    rcx_50 = &var_1e8
                    rax_66 = r12_2
                    
                    if (r8_14 != 0)
                        rcx_50 = r8_14
                    
                    if (r12_2 s< 0)
                        rax_66 = r12_2 + 0x1f
                
                if (*(i_28 + 1) == 0
                        || (*(rcx_50 + (sx.q(rax_66 s>> 5) << 2)) & 1 << (r12_2 & 0x1f).b) == 0)
                    result.b = 1
                else
                    result.b = 0
                
                if (result.b != 0)
                    zmm0 = *r14_7
                    i_10.o = zmm0
                    int64_t rdx_26 = _mm_bsrli_si128(zmm0, 8).q
                    
                    if ((rdx_26 u>> 0x20).b == 0)
                        int64_t r9_7
                        
                        if (rdx_26.d u>= var_2b0_1)
                            r9_7 = 0
                        else
                            r9_7 = zx.q(rdx_26.d) + arg6
                        
                        (*(*i_10 + 0x88))(i_10, rbx, zx.q(rdx_26.d) + arg3, r9_7)
                    else
                        sub_140ca4780(rbx, zx.q(rdx_26.d) + arg3, rdx_26 u>> 0x28, arg5)
                    
                    r8_14 = var_1c8
                
                result = zx.q(*(i_28 + 1))
                r14_7 += 0x10
                r12_2 += result.d
                i_2 = i_9
                i_9 -= 1
            while (i_2 != 1)
            
            if (*(i_28 + 3) != i_9.b)
                break
            
            uint64_t rax_73 = zx.q(*(i_28 + 4))
            i_28 += 4
            r14_7 += rax_73 << 4
            
            if (*(i_28 + 2) == i_9.b)
                do
                    uint64_t rax_74 = zx.q(*(i_28 + 4))
                    i_28 += 4
                    r14_7 += rax_74 << 4
                while (*(i_28 + 2) == 0)
        
        i_21 = i_12
    
    if (r8_14 != 0)
        result = sub_140a74f90(r8_14)
        i_21 = i_12
else
    int32_t var_f4_1 = 0x20
    void* i_24 = nullptr
    int32_t var_f8_1 = 0
    char var_f0_1 = 0
    int64_t var_e8
    __builtin_memset(&var_e8, 0, 0x2c)
    int32_t var_bc_1 = 0x100
    void var_180
    sub_140be2a70(&var_180, arg2, arg5)
    int32_t var_c0
    int32_t r8 = var_c0
    char rdx = var_f0_1
    uint64_t rax_3
    rax_3.b = r8 s> 0
    rax_3.b |= rdx
    int64_t* result_1
    
    if (rax_3.b == 0)
        i_21 = i_24
    else
        int32_t* rsi_1 = *(arg1 + 0xa8)
        
        if (rsi_1 == 0)
            int32_t* rax_4
            rax_4, arg5 = sub_140bd9e40(arg1)
            rax_3 = 0
            bool z_1
            
            if (0 == *(arg1 + 0xa8))
                *(arg1 + 0xa8) = rax_4
                z_1 = true
            else
                rax_3 = *(arg1 + 0xa8)
                z_1 = false
            
            rsi_1 = rax_3
            
            if (z_1)
                rsi_1 = rax_4
            else
                rax_3, arg5 = j_sub_140a74f90(rax_4)
            
            rdx = var_f0_1
            r8 = var_c0
        
        int64_t* var_2a8
        char var_29a
        uint128_t zmm0_1
        
        if (rdx == 0)
            i_21 = i_24
            void* i_25 = &var_180
            
            if (i_21 != 0)
                i_25 = i_21
            
            if (r8 s> 0)
                void* r8_7 = &rsi_1[2 + zx.q(*i_25) * 4]
                
                while (*(i_25 + 2) == 0)
                    uint64_t rax_22 = zx.q(*(i_25 + 4))
                    i_25 += 4
                    r8_7 += rax_22 << 4
                
                while (true)
                    uint32_t i_7 = zx.d(*(i_25 + 2))
                    uint32_t i_3
                    
                    do
                        zmm0_1 = *r8_7
                        var_2a8.o = zmm0_1
                        int64_t rdi_7 = _mm_bsrli_si128(zmm0_1, 8).q
                        uint8_t rax_25 = (rdi_7 u>> 0x28).b
                        uint32_t rcx_13 = zx.d(rax_25)
                        
                        if (rax_25 == 0)
                            uint32_t rax_30 = zx.d(var_29a)
                            
                            if (rax_30 != 0)
                                __builtin_memset(zx.q(rdi_7.d) + arg3, 0, zx.q(rax_30))
                        else if (rcx_13 == 1)
                            uint32_t rax_29 = zx.d(var_29a)
                            
                            if (rax_29 != 0)
                                __builtin_memset(zx.q(rdi_7.d) + arg3, 0, zx.q(rax_29) << 1)
                        else if (rcx_13 == 2)
                            uint32_t rax_28 = zx.d(var_29a)
                            
                            if (rax_28 != 0)
                                __builtin_memset(zx.q(rdi_7.d) + arg3, 0, zx.q(rax_28) << 2)
                        else
                            uint8_t rax_27 = (rdi_7 u>> 0x30).b
                            
                            if (rax_27 != 0)
                                __builtin_memset(zx.q(rdi_7.d) + arg3, 0, zx.q(rax_27) << 3)
                        
                        r8_7 += 0x10
                        i_3 = i_7
                        i_7 -= 1
                    while (i_3 != 1)
                    
                    if (*(i_25 + 3) != 0)
                        break
                    
                    uint64_t rax_31 = zx.q(*(i_25 + 4))
                    i_25 += 4
                    r8_7 += rax_31 << 4
                    
                    if (*(i_25 + 2) == 0)
                        do
                            uint64_t rax_33 = zx.q(*(i_25 + 4))
                            i_25 += 4
                            r8_7 += rax_33 << 4
                        while (*(i_25 + 2) == 0)
                
                i_21 = i_24
        else
            int64_t r10_1 = arg6
            int32_t r9
            
            if (r10_1 == 0)
                r9 = 0
                var_2b8 = 0
            else
                r9 = *(arg4 + 0x58)
                var_2b8 = r9
            
            i_21 = i_24
            void* i_27 = &var_180
            int32_t r12_1 = 0
            
            if (i_21 != 0)
                i_27 = i_21
            
            rax_3.b = r8 s> 0
            rax_3.b |= rdx
            
            if (rax_3.b != 0)
                void* r14_3 = &rsi_1[2 + zx.q(*i_27) * 4]
                
                while (*(i_27 + 2) == 0)
                    uint64_t rax_5 = zx.q(*(i_27 + 4))
                    i_27 += 4
                    r14_3 += rax_5 << 4
                
                while (true)
                    uint32_t i_8 = zx.d(*(i_27 + 2))
                    uint32_t i_4
                    
                    do
                        int32_t rax_7
                        int64_t* result_2
                        
                        if (*(i_27 + 1) != 0)
                            result_2 = &var_e8
                            
                            if (result_1 != 0)
                                result_2 = result_1
                            
                            rax_7 = r12_1
                            
                            if (r12_1 s< 0)
                                rax_7 = r12_1 + 0x1f
                        
                        if (*(i_27 + 1) == 0
                                || (*(result_2 + (sx.q(rax_7 s>> 5) << 2)) & 1 << (r12_1 & 0x1f).b)
                                == 0)
                            rax_3.b = 1
                        else
                            rax_3.b = 0
                        
                        zmm0_1 = *r14_3
                        var_2a8.o = zmm0_1
                        int64_t rdx_3 = _mm_bsrli_si128(zmm0_1, 8).q
                        
                        if (rax_3.b == 0)
                            uint8_t rax_14 = (rdx_3 u>> 0x28).b
                            uint32_t rcx_7 = zx.d(rax_14)
                            uint64_t rdi_3 = zx.q(rdx_3.d)
                            
                            if (rax_14 == 0)
                                uint32_t rax_19 = zx.d(var_29a)
                                
                                if (rax_19 != 0)
                                    __builtin_memset(rdi_3 + arg3, 0, zx.q(rax_19))
                            else if (rcx_7 == 1)
                                uint32_t rax_18 = zx.d(var_29a)
                                
                                if (rax_18 != 0)
                                    __builtin_memset(rdi_3 + arg3, 0, zx.q(rax_18) << 1)
                            else
                                void* rdi_4 = rdi_3 + arg3
                                
                                if (rcx_7 == 2)
                                    uint32_t rax_17 = zx.d(var_29a)
                                    
                                    if (rax_17 != 0)
                                        __builtin_memset(rdi_4, 0, zx.q(rax_17) << 2)
                                else
                                    uint8_t rax_16 = (rdx_3 u>> 0x30).b
                                    
                                    if (rax_16 != 0)
                                        __builtin_memset(rdi_4, 0, zx.q(rax_16) << 3)
                        else if ((rdx_3 u>> 0x20).b == 0)
                            int64_t r9_2
                            
                            if (rdx_3.d u>= r9)
                                r9_2 = 0
                            else
                                r9_2 = zx.q(rdx_3.d) + r10_1
                            
                            (*(*var_2a8 + 0x88))(var_2a8, rbx, zx.q(rdx_3.d) + arg3, r9_2)
                            r10_1 = arg6
                        else
                            sub_140ca4780(rbx, zx.q(rdx_3.d) + arg3, rdx_3 u>> 0x28, arg5)
                            r10_1 = arg6
                        
                        r14_3 += 0x10
                        r9 = var_2b8
                        r12_1 += zx.d(*(i_27 + 1))
                        i_4 = i_8
                        i_8 -= 1
                    while (i_4 != 1)
                    
                    if (*(i_27 + 3) != 0)
                        break
                    
                    uint64_t rax_20 = zx.q(*(i_27 + 4))
                    i_27 += 4
                    r14_3 += rax_20 << 4
                    
                    while (*(i_27 + 2) == 0)
                        uint64_t rax_21 = zx.q(*(i_27 + 4))
                        i_27 += 4
                        r14_3 += rax_21 << 4
                    
                    r9 = var_2b8
                
                i_21 = i_24
    
    result = result_1
    
    if (result != 0)
        result = sub_140a74f90(result)
        i_21 = i_24

if (i_21 != 0)
    result = sub_140a74f90(i_21)

__security_check_cookie(rax_1 ^ &var_2e8)
return result
