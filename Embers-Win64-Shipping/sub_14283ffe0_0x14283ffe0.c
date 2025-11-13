// 函数: sub_14283ffe0
// 地址: 0x14283ffe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void var_c8
int64_t rax_2 = __security_cookie ^ &var_c8
int64_t i_80 = arg2
int32_t _Key = arg4
uint32_t (* rdi_1)[0x4] = arg1
int64_t var_90_1 = 0
int32_t var_88_1 = 0
void* rax_3 = bsearch_s(&_Key, &data_1434d5710, 0x54, 0x18, sub_14283f110, 0)
int64_t _Context = 0
_Key = arg3
uint32_t (* rax)[0x4] = bsearch_s(&_Key, &data_1434d5710, 0x54, 0x18, sub_14283f110, _Context)
uint32_t (* r13_1)[0x4] = rax

if (rax_3 != 0 && rax != 0)
    int32_t r14_2
    
    if (arg4 - 0x1d u> 0x46)
        r14_2 = arg5
    else
        switch (arg4)
            case 0x1d, 0x48, 0x4b, 0x4e, 0x5b, 0x5d, 0x63
                r14_2 = arg5 | 0x1000000
            case 0x1e, 0x1f, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 
                    0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 
                    0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 0x42, 0x43, 0x44, 0x45, 
                    0x46, 0x47, 0x49, 0x4a, 0x4c, 0x4d, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 
                    0x56, 0x57, 0x58, 0x5a, 0x5c, 0x5e, 0x5f, 0x60, 0x61, 0x62
                r14_2 = arg5
            case 0x41, 0x59
                r14_2 = arg5 & 0xfeffffff
    
    if (arg3 - 0x1d u<= 0x46)
        switch (arg3)
            case 0x1d, 0x48, 0x4b, 0x4e, 0x5b, 0x5d, 0x63
                r14_2 |= 0x2000000
            case 0x41, 0x59
                r14_2 &= 0xfdffffff
    
    if ((r14_2 & 0x3000000) == 0x3000000)
        r14_2 &= 0xfcffffff
    
    float zmm6[0x4]
    float var_48_1[0x4] = zmm6
    float zmm7[0x4]
    float var_58_1[0x4] = zmm7
    uint32_t zmm8[0x4]
    uint32_t var_68_1[0x4] = zmm8
    int128_t zmm9
    int128_t var_78_1 = zmm9
    float zmm0[0x4]
    uint32_t zmm1[0x4]
    
    if (test_bit(r14_2, 0x18))
        char rax_10 = (*(rax_3 + 0x10)).b
        
        if ((rax_10 & 0x20) == 0 && (rax_10 & 3) != 0)
            int128_t* rsi_2 = rdi_1
            
            if (i_80 != 0)
                int64_t i_81 = i_80
                int64_t i
                
                do
                    float temp0_1[0x4] = __maxps_xmmps_memps(*rsi_2, data_143702d90)
                    zmm6 = data_1434d60d0
                    float temp0_2[0x4] = __minps_xmmps_memps(temp0_1, data_143702d70)
                    zmm1 = data_1434d6110
                    data_143702c40
                    float temp0_3[0x4] = __addps_xmmps_memps(temp0_2, data_1434d6100)
                    _mm_cmpeq_ps(zmm6, temp0_2, 1)
                    zmm0, zmm6, zmm7, zmm8 =
                        sub_14283fe90(__mulps_xmmps_memps(temp0_3, data_1434d60f0), zmm1)
                    float temp0_6[0x4] = __mulps_xmmps_memps(zmm7, data_1434d60e0)
                    *rsi_2 = _mm_or_ps(
                        _mm_and_ps(_mm_or_ps(_mm_and_ps(zmm0, zmm6), _mm_andnot_ps(zmm6, temp0_6)), 
                            zmm8), 
                        __andnps_xmmxud_memxud(zmm8, *rsi_2))
                    rsi_2 = &rsi_2[1]
                    i = i_81
                    i_81 -= 1
                while (i != 1)
    
    rax = zx.q(r13_1[1][0])
    int32_t rdx = *(rax_3 + 0x10)
    int32_t rcx_9 = rax.d ^ rdx
    
    if (rcx_9 != 0)
        uint32_t zmm3[0x4]
        float zmm2[0x4]
        
        if ((rcx_9.b & 0x20) == 0)
            if ((rax.b & 0x20) == 0)
                if ((rax.b & 2) == 0)
                    if ((rax.b & 8) == 0)
                        if ((rcx_9.b & 2) == 0)
                            if (test_bit(rcx_9, 0xd) && test_bit(r14_2, 9))
                                if (not(test_bit(rdx, 0xd)))
                                    if (test_bit(rax.d, 0xd))
                                        if ((rdx.b & 1) != 0)
                                            uint32_t (* rax_38)[0x4] = rdi_1
                                            
                                            if (i_80 != 0)
                                                int64_t i_66 = i_80
                                                int64_t i_1
                                                
                                                do
                                                    float temp0_127[0x4] =
                                                        __maxps_xmmps_memps(data_143702cd0, *rax_38)
                                                    *rax_38 = __addps_xmmps_memps(
                                                        __mulps_xmmps_memps(
                                                            _mm_min_ps(data_143702d70, temp0_127), 
                                                            data_143702d50), 
                                                        data_143702d50)
                                                    rax_38 = &rax_38[1]
                                                    i_1 = i_66
                                                    i_66 -= 1
                                                while (i_1 != 1)
                                        else if ((rdx.b & 8) != 0)
                                            uint32_t (* rax_39)[0x4] = rdi_1
                                            
                                            if (i_80 != 0)
                                                int64_t i_67 = i_80
                                                int64_t i_2
                                                
                                                do
                                                    *rax_39 = __addps_xmmps_memps(
                                                        __mulps_xmmps_memps(*rax_39, 
                                                            data_143702d50), 
                                                        data_143702d50)
                                                    rax_39 = &rax_39[1]
                                                    i_2 = i_67
                                                    i_67 -= 1
                                                while (i_2 != 1)
                                else if ((rax.b & 1) != 0)
                                    uint32_t (* rax_37)[0x4] = rdi_1
                                    
                                    if (i_80 != 0)
                                        int64_t i_65 = i_80
                                        int64_t i_3
                                        
                                        do
                                            *rax_37 = __addps_xmmps_memps(
                                                __mulps_xmmps_memps(
                                                    __minps_xmmps_memps(
                                                        __maxps_xmmps_memps(*rax_37, 
                                                            data_143702d90), 
                                                        data_143702d70), 
                                                    data_143702d80), 
                                                data_143702cd0)
                                            rax_37 = &rax_37[1]
                                            i_3 = i_65
                                            i_65 -= 1
                                        while (i_3 != 1)
                        else if ((rax.d & 0x2001) == 1 && test_bit(r14_2, 9))
                            uint32_t (* rax_36)[0x4] = rdi_1
                            
                            if (i_80 != 0)
                                int64_t i_64 = i_80
                                int64_t i_4
                                
                                do
                                    *rax_36 = __addps_xmmps_memps(
                                        __mulps_xmmps_memps(*rax_36, data_143702d80), 
                                        data_143702cd0)
                                    rax_36 = &rax_36[1]
                                    i_4 = i_64
                                    i_64 -= 1
                                while (i_4 != 1)
                    else if ((rdx.b & 2) != 0)
                        uint32_t (* rax_33)[0x4] = rdi_1
                        
                        if (i_80 != 0)
                            int64_t i_61 = i_80
                            int64_t i_5
                            
                            do
                                *rax_33 = __addps_xmmps_memps(
                                    __mulps_xmmps_memps(*rax_33, data_143702d80), data_143702cd0)
                                rax_33 = &rax_33[1]
                                i_5 = i_61
                                i_61 -= 1
                            while (i_5 != 1)
                    else if ((rdx.b & 1) != 0)
                        uint32_t (* rax_34)[0x4] = rdi_1
                        
                        if (not(test_bit(rdx, 0xd)) || not(test_bit(r14_2, 9)))
                            if (i_80 != 0)
                                int64_t i_63 = i_80
                                int64_t i_6
                                
                                do
                                    zmm0 = data_143702d70
                                    zmm1 = __maxps_xmmps_memps(data_143702cd0, *rax_34)
                                    rax_34 = &rax_34[1]
                                    rax_34[-1] = _mm_min_ps(zmm0, zmm1)
                                    i_6 = i_63
                                    i_63 -= 1
                                while (i_6 != 1)
                        else if (i_80 != 0)
                            int64_t i_62 = i_80
                            int64_t i_7
                            
                            do
                                *rax_34 = __addps_xmmps_memps(
                                    __mulps_xmmps_memps(
                                        __minps_xmmps_memps(
                                            __maxps_xmmps_memps(*rax_34, data_143702d90), 
                                            data_143702d70), 
                                        data_143702d80), 
                                    data_143702cd0)
                                rax_34 = &rax_34[1]
                                i_7 = i_62
                                i_62 -= 1
                            while (i_7 != 1)
                else if ((rdx.b & 8) != 0)
                    uint32_t (* rax_31)[0x4] = rdi_1
                    
                    if (i_80 != 0)
                        int64_t i_58 = i_80
                        int64_t i_8
                        
                        do
                            *rax_31 = __addps_xmmps_memps(
                                __mulps_xmmps_memps(data_143702d50, *rax_31), data_143702d50)
                            rax_31 = &rax_31[1]
                            i_8 = i_58
                            i_58 -= 1
                        while (i_8 != 1)
                else if ((rdx.b & 1) != 0)
                    uint32_t (* rax_32)[0x4] = rdi_1
                    
                    if (test_bit(rdx, 0xd) || not(test_bit(r14_2, 9)))
                        if (i_80 != 0)
                            int64_t i_60 = i_80
                            int64_t i_9
                            
                            do
                                zmm0 = *rax_32
                                rax_32 = &rax_32[1]
                                rax_32[-1] = __minps_xmmps_memps(
                                    __maxps_xmmps_memps(zmm0, data_143702d90), data_143702d70)
                                i_9 = i_60
                                i_60 -= 1
                            while (i_9 != 1)
                    else if (i_80 != 0)
                        int64_t i_59 = i_80
                        int64_t i_10
                        
                        do
                            float temp0_107[0x4] = __maxps_xmmps_memps(data_143702cd0, *rax_32)
                            *rax_32 = __addps_xmmps_memps(
                                __mulps_xmmps_memps(_mm_min_ps(data_143702d70, temp0_107), 
                                    data_143702d50), 
                                data_143702d50)
                            rax_32 = &rax_32[1]
                            i_10 = i_59
                            i_59 -= 1
                        while (i_10 != 1)
            else if ((rcx_9.b & 1) != 0 && (rdx.b & 1) != 0)
                uint32_t (* rax_30)[0x4] = rdi_1
                
                if (i_80 != 0)
                    int64_t i_57 = i_80
                    int64_t i_11
                    
                    do
                        zmm2 = *rax_30
                        rax_30 = &rax_30[1]
                        zmm1 = data_143702cb0
                        rax_30[-1] = _mm_or_ps(
                            _mm_and_ps(
                                __minps_xmmps_memps(__maxps_xmmps_memps(zmm2, data_143702d90), 
                                    data_143702d70), 
                                zmm1), 
                            __andnps_xmmxud_memxud(zmm1, rax_30[-1]))
                        i_11 = i_57
                        i_57 -= 1
                    while (i_11 != 1)
        else if ((rdx.b & 0x20) == 0)
            int32_t rax_17 = r14_2 & 0x7000
            
            if (rax_17 == 0x1000)
            label_14284057a:
                uint32_t (* rax_23)[0x4] = rdi_1
                
                if (i_80 != 0)
                    int64_t i_51 = i_80
                    int64_t i_12
                    
                    do
                        zmm0 = *rax_23
                        rax_23 = &rax_23[1]
                        zmm1 = data_143702cb0
                        rax_23[-1] = _mm_or_ps(_mm_and_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm1), 
                            _mm_andnot_ps(zmm1, zmm0))
                        i_12 = i_51
                        i_51 -= 1
                    while (i_12 != 1)
            else if (rax_17 == 0x2000)
                uint32_t (* rax_22)[0x4] = rdi_1
                
                if (i_80 != 0)
                    int64_t i_50 = i_80
                    int64_t i_13
                    
                    do
                        zmm0 = *rax_22
                        rax_22 = &rax_22[1]
                        zmm1 = data_143702cb0
                        rax_22[-1] = _mm_or_ps(_mm_and_ps(_mm_shuffle_ps(zmm0, zmm0, 0x55), zmm1), 
                            _mm_andnot_ps(zmm1, zmm0))
                        i_13 = i_50
                        i_50 -= 1
                    while (i_13 != 1)
            else if (rax_17 == 0x4000)
                uint32_t (* rax_21)[0x4] = rdi_1
                
                if (i_80 != 0)
                    int64_t i_49 = i_80
                    int64_t i_14
                    
                    do
                        zmm0 = *rax_21
                        rax_21 = &rax_21[1]
                        zmm1 = data_143702cb0
                        rax_21[-1] = _mm_or_ps(_mm_and_ps(_mm_shuffle_ps(zmm0, zmm0, 0xaa), zmm1), 
                            _mm_andnot_ps(zmm1, zmm0))
                        i_14 = i_49
                        i_49 -= 1
                    while (i_14 != 1)
            else
                rcx_9.b = (rdx & 0x70000) == 0x70000
                int32_t rax_19
                rax_19.b = (rdx.b & 2) != 0
                
                if ((rax_19.b & rcx_9.b) == 0)
                    goto label_14284057a
                
                uint32_t (* rax_20)[0x4] = rdi_1
                
                if (i_80 != 0)
                    int64_t i_48 = i_80
                    int64_t i_15
                    
                    do
                        zmm3 = __mulps_xmmps_memps(*rax_20, data_1434d6040)
                        zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0x99)
                        zmm3[0] = zmm3[0] f+ zmm1[0]
                        float temp0_57[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                        zmm1 = data_143702cb0
                        zmm3[0] = zmm3[0] f+ temp0_57[0]
                        *rax_20 = _mm_or_ps(_mm_and_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm1), 
                            __andnps_xmmxud_memxud(zmm1, *rax_20))
                        rax_20 = &rax_20[1]
                        i_15 = i_48
                        i_48 -= 1
                    while (i_15 != 1)
            
            if ((r13_1[1][0].b & 2) != 0)
                char rax_24 = (*(rax_3 + 0x10)).b
                
                if ((rax_24 & 8) != 0)
                    uint32_t (* rax_25)[0x4] = rdi_1
                    
                    if (i_80 != 0)
                        int64_t i_52 = i_80
                        int64_t i_16
                        
                        do
                            zmm3 = __mulps_xmmps_memps(*rax_25, data_143702d50)
                            zmm2 = data_143702cb0
                            *rax_25 = _mm_or_ps(
                                _mm_and_ps(__addps_xmmps_memps(zmm3, data_143702d50), zmm2), 
                                __andnps_xmmxud_memxud(zmm2, *rax_25))
                            rax_25 = &rax_25[1]
                            i_16 = i_52
                            i_52 -= 1
                        while (i_16 != 1)
                else if ((rax_24 & 1) != 0)
                    uint32_t (* rax_26)[0x4] = rdi_1
                    
                    if (i_80 != 0)
                        int64_t i_53 = i_80
                        int64_t i_17
                        
                        do
                            zmm2 = *rax_26
                            rax_26 = &rax_26[1]
                            zmm1 = data_143702cb0
                            rax_26[-1] = _mm_or_ps(
                                _mm_and_ps(
                                    __minps_xmmps_memps(__maxps_xmmps_memps(zmm2, data_143702d90), 
                                        data_143702d70), 
                                    zmm1), 
                                __andnps_xmmxud_memxud(zmm1, rax_26[-1]))
                            i_17 = i_53
                            i_53 -= 1
                        while (i_17 != 1)
            
            if ((r13_1[1][0].b & 0x40) != 0)
                char rax_27 = (*(rax_3 + 0x10)).b
                
                if ((rax_27 & 2) == 0)
                    uint32_t (* rax_29)[0x4] = rdi_1
                    
                    if ((rax_27 & 8) == 0)
                        if (i_80 != 0)
                            int64_t i_56 = i_80
                            int64_t i_18
                            
                            do
                                zmm1 = *rax_29
                                rax_29 = &rax_29[1]
                                zmm0 = data_1434d6530
                                rax_29[-1] = _mm_or_ps(
                                    _mm_and_ps(_mm_shuffle_ps(zmm1, zmm1, 0xff), zmm0), 
                                    _mm_andnot_ps(zmm0, zmm1))
                                i_18 = i_56
                                i_56 -= 1
                            while (i_18 != 1)
                    else if (i_80 != 0)
                        int64_t i_55 = i_80
                        int64_t i_19
                        
                        do
                            float temp0_89[0x4] = __mulps_xmmps_memps(*rax_29, data_143702d50)
                            zmm0 = data_1434d6530
                            float temp0_91[0x4] = __mulps_xmmps_memps(
                                __addps_xmmps_memps(temp0_89, data_143702d50), data_1434d6540)
                            *rax_29 = _mm_or_ps(
                                _mm_and_ps(_mm_shuffle_ps(temp0_91, temp0_91, 0xff), zmm0), 
                                __andnps_xmmxud_memxud(zmm0, *rax_29))
                            rax_29 = &rax_29[1]
                            i_19 = i_55
                            i_55 -= 1
                        while (i_19 != 1)
                else
                    uint32_t (* rax_28)[0x4] = rdi_1
                    
                    if (i_80 != 0)
                        int64_t i_54 = i_80
                        int64_t i_20
                        
                        do
                            zmm2 = *rax_28
                            rax_28 = &rax_28[1]
                            float temp0_84[0x4] = __mulps_xmmps_memps(zmm2, data_1434d6540)
                            zmm0 = data_1434d6530
                            rax_28[-1] = _mm_or_ps(
                                _mm_and_ps(_mm_shuffle_ps(temp0_84, temp0_84, 0xff), zmm0), 
                                __andnps_xmmxud_memxud(zmm0, rax_28[-1]))
                            i_20 = i_54
                            i_54 -= 1
                        while (i_20 != 1)
        else
            if ((rdx.b & 0x40) != 0)
                uint32_t zmm4_1[0x4]
                
                if ((rax.b & 2) == 0)
                    uint32_t (* rax_12)[0x4] = rdi_1
                    
                    if ((rax.b & 8) == 0)
                        if (i_80 != 0)
                            int64_t i_43 = i_80
                            int64_t i_21
                            
                            do
                                zmm1 = *rax_12
                                rax_12 = &rax_12[1]
                                zmm3 = data_143702c40
                                rax_12[-1] = _mm_or_ps(
                                    _mm_andnot_ps(zmm3, _mm_shuffle_ps(zmm1, zmm1, 0x55)), 
                                    _mm_and_ps(zmm3, zmm1))
                                i_21 = i_43
                                i_43 -= 1
                            while (i_21 != 1)
                    else if (i_80 != 0)
                        int64_t i_42 = i_80
                        int64_t i_22
                        
                        do
                            zmm4_1 = *rax_12
                            zmm3 = data_1434d6520
                            uint32_t zmm5_1[0x4] = data_143702c40
                            zmm1 = _mm_max_ps(data_143702d90, _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55))
                            uint32_t temp0_22[0x4] = _mm_and_ps(zmm5_1, zmm4_1)
                            *rax_12 = _mm_or_ps(
                                _mm_andnot_ps(zmm5_1, 
                                    __addps_xmmps_memps(
                                        __mulps_xmmps_memps(
                                            __divps_xmmps_memps(_mm_min_ps(zmm3, zmm1), 
                                                data_1434d6520), 
                                            data_143702d80), 
                                        data_143702cd0)), 
                                temp0_22)
                            rax_12 = &rax_12[1]
                            i_22 = i_42
                            i_42 -= 1
                        while (i_22 != 1)
                else
                    uint32_t (* rax_11)[0x4] = rdi_1
                    
                    if (i_80 != 0)
                        int64_t i_41 = i_80
                        int64_t i_23
                        
                        do
                            zmm3 = *rax_11
                            rax_11 = &rax_11[1]
                            zmm4_1 = data_143702c40
                            zmm1 = _mm_max_ps(data_143702d90, _mm_shuffle_ps(zmm3, zmm3, 0x55))
                            float temp0_15[0x4] = _mm_min_ps(data_1434d6520, zmm1)
                            uint32_t temp0_16[0x4] = _mm_and_ps(zmm4_1, zmm3)
                            rax_11[-1] = _mm_or_ps(
                                _mm_andnot_ps(zmm4_1, 
                                    __divps_xmmps_memps(temp0_15, data_1434d6520)), 
                                temp0_16)
                            i_23 = i_41
                            i_41 -= 1
                        while (i_23 != 1)
            
            char rax_13 = (r13_1[1][0]).b
            
            if ((rax_13 & 2) == 0 || (*(rax_3 + 0x10) & 1) == 0)
                uint32_t (* rax_15)[0x4] = rdi_1
                
                if ((rax_13 & 8) == 0)
                    if (i_80 != 0)
                        int64_t i_47 = i_80
                        int64_t i_24
                        
                        do
                            zmm0 = *rax_15
                            rax_15 = &rax_15[1]
                            zmm1 = data_143702c40
                            rax_15[-1] = _mm_or_ps(_mm_and_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm1), 
                                _mm_andnot_ps(zmm1, zmm0))
                            i_24 = i_47
                            i_47 -= 1
                        while (i_24 != 1)
                else if ((*(rax_3 + 0x10) & 2) == 0)
                    if (i_80 != 0)
                        int64_t i_46 = i_80
                        int64_t i_25
                        
                        do
                            zmm2 = data_143702d70
                            float temp0_45[0x4] = __maxps_xmmps_memps(data_143702cd0, *rax_15)
                            rax_15 = &rax_15[1]
                            float temp0_46[0x4] = _mm_min_ps(zmm2, temp0_45)
                            zmm0 = data_143702c40
                            rax_15[-1] = _mm_or_ps(
                                _mm_and_ps(_mm_shuffle_ps(temp0_46, temp0_46, 0), zmm0), 
                                __andnps_xmmxud_memxud(zmm0, rax_15[-1]))
                            i_25 = i_46
                            i_46 -= 1
                        while (i_25 != 1)
                else if (i_80 != 0)
                    int64_t i_45 = i_80
                    int64_t i_26
                    
                    do
                        float temp0_39[0x4] = __mulps_xmmps_memps(*rax_15, data_143702d80)
                        zmm0 = data_143702c40
                        float temp0_40[0x4] = __addps_xmmps_memps(temp0_39, data_143702cd0)
                        *rax_15 = _mm_or_ps(
                            _mm_and_ps(_mm_shuffle_ps(temp0_40, temp0_40, 0), zmm0), 
                            __andnps_xmmxud_memxud(zmm0, *rax_15))
                        rax_15 = &rax_15[1]
                        i_26 = i_45
                        i_45 -= 1
                    while (i_26 != 1)
            else
                int128_t* rax_14 = rdi_1
                
                if (i_80 != 0)
                    int64_t i_44 = i_80
                    int64_t i_27
                    
                    do
                        zmm2 = *rax_14
                        rax_14 = &rax_14[1]
                        zmm0 = data_143702c40
                        float temp0_34[0x4] = __minps_xmmps_memps(
                            __maxps_xmmps_memps(zmm2, data_143702d90), data_143702d70)
                        rax_14[-1] = _mm_or_ps(
                            _mm_and_ps(_mm_shuffle_ps(temp0_34, temp0_34, 0), zmm0), 
                            __andnps_xmmxud_memxud(zmm0, rax_14[-1]))
                        i_27 = i_44
                        i_44 -= 1
                    while (i_27 != 1)
        uint32_t rcx_10 = r13_1[1][0]
        int32_t rax_41 = rcx_10 & 0xf0000
        int32_t rdx_1
        
        if (rax_41 == 0x80000)
            rdx_1 = *(rax_3 + 0x10)
        
        if (rax_41 != 0x80000 || (rax_41 & rdx_1) != 0)
            int32_t rdx_2 = *(rax_3 + 0x10)
            int32_t rax_47 = rdx_2 & 0xf0000
            
            if (rax_47 != 0x80000 || (rax_47 & rcx_10) != 0)
                rax = zx.q(rdx_2) & 0x70000
                
                if (rax.d == 0x10000)
                    int32_t rcx_11 = rcx_10 & 0x70000
                    
                    if (rcx_11 == 0x70000)
                        rax = rdi_1
                        
                        if (i_80 != 0)
                            int64_t i_73 = i_80
                            int64_t i_28
                            
                            do
                                zmm0 = *rax
                                rax = &rax[1]
                                zmm1 = data_143702c40
                                rax[-1] = _mm_or_ps(
                                    _mm_and_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm1), 
                                    _mm_andnot_ps(zmm1, zmm0))
                                i_28 = i_73
                                i_73 -= 1
                            while (i_28 != 1)
                    else if (rcx_11 == 0x30000)
                        rax = rdi_1
                        
                        if (i_80 != 0)
                            int64_t i_74 = i_80
                            int64_t i_29
                            
                            do
                                zmm0 = *rax
                                rax = &rax[1]
                                zmm1 = data_143702e10
                                rax[-1] = _mm_or_ps(
                                    _mm_and_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm1), 
                                    _mm_andnot_ps(zmm1, zmm0))
                                i_29 = i_74
                                i_74 -= 1
                            while (i_29 != 1)
                else if (rax.d == 0x70000)
                    int32_t rcx_12 = rcx_10 & rax.d
                    
                    if (rcx_12 == 0x10000)
                        rax = zx.q(r14_2) & 0x7000
                        
                        if (rax.d != 0x1000)
                            if (rax.d == 0x2000)
                                rax = rdi_1
                                
                                if (i_80 != 0)
                                    int64_t i_77 = i_80
                                    int64_t i_30
                                    
                                    do
                                        zmm0 = *rax
                                        rax = &rax[1]
                                        zmm1 = data_143702c40
                                        rax[-1] = _mm_or_ps(
                                            _mm_and_ps(_mm_shuffle_ps(zmm0, zmm0, 0x55), zmm1), 
                                            _mm_andnot_ps(zmm1, zmm0))
                                        i_30 = i_77
                                        i_77 -= 1
                                    while (i_30 != 1)
                            else if (rax.d == 0x4000)
                                rax = rdi_1
                                
                                if (i_80 != 0)
                                    int64_t i_76 = i_80
                                    int64_t i_31
                                    
                                    do
                                        zmm0 = *rax
                                        rax = &rax[1]
                                        zmm1 = data_143702c40
                                        rax[-1] = _mm_or_ps(
                                            _mm_and_ps(_mm_shuffle_ps(zmm0, zmm0, 0xaa), zmm1), 
                                            _mm_andnot_ps(zmm1, zmm0))
                                        i_31 = i_76
                                        i_76 -= 1
                                    while (i_31 != 1)
                            else if ((rdx_2.b & 2) != 0)
                                rax = rdi_1
                                
                                if (i_80 != 0)
                                    int64_t i_75 = i_80
                                    int64_t i_32
                                    
                                    do
                                        zmm3 = __mulps_xmmps_memps(*rax, data_1434d6040)
                                        zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0x99)
                                        zmm3[0] = zmm3[0] f+ zmm1[0]
                                        float temp0_151[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                                        zmm1 = data_143702c40
                                        zmm3[0] = zmm3[0] f+ temp0_151[0]
                                        *rax = _mm_or_ps(
                                            _mm_and_ps(_mm_shuffle_ps(zmm3, zmm3, 0), zmm1), 
                                            __andnps_xmmxud_memxud(zmm1, *rax))
                                        rax = &rax[1]
                                        i_32 = i_75
                                        i_75 -= 1
                                    while (i_32 != 1)
                    else if (rcx_12 == 0x30000)
                        rax = zx.q(r14_2) & 0x7000
                        
                        if (rax.d == 0x5000)
                            rax = rdi_1
                            
                            if (i_80 != 0)
                                int64_t i_79 = i_80
                                int64_t i_33
                                
                                do
                                    zmm0 = *rax
                                    rax = &rax[1]
                                    zmm1 = data_143702e10
                                    rax[-1] = _mm_or_ps(
                                        _mm_and_ps(_mm_shuffle_ps(zmm0, zmm0, 0x88), zmm1), 
                                        _mm_andnot_ps(zmm1, zmm0))
                                    i_33 = i_79
                                    i_79 -= 1
                                while (i_33 != 1)
                        else if (rax.d == 0x6000)
                            rax = rdi_1
                            
                            if (i_80 != 0)
                                int64_t i_78 = i_80
                                int64_t i_34
                                
                                do
                                    zmm0 = *rax
                                    rax = &rax[1]
                                    zmm1 = data_143702e10
                                    rax[-1] = _mm_or_ps(
                                        _mm_and_ps(_mm_shuffle_ps(zmm0, zmm0, 0x39), zmm1), 
                                        _mm_andnot_ps(zmm1, zmm0))
                                    i_34 = i_78
                                    i_78 -= 1
                                while (i_34 != 1)
            else
                rax = rdi_1
                
                if (i_80 != 0)
                    int64_t i_72 = i_80
                    int64_t i_35
                    
                    do
                        zmm0 = *rax
                        rax = &rax[1]
                        rax[-1] = _mm_shuffle_ps(zmm0, zmm0, 0xff)
                        i_35 = i_72
                        i_72 -= 1
                    while (i_35 != 1)
        else
            int32_t rax_43 = r14_2 & 0x7000
            
            if (rax_43 == 0x1000)
            label_142840b7a:
                rax = rdi_1
                
                if (i_80 != 0)
                    int64_t i_71 = i_80
                    int64_t i_36
                    
                    do
                        zmm0 = *rax
                        rax = &rax[1]
                        rax[-1] = _mm_shuffle_ps(zmm0, zmm0, 0)
                        i_36 = i_71
                        i_71 -= 1
                    while (i_36 != 1)
            else if (rax_43 == 0x2000)
                rax = rdi_1
                
                if (i_80 != 0)
                    int64_t i_70 = i_80
                    int64_t i_37
                    
                    do
                        zmm0 = *rax
                        rax = &rax[1]
                        rax[-1] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                        i_37 = i_70
                        i_70 -= 1
                    while (i_37 != 1)
            else if (rax_43 == 0x4000)
                rax = rdi_1
                
                if (i_80 != 0)
                    int64_t i_69 = i_80
                    int64_t i_38
                    
                    do
                        zmm0 = *rax
                        rax = &rax[1]
                        rax[-1] = _mm_shuffle_ps(zmm0, zmm0, 0xaa)
                        i_38 = i_69
                        i_69 -= 1
                    while (i_38 != 1)
            else
                rcx_10.b = (rdx_1 & 0x70000) == 0x70000
                int32_t rax_45
                rax_45.b = (rdx_1.b & 2) != 0
                
                if ((rax_45.b & rcx_10.b) == 0)
                    goto label_142840b7a
                
                rax = rdi_1
                
                if (i_80 != 0)
                    int64_t i_68 = i_80
                    int64_t i_39
                    
                    do
                        float temp0_133[0x4] = __mulps_xmmps_memps(data_1434d6040, *rax)
                        zmm1 = _mm_shuffle_ps(temp0_133, temp0_133, 0x99)
                        temp0_133[0] = temp0_133[0] f+ zmm1[0]
                        float temp0_135[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                        temp0_133[0] = temp0_133[0] + temp0_135[0]
                        *rax = _mm_shuffle_ps(temp0_133, temp0_133, 0)
                        rax = &rax[1]
                        i_39 = i_68
                        i_68 -= 1
                    while (i_39 != 1)
    
    if (test_bit(r14_2, 0x19))
        rax = zx.q(r13_1[1][0])
        
        if ((rax.b & 0x20) == 0 && (rax.b & 3) != 0 && i_80 != 0)
            int64_t i_40
            
            do
                zmm8 = __maxps_xmmps_memps(*rdi_1, data_143702d90)
                zmm1 = data_1434d60c0
                zmm8 = __minps_xmmps_memps(zmm8, data_143702d70)
                data_143702c40
                __cmpps_xmmps_memps_immb(zmm8, data_1434d6080, 1)
                zmm0, rax, zmm6, zmm7, zmm8 = sub_14283fe90(zmm8, zmm1)
                float temp0_175[0x4] = __mulps_xmmps_memps(zmm0, data_1434d60a0)
                zmm8 = __mulps_xmmps_memps(zmm8, data_1434d6090)
                float temp0_177[0x4] = __subps_xmmps_memps(temp0_175, data_1434d60b0)
                uint32_t temp0_178[0x4] = _mm_and_ps(zmm8, zmm6)
                *rdi_1 = _mm_or_ps(
                    _mm_and_ps(_mm_or_ps(_mm_andnot_ps(zmm6, temp0_177), temp0_178), zmm7), 
                    __andnps_xmmxud_memxud(zmm7, *rdi_1))
                rdi_1 = &rdi_1[1]
                i_40 = i_80
                i_80 -= 1
            while (i_40 != 1)

__security_check_cookie(rax_2 ^ &var_c8)
