// 函数: sub_141e201b0
// 地址: 0x141e201b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r11 = *(arg1 + 0x28)
int32_t i = 0
void* rsi = arg1
int32_t r10 = *(r11 + 0x18)

if (r10 s<= 0)
label_141e20206:
    i = -1
else
    while (sx.q(i) * 0x58 + *(r11 + 0x10) != arg3)
        i += 1
        
        if (i s>= r10)
            goto label_141e20206

int32_t* rbp = arg5
int32_t* rcx_2 = rbp
int128_t zmm6
int128_t var_48 = zmm6
int32_t* rax_2 = *(rbp + 0x10)
int64_t rdx = sx.q(rbp[6])

if (rax_2 != 0)
    rcx_2 = rax_2

void* result = &rcx_2[rdx]

if (rcx_2 == result)
label_141e20254:
    int32_t rax_3 = (rdx + 1).d
    rbp[6] = rax_3
    
    if (rax_3 s> rbp[7])
        sub_140dbc4b0(rbp, rdx.d)
    
    int32_t* rax_4 = *(rbp + 0x10)
    int32_t* rcx_4 = rbp
    
    if (rax_4 != 0)
        rcx_4 = rax_4
    
    rcx_4[rdx] = i
    void* rcx_5 = *arg2
    int64_t* rax_5
    
    if (rcx_5 == 0)
        rax_5 = nullptr
    else
        rax_5 = *(rcx_5 + 0xa8)
    
    void* rax_6 = sub_141df1e10(*(rcx_5 + 0xa0), rax_5, *(arg3 + 0x2c))
    
    if (rax_6 != 0)
        if (*(rax_6 + 0x20) == 0)
            sub_141e1eab0(sub_141e23160(rax_6), arg2)
        else
            int64_t* rcx_7 = *(rax_6 + 0x18)
            
            if (rcx_7 == 0)
                sub_141e1eab0(sub_141e23160(rax_6), arg2)
            else
                int64_t rdx_2 = *rcx_7
                
                if ((*(rdx_2 + 0x28))(rcx_7, rdx_2) == 0)
                    sub_141e1eab0(sub_141e23160(rax_6), arg2)
                else if (*(rax_6 + 0x20) == 0)
                    *(rax_6 + 0x10) = (*(*nullptr + 0x48))(0).b
                else
                    int64_t* rcx_8 = *(rax_6 + 0x18)
                    *(rax_6 + 0x10) = (*(*rcx_8 + 0x48))(rcx_8).b
    
    if (rax_6 != 0 && *(rax_6 + 0x10) == 0)
    label_141e204a4:
        result.b = 0
    else
        result = sx.q(*(arg3 + 0x10))
        void* result_1 = result
        
        if (result s<= 0)
        label_141e204a4_1:
            result.b = 0
        else
            int64_t r14_1 = 0
            int32_t* r15_1 = nullptr
            
            while (true)
                result = *(arg3 + 8)
                int32_t r8_1 = *(r15_1 + result)
                void* rdi_1 = r15_1 + result
                
                if (r8_1 != 0xffffffff)
                    void* rax_12 = sub_141df1e10(*(*arg2 + 0xa0), rax_5, r8_1)
                    
                    if (*(rax_12 + 0x20) == 0)
                    label_141e2038f:
                        
                        if (*(rdi_1 + 0xd) == 0)
                            sub_141e1eab0(sub_141e23160(rax_12), arg2)
                        else
                            rbp.b = 0
                            int64_t* rax_18
                            int128_t zmm0_1
                            rax_18, zmm0_1 = sub_141e24320(rsi, arg2, arg3)
                            int64_t* rax_19
                            
                            if (rax_18 != 0)
                                int64_t rdx_7 = *rax_18
                                rax_19 = (*(rdx_7 + 0xe8))(rax_18, rdx_7)
                            
                            if (rax_18 == 0 || rax_19 == 0)
                                rsi = arg1
                                *(rax_12 + 0x10) = 0
                                rbp = arg5
                            else
                                int64_t rdx_8 = *rax_19
                                (*(rdx_8 + 0x268))(rax_19, rdx_8)
                                (*(*rax_18 + 0xd8))(rax_18)
                                zmm6.d = zmm0_1.d f- zmm0_1.d
                                rsi = arg1
                                rbp.b = zmm6.d f<=
                                    *((sx.q(*(rdi_1 + 8)) << 6) + *(*(rsi + 0x28) + 0x20) + 0x10)
                                *(rax_12 + 0x10) = rbp.b
                                rbp = arg5
                    else
                        int64_t* rcx_12 = *(rax_12 + 0x18)
                        
                        if (rcx_12 == 0)
                            goto label_141e2038f
                        
                        int64_t rdx_5 = *rcx_12
                        
                        if ((*(rdx_5 + 0x28))(rcx_12, rdx_5) == 0)
                            goto label_141e2038f
                        
                        if (*(rax_12 + 0x20) == 0)
                            *(rax_12 + 0x10) = (*(*nullptr + 0x48))(0)
                        else
                            int64_t* rcx_13 = *(rax_12 + 0x18)
                            *(rax_12 + 0x10) = (*(*rcx_13 + 0x48))(rcx_13)
                    
                    if (*(rax_12 + 0x10) == *(rdi_1 + 0xc))
                        void* rdx_12 = *(rsi + 0x28)
                        int64_t rsi_2 = sx.q(*((sx.q(*(rdi_1 + 8)) << 6) + *(rdx_12 + 0x20) + 0xc))
                        void* r8_4 = rsi_2 * 0x58 + *(rdx_12 + 0x10)
                        void* rbx_3
                        
                        if (*(r8_4 + 0x28) == 0)
                            rbx_3 = &arg4[4]
                            *arg4 = 0xffffffff
                            *(arg4 + 8) = 0
                            *(rbx_3 + 0x18) = 0
                            
                            if (*(rbx_3 + 0x1c) s<= 0xffffffff)
                                sub_141e30890(rbx_3, 0)
                            
                            *(arg4 + 8) = rdi_1
                            *arg4 = rsi_2.d
                            goto label_141e204c9
                        
                        rsi = arg1
                        
                        if (sub_141e201b0(rsi, arg2, r8_4, arg4, rbp).b != 0)
                            rbx_3 = &arg4[4]
                        label_141e204c9:
                            int64_t rsi_3 = sx.q(*(rbx_3 + 0x18))
                            int32_t rax_24 = (rsi_3 + 1).d
                            *(rbx_3 + 0x18) = rax_24
                            
                            if (rax_24 s> *(rbx_3 + 0x1c))
                                sub_141e30800(rbx_3, rsi_3.d)
                            
                            void* rax_25 = *(rbx_3 + 0x10)
                            
                            if (rax_25 != 0)
                                rbx_3 = rax_25
                            
                            *(rbx_3 + (rsi_3 << 2)) = *(rdi_1 + 8)
                            result.b = 1
                            break
                
                r14_1 += 1
                r15_1 = &r15_1[8]
                
                if (r14_1 s>= result_1)
                    goto label_141e204a4_2
else
    while (*rcx_2 != i)
        rcx_2 = &rcx_2[1]
        
        if (rcx_2 == result)
            goto label_141e20254
    
label_141e204a4_2:
    result.b = 0

return result
