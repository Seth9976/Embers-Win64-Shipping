// 函数: sub_142617950
// 地址: 0x142617950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
int32_t* r15 = arg1
int32_t i = 0
int128_t zmm6 = 0x7f7fffff
int32_t r14 = 0
int32_t i_3 = 0
int32_t i_4
float var_1a0
int64_t var_188[0x8]

if (*r15 s> 0)
    void* r8_1 = nullptr
    void* var_1c0_1 = nullptr
    
    do
        void* rsi_1 = r8_1 + *(r15 + 8)
        
        if (*(rsi_1 + 0x326) != 0 && *(rsi_1 + 0x327) != 0)
            char rax_3 = *(rsi_1 + 0x325)
            
            if (rax_3 != 0 && rax_3 != 6)
                if (rax_3 == 3)
                    int64_t* rax_4 = *(rsi_1 + 0x48)
                    int32_t i_5 = 0
                    int64_t* rcx = *(rsi_1 + 0x270)
                    int32_t rbx_1 = *(rsi_1 + 0x50)
                    void* rax_5 = *(r15 + 0x2b18)
                    i_4 = 0
                    *(rax_5 + 8) = rcx
                    
                    if (rcx != 0)
                        (*(*rcx + 0x10))()
                    
                    sub_142611f70(*(r15 + 0x2b18), *rax_4, *(rsi_1 + 0x318), rsi_1 + 0x22c, 
                        rsi_1 + 0x30c, zmm6.d, &r15[0x1b8 + zx.q(*(rsi_1 + 0x2af)) * 0x88])
                    zmm6 = sub_142618420(*(r15 + 0x2b18), 0x14, nullptr)
                    void* r11_1 = *(r15 + 0x2b18)
                    int64_t var_148[0x6]
                    int32_t rax_10
                    int64_t* rbx_2
                    
                    if (*(rsi_1 + 0x324) == 0)
                        int32_t rdx_4 = *(r11_1 + 0x10)
                        
                        if ((rdx_4 u>> 0x1f).b == 0)
                            int64_t rax_13 = *(r11_1 + 0x28)
                            int64_t r8_4 = 0
                            int64_t rcx_6 = *(r11_1 + 0x30)
                            
                            if (rax_13 != rcx_6)
                                uint64_t j_3 = *(r11_1 + 0x18)
                                
                                if (*(j_3 + 0x18) != rcx_6)
                                    *(r11_1 + 0x10) = rdx_4 | 0x40
                                
                                uint64_t j_4 = nullptr
                                uint64_t j
                                
                                do
                                    int32_t r9_3 = *(j_3 + 0x14)
                                    int32_t rax_15 = r9_3 & 0x3fffffff
                                    
                                    if (rax_15 != 0)
                                        j = (zx.q(rax_15 - 1) << 5) + **(r11_1 + 0x68)
                                    else
                                        j = 0
                                    
                                    if (j_4 != 0)
                                        j_4 = zx.q(((j_4 - **(r11_1 + 0x68)) s>> 5).d + 1)
                                    
                                    int32_t rax_19 = r9_3 ^ j_4.d
                                    j_4 = j_3
                                    *(j_3 + 0x14) = (rax_19 & 0x3fffffff) ^ r9_3
                                    j_3 = j
                                while (j != 0)
                                int64_t* rax_25
                                uint64_t j_1
                                
                                do
                                    i_5 += 1
                                    var_148[r8_4] = *(j_4 + 0x18)
                                    r8_4 += 1
                                    
                                    if (r8_4 s>= 0x20)
                                        break
                                    
                                    int32_t rax_24 = *(j_4 + 0x14) & 0x3fffffff
                                    
                                    if (rax_24 == 0)
                                        break
                                    
                                    rax_25 = *(r11_1 + 0x68)
                                    j_1 = zx.q(rax_24 - 1) << 5
                                    j_4 = j_1 + *rax_25
                                while (j_1 != neg.q(*rax_25))
                            else
                                var_148[0] = rax_13
                                i_5 = 1
                            
                            memset(r11_1 + 0x10, 0, 0x50)
                            rax_10 = 0x40ffffff
                        else
                            memset(r11_1 + 0x10, 0, 0x50)
                            rax_10 = -0x80000000
                        
                        rbx_2 = rax_4
                    else
                        rbx_2 = rax_4
                        rax_10 = sub_142609b90(r11_1, rbx_2, rbx_1, &var_148, &i_4, 0x20)
                        i_5 = i_4
                    
                    int32_t zmm1_1
                    
                    if ((rax_10 u>> 0x1f).b != 0 || i_5 s<= 0)
                    label_142617c0d:
                        i_5 = 1
                        zmm1_1 = *(rsi_1 + 0x230)
                        var_1a0 = *(rsi_1 + 0x22c)
                        float var_198_1 = *(rsi_1 + 0x234)
                        int32_t var_19c_1 = zmm1_1
                        var_148[0] = *rbx_2
                    else
                        int64_t rdx_8 = var_148[sx.q(i_5 - 1)]
                        
                        if (rdx_8 == *(rsi_1 + 0x318))
                            zmm1_1 = *(rsi_1 + 0x310)
                            var_1a0 = *(rsi_1 + 0x30c)
                            float var_198_2 = *(rsi_1 + 0x314)
                            int32_t var_19c_2 = zmm1_1
                        else
                            int32_t rax_28
                            rax_28, zmm6 =
                                sub_1426049e0(*(r15 + 0x2b18), rdx_8, rsi_1 + 0x30c, &var_1a0)
                            
                            if ((rax_28 u>> 0x1f).b != 0)
                                goto label_142617c0d
                    sub_142634120(rsi_1, &var_1a0, &var_148, i_5)
                    sub_1426337c0(rsi_1 + 0x58)
                    r8_1 = var_1c0_1
                    i = i_3
                    
                    if (var_148[sx.q(i_5 - 1)] != *(rsi_1 + 0x318))
                        *(rsi_1 + 0x325) = 4
                    label_142617cc2:
                        int32_t rbx_3
                        
                        if (r14 != 0)
                            int32_t j_2 = *(rsi_1 + 0x308)
                            int64_t rdx_10 = sx.q(r14)
                            void var_190
                            
                            if (j_2 f> *(*(&var_190 + (rdx_10 << 3)) + 0x308))
                                rbx_3 = 0
                                int64_t rcx_16 = 0
                                
                                if (r14 s> 0)
                                    while (not(j_2 f>= *(var_188[rcx_16] + 0x308)))
                                        rbx_3 += 1
                                        rcx_16 += 1
                                        
                                        if (rcx_16 s>= rdx_10)
                                            break
                                
                                int32_t rcx_17 = 8 - (rbx_3 + 1)
                                int32_t rax_36 = r14 - rbx_3
                                
                                if (rax_36 s< rcx_17)
                                    rcx_17 = rax_36
                                
                                if (rcx_17 s> 0)
                                    memmove(&var_188[sx.q(rbx_3 + 1)], &var_188[sx.q(rbx_3)], 
                                        rcx_17 << 3)
                                
                                goto label_142617d54
                            
                            if (r14 s< 8)
                                rbx_3 = r14
                                goto label_142617d54
                        else
                            rbx_3 = 0
                        label_142617d54:
                            i = i_3
                            r8_1 = var_1c0_1
                            var_188[sx.q(rbx_3)] = rsi_1
                            int32_t rax_40 = r14 + 1
                            r14 = 8
                            
                            if (rax_40 s< 8)
                                r14 = rax_40
                    else
                        *(rsi_1 + 0x325) = 2
                        *(rsi_1 + 0x308) = 0
                else if (rax_3 == 4)
                    goto label_142617cc2
        
        i += 1
        r8_1 += 0x328
        i_3 = i
        var_1c0_1 = r8_1
    while (i s< *r15)

void* r13 = &r15[8]
void* var_1c0_2 = r13
int64_t var_1b0
int32_t var_1a8

if (r14 s> 0)
    int64_t i_1 = 0
    
    do
        void* rbx_4 = var_188[i_1]
        var_1b0 = *(rbx_4 + 0x270)
        void* rax_42 = *(rbx_4 + 0x278)
        var_1a8 = rax_42.d
        
        if (rax_42 != 0)
            *(rax_42 + 8) += 1
        
        int64_t rax_43 = sx.q(*(rbx_4 + 0x50))
        int64_t rdx_12
        
        if (rax_43.d == 0)
            rdx_12 = 0
        else
            rdx_12 = *(*(rbx_4 + 0x48) + (rax_43 << 3) - 8)
        
        int32_t rax_48 = sub_142633610(r13, rdx_12, *(rbx_4 + 0x318), rbx_4 + 0xc, rbx_4 + 0x30c, 
            zmm6.d, &r15[0x1b8 + zx.q(*(rbx_4 + 0x2af)) * 0x88], &var_1b0)
        *(rbx_4 + 0x320) = rax_48
        
        if (rax_48 != 0)
            *(rbx_4 + 0x325) = 5
        
        i_1 += 1
    while (i_1 s< sx.q(r14))

uint64_t result = sub_142635110(r13, 0x64)
int32_t i_2 = 0
i_4 = 0

if (*r15 s> 0)
    int64_t r12_2 = 0
    int64_t var_1c8_2 = 0
    
    do
        void* r15_2 = *(r15 + 8) + r12_2
        
        if (*(r15_2 + 0x326) != 0 && *(r15_2 + 0x325) == 5)
            int32_t rax_49 = sub_14262cba0(r13, *(r15_2 + 0x320))
            
            if ((rax_49 u>> 0x1f).b == 0)
                result = zx.q(rax_49 u>> 0x1e)
                
                if ((result.b & 1) != 0)
                    int32_t* rsi_3 = arg1
                    int32_t zmm1_2 = *(r15_2 + 0x310)
                    int32_t rdx_14 = *(r15_2 + 0x320)
                    uint64_t* r13_1 = *(rsi_3 + 0x6c8)
                    int32_t rax_50 = rsi_3[0x1b4]
                    int64_t rdi_1 = *(r15_2 + 0x48)
                    int64_t rbx_5 = sx.q(*(r15_2 + 0x50))
                    var_1a0 = *(r15_2 + 0x30c)
                    int32_t var_19c_3 = zmm1_2
                    float var_198_3 = *(r15_2 + 0x314)
                    char result_1 = 1
                    i_3 = 0
                    int32_t* var_1f8
                    var_1f8.d = rax_50
                    int32_t rax_51 = sub_14262c870(var_1c0_2, rdx_14, r13_1, &i_3, var_1f8.d)
                    int32_t i_6 = i_3
                    
                    if ((rax_51 u>> 0x1f).b != 0 || i_6 == 0
                        || *(rdi_1 + (rbx_5 << 3) - 8) != *r13_1)
                    label_142617f92:
                        result.b = 0
                    label_1426181c3:
                        
                        if (result.b != 0)
                            goto label_1426181d2
                        
                        result.b = 1
                    else
                        if (rbx_5.d s> 1)
                            int32_t rcx_28 = rsi_3[0x1b4]
                            
                            if (i_6 - 1 + rbx_5.d s> rcx_28)
                                i_6 = rcx_28 - rbx_5.d + 1
                                i_3 = i_6
                            
                            memmove(&r13_1[-1 + rbx_5], r13_1, i_6 << 3)
                            memcpy(r13_1, rdi_1, (rbx_5 - 1).d << 3)
                            i_6 = i_3 - 1 + rbx_5.d
                            int32_t rbx_6 = 0
                            i_3 = i_6
                            
                            if (i_6 s> 0)
                                int32_t rdi_2 = 1
                                int32_t r12_3 = -1
                                void* rsi_4 = &r13_1[1]
                                void* r14_1 = &r13_1[-1]
                                
                                do
                                    if (rbx_6 s> 0 && rdi_2 s< i_6 && *r14_1 == *rsi_4)
                                        memmove(&r13_1[sx.q(r12_3)], &r13_1[sx.q(rdi_2)], 
                                            (i_6 - rbx_6 - 1) << 3)
                                        rbx_6 -= 2
                                        i_6 = i_3 - 2
                                        r12_3 -= 2
                                        rdi_2 -= 2
                                        i_3 = i_6
                                        r14_1 -= 0x10
                                        rsi_4 -= 0x10
                                    
                                    rbx_6 += 1
                                    r12_3 += 1
                                    rdi_2 += 1
                                    r14_1 += 8
                                    rsi_4 += 8
                                while (rbx_6 s< i_6)
                                
                                i_2 = i_4
                                r12_2 = var_1c8_2
                                rsi_3 = arg1
                        
                        if (r13_1[sx.q(i_6 - 1)] == *(r15_2 + 0x318))
                            result = zx.q(result_1)
                            goto label_1426181c3
                        
                        int64_t* rcx_35 = *(r15_2 + 0x270)
                        *(*(rsi_3 + 0x2b18) + 8) = rcx_35
                        
                        if (rcx_35 != 0)
                            (*(*rcx_35 + 0x10))()
                        
                        i_6 = i_3
                        int64_t* rdi_3 = *(rsi_3 + 0x2b18)
                        int64_t r8_17 = r13_1[sx.q(i_6 - 1)]
                        
                        if (r8_17 == 0)
                            goto label_142617f92
                        
                        void* r11_2 = *rdi_3
                        char rbx_7 = (*(r11_2 + 0xa0)).b
                        char rsi_5 = (*(r11_2 + 0x9c)).b
                        int32_t rdx_21 = (r8_17 u>> rbx_7).d & ((1 << rsi_5).d - 1)
                        int32_t r10_3 = ((1 << rbx_7).d - 1) & r8_17.d
                        
                        if (rdx_21 u>= *(r11_2 + 0x30))
                            goto label_142617f92
                        
                        int32_t* rdx_23 = zx.q(rdx_21) * 0xb0 + *(r11_2 + 0x90)
                        
                        if (*rdx_23 != ((r8_17 u>> (rsi_5 + rbx_7)).d
                                & ((1 << (*(r11_2 + 0x98)).b).d - 1)))
                            goto label_142617f92
                        
                        result = *(rdx_23 + 8)
                        
                        if (result == 0 || r10_3 u>= *(result + 0x18) || rdx_23 == 0)
                            goto label_142617f92
                        
                        sub_1426054a0(rdi_3, rdx_23, (zx.q(r10_3) << 5) + *(rdx_23 + 0x10), 
                            &var_1a0, &var_1b0)
                        i_6 = i_3
                        var_1a0.q = var_1b0
                        int32_t var_198_4 = var_1a8
                    label_1426181d2:
                        sub_142634120(r15_2, &var_1a0, r13_1, i_6)
                        sub_1426337c0(r15_2 + 0x58)
                        result.b = 2
                    
                    r13 = var_1c0_2
                    *(r15_2 + 0x325) = result.b
                    *(r15_2 + 0x308) = 0
            else
                result = 3
                bool cond:0_1 = *(r15_2 + 0x318) == 0
                *(r15_2 + 0x320) = 0
                
                if (cond:0_1)
                    result = 1
                
                *(r15_2 + 0x325) = result.b
                *(r15_2 + 0x308) = 0
        
        r15 = arg1
        i_2 += 1
        r12_2 += 0x328
        i_4 = i_2
        var_1c8_2 = r12_2
    while (i_2 s< *r15)

__security_check_cookie(rax_1 ^ &var_218)
return result
