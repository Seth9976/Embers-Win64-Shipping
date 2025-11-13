// 函数: sub_142a87990
// 地址: 0x142a87990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* result_10
int128_t* result_11 = result_10
int64_t var_118 = -2
void var_318
int64_t rax_1 = __security_cookie ^ &var_318
int32_t* r15 = arg5
int32_t* var_2e0 = r15
char var_b8[0x70]
memset(&var_b8, 0, 0x64)
int32_t r13 = 0
int32_t var_248 = 0
void var_230
void* var_240 = &var_230
int32_t var_238 = 8
char var_234 = 0
int32_t var_2a8 = 0
void var_290
void* result_2 = &var_290
int32_t var_298 = 8
char var_294 = 0
int32_t var_1e8 = 0
void var_1d0
void* result_3 = &var_1d0
int32_t var_1d8 = 8
char var_1d4 = 0
int128_t* result = sub_142a4da70(arg1, r15)
int128_t* result_6 = result
int128_t* result_5 = result

if (*r15 s> 0 && arg4 == 0)
    if (result != 0)
        result = sub_142a92960(result)
    
    int32_t rdi_1 = 0
    int32_t rcx_3 = var_1e8
    
    if (rcx_3 s> 0)
        int64_t rsi_1 = 0
        
        do
            result = result_3
            int64_t* rbx_1 = *(result + rsi_1)
            
            if (rbx_1 != 0)
                if (*(rbx_1 + 0xc) != 0)
                    sub_142a7dcd0(*rbx_1)
                
                result = sub_142a47920(rbx_1)
                rcx_3 = var_1e8
            
            rdi_1 += 1
            rsi_1 += 8
        while (rdi_1 s< rcx_3)
    
    if (var_1d4 != 0)
        result = sub_142a7dcd0(result_3)
    
    int32_t rbx_2 = 0
    
    if (var_2a8 s> 0)
        int64_t rdi_2 = 0
        
        do
            result = sub_142a47920(*(result_2 + rdi_2))
            rbx_2 += 1
            rdi_2 += 8
        while (rbx_2 s< var_2a8)
    
    if (var_294 != 0)
        result = sub_142a7dcd0(result_2)
    
    if (var_248 s> 0)
        int64_t rbx_3 = 0
        
        do
            result = sub_142a47920(*(var_240 + rbx_3))
            r13 += 1
            rbx_3 += 8
        while (r13 s< var_248)
else if (result_6 != 0 || arg4 != 0)
    int64_t* i_3 = nullptr
    int64_t* j_2 = nullptr
    int32_t var_178 = 0
    void var_160
    void* result_4 = &var_160
    int32_t var_168_1 = 8
    char var_164_1 = 0
    int128_t* result_9 = nullptr
    int128_t* result_7 = nullptr
    int32_t result_1 = 0
    int16_t var_ec
    void* var_f8 = &var_ec:1
    int32_t var_f0_1 = 0x28
    var_ec = 0
    int32_t var_c0_1 = 0
    
    while (true)
        result = sub_142a92a50(result_6, 0, r15)
        int128_t* result_8 = result
        
        if (result == 0)
            break
        
        int32_t var_2d4 = 0x64
        result = sub_142a8cf40(&var_f8, 0x64, 0x64, &var_2d4, &result_1)
        result_10 = result
        int32_t result_14 = result_1
        
        if (result_14 s> 0)
            goto label_142a882c2
        
        int32_t var_2b8_1
        int32_t r15_1
        
        while (true)
            result = sub_142a4d040(arg1, result_8, result_10, var_2d4, &result_1)
            r15_1 = result.d
            var_2b8_1 = result.d
            result_14 = result_1
            
            if (result_14 != 0xf)
                break
            
            var_2d4 = result.d
            result_1 = 0
            result = sub_142a8cf40(&var_f8, r15_1, r15_1, &var_2d4, &result_1)
            result_10 = result
            result_14 = result_1
            
            if (result_14 s> 0)
                goto label_142a882bd
        
        if (result_14 s> 0)
        label_142a882bd:
            r15 = var_2e0
        label_142a882c2:
            
            if (result_14 == 7)
                *r15 = 7
                break
            
            if (arg3 != 0)
                *r15 = 1
                break
            
            result_1 = 0
            
            if (var_ec.b != 0)
                sub_142a7dcd0(var_f8)
            
            goto label_142a88316
        
        int512_t zmm0_1 = sub_142a8cbd0(&var_f8, result_10, r15_1, &result_1)
        int32_t result_12 = result_1
        
        if (result_12 == 0xffffff84)
            result_12 = 0
        
        result_1 = result_12
        int64_t rdx_4 = -1
        
        do
            rdx_4 += 1
        while (*(result_8 + rdx_4) != 0)
        
        result = result_8
        uint32_t i
        uint32_t r8_4
        
        do
            r8_4 = zx.d(*result)
            i = zx.d(*(result + "attribute" - result_8))
            
            if (r8_4 != i)
                break
            
            result += 1
        while (i != 0)
        
        if (r8_4 - i == 0)
            if (r15_1 s> 0)
                int32_t r12_1 = 0
                int64_t rdx_5 = 0
                
                while (true)
                label_142a87d10:
                    int32_t rsi_2 = 0
                    
                    if (r12_1 s>= r15_1)
                        break
                    
                    do
                        char rcx_16 = *(var_f8 + rdx_5)
                        r12_1 += 1
                        rdx_5 += 1
                        
                        if (rcx_16 == 0x2d)
                            break
                        
                        var_b8[sx.q(rsi_2)] = rcx_16
                        rsi_2 += 1
                    while (r12_1 s< r15_1)
                    
                    if (rsi_2 s> 0)
                        int64_t rax_5 = sx.q(rsi_2)
                        
                        if (rax_5 u>= 0x64)
                            __report_rangecheckfailure()
                            noreturn
                        
                        var_b8[rax_5] = 0
                    else if (r12_1 s>= r15_1)
                        break
                    
                    int32_t rdi_3 = var_238
                    
                    if (var_248 != rdi_3)
                    label_142a87dfb:
                        int128_t* result_13 = j_sub_142a7dd00(0x10)
                        result_10 = result_13
                        
                        if (result_13 == 0)
                            result_10 = nullptr
                        else
                            *result_10 = 0
                            *(result_10 + 8) = 0
                        
                        int64_t rax_7 = sx.q(var_248)
                        var_248 = rax_7.d + 1
                        *(var_240 + (rax_7 << 3)) = result_10
                        
                        if (result_10 != 0)
                            if (var_1e8 != var_1d8)
                            label_142a87e69:
                                int64_t* rax_11 = j_sub_142a7dd00(0x40)
                                int64_t* rdi_4 = rax_11
                                int64_t* var_108_1 = rax_11
                                
                                if (rax_11 == 0)
                                    rdi_4 = nullptr
                                else
                                    *rax_11 = rax_11 + 0xd
                                    rax_11[1].d = 0x28
                                    *(rax_11 + 0xc) = 0
                                    rax_11[7].d = 0
                                    *(rax_11 + 0xd) = 0
                                    sub_142a8cbd0(rax_11, &var_b8, rsi_2, var_2e0)
                                
                                int64_t rax_12 = sx.q(var_1e8)
                                var_1e8 = rax_12.d + 1
                                *(result_3 + (rax_12 << 3)) = rdi_4
                                
                                if (rdi_4 != 0)
                                    if (*var_2e0 s> 0)
                                        break
                                    
                                    char* r10_1 = *rdi_4
                                    *result_10 = r10_1
                                    
                                    if (j_2 == 0)
                                        *(result_10 + 8) = 0
                                        j_2 = result_10
                                        continue
                                    
                                    int64_t* j_4 = nullptr
                                    int64_t* j_3 = j_2
                                    
                                    while (true)
                                        char* rax_15 = r10_1
                                        int32_t rax_16
                                        
                                        while (true)
                                            char rcx_27 = *rax_15
                                            char temp2_1 = *(rax_15 + *j_3 - r10_1)
                                            
                                            if (rcx_27 != temp2_1)
                                                rax_16 =
                                                    sbb.d(rax_15.d, rax_15.d, rcx_27 u< temp2_1) | 1
                                                break
                                            
                                            rax_15 = &rax_15[1]
                                            
                                            if (rcx_27 == 0)
                                                rax_16 = 0
                                                break
                                        
                                        if (rax_16 s< 0)
                                            if (j_4 != 0)
                                                j_4[1] = result_10
                                            else
                                                j_2 = result_10
                                            
                                            *(result_10 + 8) = j_3
                                            goto label_142a87d10
                                        
                                        if (rax_16 == 0)
                                            if (arg3 == 0)
                                                goto label_142a87d10
                                            
                                            *var_2e0 = 1
                                            break
                                        
                                        j_4 = j_3
                                        j_3 = j_3[1]
                                        
                                        if (j_3 == 0)
                                            j_4[1] = result_10
                                            *(result_10 + 8) = 0
                                            goto label_142a87d10
                                    
                                    break
                            else
                                int32_t rdx_7 = 2
                                
                                if (var_1d8 == 8)
                                    rdx_7 = 4
                                
                                if (sub_142a5da90(&result_3, rdx_7 * var_1d8, var_1d8) != 0)
                                    goto label_142a87e69
                    else
                        int32_t r14 = 2
                        
                        if (rdi_3 == 8)
                            r14 = 4
                        
                        result_10 = zx.q(r14 * rdi_3)
                        
                        if (result_10.d s> 0)
                            void* rax_6 = sub_142a7dd00(sx.q(result_10.d) << 3)
                            
                            if (rax_6 != 0)
                                if (rdi_3 s> 0)
                                    if (rdi_3 s> var_238)
                                        rdi_3 = var_238
                                    
                                    int32_t rcx_19 = result_10.d
                                    
                                    if (rdi_3 s<= result_10.d)
                                        rcx_19 = rdi_3
                                    
                                    memcpy(rax_6, var_240, rcx_19 << 3)
                                
                                if (var_234 != 0)
                                    sub_142a7dcd0(var_240)
                                
                                var_240 = rax_6
                                var_238 = result_10.d
                                var_234 = 1
                                r15_1 = var_2b8_1
                                goto label_142a87dfb
                    
                    *var_2e0 = 7
                    break
                
                result_9 = "attribute"
                result_7 = nullptr
            
            goto label_142a881da
        
        if (rdx_4.d s<= 1)
            char rcx_34 = *result_8
            
            if (rcx_34 != 0x78)
                if (rdx_4.d s< 0)
                    rdx_4 = -1
                    
                    do
                        rdx_4 += 1
                    while (*(result_8 + rdx_4) != 0)
                
                if (rdx_4.d != 1)
                    goto label_142a882ee
                
                char rax_20 = sub_142a86230(rcx_34)
                
                if (rax_20 == 0)
                    result.b = *result_8 - 0x30
                
                if (rax_20 == 0 && result.b u> 9)
                    goto label_142a882ee
                
                result = sub_142a86220(zx.d(*result_8))
                
                if (result.b == 0x78)
                    goto label_142a882ee
                
                result = sub_142a89f70(sub_142a89e90, var_f8, r15_1, zmm0_1)
                
                if (result.b == 0)
                    goto label_142a882ee
                
                goto label_142a88116
            
            result = sub_142a89f70(sub_142a89f30, var_f8, r15_1, zmm0_1)
            
            if (result.b == 0)
                goto label_142a882ee
            
        label_142a88116:
            result_9 = result_8
            void* rsi_3 = var_f8
            
            if (var_178 == var_168_1)
                int32_t rdx_19 = 2
                
                if (var_168_1 == 8)
                    rdx_19 = 4
                
                result = sub_142a5da90(&result_4, rdx_19 * var_168_1, var_168_1)
                
                if (result == 0)
                    goto label_142a8835a
            
            int64_t* rax_21 = j_sub_142a7dd00(0x40)
            int64_t* rdi_7 = rax_21
            int64_t* var_100_1 = rax_21
            
            if (rax_21 == 0)
                rdi_7 = nullptr
            else
                *rax_21 = rax_21 + 0xd
                rax_21[1].d = 0x28
                *(rax_21 + 0xc) = 0
                rax_21[7].d = 0
                *(rax_21 + 0xd) = 0
                sub_142a8cbd0(rax_21, rsi_3, r15_1, &result_1)
            
            int64_t rax_22 = sx.q(var_178)
            var_178 = rax_22.d + 1
            result = result_4
            *(result + (rax_22 << 3)) = rdi_7
            
            if (rdi_7 == 0)
                goto label_142a8835a
            
            result = zx.q(result_1)
            
            if (result.d s<= 0)
                result_7 = *rdi_7
            label_142a881da:
                int32_t rdi_8 = var_298
                
                if (var_2a8 == rdi_8)
                    int32_t r14_1 = 2
                    result = 4
                    
                    if (rdi_8 == 8)
                        r14_1 = 4
                    
                    result_10 = zx.q(r14_1 * rdi_8)
                    
                    if (result_10.d s<= 0)
                        goto label_142a8835a
                    
                    result = sub_142a7dd00(sx.q(result_10.d) << 3)
                    
                    if (result == 0)
                        goto label_142a8835a
                    
                    if (rdi_8 s> 0)
                        if (rdi_8 s> var_298)
                            rdi_8 = var_298
                        
                        int32_t rcx_42 = result_10.d
                        
                        if (rdi_8 s<= result_10.d)
                            rcx_42 = rdi_8
                        
                        memcpy(result, result_2, rcx_42 << 3)
                    
                    if (var_294 != 0)
                        sub_142a7dcd0(result_2)
                    
                    result_2 = result
                    var_298 = result_10.d
                    var_294 = 1
                
                int128_t** rax_24 = j_sub_142a7dd00(0x18)
                int128_t** rdx_23 = rax_24
                
                if (rax_24 == 0)
                    rdx_23 = nullptr
                else
                    __builtin_memset(rdx_23, 0, 0x18)
                
                int64_t rax_25 = sx.q(var_2a8)
                var_2a8 = rax_25.d + 1
                result = result_2
                *(result + (rax_25 << 3)) = rdx_23
                
                if (rdx_23 == 0)
                    goto label_142a8835a
                
                *rdx_23 = result_9
                rdx_23[1] = result_7
                result = sub_142a87220(&i_3, rdx_23, 1)
                
                if (result.b != 0 || arg3 == 0)
                    goto label_142a882fc
                
                goto label_142a88342
        else
            result = sub_142a4e3a0(result_8)
            result_9 = result
            
            if (result == 0)
            label_142a882ee:
                
                if (arg3 != 0)
                label_142a88342:
                    r15 = var_2e0
                    *r15 = 1
                    break
                
            label_142a882fc:
                
                if (var_ec.b != 0)
                    sub_142a7dcd0(var_f8)
                
                r15 = var_2e0
            label_142a88316:
                var_f8 = &var_ec:1
                int32_t var_f0_2 = 0x28
                var_ec = 0
                int32_t var_c0_2 = 0
                continue
            else
                result = sub_142a4e3e0(result_8, var_f8)
                result_7 = result
                
                if (result == 0)
                    goto label_142a882ee
                
                if (result != var_f8)
                    goto label_142a881da
                
                result = sub_142a87070(&var_178)
                result_10 = result
                
                if (result == 0)
                label_142a8835a:
                    r15 = var_2e0
                    *r15 = 7
                    break
                
                int64_t rdi_6 = -1
                
                do
                    rdi_6 += 1
                while (*(result_7 + rdi_6) != 0)
                
                void var_188
                char* rax_19 = sub_142a8cf40(result_10, rdi_6.d, rdi_6.d, &var_188, &result_1)
                result = zx.q(result_1)
                
                if (result.d s<= 0)
                    char* rdx_15 = rax_19 - result_7
                    char i_1
                    
                    do
                        i_1 = *result_7
                        *(rdx_15 + result_7) = i_1
                        result_7 += 1
                    while (i_1 != 0)
                    sub_142a861c0(rax_19)
                    sub_142a8cbd0(result_10, rax_19, rdi_6.d, &result_1)
                    result = zx.q(result_1)
                    
                    if (result.d s<= 0)
                        result_7 = *result_10
                        goto label_142a881da
        
        r15 = var_2e0
        *r15 = result.d
        break
    
    if (var_ec.b != 0)
        result = sub_142a7dcd0(var_f8)
    
    if (arg4 == 0)
        goto label_142a8857b
    
    if (var_2a8 != var_298)
    label_142a883bb:
        void** rax_28 = j_sub_142a7dd00(0x18)
        void** rdx_26 = rax_28
        
        if (rax_28 == 0)
            rdx_26 = nullptr
        else
            __builtin_memset(rdx_26, 0, 0x18)
        
        int64_t rax_29 = sx.q(var_2a8)
        var_2a8 = rax_29.d + 1
        result = result_2
        *(result + (rax_29 << 3)) = rdx_26
        
        if (rdx_26 == 0)
            goto label_142a883fa
        
        *rdx_26 = &data_143641744
        rdx_26[1] = "posix"
        result = sub_142a87220(&i_3, rdx_26, 1)
    label_142a8857b:
        
        if (*r15 s<= 0 && (i_3 != 0 || j_2 != 0))
            result_10.b = 0
            
            for (int64_t* i_2 = i_3; i_2 != 0; i_2 = i_2[2])
                int64_t* r15_5
                
                if (result_10.b != 0)
                    r15_5 = arg2
                else
                    int64_t rax_32 = -1
                    
                    do
                        rax_32 += 1
                    while ((*i_2)[rax_32] != 0)
                    
                    r15_5 = arg2
                    
                    if (rax_32 u> 1)
                        (*(*r15_5 + 8))(r15_5, &data_143642124, 2)
                        result_10.b = 1
                
                result = *i_2
                int64_t r8_21 = "attribute" - result
                uint32_t j
                uint32_t rdx_27
                
                do
                    rdx_27 = zx.d(*result)
                    j = zx.d(*(result + r8_21))
                    
                    if (rdx_27 != j)
                        break
                    
                    result += 1
                while (j != 0)
                
                if (rdx_27 - j != 0)
                    (*(*r15_5 + 8))(r15_5, &data_143642120, 1)
                    int64_t r8_23 = -1
                    
                    do
                        r8_23 += 1
                    while ((*i_2)[r8_23] != 0)
                    
                    (*(*r15_5 + 8))(r15_5)
                    (*(*r15_5 + 8))(r15_5, &data_143642120, 1)
                    int64_t r8_24 = -1
                    
                    do
                        r8_24 += 1
                    while (i_2[1][r8_24] != 0)
                    
                    result = (*(*r15_5 + 8))(r15_5)
                else
                    int64_t* j_1 = j_2
                    
                    if (j_2 != 0)
                        do
                            (*(*r15_5 + 8))(r15_5, &data_143642120, 1)
                            int64_t r8_22 = -1
                            
                            do
                                r8_22 += 1
                            while ((*j_1)[r8_22] != 0)
                            
                            result = (*(*r15_5 + 8))(r15_5)
                            j_1 = j_1[1]
                        while (j_1 != 0)
        
        int32_t rsi_6 = 0
        int32_t rcx_74 = var_178
        
        if (rcx_74 s> 0)
            int64_t r14_3 = 0
            
            do
                result = result_4
                int64_t* rdi_13 = *(result + r14_3)
                
                if (rdi_13 != 0)
                    if (*(rdi_13 + 0xc) != 0)
                        sub_142a7dcd0(*rdi_13)
                    
                    result = sub_142a47920(rdi_13)
                    rcx_74 = var_178
                
                rsi_6 += 1
                r14_3 += 8
            while (rsi_6 s< rcx_74)
        
        if (var_164_1 != 0)
            result = sub_142a7dcd0(result_4)
        
        goto label_142a8871f
    
    int32_t rax_27 = 2
    
    if (var_298 == 8)
        rax_27 = 4
    
    result = sub_142a5da90(&result_2, var_298 * rax_27, var_298)
    
    if (result != 0)
        goto label_142a883bb
    
label_142a883fa:
    *r15 = 7
    int32_t rsi_4 = 0
    int32_t rcx_52 = var_178
    
    if (rcx_52 s> 0)
        int64_t r14_2 = 0
        
        do
            result = result_4
            int64_t* rdi_10 = *(result + r14_2)
            
            if (rdi_10 != 0)
                if (*(rdi_10 + 0xc) != 0)
                    sub_142a7dcd0(*rdi_10)
                
                result = sub_142a47920(rdi_10)
                rcx_52 = var_178
            
            rsi_4 += 1
            r14_2 += 8
        while (rsi_4 s< rcx_52)
    
    if (var_164_1 != 0)
        result = sub_142a7dcd0(result_4)
    
    if (result_6 != 0)
        result = sub_142a92960(result_6)
    
    int32_t rdi_11 = 0
    int32_t rcx_57 = var_1e8
    
    if (rcx_57 s> 0)
        int64_t rsi_5 = 0
        
        do
            result = result_3
            int64_t* rbx_4 = *(result + rsi_5)
            
            if (rbx_4 != 0)
                if (*(rbx_4 + 0xc) != 0)
                    sub_142a7dcd0(*rbx_4)
                
                result = sub_142a47920(rbx_4)
                rcx_57 = var_1e8
            
            rdi_11 += 1
            rsi_5 += 8
        while (rdi_11 s< rcx_57)
    
    if (var_1d4 != 0)
        result = sub_142a7dcd0(result_3)
    
    int32_t rbx_5 = 0
    
    if (var_2a8 s> 0)
        int64_t rdi_12 = 0
        
        do
            result = sub_142a47920(*(result_2 + rdi_12))
            rbx_5 += 1
            rdi_12 += 8
        while (rbx_5 s< var_2a8)
    
    if (var_294 != 0)
        result = sub_142a7dcd0(result_2)
    
    if (var_248 s> 0)
        int64_t rbx_6 = 0
        
        do
            result = sub_142a47920(*(var_240 + rbx_6))
            r13 += 1
            rbx_6 += 8
        while (r13 s< var_248)
else
label_142a8871f:
    
    if (result_6 != 0)
        result = sub_142a92960(result_6)
    
    int32_t rdi_14 = 0
    int32_t rcx_79 = var_1e8
    
    if (rcx_79 s> 0)
        int64_t rsi_7 = 0
        
        do
            result = result_3
            int64_t* rbx_7 = *(result + rsi_7)
            
            if (rbx_7 != 0)
                if (*(rbx_7 + 0xc) != 0)
                    sub_142a7dcd0(*rbx_7)
                
                result = sub_142a47920(rbx_7)
                rcx_79 = var_1e8
            
            rdi_14 += 1
            rsi_7 += 8
        while (rdi_14 s< rcx_79)
    
    if (var_1d4 != 0)
        result = sub_142a7dcd0(result_3)
    
    int32_t rbx_8 = 0
    
    if (var_2a8 s> 0)
        int64_t rdi_15 = 0
        
        do
            result = sub_142a47920(*(result_2 + rdi_15))
            rbx_8 += 1
            rdi_15 += 8
        while (rbx_8 s< var_2a8)
    
    if (var_294 != 0)
        result = sub_142a7dcd0(result_2)
    
    if (var_248 s> 0)
        int64_t rbx_9 = 0
        
        do
            result = sub_142a47920(*(var_240 + rbx_9))
            r13 += 1
            rbx_9 += 8
        while (r13 s< var_248)

if (var_234 != 0)
    result = sub_142a7dcd0(var_240)

__security_check_cookie(rax_1 ^ &var_318)
return result
