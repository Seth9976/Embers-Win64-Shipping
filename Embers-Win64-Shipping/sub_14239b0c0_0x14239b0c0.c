// 函数: sub_14239b0c0
// 地址: 0x14239b0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i_5 = arg2
void* r15 = arg1[0x15]
int64_t* r13 = r15 + 0x10
int64_t* arg_20 = r13
int64_t* i_6 = arg2
int32_t* var_58 = nullptr
int64_t var_50 = 0
int64_t* i_2 = nullptr
int64_t rdx = 0
*i_6 = 0
*arg3 = 0
void* rbx = *r13
void* rax_2 = sx.q(r13[1].d) * 0xd8 + rbx

if (rbx != rax_2)
    do
        int64_t r14_1 = rdx
        
        if (arg1[0x1c].b != 0)
            break
        
        i_6 = i_5
        i_2 += sub_1423b7dc0(rbx, *(r15 + 0x1f1))
        int64_t rcx_1 = sx.q(*(rbx + (sx.q(*(rbx + 0x5c)) << 2) + 0x18))
        *i_6 += rcx_1
        int64_t rax_6 = sx.q(*(rbx + 0x60))
        rdx = r14_1 + rcx_1
        
        if (*(rbx + 0xb0) == 0)
            rdx = r14_1
        
        if (*(rbx + 0x5c) != rax_6.d)
            *arg3 += sx.q(*(rbx + (rax_6 << 2) + 0x18))
        
        rbx += 0xd8
    while (rbx != rax_2)
    
    r13 = r15 + 0x10

int64_t r9 = arg1[0x23]
char r11 = 0
int64_t r10 = arg1[0x21]

if (r9 - i_2 s> arg1[0x20] + r10)
    r11 = 1
    arg1[0x23] = i_2
else if (i_2 s> r9)
    arg1[0x23] = i_2

int64_t rbx_3 = arg1[0x1e] - *i_6 + rdx
int64_t rcx_5 = sx.q(data_143f0f208)
uint64_t result_1 = arg1[0x1f] - r10 - rbx_3

if (rcx_5.d s> 0)
    int64_t rdx_2 = arg1[0x1d]
    
    if (rdx_2 s> 0)
        int64_t r8_1 = rdx_2 - (sx.q(*(r15 + 0x1f4)) << 0x14)
        r10 = arg1[0x21]
        int64_t rdx_6 = rcx_5 * rdx_2 s/ 0x64
        uint64_t result_4 = arg1[0x1f]
        
        if (rdx_6 s>= r8_1)
            r8_1 = rdx_6
        
        uint64_t result_5 = r8_1 - r10 - ((sx.q(data_143f0f1fc) << 0xa) + rbx_3)
        
        if (result_5 s<= result_4)
            result_4 = result_5
        
        if (*(r15 + 0x1d4) != 0 || result_4 s> result_1)
            result_1 = result_4

int64_t rdx_7 = arg1[0x22]
uint64_t result

if (result_1 s>= rdx_7)
    result = result_1 - rdx_7
    
    if (result s> arg1[0x20] + r10)
        arg1[0x22] = result_1
        r11 = 1
else
    result = 0
    
    if (result_1 s>= 0)
        result = result_1
    
    arg1[0x22] = result

if (*(r15 + 0x1d8) != 0)
    void* i = *r13
    result = sx.q(r13[1].d)
    
    for (void* r8_4 = result * 0xd8 + i; i != r8_4; i += 0xd8)
        result = zx.q(arg1[0x1c].b)
        
        if (result.b != 0)
            break
        
        if (*(i + 0xa0) s> 0)
            int32_t rcx_13
            
            if (r11 == 0)
                result = zx.q(*(i + 0x88))
                rcx_13 = *(i + 0x8c) + *(i + 0x84)
                
                if (result.d s>= rcx_13)
                    rcx_13 = result.d
            
            if (r11 != 0 || rcx_13 s< *(i + 0x68))
                *(i + 0xa0) = 0

int64_t temp0 = arg1[0x22]
bool cond:2 = i_2 s>= temp0

if (i_2 s> temp0)
    result = zx.q(arg1[0x1c].b)
    
    if (result.b != 0)
        cond:2 = i_2 s>= arg1[0x22]
    else
        int32_t rax_15 = r13[1].d
        var_50.d = 0
        
        if (rax_15 != 0)
            sub_1405dadb0(&var_58, rax_15)
            rax_15 = r13[1].d
        
        int32_t i_1 = 0
        
        if (rax_15 s> 0)
            int64_t* rbx_4 = nullptr
            
            do
                char rax_16 = arg1[0x1c].b
                
                if (rax_16 != 0)
                    break
                
                int64_t rdx_9 = *r13
                
                if (*(rbx_4 + rdx_9) != 0
                        && (*(rbx_4 + rdx_9 + 0xb0) != rax_16 || *(rbx_4 + rdx_9 + 0xc) != 0x1d))
                    char rax_17 = (*(rbx_4 + rdx_9 + 0xb4)).b
                    
                    if ((rax_17 & 2) == 0 && (rax_17 & 0x90) != 0x90)
                        int32_t rcx_15 = *(rbx_4 + rdx_9 + 0xa4)
                        
                        if (*(rbx_4 + rdx_9 + 0x64) s>= rcx_15)
                            rcx_15 = *(rbx_4 + rdx_9 + 0x64)
                        
                        if (*(rbx_4 + rdx_9 + 0x94) s> rcx_15)
                            int64_t r14_2 = sx.q(var_50.d)
                            int32_t rax_19 = (r14_2 + 1).d
                            var_50.d = rax_19
                            
                            if (rax_19 s> var_50:4.d)
                                sub_1405a4cf0(&var_58)
                            
                            var_58[r14_2] = i_1
                
                i_1 += 1
                rbx_4 = &rbx_4[0x1b]
            while (i_1 s< r13[1].d)
        
        int32_t* rcx_17 = var_58
        int64_t* arg_18 = r13
        result = sub_14237bd60(rcx_17, var_50.d, i_5.b, &arg_18)
        void* r10_1 = r15
        int32_t r9_4
        
        if (*(r10_1 + 0x1d8) != 0)
            int64_t rcx_18 = sx.q(arg1[1].d)
            
            if (rcx_18.d s> 0)
                int64_t rcx_19 = 0
                result = *arg1 + 0x14
                
                do
                    if (*(arg1[0x15] + 0x1c4) f< *result)
                        goto label_14239b5d2
                    
                    rcx_19 += 1
                    result += 0x28
                while (rcx_19 s< rcx_18)
            
            r9_4 = 0
            i_5.d = 0
        
        if (*(r10_1 + 0x1d8) == 0 || *(r10_1 + 0x1cc) s<= 0)
        label_14239b5d2:
            int64_t temp1_1 = arg1[0x22]
            cond:2 = i_2 s>= temp1_1
            
            if (i_2 s> temp1_1)
                do
                    result = zx.q(arg1[0x1c].b)
                    
                    if (result.b != 0)
                        break
                    
                    int32_t rax_26 = var_50.d
                    uint64_t result_2 = 0x7fffffffffffffff
                    result = zx.q(rax_26 - 1)
                    i_5 = i_2
                    int64_t r15_1 = sx.q(result.d)
                    
                    if (rax_26 - 1 s< 0)
                        break
                    
                    while (i_2 s> arg1[0x22])
                        result = zx.q(arg1[0x1c].b)
                        
                        if (result.b != 0)
                            break
                        
                        int32_t* rdx_16 = var_58
                        result = sx.q(rdx_16[r15_1])
                        
                        if (result.d != 0xffffffff)
                            void* rbx_8 = result * 0xd8 + *r13
                            int32_t rcx_24 = *(rbx_8 + 0xa4)
                            
                            if (*(rbx_8 + 0x64) s>= rcx_24)
                                rcx_24 = *(rbx_8 + 0x64)
                            
                            if (*(rbx_8 + 0x94) s> rcx_24)
                                char r12_2 = *(rbx_8 + 0xb0)
                                
                                if (*(r10_1 + 0x1f1) == 0 || r12_2 == 0)
                                label_14239b69e:
                                    int32_t rax_28 = *(rbx_8 + 0x84)
                                    
                                    if (rax_28 s<= 0)
                                        result = sub_1423ae560(rbx_8)
                                        r10_1 = r15
                                        i_2 -= result
                                        
                                        if (*(r10_1 + 0x1f1) != 0 && r12_2 == 0 && result s> 0)
                                            if (result_2 s<= result)
                                                result = result_2
                                            
                                            result_2 = result
                                    else
                                        result = zx.q(rax_28 - 1)
                                        *(rbx_8 + 0x84) = result.d
                                else
                                    r10_1 = r15
                                    
                                    if (sub_1423b00e0(rbx_8) s>= result_2)
                                        goto label_14239b69e
                                    
                                    result = 0x7fffffffffffffff
                                    
                                    if (result_2 == 0x7fffffffffffffff)
                                        goto label_14239b69e
                            else
                                rdx_16[r15_1] = 0xffffffff
                        
                        int64_t temp5_1 = r15_1
                        r15_1 -= 1
                        
                        if (temp5_1 - 1 s< 0)
                            break
                    
                    if (i_5 == i_2)
                        break
                while (i_2 s> arg1[0x22])
                
                cond:2 = i_2 s>= arg1[0x22]
        else
            while (true)
                int64_t temp3_1 = arg1[0x22]
                cond:2 = i_2 s>= temp3_1
                
                if (i_2 s<= temp3_1)
                    break
                
                result = zx.q(arg1[0x1c].b)
                
                if (result.b != 0)
                    goto label_14239b5d2
                
                int32_t rax_23 = var_50.d
                uint64_t result_3 = 0x7fffffffffffffff
                result = zx.q(rax_23 - 1)
                int64_t* i_4 = i_2
                int64_t r12_1 = sx.q(result.d)
                
                if (rax_23 - 1 s< 0)
                    goto label_14239b5d2
                
                while (i_2 s> arg1[0x22])
                    result = zx.q(arg1[0x1c].b)
                    
                    if (result.b != 0)
                        break
                    
                    int32_t* rdx_13 = var_58
                    result = sx.q(rdx_13[r12_1])
                    
                    if (result.d != 0xffffffff)
                        void* rbx_6 = result * 0xd8 + *r13
                        int32_t rcx_20 = *(rbx_6 + 0xa4)
                        int32_t r8_6 = *(rbx_6 + 0x94)
                        
                        if (*(rbx_6 + 0x64) s>= rcx_20)
                            rcx_20 = *(rbx_6 + 0x64)
                        
                        if (r8_6 s> rcx_20)
                            int32_t rcx_21 = *(rbx_6 + 0xa0)
                            result = zx.q(*(rbx_6 + 0x68) - r9_4 + rcx_21)
                            
                            if (result.d s<= r8_6)
                                int32_t r14_4 = r9_4 - rcx_21
                                
                                if (*(r10_1 + 0x1f1) == 0)
                                label_14239b590:
                                    result = sub_1423ae4b0(rbx_6, r14_4 + 1)
                                    i_2 -= result
                                    r10_1 = r15
                                    r9_4 = i_5.d
                                else
                                    char r13_2 = *(rbx_6 + 0xb0)
                                    result = sub_1423b00a0(rbx_6, r14_4 + 1)
                                    
                                    if (result == 0)
                                        r10_1 = r15
                                        r9_4 = i_5.d
                                    else
                                        if (r13_2 == 0)
                                            if (result_3 s<= result)
                                                result = result_3
                                            
                                            result_3 = result
                                            goto label_14239b590
                                        
                                        if (result s>= result_3 || result_3 == 0x7fffffffffffffff)
                                            goto label_14239b590
                                        
                                        r9_4 = i_5.d
                                        r10_1 = r15
                        else
                            rdx_13[r12_1] = 0xffffffff
                    
                    int64_t temp6_1 = r12_1
                    r12_1 -= 1
                    r13 = arg_20
                    
                    if (temp6_1 - 1 s< 0)
                        break
                
                if (i_4 == i_2)
                    goto label_14239b5d2
                
                r9_4 += 1
                i_5.d = r9_4
                
                if (r9_4 s>= *(r10_1 + 0x1cc))
                    goto label_14239b5d2

if (not(cond:2))
    result = zx.q(arg1[0x1c].b)
    
    if (result.b == 0)
        int32_t rax_29 = r13[1].d
        var_50.d = 0
        
        if (var_50:4.d != rax_29)
            sub_1405dadb0(&var_58, rax_29)
            rax_29 = r13[1].d
        
        int32_t rbx_9 = 0
        void* r12_4 = arg1[0x22] - i_2
        
        if (rax_29 s> 0)
            int64_t r15_2 = 0
            
            while (arg1[0x1c].b == 0)
                int64_t* rdx_19 = *r13 + r15_2
                
                if (*rdx_19 != 0)
                    int64_t rax_31 = sx.q(*(rdx_19 + 0x94))
                    
                    if (rax_31.d s< *(rdx_19 + 0x5c) && sx.q(*(rdx_19 + (rax_31 << 2) + 0x1c)
                            - *(rdx_19 + (rax_31 << 2) + 0x18)) s<= r12_4)
                        int64_t r14_5 = sx.q(var_50.d)
                        int32_t rax_33 = (r14_5 + 1).d
                        var_50.d = rax_33
                        
                        if (rax_33 s> var_50:4.d)
                            sub_1405a4cf0(&var_58)
                        
                        var_58[r14_5] = rbx_9
                
                rbx_9 += 1
                r15_2 += 0xd8
                
                if (rbx_9 s>= r13[1].d)
                    break
        
        int32_t* rcx_31 = var_58
        int64_t* var_60 = r13
        result = sub_14237bd60(rcx_31, var_50.d, i_5.b, &var_60)
        r12_4.b = 1
        
        if (i_2 s< arg1[0x22])
            while (r12_4.b != 0)
                result = zx.q(arg1[0x1c].b)
                
                if (result.b != 0)
                    break
                
                r12_4.b = 0
                int32_t i_3 = 0
                
                if (var_50.d s> 0)
                    int32_t* rbx_10 = var_58
                    
                    do
                        if (i_2 s>= arg1[0x22])
                            goto label_14239b880
                        
                        result = zx.q(arg1[0x1c].b)
                        
                        if (result.b != 0)
                            break
                        
                        result = sx.q(*rbx_10)
                        
                        if (result.d != 0xffffffff)
                            void* r14_7 = result * 0xd8 + *r13
                            result = sub_1423b2840(r14_7)
                            
                            if (result s<= 0)
                                *rbx_10 = 0xffffffff
                            else
                                result += i_2
                                
                                if (result s> arg1[0x22])
                                    result = sub_1423ae560(r14_7)
                                    *rbx_10 = 0xffffffff
                                else
                                    i_2 = result
                                    r12_4.b = 1
                        
                        i_3 += 1
                        rbx_10 = &rbx_10[1]
                    while (i_3 s< var_50.d)
                
                if (i_2 s>= arg1[0x22])
                    break

label_14239b880:
int32_t* rcx_34 = var_58

if (rcx_34 == 0)
    return result

return sub_140a74f90(rcx_34)
