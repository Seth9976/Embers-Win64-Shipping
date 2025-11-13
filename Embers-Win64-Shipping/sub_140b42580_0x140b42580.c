// 函数: sub_140b42580
// 地址: 0x140b42580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int32_t* r14 = arg3
int64_t var_f0 = 0
int32_t var_e8 = 0
uint64_t var_a0 = 0
int32_t i_9 = 0
uint64_t var_100 = 0
int32_t i_7 = 0
sub_140b3b1b0(*arg1, &var_f0, &var_a0, &var_100)
int32_t i_8 = i_9
*arg2 += var_e8
arg2[1] += i_8
int32_t i_5 = i_7
arg2[2] += i_5
int64_t** r10 = arg1
int32_t rcx_1 = (*r10)[0xf].d
int32_t result_6

if (rcx_1 == data_143de5474 || rcx_1 == data_143db7ab8)
    result_6 = 1
else
    result_6 = 0

int32_t result_7 = result_6

if (var_e8 s> 0)
    r10[0x24] = *(var_f0 + sx.q(var_e8 - 1) * 0x18)

int32_t r15 = 0
uint64_t result = zx.q(result_6)
char r9_1 = 1
uint64_t result_1 = result
int128_t zmm6

if (var_e8 s> 0)
    void* r13_1 = &r10[3]
    uint64_t rdx_2 = result * 5
    int64_t r14_1 = 0
    void* var_b0_1 = r13_1
    void* r12_3 = &(&data_143de7170)[zx.q(result.d) * 2]
    uint64_t var_118_1 = rdx_2
    void* var_108_1 = r12_3
    
    do
        char rsi_1 = 0
        int64_t* rdi = var_f0 + r14_1 * 0x18
        int64_t* var_b8_1 = rdi
        
        if (r9_1 != 0)
            char rcx_6 = *(rdi + 0x15)
            
            if ((rcx_6 & 0x10) != 0)
                int32_t rax_6 = r10[6].d
                int128_t var_70
                
                if ((rcx_6 & 2) != 0)
                    if (rax_6 s> 0)
                        rsi_1 = 1
                        int64_t rcx_7 = sx.q(rax_6) * 3
                        int64_t rax_8 = r10[5]
                        int64_t var_60_1
                        var_60_1:5.b = ((*(rax_8 + (rcx_7 << 3) - 8) u>> 0x28).b & 0xfd) | 0x20
                        int64_t rax_11 = *rdi
                        var_70 = *(rax_8 + (rcx_7 << 3) - 0x18)
                        var_70.q = rax_11
                    
                    int64_t rdi_1 = sx.q(r10[6].d)
                    int32_t rax_12 = (rdi_1 + 1).d
                    r10[6].d = rax_12
                    
                    if (rax_12 s> *(r10 + 0x34))
                        sub_1405a4df0(&r10[5])
                        rdx_2 = var_118_1
                        result_6 = result_7
                    
                    int64_t rax_13 = r10[5]
                    int64_t rcx_9 = rdi_1 * 3
                    rdi = var_b8_1
                    *(rax_13 + (rcx_9 << 3)) = *rdi
                    *(rax_13 + (rcx_9 << 3) + 0x10) = rdi[2]
                    
                    if (rsi_1 != 0)
                        rdi = &var_70
                        var_b8_1 = &var_70
                else if (rax_6 s> 0)
                    int64_t rcx_10 = sx.q(r10[6].d)
                    int32_t rax_14 = (rcx_10 - 1).d
                    r10[6].d = rax_14
                    
                    if (rax_14 s> 0)
                        rsi_1 = 1
                        int64_t rcx_11 = (rcx_10 - 2) * 3
                        int64_t rax_16 = r10[5]
                        int64_t var_60_2
                        var_60_2:5.b = (*(rax_16 + (rcx_11 << 3) + 0x10) u>> 0x28).b | 0x22
                        int64_t rax_19 = *rdi
                        var_70 = *(rax_16 + (rcx_11 << 3))
                        var_70.q = rax_19
                        rdi = &var_70
                        var_b8_1 = &var_70
        
        int64_t i = *rdi
        int64_t rax_20 = r14_1 - 1
        
        if (rsi_1 == 0)
            rax_20 = r14_1
        
        int32_t rax_21 = r15 - 1
        
        if (rsi_1 == 0)
            rax_21 = r15
        
        if ((&data_143de7130)[rdx_2] u> *((rdx_2 << 3) + 0x143de7138))
            sub_140b4ab50(&data_143de7120, result_6)
        
        int32_t rcx_12 = *(r12_3 + 8)
        int32_t r14_2
        
        if (rcx_12 == 0 || i u< **r12_3)
            data_143de7190 = 0
            r14_2 = -1
        else
            int32_t rdx_5 = data_143de7190
            
            if (rdx_5 s>= rcx_12)
                rdx_5 = rcx_12 - 1
                data_143de7190 = rdx_5
            
            if (rdx_5 s> 0)
                int64_t r10_1 = *r12_3
                
                if (*(r10_1 + (sx.q(rdx_5 - 1) << 3)) u> i)
                    int32_t r9_2 = 0
                    
                    if (rdx_5 s> 4)
                        int32_t rax_28
                        
                        do
                            int32_t r8_1 = rdx_5 + r9_2
                            
                            if (r8_1 s< 0)
                                r8_1 += 1
                            
                            int32_t r8_2 = r8_1 s>> 1
                            int64_t rcx_14 = *(r10_1 + (sx.q(r8_2) << 3))
                            rax_28 = r8_2
                            
                            if (rcx_14 u<= i)
                                rax_28 = rdx_5
                            
                            if (rcx_14 u<= i)
                                r9_2 = r8_2
                            
                            rdx_5 = rax_28
                        while (rax_28 - r9_2 s> 4)
                    
                    rdx_5 = r9_2
                    data_143de7190 = rdx_5
            
            int32_t rax_31 = *(r12_3 + 8)
            
            if (rdx_5 s>= rax_31)
            label_140b428ce:
                r14_2 = rax_31 - 1
            else
                while (i u>= *(*r12_3 + (sx.q(rdx_5) << 3)))
                    rdx_5 += 1
                    data_143de7190 = rdx_5
                    rax_31 = *(r12_3 + 8)
                    
                    if (rdx_5 s>= rax_31)
                        goto label_140b428ce
                
                r14_2 = rdx_5 - 1
        
        int32_t rax_32 = *arg3
        
        if (r14_2 s<= rax_32)
            rax_32 = r14_2
        
        *arg3 = rax_32
        
        if ((*(rdi + 0x15) & 2) == 0)
            r10 = arg1
            int32_t r9_3 = r10[4].d
            
            if (r9_3 s> 0)
                result_6.b = 0
                int64_t r10_2 = 0
                int32_t r9_4 = r9_3 - 1
                
                if (r9_3 - 1 s>= 0)
                    int64_t rbx_3 = *r13_1
                    int64_t rcx_19 = sx.q(r9_4)
                    int64_t* rdx_9 = rbx_3 + ((rcx_19 * 3 + 1) << 3)
                    int64_t temp10_1
                    
                    do
                        if (*rdx_9 == rdi[1])
                            int64_t rcx_20 = sx.q(r9_4) * 3
                            int32_t rax_36 = *(r13_1 + 8)
                            int32_t rdx_11 = rax_36 - r9_4
                            int64_t var_88_1 = (*(rbx_3 + (rcx_20 << 3))).q
                            
                            if (rdx_11 != 1)
                                memmove(rbx_3 + (rcx_20 << 3), rbx_3 + sx.q(r9_4 + 1) * 0x18, 
                                    (rdx_11 - 1) * 0x18)
                                rax_36 = *(r13_1 + 8)
                            
                            r10_2 = var_88_1
                            *(r13_1 + 8) = rax_36 - 1
                            result_6.b = 1
                            break
                        
                        r9_4 -= 1
                        rdx_9 -= 0x18
                        temp10_1 = rcx_19
                        rcx_19 -= 1
                    while (temp10_1 - 1 s>= 0)
                
                if (r14_2 s>= 0 && result_6.b != 0)
                    int64_t r12_4 = *rdi
                    
                    if (r12_4 u> r10_2)
                        int64_t* rsi_2 = arg1
                        void* r13_2 = &rsi_2[9]
                        int32_t rax_41
                        rax_41, zmm6 = sub_140b3ea80(r13_2, rdi[1], rdi[2].d, *(rdi + 0x15) & 1, 0)
                        int64_t r15_1 = sx.q(rax_41)
                        int32_t rax_42 = rsi_2[8].d
                        int32_t var_c8 = r15_1.d
                        
                        if (rax_42 s<= r15_1.d)
                            int64_t rsi_3 = sx.q(rsi_2[8].d)
                            int32_t rax_43 = r15_1.d - rax_42 + 1 + rsi_3.d
                            rsi_2[8].d = rax_43
                            
                            if (rax_43 s> *(rsi_2 + 0x44))
                                sub_1405a4d70(&rsi_2[7])
                            
                            memset(rsi_2[7] + (rsi_3 << 3), 0, sx.q(r15_1.d - rax_42 + 1) << 3)
                            rsi_2 = arg1
                        
                        int32_t* rbx_5 = *(rsi_2[7] + (r15_1 << 3))
                        
                        if (rbx_5 == 0)
                            int32_t* rax_46 = j_sub_140a82f30(zx.q((&rbx_5[0xe]).d))
                            
                            if (rax_46 == 0)
                                rbx_5 = nullptr
                            else
                                char var_158_1
                                var_158_1.q = r13_2
                                rbx_5 = sub_140b2e750(rax_46, 0, &var_c8, rsi_2[2], var_158_1, 
                                    *rsi_2 + 0x80)
                            
                            *(rsi_2[7] + (r15_1 << 3)) = rbx_5
                        
                        int32_t rax_49 = rbx_5[6]
                        
                        if (rax_49 != r14_2)
                            if (rax_49 != 0xffffffff)
                                sub_140b3b080(rbx_5)
                            
                            rbx_5[6] = r14_2
                            rbx_5[0xd].b = 1
                        
                        *(rbx_5 + 0x20) += r12_4 - r10_2
                        
                        if (data_143de8158 != 0 && (*(var_b8_1 + 0x15) & 0x20) == 0)
                            int32_t* rax_50
                            rax_50, zmm6 = sub_140b3ab40(rsi_2, var_b8_1, 1, 1)
                            sub_140b45d60(rax_50, r14_2, 3, 1)
                        
                        r13_1 = var_b0_1
                    
                    r12_3 = var_108_1
                
                r10 = arg1
        else
            int64_t rbx_2 = sx.q(*(r13_1 + 8))
            int32_t rax_33 = (rbx_2 + 1).d
            *(r13_1 + 8) = rax_33
            
            if (rax_33 s> *(r13_1 + 0xc))
                sub_1405a4df0(r13_1)
            
            int64_t rax_34 = *r13_1
            int64_t rcx_18 = rbx_2 * 3
            *(rax_34 + (rcx_18 << 3)) = *rdi
            *(rax_34 + (rcx_18 << 3) + 0x10) = rdi[2]
            r10 = arg1
        
        r15 = rax_21 + 1
        r9_1 = rsi_1 ^ 1
        r14_1 = rax_20 + 1
        rdx_2 = var_118_1
        result_6 = result_7
    while (r15 s< var_e8)
    
    i_8 = i_9
    i_5 = i_7
    result = result_1
    r14 = arg3

if (i_8 s> 0)
    uint64_t r11 = var_a0
    uint64_t rcx_32 = result * 5
    uint64_t var_a8_2 = rcx_32
    void* r13_5 = &(&data_143de7170)[result * 2]
    uint64_t var_138_1 = r11
    uint64_t i_4 = zx.q(i_8)
    int128_t var_48_1 = zmm6
    uint64_t i_1
    
    do
        int64_t j = *r11
        
        if ((&data_143de7130)[rcx_32] u> *((rcx_32 << 3) + 0x143de7138))
            sub_140b4ab50(&data_143de7120, result_7)
            r11 = var_138_1
        
        int32_t rcx_33 = *(r13_5 + 8)
        int32_t result_4
        
        if (rcx_33 == 0 || j u< **r13_5)
            data_143de7190 = 0
            result_4 = -1
        else
            int32_t rdx_20 = data_143de7190
            
            if (rdx_20 s>= rcx_33)
                rdx_20 = rcx_33 - 1
                data_143de7190 = rdx_20
            
            if (rdx_20 s> 0)
                int64_t r10_3 = *r13_5
                
                if (*(r10_3 + (sx.q(rdx_20 - 1) << 3)) u> j)
                    int32_t r9_8 = 0
                    
                    if (rdx_20 s> 4)
                        int32_t rax_57
                        
                        do
                            int32_t r8_11 = rdx_20 + r9_8
                            
                            if (r8_11 s< 0)
                                r8_11 += 1
                            
                            int32_t r8_12 = r8_11 s>> 1
                            int64_t rcx_35 = *(r10_3 + (sx.q(r8_12) << 3))
                            rax_57 = r8_12
                            
                            if (rcx_35 u<= j)
                                rax_57 = rdx_20
                            
                            if (rcx_35 u<= j)
                                r9_8 = r8_12
                            
                            rdx_20 = rax_57
                        while (rax_57 - r9_8 s> 4)
                    
                    rdx_20 = r9_8
                    data_143de7190 = rdx_20
            
            int32_t rax_60 = *(r13_5 + 8)
            
            if (rdx_20 s>= rax_60)
            label_140b42c70:
                result_4 = rax_60 - 1
            else
                while (j u>= *(*r13_5 + (sx.q(rdx_20) << 3)))
                    rdx_20 += 1
                    data_143de7190 = rdx_20
                    rax_60 = *(r13_5 + 8)
                    
                    if (rdx_20 s>= rax_60)
                        goto label_140b42c70
                
                result_4 = rdx_20 - 1
        
        result = zx.q(*r14)
        
        if (result_4 s<= result.d)
            result = zx.q(result_4)
        
        *r14 = result.d
        
        if (result_4 s>= 0)
            char r12_6 = *(r11 + 0x15)
            int64_t r14_4 = sx.q(sub_140b3ea80(&arg1[9], *(r11 + 8), *(r11 + 0x10), r12_6 & 1, 0))
            int32_t rax_62 = arg1[8].d
            int32_t var_c4 = r14_4.d
            
            if (rax_62 s<= r14_4.d)
                int64_t r15_3 = sx.q(arg1[8].d)
                int32_t rax_63 = r15_3.d + r14_4.d - rax_62 + 1
                arg1[8].d = rax_63
                
                if (rax_63 s> *(arg1 + 0x44))
                    sub_1405a4d70(&arg1[7])
                
                memset(&arg1[7][r15_3], 0, sx.q(r14_4.d - rax_62 + 1) << 3)
            
            int32_t* rbx_7 = arg1[7][r14_4]
            
            if (rbx_7 == 0)
                int32_t* rax_66 = j_sub_140a82f30(zx.q((&rbx_7[0xe]).d))
                
                if (rax_66 == 0)
                    rbx_7 = nullptr
                else
                    char var_158_2
                    var_158_2.q = &arg1[9]
                    rbx_7 = sub_140b2e750(rax_66, ((r12_6 & 8) == 0) + 1, &var_c4, arg1[2], 
                        var_158_2, *arg1 + 0x80)
                
                arg1[7][r14_4] = rbx_7
            
            int32_t rcx_45 = rbx_7[6]
            result = zx.q(*(var_138_1 + 0x14))
            
            if ((r12_6 & 8) == 0)
                zmm6 = *(var_138_1 + 0x18)
                
                if (rcx_45 != result_4)
                    if (rcx_45 != 0xffffffff)
                        sub_140b3b080(rbx_7)
                    
                    result.b = 0
                    rbx_7[6] = result_4
                    rbx_7[0xd].b = 1
                
                uint32_t rcx_51 = zx.d(result.b)
                
                if (result.b == 0)
                    rbx_7[8] = zmm6.d
                else if (rcx_51 == 1)
                    rbx_7[8] = __minss_xmmss_memss(zmm6.d, rbx_7[8]).d
                else if (rcx_51 == 2)
                    rbx_7[8] = __maxss_xmmss_memss(zmm6.d, rbx_7[8]).d
                else if (rcx_51 == 3)
                    zmm6.d = zmm6.d f+ rbx_7[8]
                    rbx_7[8] = zmm6.d
            else
                int32_t result_5 = *(var_138_1 + 0x18)
                
                if (rcx_45 != result_4)
                    if (rcx_45 != 0xffffffff)
                        sub_140b3b080(rbx_7)
                    
                    result.b = 0
                    rbx_7[6] = result_4
                    rbx_7[0xd].b = 1
                
                uint32_t rcx_47 = zx.d(result.b)
                
                if (result.b == 0)
                    rbx_7[8] = result_5
                else if (rcx_47 == 1)
                    result = zx.q(rbx_7[8])
                    
                    if (result_5 s<= result.d)
                        result = zx.q(result_5)
                    
                    rbx_7[8] = result.d
                else if (rcx_47 == 2)
                    result = zx.q(rbx_7[8])
                    
                    if (result_5 s>= result.d)
                        result = zx.q(result_5)
                    
                    rbx_7[8] = result.d
                else if (rcx_47 == 3)
                    rbx_7[8] += result_5
            
            if (data_143de8158 == 0)
                r14 = arg3
                r11 = var_138_1
            else
                int64_t r14_7 = sx.q(sub_140b3ea80(&arg1[9], *(var_138_1 + 8), *(var_138_1 + 0x10), 
                    *(var_138_1 + 0x15) & 1, 1))
                int32_t rax_70 = arg1[8].d
                int32_t var_c0 = r14_7.d
                
                if (rax_70 s<= r14_7.d)
                    int64_t rdi_9 = sx.q(arg1[8].d)
                    int32_t rax_71 = r14_7.d - rax_70 + 1 + rdi_9.d
                    arg1[8].d = rax_71
                    
                    if (rax_71 s> *(arg1 + 0x44))
                        sub_1405a4d70(&arg1[7])
                    
                    memset(&arg1[7][rdi_9], 0, sx.q(r14_7.d - rax_70 + 1) << 3)
                
                int32_t* rbx_12 = arg1[7][r14_7]
                
                if (rbx_12 == 0)
                    int32_t* rax_74 = j_sub_140a82f30(zx.q((&rbx_12[0xe]).d))
                    
                    if (rax_74 == 0)
                        rbx_12 = nullptr
                    else
                        int64_t** rdx_26
                        rdx_26.b = 1
                        char var_158_3
                        var_158_3.q = &arg1[9]
                        rbx_12 = sub_140b2e750(rax_74, rdx_26.b, &var_c0, arg1[2], var_158_3, 
                            *arg1 + 0x80)
                    
                    arg1[7][r14_7] = rbx_12
                
                result = zx.q(rbx_12[6])
                int32_t rcx_61 = 3
                
                if (result.d != result_4)
                    if (result.d != 0xffffffff)
                        result = sub_140b3b080(rbx_12)
                    
                    rbx_12[6] = result_4
                    rcx_61 = 0
                    rbx_12[0xd].b = 1
                
                if (rcx_61 == 0)
                    result = 1
                label_140b42f57:
                    rbx_12[8] = result.d
                    r14 = arg3
                    r11 = var_138_1
                else
                    if (rcx_61 == 1)
                        result = zx.q(rbx_12[8])
                        
                        if (result.d s>= 1)
                            result = 1
                        
                        goto label_140b42f57
                    
                    if (rcx_61 == 2)
                        result = zx.q(rbx_12[8])
                        
                        if (result.d s<= 1)
                            result = 1
                        
                        goto label_140b42f57
                    
                    r11 = var_138_1
                    r14 = arg3
                    
                    if (rcx_61 == 3)
                        rbx_12[8] += 1
        
        rcx_32 = var_a8_2
        r11 += 0x20
        i_1 = i_4
        i_4 -= 1
        var_138_1 = r11
    while (i_1 != 1)
    i_5 = i_7

if (i_5 s> 0)
    uint64_t i_6 = zx.q(i_5)
    uint64_t r12_8 = result_1 * 5
    void* rsi_6 = &(&data_143de7170)[result_1 * 2]
    void* var_120 = rsi_6
    int32_t* r14_9 = var_100 + 0x18
    uint64_t i_2
    
    do
        int64_t j_1 = *(r14_9 - 8)
        
        if ((&data_143de7130)[r12_8] u> *((r12_8 << 3) + 0x143de7138))
            sub_140b4ab50(&data_143de7120, result_7)
        
        int32_t rcx_65 = *(rsi_6 + 8)
        int32_t result_3
        
        if (rcx_65 == 0 || j_1 u< **rsi_6)
            result_3 = -1
            data_143de7190 = 0
        else
            int32_t rdx_28 = data_143de7190
            
            if (rdx_28 s>= rcx_65)
                rdx_28 = rcx_65 - 1
                data_143de7190 = rdx_28
            
            if (rdx_28 s> 0)
                int64_t r10_4 = *rsi_6
                
                if (*(r10_4 + (sx.q(rdx_28 - 1) << 3)) u> j_1)
                    int32_t r9_13 = 0
                    
                    if (rdx_28 s> 4)
                        int32_t rax_82
                        
                        do
                            int32_t r8_21 = rdx_28 + r9_13
                            
                            if (r8_21 s< 0)
                                r8_21 += 1
                            
                            int32_t r8_22 = r8_21 s>> 1
                            int64_t rcx_67 = *(r10_4 + (sx.q(r8_22) << 3))
                            rax_82 = r8_22
                            
                            if (rcx_67 u<= j_1)
                                rax_82 = rdx_28
                            
                            if (rcx_67 u<= j_1)
                                r9_13 = r8_22
                            
                            rdx_28 = rax_82
                        while (rax_82 - r9_13 s> 4)
                    
                    rdx_28 = r9_13
                    data_143de7190 = rdx_28
            
            int32_t rax_85 = *(rsi_6 + 8)
            
            if (rdx_28 s>= rax_85)
            label_140b4309b:
                result_3 = rax_85 - 1
            else
                while (j_1 u>= *(*rsi_6 + (sx.q(rdx_28) << 3)))
                    rdx_28 += 1
                    data_143de7190 = rdx_28
                    rax_85 = *(rsi_6 + 8)
                    
                    if (rdx_28 s>= rax_85)
                        goto label_140b4309b
                
                result_3 = rdx_28 - 1
        
        result = zx.q(*arg3)
        
        if (result_3 s<= result.d)
            result = zx.q(result_3)
        
        *arg3 = result.d
        
        if (result_3 s>= 0)
            int64_t var_e0 = 0
            int64_t var_d8_1 = 0
            
            if (&var_e0 != &r14_9[-6])
                int32_t rdi_10 = r14_9[-4]
                int64_t rsi_7 = *(r14_9 - 0x18)
                var_d8_1.d = rdi_10
                
                if (rdi_10 != 0)
                    sub_1405a4c70(&var_e0, rdi_10, 0)
                    memcpy(var_e0, rsi_7, rdi_10 * 2)
                
                rsi_6 = var_120
            
            int32_t result_2 = *r14_9
            int64_t* r10_5 = arg1[2]
            int32_t rax_89 = r10_5[1].d
            uint64_t result_8 = zx.q(result_3)
            uint64_t result_9 = result_8
            int32_t r11_2 = (zx.q(result_3) u>> 0x20).d * 0x17 + result_3
            void* rax_92
            
            if (rax_89 == *(r10_5 + 0x34))
            label_140b43199:
                rax_92 = sub_140b2cc80(r10_5, r11_2, &result_9)
            else
                void* rcx_72 = r10_5[8]
                void* r8_25 = &r10_5[7]
                
                if (rcx_72 != 0)
                    r8_25 = rcx_72
                
                int32_t rax_91 = *(r8_25 + (((sx.q(r10_5[9].d) - 1) & sx.q(r11_2)) << 2))
                
                if (rax_91 == 0xffffffff)
                label_140b43199_1:
                    rax_92 = sub_140b2cc80(r10_5, r11_2, &result_9)
                else
                    int64_t* rcx_76
                    
                    while (true)
                        rcx_76 = sx.q(rax_91) * 0x30 + *r10_5
                        
                        if (*rcx_76 == result_8)
                            break
                        
                        rax_91 = rcx_76[5].d
                        
                        if (rax_91 == 0xffffffff)
                            goto label_140b43199_2
                    
                    if (rax_91 == 0xffffffff || rcx_76 == 0)
                    label_140b43199_2:
                        rax_92 = sub_140b2cc80(r10_5, r11_2, &result_9)
                    else
                        rax_92 = &rcx_76[1]
            
            int64_t rdi_11 = sx.q(*(rax_92 + 0x18))
            int32_t rax_93 = (rdi_11 + 1).d
            *(rax_92 + 0x18) = rax_93
            
            if (rax_93 s> *(rax_92 + 0x1c))
                sub_1405a4df0(rax_92 + 0x10)
            
            int64_t* rbx_14 = *(rax_92 + 0x10) + rdi_11 * 0x18
            sub_140596d10(rbx_14, &var_e0)
            int64_t rcx_81 = var_e0
            rbx_14[2].d = result_3
            result = zx.q(result_2)
            *(rbx_14 + 0x14) = result.d
            
            if (rcx_81 != 0)
                result = sub_140a74f90(rcx_81)
        
        r14_9 = &r14_9[8]
        i_2 = i_6
        i_6 -= 1
    while (i_2 != 1)
    i_5 = i_7

uint64_t rsi_8 = var_100
uint64_t rbx_15 = rsi_8

if (i_5 != 0)
    int32_t i_3
    
    do
        int64_t rcx_82 = *rbx_15
        
        if (rcx_82 != 0)
            result = sub_140a74f90(rcx_82)
        
        rbx_15 += 0x20
        i_3 = i_5
        i_5 -= 1
    while (i_3 != 1)

if (rsi_8 != 0)
    result = sub_140a74f90(rsi_8)

uint64_t rcx_84 = var_a0

if (rcx_84 != 0)
    result = sub_140a74f90(rcx_84)

int64_t rcx_85 = var_f0

if (rcx_85 != 0)
    result = sub_140a74f90(rcx_85)

__security_check_cookie(rax_1 ^ &var_178)
return result
