// 函数: sub_14261db00
// 地址: 0x14261db00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg2
int64_t* rdi = arg3
int64_t* r13 = arg2
int64_t* r12 = arg1
uint32_t* r14 = arg4
uint64_t rbx = zx.q(*(rax + 0x30))
uint32_t r15 = zx.d(*(rax + 0x32))
int32_t i_10 = rbx.d
uint32_t var_80 = r15
memset(r13[5], 0xff, zx.q(r15) * rbx * 2)
void* rax_2 = (*(*r12 + 0x10))(r12, zx.q((rbx * 3).d * 2))
int32_t rbx_1

if (rax_2 != 0)
    memset(rax_2, 0, rbx * 6)
    int32_t rbp_1 = 0
    int64_t var_60 = 0
    int64_t var_58_1 = 0
    sub_142616290(&var_60, 0x100)
    int16_t var_88_1 = 0
    int16_t rsi_1 = 0
    
    if (r15 != 0)
        char* r12_1 = nullptr
        int32_t r14_2 = neg.d(rbx.d)
        char* var_70_1 = nullptr
        int32_t i = 0
        int16_t* r15_1 = nullptr
        int16_t* var_68_1 = nullptr
        
        while (true)
            sub_142616290(&var_60, zx.d(rsi_1) + 1)
            memset(var_60, 0, zx.q(rsi_1) << 2)
            uint64_t i_7 = zx.q(i_10)
            int16_t i_11 = 0
            
            if (i_7.d != 0)
                char* rdx_4 = r12_1
                
                do
                    char* rcx_6 = r13[3]
                    char r8_7 = *(rcx_6 + rdx_4)
                    
                    if (r8_7 != 0)
                        int64_t r10_1
                        uint64_t i_13
                        
                        if (i s> 0 && (rdx_4[r13[4]] & 1) != 0)
                            r10_1 = r13[5]
                            i_13 = zx.q(*(r10_1 + (rdx_4 << 1) - 2))
                        
                        if (i s<= 0 || (rdx_4[r13[4]] & 1) == 0 || i_13.w == 0xffff
                                || *(rcx_6 + rdx_4 - 1) != r8_7)
                            i_13 = zx.q(i_11)
                            i_11 += 1
                            uint64_t rcx_7 = i_13 * 3
                            *(rax_2 + (rcx_7 << 1) + 4) = 0xffff
                            *(rax_2 + (rcx_7 << 1)) = 0
                            r10_1 = r13[5]
                        
                        if (rbp_1 s> 0 && (rdx_4[r13[4]] & 8) != 0)
                            int64_t r9 = sx.q(r14_2 + i)
                            int16_t r8_8 = *(r10_1 + (r9 << 1))
                            char* rcx_8
                            
                            if (r8_8 != 0xffff)
                                rcx_8 = r13[3]
                            
                            if (r8_8 == 0xffff || rcx_8[r9] != *(rcx_8 + rdx_4))
                                i_7 = zx.q(i_10)
                            else
                                uint64_t rcx_10 = zx.q(i_13.w) * 6
                                int16_t rax_8
                                
                                if (*(rcx_10 + rax_2) != 0)
                                    rax_8 = *(rcx_10 + rax_2 + 4)
                                else
                                    *(rcx_10 + rax_2 + 4) = r8_8
                                    rax_8 = r8_8
                                
                                i_7 = zx.q(i_10)
                                
                                if (rax_8 != r8_8)
                                    *(rcx_10 + rax_2 + 4) = 0xffff
                                else
                                    *(rcx_10 + rax_2) += 1
                                    int64_t rax_9 = var_60
                                    uint64_t rcx_11 = zx.q(r8_8)
                                    *(rax_9 + (rcx_11 << 2)) += 1
                        
                        *(r13[5] + (rdx_4 << 1)) = i_13.w
                    
                    i += 1
                    rdx_4 = &rdx_4[1]
                while (i s< i_7.d)
                
                rsi_1 = var_88_1
                r15_1 = var_68_1
                r12_1 = var_70_1
            
            uint64_t i_8 = zx.q(i_11)
            
            if (i_8 != 0)
                void* r8_9 = rax_2 + 2
                uint64_t i_1
                
                do
                    int16_t r9_1 = *(r8_9 + 2)
                    int16_t r10_2 = rsi_1
                    
                    if (r9_1 == 0xffff || *(var_60 + (zx.q(r9_1) << 2)) != zx.d(*(r8_9 - 2)))
                        rsi_1 += 1
                        r9_1 = r10_2
                    
                    *r8_9 = r9_1
                    r8_9 += 6
                    i_1 = i_8
                    i_8 -= 1
                while (i_1 != 1)
                i_7 = zx.q(i_10)
                var_88_1 = rsi_1
            
            if (0 u< i_7.w)
                int16_t* rdx_6 = r15_1
                uint64_t i_2
                
                do
                    int64_t rax_12 = r13[5]
                    int16_t rax_13 = *(rdx_6 + rax_12)
                    
                    if (rax_13 != 0xffff)
                        *(rdx_6 + rax_12) = *(rax_2 + zx.q(rax_13) * 6 + 2)
                    
                    rdx_6 = &rdx_6[1]
                    i_2 = i_7
                    i_7 -= 1
                while (i_2 != 1)
                i_7 = zx.q(i_10)
            
            int64_t rcx_14 = sx.q(i_7.d)
            rbp_1 += 1
            r12_1 = &r12_1[rcx_14]
            r14_2 += i_7.d
            var_70_1 = r12_1
            r15_1 = &r15_1[rcx_14]
            var_68_1 = r15_1
            
            if (rbp_1 s>= var_80)
                break
            
            i = 0
        
        r14 = arg4
        rdi = arg3
        r15 = var_80
        r12 = arg1
    
    uint32_t rdx_7 = zx.d(rsi_1)
    *r14 = rdx_7
    
    if (rdx_7 != 0)
        int64_t rax_17 = (*(*r12 + 0x10))(r12, zx.q(rdx_7 << 5))
        int64_t* rbx_3 = arg3
        *rbx_3 = rax_17
        
        if (rax_17 != 0)
            memset(rax_17, 0, sx.q(*r14) << 5)
            int32_t i_3 = 0
            
            if (*r14 s> 0)
                int64_t rsi_2 = 0
                
                do
                    int64_t rbx_5 = sx.q(i_3) << 5
                    *(*rbx_3 + rsi_2 + 0x18) = 0xffff
                    sub_142616290(*arg3 + rbx_5, 0x10)
                    sub_142616290(*arg3 + rbx_5, 0)
                    i_3 += 1
                    rsi_2 += 0x20
                    rbx_3 = arg3
                while (i_3 s< *r14)
                
                r13 = arg2
            
            int32_t r12_3 = 0
            
            if (r15 != 0)
                int32_t i_12 = i_10
                char* rcx_21 = nullptr
                char* var_68_2 = nullptr
                int32_t r8_14 = neg.d(i_12)
                var_88_1.d = r8_14
                
                do
                    char r9_2
                    
                    if (r12_3 == 0 || r12_3 == r15 - 1)
                        r9_2 = 1
                    else
                        r9_2 = 0
                    
                    int64_t* arg_10
                    arg_10.b = r9_2
                    int32_t rbp_2 = 0
                    
                    if (0 u< i_12.w)
                        char* r15_2 = rcx_21
                        
                        do
                            int16_t i_9 = *(r13[5] + (r15_2 << 1))
                            
                            if (i_9 != 0xffff)
                                int64_t rax_21 = *rbx_3
                                uint64_t rdx_10 = zx.q(i_9) << 5
                                *(rdx_10 + rax_21 + 0x10) += 1
                                *(rdx_10 + *rbx_3 + 0x1a) = r15_2[r13[3]]
                                int64_t rcx_22
                                
                                if (r9_2 != 0 || rbp_2 == 0 || rbp_2 == i_12 - 1)
                                    rcx_22.b = 2
                                else
                                    rcx_22.b = 0
                                
                                int64_t rax_25 = *rbx_3
                                *(rdx_10 + rax_25 + 0x1b) |= rcx_22.b
                                
                                if (r12_3 s> 0 && (r15_2[r13[4]] & 8) != 0)
                                    int16_t i_6 = *(r13[5] + (sx.q(r8_14 + rbp_2) << 1))
                                    
                                    if (i_6 != 0xffff && i_6 != i_9)
                                        int32_t** rdi_2 = *rbx_3 + rdx_10
                                        uint32_t i_4 = zx.d(i_6)
                                        int64_t rcx_24 = 0
                                        int64_t r8_15 = sx.q(rdi_2[1].d)
                                        
                                        if (r8_15.d s<= 0)
                                        label_14261dfc7:
                                            sub_142616290(rdi_2, (r8_15 + 1).d)
                                            i_12 = i_10
                                            (*rdi_2)[sx.q(rdi_2[1].d) - 1] = i_4
                                        else
                                            int32_t* rax_29 = *rdi_2
                                            
                                            while (*rax_29 != i_4)
                                                rcx_24 += 1
                                                rax_29 = &rax_29[1]
                                                
                                                if (rcx_24 s>= r8_15)
                                                    goto label_14261dfc7
                                        
                                        uint32_t i_5 = zx.d(i_9)
                                        int32_t** rbx_8 = (zx.q(i_6) << 5) + *arg3
                                        int64_t rcx_27 = 0
                                        int64_t r8_16 = sx.q(rbx_8[1].d)
                                        
                                        if (r8_16.d s<= 0)
                                        label_14261e019:
                                            sub_142616290(rbx_8, (r8_16 + 1).d)
                                            i_12 = i_10
                                            (*rbx_8)[sx.q(rbx_8[1].d) - 1] = i_5
                                        else
                                            int32_t* rax_32 = *rbx_8
                                            
                                            while (*rax_32 != i_5)
                                                rcx_27 += 1
                                                rax_32 = &rax_32[1]
                                                
                                                if (rcx_27 s>= r8_16)
                                                    goto label_14261e019
                                        
                                        r8_14 = var_88_1.d
                            
                            r9_2 = arg_10.b
                            rbp_2 += 1
                            rbx_3 = arg3
                            r15_2 = &r15_2[1]
                        while (rbp_2 s< i_12)
                        
                        rcx_21 = var_68_2
                        r15 = var_80
                    
                    rbx_3 = arg3
                    r8_14 += i_12
                    r12_3 += 1
                    rcx_21 = &rcx_21[sx.q(i_12)]
                    var_88_1.d = r8_14
                    var_68_2 = rcx_21
                while (r12_3 s< r15)
            
            rbx_1 = 0x40000000
        else
            rbx_1 = -0x7ffffffc
    else
        *rdi = 0
        rbx_1 = 0x40000000
    
    sub_142609160(var_60)
    r12 = arg1
else
    rbx_1 = -0x7ffffffc

int64_t r8_17 = *r12
(*(r8_17 + 0x18))(r12, rax_2, r8_17)
return zx.q(rbx_1)
