// 函数: sub_14209c860
// 地址: 0x14209c860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *arg1
int32_t rax = arg2 - 1
int32_t r9_1 = arg1[1].d - 1

if (arg2 s<= 0)
    rax = 0

float* r15_2 = sx.q(rax) * 0x50 + r8
int32_t rax_3 = arg2 + 1
int32_t* rbx_2 = sx.q(arg2) * 0x50 + r8

if (arg2 s>= r9_1)
    rax_3 = r9_1

float* r13_2 = sx.q(rax_3) * 0x50 + r8
float zmm1

if (rbx_2[0x13].b != 4 || arg2 == 0 || arg2 == r9_1)
    void* rax_31
    
    for (int32_t i = 0; i s< 6; i += 1)
        int32_t* r10_3
        
        if (i == 0)
            r10_3 = &rbx_2[1]
        else if (i == 1)
            r10_3 = &rbx_2[4]
        else if (i == 2)
            r10_3 = &rbx_2[2]
        else if (i == 3)
            r10_3 = &rbx_2[5]
        else if (i == 4)
            r10_3 = &rbx_2[3]
        else
            r10_3 = &rbx_2[6]
        
        void* rax_26
        
        if (i == 0)
            rax_26 = &r13_2[1]
        else if (i == 1)
            rax_26 = &r13_2[4]
        else if (i == 2)
            rax_26 = &r13_2[2]
        else if (i == 3)
            rax_26 = &r13_2[5]
        else if (i == 4)
            rax_26 = &r13_2[3]
        else
            rax_26 = &r13_2[6]
        
        void* rax_27
        void* r10_4
        
        if (not(*rax_26 f> *r10_3))
            if (i == 0)
                r10_4 = &rbx_2[1]
            else if (i == 1)
                r10_4 = &rbx_2[4]
            else if (i == 2)
                r10_4 = &rbx_2[2]
            else if (i == 3)
                r10_4 = &rbx_2[5]
            else if (i == 4)
                r10_4 = &rbx_2[3]
            else
                r10_4 = &rbx_2[6]
            
            if (i == 0)
                rax_27 = &r15_2[1]
            else if (i == 1)
                rax_27 = &r15_2[4]
            else if (i == 2)
                rax_27 = &r15_2[2]
            else if (i == 3)
                rax_27 = &r15_2[5]
            else if (i == 4)
                rax_27 = &r15_2[3]
            else
                rax_27 = &r15_2[6]
        
        void* rax_28
        void* rax_29
        int32_t* r10_5
        void* r10_6
        
        if (*rax_26 f> *r10_3 || not(*rax_27 f<= *r10_4))
            if (i == 0)
                r10_5 = &rbx_2[1]
            else if (i == 1)
                r10_5 = &rbx_2[4]
            else if (i == 2)
                r10_5 = &rbx_2[2]
            else if (i == 3)
                r10_5 = &rbx_2[5]
            else if (i == 4)
                r10_5 = &rbx_2[3]
            else
                r10_5 = &rbx_2[6]
            
            if (i == 0)
                rax_28 = &r13_2[1]
            else if (i == 1)
                rax_28 = &r13_2[4]
            else if (i == 2)
                rax_28 = &r13_2[2]
            else if (i == 3)
                rax_28 = &r13_2[5]
            else if (i == 4)
                rax_28 = &r13_2[3]
            else
                rax_28 = &r13_2[6]
            
            if (not(*rax_28 f< *r10_5))
                if (i == 0)
                    r10_6 = &rbx_2[1]
                else if (i == 1)
                    r10_6 = &rbx_2[4]
                else if (i == 2)
                    r10_6 = &rbx_2[2]
                else if (i == 3)
                    r10_6 = &rbx_2[5]
                else if (i == 4)
                    r10_6 = &rbx_2[3]
                else
                    r10_6 = &rbx_2[6]
                
                if (i == 0)
                    rax_29 = &r15_2[1]
                else if (i == 1)
                    rax_29 = &r15_2[4]
                else if (i == 2)
                    rax_29 = &r15_2[2]
                else if (i == 3)
                    rax_29 = &r15_2[5]
                else if (i == 4)
                    rax_29 = &r15_2[3]
                else
                    rax_29 = &r15_2[6]
        
        if ((*rax_26 f> *r10_3 || not(*rax_27 f<= *r10_4))
                && (*rax_28 f< *r10_5 || *rax_29 f< *r10_6))
            void* r10_7
            
            if (i == 0)
                r10_7 = &r13_2[1]
            else if (i == 1)
                r10_7 = &r13_2[4]
            else if (i == 2)
                r10_7 = &r13_2[2]
            else if (i == 3)
                r10_7 = &r13_2[5]
            else if (i == 4)
                r10_7 = &r13_2[3]
            else
                r10_7 = &r13_2[6]
            
            void* rax_32
            
            if (i == 0)
                rax_32 = &r15_2[1]
            else if (i == 1)
                rax_32 = &r15_2[4]
            else if (i == 2)
                rax_32 = &r15_2[2]
            else if (i == 3)
                rax_32 = &r15_2[5]
            else if (i == 4)
                rax_32 = &r15_2[3]
            else
                rax_32 = &r15_2[6]
            
            zmm1 = (*r10_7 f- *rax_32) / (*r13_2 - *r15_2)
            void* rax_33
            
            if (i == 0)
                rax_33 = &rbx_2[0xd]
            else if (i == 1)
                rax_33 = &rbx_2[0x10]
            else if (i == 2)
                rax_33 = &rbx_2[0xe]
            else if (i == 3)
                rax_33 = &rbx_2[0x11]
            else if (i == 4)
                rax_33 = &rbx_2[0xf]
            else
                rax_33 = &rbx_2[0x12]
            
            *rax_33 = zmm1
            
            if (i == 0)
                rax_31 = &rbx_2[7]
            else if (i == 1)
                rax_31 = &rbx_2[0xa]
            else if (i == 2)
                rax_31 = &rbx_2[8]
            else if (i == 3)
                rax_31 = &rbx_2[0xb]
            else if (i == 4)
                rax_31 = &rbx_2[9]
            else
                rax_31 = &rbx_2[0xc]
            
            *rax_31 = zmm1
        else
            void* rax_30
            
            if (i == 0)
                rax_30 = &rbx_2[0xd]
            else if (i == 1)
                rax_30 = &rbx_2[0x10]
            else if (i == 2)
                rax_30 = &rbx_2[0xe]
            else if (i == 3)
                rax_30 = &rbx_2[0x11]
            else if (i == 4)
                rax_30 = &rbx_2[0xf]
            else
                rax_30 = &rbx_2[0x12]
            
            *rax_30 = 0
            
            if (i == 0)
                rax_31 = &rbx_2[7]
                *rax_31 = 0
            else if (i == 1)
                rax_31 = &rbx_2[0xa]
                *rax_31 = 0
            else if (i == 2)
                rax_31 = &rbx_2[8]
                *rax_31 = 0
            else if (i == 3)
                rax_31 = &rbx_2[0xb]
                *rax_31 = 0
            else if (i == 4)
                rax_31 = &rbx_2[9]
                *rax_31 = 0
            else
                rax_31 = &rbx_2[0xc]
                *rax_31 = 0
    
    return rax_31

int64_t r8_1 = sx.q(arg1[4].d)
zmm1 = *rbx_2
void* r14_1
float zmm0

if (r8_1.d s>= 8)
    int32_t r10_2 = 0
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r8_1.d)
    int32_t r9_2 = (temp3_1 - temp2_1) s>> 1
    
    if (r8_1.d s<= 0)
    label_14209c9c8:
        r14_1 = nullptr
    else
        int64_t r11_1 = arg1[3]
        
        while (true)
            int64_t rdx_2 = sx.q(r9_2) * 9
            float zmm2 = *(r11_1 + (rdx_2 << 2))
            r14_1 = r11_1 + (rdx_2 << 2)
            zmm0 = zmm2 - zmm1
            
            if (not(zmm0 <= -0.00100000005f) && zmm0 < 0.00100000005f)
                break
            
            zmm2 - zmm1
            int32_t rax_11 = r9_2
            
            if (zmm2 <= zmm1)
                rax_11 = r8_1.d
            
            r8_1 = zx.q(rax_11)
            
            if (zmm2 <= zmm1)
                r10_2 = r9_2 + 1
            
            int32_t temp14_1
            int32_t temp15_1
            temp14_1:temp15_1 = sx.q(r10_2 + r8_1.d)
            r9_2 = (temp15_1 - temp14_1) s>> 1
            
            if (r10_2 s>= r8_1.d)
                goto label_14209c9c8_1
else
    int32_t rdx = 0
    
    if (r8_1.d s<= 0)
    label_14209c9c8_1:
        r14_1 = nullptr
    else
        int32_t* r10_1 = arg1[3]
        int64_t rax_5 = 0
        int32_t* rcx = r10_1
        
        while (true)
            zmm0 = *rcx - zmm1
            
            if (not(zmm0 <= -0.00100000005f) && zmm0 < 0.00100000005f)
                r14_1 = &r10_1[sx.q(rdx) * 9]
                break
            
            rdx += 1
            rax_5 += 1
            rcx = &rcx[9]
            
            if (rax_5 s>= r8_1)
                goto label_14209c9c8_1
int32_t i_1 = 0
int64_t rbp = 0
float* rax_22

do
    if (*(r14_1 + rbp + 0x1d) == 0)
        void* rbx_3
        
        if (i_1 == 0)
            rbx_3 = &rbx_2[1]
        else if (i_1 == 1)
            rbx_3 = &rbx_2[4]
        else if (i_1 == 2)
            rbx_3 = &rbx_2[2]
        else if (i_1 == 3)
            rbx_3 = &rbx_2[5]
        else if (i_1 == 4)
            rbx_3 = &rbx_2[3]
        else
            rbx_3 = &rbx_2[6]
        
        void* r11_7
        
        if (i_1 == 0)
            r11_7 = &r15_2[1]
        else if (i_1 == 1)
            r11_7 = &r15_2[4]
        else if (i_1 == 2)
            r11_7 = &r15_2[2]
        else if (i_1 == 3)
            r11_7 = &r15_2[5]
        else if (i_1 == 4)
            r11_7 = &r15_2[3]
        else
            r11_7 = &r15_2[6]
        
        void* rax_25
        
        if (i_1 == 0)
            rax_25 = &rbx_2[7]
        else if (i_1 == 1)
            rax_25 = &rbx_2[0xa]
        else if (i_1 == 2)
            rax_25 = &rbx_2[8]
        else if (i_1 == 3)
            rax_25 = &rbx_2[0xb]
        else if (i_1 == 4)
            rax_25 = &rbx_2[9]
        else
            rax_25 = &rbx_2[0xc]
        
        *rax_25 = *rbx_3 f- *r11_7
        void* rbx_4
        
        if (i_1 == 0)
            rbx_4 = &r13_2[1]
        else if (i_1 == 1)
            rbx_4 = &r13_2[4]
        else if (i_1 == 2)
            rbx_4 = &r13_2[2]
        else if (i_1 == 3)
            rbx_4 = &r13_2[5]
        else if (i_1 == 4)
            rbx_4 = &r13_2[3]
        else
            rbx_4 = &r13_2[6]
        
        void* r11_8
        
        if (i_1 == 0)
            r11_8 = &rbx_2[1]
        else if (i_1 == 1)
            r11_8 = &rbx_2[4]
        else if (i_1 == 2)
            r11_8 = &rbx_2[2]
        else if (i_1 == 3)
            r11_8 = &rbx_2[5]
        else if (i_1 == 4)
            r11_8 = &rbx_2[3]
        else
            r11_8 = &rbx_2[6]
        
        if (i_1 == 0)
            rax_22 = &rbx_2[0xd]
        else if (i_1 == 1)
            rax_22 = &rbx_2[0x10]
        else if (i_1 == 2)
            rax_22 = &rbx_2[0xe]
        else if (i_1 == 3)
            rax_22 = &rbx_2[0x11]
        else if (i_1 == 4)
            rax_22 = &rbx_2[0xf]
        else
            rax_22 = &rbx_2[0x12]
        
        *rax_22 = *rbx_4 f- *r11_8
    else
        void* r11_2
        
        if (i_1 == 0)
            r11_2 = &rbx_2[1]
        else if (i_1 == 1)
            r11_2 = &rbx_2[4]
        else if (i_1 == 2)
            r11_2 = &rbx_2[2]
        else if (i_1 == 3)
            r11_2 = &rbx_2[5]
        else if (i_1 == 4)
            r11_2 = &rbx_2[3]
        else
            r11_2 = &rbx_2[6]
        
        float* rax_17
        
        if (i_1 == 0)
            rax_17 = &r13_2[1]
        else if (i_1 == 1)
            rax_17 = &r13_2[4]
        else if (i_1 == 2)
            rax_17 = &r13_2[2]
        else if (i_1 == 3)
            rax_17 = &r13_2[5]
        else if (i_1 == 4)
            rax_17 = &r13_2[3]
        else
            rax_17 = &r13_2[6]
        
        float* rax_18
        void* r11_3
        
        if (not(*rax_17 f> *r11_2))
            if (i_1 == 0)
                r11_3 = &rbx_2[1]
            else if (i_1 == 1)
                r11_3 = &rbx_2[4]
            else if (i_1 == 2)
                r11_3 = &rbx_2[2]
            else if (i_1 == 3)
                r11_3 = &rbx_2[5]
            else if (i_1 == 4)
                r11_3 = &rbx_2[3]
            else
                r11_3 = &rbx_2[6]
            
            if (i_1 == 0)
                rax_18 = &r15_2[1]
            else if (i_1 == 1)
                rax_18 = &r15_2[4]
            else if (i_1 == 2)
                rax_18 = &r15_2[2]
            else if (i_1 == 3)
                rax_18 = &r15_2[5]
            else if (i_1 == 4)
                rax_18 = &r15_2[3]
            else
                rax_18 = &r15_2[6]
        
        void* rax_19
        void* rax_20
        void* r11_4
        void* r11_5
        
        if (*rax_17 f> *r11_2 || not(*rax_18 f<= *r11_3))
            if (i_1 == 0)
                r11_4 = &rbx_2[1]
            else if (i_1 == 1)
                r11_4 = &rbx_2[4]
            else if (i_1 == 2)
                r11_4 = &rbx_2[2]
            else if (i_1 == 3)
                r11_4 = &rbx_2[5]
            else if (i_1 == 4)
                r11_4 = &rbx_2[3]
            else
                r11_4 = &rbx_2[6]
            
            if (i_1 == 0)
                rax_19 = &r13_2[1]
            else if (i_1 == 1)
                rax_19 = &r13_2[4]
            else if (i_1 == 2)
                rax_19 = &r13_2[2]
            else if (i_1 == 3)
                rax_19 = &r13_2[5]
            else if (i_1 == 4)
                rax_19 = &r13_2[3]
            else
                rax_19 = &r13_2[6]
            
            if (not(*rax_19 f< *r11_4))
                if (i_1 == 0)
                    r11_5 = &rbx_2[1]
                else if (i_1 == 1)
                    r11_5 = &rbx_2[4]
                else if (i_1 == 2)
                    r11_5 = &rbx_2[2]
                else if (i_1 == 3)
                    r11_5 = &rbx_2[5]
                else if (i_1 == 4)
                    r11_5 = &rbx_2[3]
                else
                    r11_5 = &rbx_2[6]
                
                if (i_1 == 0)
                    rax_20 = &r15_2[1]
                else if (i_1 == 1)
                    rax_20 = &r15_2[4]
                else if (i_1 == 2)
                    rax_20 = &r15_2[2]
                else if (i_1 == 3)
                    rax_20 = &r15_2[5]
                else if (i_1 == 4)
                    rax_20 = &r15_2[3]
                else
                    rax_20 = &r15_2[6]
        
        if ((*rax_17 f> *r11_2 || not(*rax_18 f<= *r11_3))
                && (*rax_19 f< *r11_4 || *rax_20 f< *r11_5))
            void* r11_6
            
            if (i_1 == 0)
                r11_6 = &r13_2[1]
            else if (i_1 == 1)
                r11_6 = &r13_2[4]
            else if (i_1 == 2)
                r11_6 = &r13_2[2]
            else if (i_1 == 3)
                r11_6 = &r13_2[5]
            else if (i_1 == 4)
                r11_6 = &r13_2[3]
            else
                r11_6 = &r13_2[6]
            
            void* rax_23
            
            if (i_1 == 0)
                rax_23 = &r15_2[1]
            else if (i_1 == 1)
                rax_23 = &r15_2[4]
            else if (i_1 == 2)
                rax_23 = &r15_2[2]
            else if (i_1 == 3)
                rax_23 = &r15_2[5]
            else if (i_1 == 4)
                rax_23 = &r15_2[3]
            else
                rax_23 = &r15_2[6]
            
            zmm1 = (*r11_6 f- *rax_23) / (*r13_2 - *r15_2)
            void* rax_24
            
            if (i_1 == 0)
                rax_24 = &rbx_2[0xd]
            else if (i_1 == 1)
                rax_24 = &rbx_2[0x10]
            else if (i_1 == 2)
                rax_24 = &rbx_2[0xe]
            else if (i_1 == 3)
                rax_24 = &rbx_2[0x11]
            else if (i_1 == 4)
                rax_24 = &rbx_2[0xf]
            else
                rax_24 = &rbx_2[0x12]
            
            *rax_24 = zmm1
            
            if (i_1 == 0)
                rax_22 = &rbx_2[7]
                *rax_22 = zmm1
            else if (i_1 == 1)
                rax_22 = &rbx_2[0xa]
                *rax_22 = zmm1
            else if (i_1 == 2)
                rax_22 = &rbx_2[8]
                *rax_22 = zmm1
            else if (i_1 == 3)
                rax_22 = &rbx_2[0xb]
                *rax_22 = zmm1
            else if (i_1 == 4)
                rax_22 = &rbx_2[9]
                *rax_22 = zmm1
            else
                rax_22 = &rbx_2[0xc]
                *rax_22 = zmm1
        else
            int32_t* rax_21
            
            if (i_1 == 0)
                rax_21 = &rbx_2[0xd]
            else if (i_1 == 1)
                rax_21 = &rbx_2[0x10]
            else if (i_1 == 2)
                rax_21 = &rbx_2[0xe]
            else if (i_1 == 3)
                rax_21 = &rbx_2[0x11]
            else if (i_1 == 4)
                rax_21 = &rbx_2[0xf]
            else
                rax_21 = &rbx_2[0x12]
            
            *rax_21 = 0
            
            if (i_1 == 0)
                rax_22 = &rbx_2[7]
                *rax_22 = 0f
            else if (i_1 == 1)
                rax_22 = &rbx_2[0xa]
                *rax_22 = 0f
            else if (i_1 == 2)
                rax_22 = &rbx_2[8]
                *rax_22 = 0f
            else if (i_1 == 3)
                rax_22 = &rbx_2[0xb]
                *rax_22 = 0f
            else if (i_1 == 4)
                rax_22 = &rbx_2[9]
                *rax_22 = 0f
            else
                rax_22 = &rbx_2[0xc]
                *rax_22 = 0f
    
    i_1 += 1
    rbp += 1
while (i_1 s< 6)

return rax_22
