// 函数: sub_141a56570
// 地址: 0x141a56570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r9 = *arg1
int64_t rcx
int64_t rdx
int32_t arg_c
int32_t arg_24

if (r9 == 2)
label_141a565cc:
    char r10_2 = *arg2
    
    if (r10_2 == 2)
    label_141a5660b:
        char rdi_1 = arg1[8]
        void* rcx_2 = &arg2[8]
        
        if (rdi_1 != 2)
            if (*rcx_2 != 2)
                int32_t r11_1 = *(arg1 + 0xc)
                int32_t temp2_1 = *(rcx_2 + 4)
                
                if (r11_1 s< temp2_1)
                    rcx_2 = &arg1[8]
                else if (r11_1 s<= temp2_1 && rdi_1 == 0)
                    rcx_2 = &arg1[8]
            else
                rcx_2 = &arg1[8]
        
        if (r9 != 2)
            if (r10_2 != 2)
                int32_t r10_3 = *(arg2 + 4)
                int32_t temp3_1 = *(arg1 + 4)
                
                if (temp3_1 s> r10_3)
                    arg2 = arg1
                else if (temp3_1 s>= r10_3 && r9 == 0)
                    arg2 = arg1
            else
                arg2 = arg1
        
        rdx = *arg2
        rcx = *rcx_2
    else
        char rax_2 = arg2[8]
        
        if (rax_2 == 2)
            goto label_141a5660b
        
        int32_t rcx_1 = *(arg2 + 4)
        int32_t temp1_1 = *(arg2 + 0xc)
        
        if (rcx_1 s> temp1_1)
            goto label_141a565b3
        
        if (rcx_1 != temp1_1)
            goto label_141a5660b
        
        if (r10_2 == 0)
            goto label_141a565b3
        
        if (rax_2 != 0)
            goto label_141a5660b
        
        arg_24 = 0
        rcx = 0.q
        arg_c = 0
        rdx = 0.q
else
    char rax_1 = arg1[8]
    
    if (rax_1 == 2)
        goto label_141a565cc
    
    int32_t r10_1 = *(arg1 + 0xc)
    int32_t temp0_1 = *(arg1 + 4)
    
    if (temp0_1 s<= r10_1 && (temp0_1 != r10_1 || (r9 != 0 && rax_1 != 0)))
        goto label_141a565cc
    
label_141a565b3:
    arg_24 = 0
    rcx = 0.q
    arg_c = 0
    rdx = 0.q
int64_t var_48 = rdx
int64_t var_40 = rcx

if (rdx.b != 2 && rcx.b != 2)
    uint32_t rax_5 = (rdx u>> 0x20).d
    uint32_t r9_2 = (rcx u>> 0x20).d
    
    if (rax_5 s> r9_2)
        rax_5.b = 0
        return rax_5
    
    if (rax_5 == r9_2 && (rdx.b == 0 || rcx.b == 0))
        rax_5.b = 0
        return rax_5

void* rax_6 = *(arg1 + 0x48)
void* rbx = &arg1[0x18]

if (rax_6 != 0)
    rbx = rax_6

void* r15 = rbx + sx.q(*(arg1 + 0x50)) * 0xc
int64_t rax_7

if (rbx != r15)
    int32_t rdi_2 = var_40:4.d
    int32_t rsi_1 = var_48:4.d
    
    do
        *(arg3 + 0x34)
        int32_t* r8_7
        
        if (arg3[1].d == *(arg3 + 0x34))
        label_141a5673f:
            r8_7 = nullptr
        else
            void* r9_3 = arg3[8]
            void* r10_4 = &arg3[7]
            int64_t r11_2 = sx.q(*rbx)
            
            if (r9_3 != 0)
                r10_4 = r9_3
            
            int32_t rax_10 = *(r10_4 + (((sx.q(arg3[9].d) - 1) & r11_2) << 2))
            
            if (rax_10 == 0xffffffff)
            label_141a5673f_1:
                r8_7 = nullptr
            else
                while (true)
                    r8_7 = sx.q(rax_10) * 0x1c + *arg3
                    
                    if (*r8_7 == r11_2.d)
                        break
                    
                    rax_10 = r8_7[5]
                    
                    if (rax_10 == 0xffffffff)
                        goto label_141a5673f_2
                
                if (rax_10 == 0xffffffff)
                label_141a5673f_2:
                    r8_7 = nullptr
        
        void* r9_4 = &r8_7[1]
        
        if (r8_7 == 0)
            r9_4 = nullptr
        
        if (r9_4 != 0)
            rax_7 = zx.q(*r9_4)
            int128_t zmm0
            int128_t var_38
            
            if (rax_7.b == 2)
            label_141a567a9:
                
                if (rdx.b == 2 || rcx.b == 2
                        || (rsi_1 s<= rdi_2 && (rsi_1 != rdi_2 || (rdx.b != 0 && rcx.b != 0))))
                    char r10_7 = *(r9_4 + 8)
                    void* r8_10 = r9_4 + 8
                    
                    if (r10_7 != 2)
                        if (rcx.b != 2)
                            int32_t temp7_1 = *(r8_10 + 4)
                            
                            if (temp7_1 s<= rdi_2)
                                if (temp7_1 s>= rdi_2)
                                    void* rax_11 = &var_40
                                    
                                    if (r10_7 == 1)
                                        rax_11 = r8_10
                                    
                                    r8_10 = rax_11
                                else
                                    r8_10 = &var_40
                        else
                            r8_10 = &var_40
                    
                    char r10_8 = *r9_4
                    void* rax_12
                    
                    if (r10_8 == 2)
                        rax_12 = r9_4
                    else if (rdx.b != 2)
                        int32_t temp8_1 = *(r9_4 + 4)
                        
                        if (temp8_1 s>= rsi_1)
                            rax_12 = &var_48
                            
                            if (temp8_1 s<= rsi_1 && r10_8 == 1)
                                rax_12 = r9_4
                        else
                            rax_12 = r9_4
                    else
                        rax_12 = &var_48
                    
                    var_38.q = *rax_12
                    var_38:8.q = *r8_10
                    zmm0 = var_38
                else
                    zmm0 = *r9_4
                    var_38 = zmm0
            else
                char r8_9 = *(r9_4 + 8)
                
                if (r8_9 == 2)
                    goto label_141a567a9
                
                int32_t r10_6 = *(r9_4 + 4)
                int32_t temp6_1 = *(r9_4 + 0xc)
                
                if (r10_6 s<= temp6_1 && (r10_6 != temp6_1 || (rax_7.b != 0 && r8_9 != 0)))
                    goto label_141a567a9
                
                zmm0 = var_48.o
                var_38 = zmm0
            *r9_4 = zmm0
        else
            sub_140f1bdc0(arg3, rbx, &var_48)
            rcx = var_40
            rdx = var_48
            rdi_2 = var_40:4.d
            rsi_1 = var_48:4.d
        
        rbx += 0xc
    while (rbx != r15)

rax_7.b = 1
return rax_7
