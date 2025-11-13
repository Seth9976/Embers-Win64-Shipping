// 函数: sub_141a4f560
// 地址: 0x141a4f560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = sx.q(arg2)
int64_t r13 = r12
int128_t* r12_1 = arg1
int64_t* rbx = arg3
int128_t var_48

while (true)
    int64_t temp0_1 = r13
    r13 -= 1
    
    if (temp0_1 - 1 s< 0)
        break
    
    int128_t var_58 = *r12_1
    char* r8_1 = r13 * 0x58 + *rbx
    char r10_1 = *r8_1
    int64_t rcx_1
    int64_t rdx
    
    if (r10_1 == 2)
    label_141a4f604:
        int64_t rdx_1 = var_58.q
        int64_t rax_2 = var_58:8.q
        uint32_t rcx_3
        uint32_t r9_1
        
        if (rdx_1.b != 2 && rax_2.b != 2)
            rcx_3 = (rdx_1 u>> 0x20).d
            r9_1 = (rax_2 u>> 0x20).d
        
        if (rdx_1.b != 2 && rax_2.b != 2
                && (rcx_3 s> r9_1 || (rcx_3 == r9_1 && (rdx_1.b == 0 || rax_2.b == 0))))
            int32_t var_7c_1 = 0
            rcx_1 = 0.q
            int32_t var_84_1 = 0
            rdx = 0.q
        else
            char r11_1 = r8_1[8]
            void* rcx_4 = &r8_1[8]
            
            if (r11_1 == 2)
                rcx_4 = &var_58:8
            else if (rax_2.b != 2)
                uint32_t rax_3 = (rax_2 u>> 0x20).d
                int32_t temp2_1 = *(rcx_4 + 4)
                
                if (temp2_1 s>= rax_3)
                    if (temp2_1 s<= rax_3)
                        void* rax_4 = &var_58:8
                        
                        if (r11_1 == 0)
                            rax_4 = rcx_4
                        
                        rcx_4 = rax_4
                    else
                        rcx_4 = &var_58:8
            
            char* rdx_2
            
            if (r10_1 == 2)
                rdx_2 = &var_58
            else if (rdx_1.b != 2)
                uint32_t rdx_3 = (rdx_1 u>> 0x20).d
                int32_t temp3_1 = *(r8_1 + 4)
                
                if (temp3_1 s<= rdx_3)
                    rdx_2 = &var_58
                    
                    if (temp3_1 s>= rdx_3 && r10_1 == 0)
                        rdx_2 = r8_1
                else
                    rdx_2 = r8_1
            else
                rdx_2 = r8_1
            
            rdx = *rdx_2
            rcx_1 = *rcx_4
    else
        char rax_1 = r8_1[8]
        
        if (rax_1 == 2)
            goto label_141a4f604
        
        int32_t rcx = *(r8_1 + 4)
        int32_t temp1_1 = *(r8_1 + 0xc)
        
        if (rcx s<= temp1_1 && (rcx != temp1_1 || (r10_1 != 0 && rax_1 != 0)))
            goto label_141a4f604
        
        int32_t var_8c_1 = 0
        rcx_1 = 0.q
        int32_t var_94_1 = 0
        rdx = 0.q
    
    int64_t var_68 = rdx
    int64_t var_60 = rcx_1
    
    if (rdx.b != 2 && rcx_1.b != 2)
        uint32_t rax_6 = (rdx u>> 0x20).d
        uint32_t r9_3 = (rcx_1 u>> 0x20).d
        
        if (rax_6 s> r9_3)
            break
        
        if (rax_6 == r9_3)
            if (rdx.b == 0)
                break
            
            if (rcx_1.b == 0)
                break
    
    void* rax_7 = *(r8_1 + 0x48)
    void* rbx_1 = &r8_1[0x18]
    
    if (rax_7 != 0)
        rbx_1 = rax_7
    
    void* r15_1 = rbx_1 + sx.q(*(r8_1 + 0x50)) * 0xc
    
    if (rbx_1 != r15_1)
        int32_t rdi_1 = var_60:4.d
        int32_t rsi_1 = var_68:4.d
        
        do
            *(arg4 + 0x34)
            int32_t* r8_8
            
            if (arg4[1].d == *(arg4 + 0x34))
            label_141a4f78f:
                r8_8 = nullptr
            else
                void* r9_4 = arg4[8]
                void* r10_2 = &arg4[7]
                int64_t r11_2 = sx.q(*rbx_1)
                
                if (r9_4 != 0)
                    r10_2 = r9_4
                
                int32_t rax_11 = *(r10_2 + (((sx.q(arg4[9].d) - 1) & r11_2) << 2))
                
                if (rax_11 == 0xffffffff)
                label_141a4f78f_1:
                    r8_8 = nullptr
                else
                    while (true)
                        r8_8 = sx.q(rax_11) * 0x1c + *arg4
                        
                        if (*r8_8 == r11_2.d)
                            break
                        
                        rax_11 = r8_8[5]
                        
                        if (rax_11 == 0xffffffff)
                            goto label_141a4f78f_2
                    
                    if (rax_11 == 0xffffffff)
                    label_141a4f78f_2:
                        r8_8 = nullptr
            
            void* r9_5 = &r8_8[1]
            
            if (r8_8 == 0)
                r9_5 = nullptr
            
            if (r9_5 != 0)
                char rax_12 = *r9_5
                int128_t zmm0
                
                if (rax_12 == 2)
                label_141a4f7f9:
                    
                    if (rdx.b == 2 || rcx_1.b == 2 ||
                            (rsi_1 s<= rdi_1 && (rsi_1 != rdi_1 || (rdx.b != 0 && rcx_1.b != 0))))
                        char r10_5 = *(r9_5 + 8)
                        void* r8_10 = r9_5 + 8
                        
                        if (r10_5 != 2)
                            if (rcx_1.b != 2)
                                int32_t temp7_1 = *(r8_10 + 4)
                                
                                if (temp7_1 s<= rdi_1)
                                    if (temp7_1 s>= rdi_1)
                                        void* rax_13 = &var_60
                                        
                                        if (r10_5 == 1)
                                            rax_13 = r8_10
                                        
                                        r8_10 = rax_13
                                    else
                                        r8_10 = &var_60
                            else
                                r8_10 = &var_60
                        
                        char r10_6 = *r9_5
                        void* rax_14
                        
                        if (r10_6 == 2)
                            rax_14 = r9_5
                        else if (rdx.b != 2)
                            int32_t temp8_1 = *(r9_5 + 4)
                            
                            if (temp8_1 s>= rsi_1)
                                rax_14 = &var_68
                                
                                if (temp8_1 s<= rsi_1 && r10_6 == 1)
                                    rax_14 = r9_5
                            else
                                rax_14 = r9_5
                        else
                            rax_14 = &var_68
                        
                        var_48.q = *rax_14
                        var_48:8.q = *r8_10
                        zmm0 = var_48
                    else
                        zmm0 = *r9_5
                        var_48 = zmm0
                else
                    char r11_3 = *(r9_5 + 8)
                    
                    if (r11_3 == 2)
                        goto label_141a4f7f9
                    
                    int32_t r10_4 = *(r9_5 + 0xc)
                    int32_t temp6_1 = *(r9_5 + 4)
                    
                    if (temp6_1 s<= r10_4 && (temp6_1 != r10_4 || (rax_12 != 0 && r11_3 != 0)))
                        goto label_141a4f7f9
                    
                    zmm0 = var_68.o
                    var_48 = zmm0
                
                *r9_5 = zmm0
            else
                sub_140f1bdc0(arg4, rbx_1, &var_68)
                rcx_1 = var_60
                rdx = var_68
                rdi_1 = var_60:4.d
                rsi_1 = var_68:4.d
            
            rbx_1 += 0xc
        while (rbx_1 != r15_1)
        
        r12_1 = arg1
    
    rbx = arg3

var_48 = *r12_1
int64_t rdi_2 = *rbx
char i = sub_141a56570(r12 * 0x58 + rdi_2, &var_48, arg4)
int32_t rbx_2 = rbx[1].d
int32_t r12_2 = arg2

do
    r12_2 += 1
    
    if (r12_2 s>= rbx_2)
        break
    
    var_48 = *arg1
    i = sub_141a56570(sx.q(r12_2) * 0x58 + rdi_2, &var_48, arg4)
while (i != 0)

return i
