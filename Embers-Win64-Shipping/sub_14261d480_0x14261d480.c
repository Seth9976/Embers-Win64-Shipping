// 函数: sub_14261d480
// 地址: 0x14261d480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg2
int64_t* rbp = arg2
int64_t* rsi = arg1
int64_t* r12 = arg4
uint64_t rbx = zx.q(*(rax + 0x30))
uint32_t r13 = zx.d(*(rax + 0x32))
int32_t var_a4 = rbx.d
uint32_t var_9c = r13
memset(rbp[5], 0xff, zx.q(r13) * rbx * 2)
void* rax_2 = (*(*rsi + 0x10))(rsi, zx.q((rbx * 3).d * 2))
void* r15 = rax_2
int32_t rbx_1

if (rax_2 != 0)
    memset(r15, 0, rbx * 6)
    int64_t var_78 = 0
    int64_t var_70_1 = 0
    sub_142616290(&var_78, 0x100)
    uint32_t rcx_4 = 0
    int16_t var_a8_1 = 0
    int16_t rsi_1 = 0
    int32_t i = 0
    
    if (rbx.d != 0)
        int32_t r8_5 = arg3
        int32_t r9_1 = neg.d(rbx.d)
        int32_t var_80_1 = r9_1
        
        do
            uint32_t var_88_1 = 0
            
            if (r13 != 0)
                int32_t rax_3 = i + r8_5
                int32_t r12_1 = rbx.d
                int32_t i_3 = i
                int32_t i_5 = i_3
                
                if (rax_3 s< rbx.d)
                    r12_1 = rax_3
                
                int32_t rax_5 = rbx.d * r8_5
                uint32_t r8_11
                
                do
                    r8_11 = r8_5 + rcx_4
                    uint32_t rax_6 = r13
                    uint32_t r13_1 = rcx_4
                    
                    if (r8_11 s< r13)
                        rax_6 = r8_11
                    
                    if (rcx_4 s< rax_6)
                        int32_t var_a0_1 = r9_1 + i_3
                        int64_t i_6 = sx.q(i_3)
                        int64_t i_7 = i_6
                        int64_t var_90_1 = i_6 * 2
                        
                        do
                            sub_142616290(&var_78, zx.d(rsi_1) + 1)
                            memset(var_78, 0, zx.q(rsi_1) << 2)
                            int32_t i_4 = i
                            int16_t j_8 = 0
                            
                            if (i s< r12_1)
                                int64_t i_8 = i_7
                                
                                do
                                    char* rcx_7 = rbp[3]
                                    char rdx_4 = rcx_7[i_8]
                                    
                                    if (rdx_4 != 0)
                                        int64_t r10_1
                                        uint64_t j_9
                                        
                                        if (i_4 s> i && (*(i_8 + rbp[4]) & 1) != 0)
                                            r10_1 = rbp[5]
                                            j_9 = zx.q(*(r10_1 + (i_8 << 1) - 2))
                                        
                                        if (i_4 s<= i || (*(i_8 + rbp[4]) & 1) == 0
                                                || j_9.w == 0xffff || rcx_7[i_8 - 1] != rdx_4)
                                            j_9 = zx.q(j_8)
                                            j_8 += 1
                                            uint64_t rcx_8 = j_9 * 3
                                            *(r15 + (rcx_8 << 1) + 4) = 0xffff
                                            *(r15 + (rcx_8 << 1)) = 0
                                            r10_1 = rbp[5]
                                        
                                        if (r13_1 s> var_88_1 && (*(i_8 + rbp[4]) & 8) != 0)
                                            int64_t r8_8 = sx.q(var_a0_1 + i_4)
                                            int16_t rdx_5 = *(r10_1 + (r8_8 << 1))
                                            
                                            if (rdx_5 != 0xffff)
                                                int64_t rcx_9 = rbp[3]
                                                
                                                if (*(r8_8 + rcx_9) == *(i_8 + rcx_9))
                                                    uint64_t rcx_11 = zx.q(j_9.w) * 6
                                                    int16_t rax_14
                                                    
                                                    if (*(rcx_11 + r15) != 0)
                                                        rax_14 = *(rcx_11 + r15 + 4)
                                                    else
                                                        *(rcx_11 + r15 + 4) = rdx_5
                                                        rax_14 = rdx_5
                                                    
                                                    if (rax_14 != rdx_5)
                                                        *(rcx_11 + r15 + 4) = 0xffff
                                                    else
                                                        *(rcx_11 + r15) += 1
                                                        int64_t rax_15 = var_78
                                                        uint64_t rcx_12 = zx.q(rdx_5)
                                                        *(rax_15 + (rcx_12 << 2)) += 1
                                        
                                        *(rbp[5] + (i_8 << 1)) = j_9.w
                                    
                                    i_4 += 1
                                    i_8 += 1
                                while (i_4 s< r12_1)
                                
                                rsi_1 = var_a8_1
                            
                            uint64_t j_6 = zx.q(j_8)
                            
                            if (j_6 != 0)
                                void* rax_17 = r15 + 2
                                uint64_t j
                                
                                do
                                    int16_t r9_2 = *(rax_17 + 2)
                                    int16_t r10_2 = rsi_1
                                    
                                    if (r9_2 == 0xffff || *(var_78 + (zx.q(r9_2) << 2))
                                            != zx.d(*(rax_17 - 2)))
                                        rsi_1 += 1
                                        r9_2 = r10_2
                                    
                                    *rax_17 = r9_2
                                    rax_17 += 6
                                    j = j_6
                                    j_6 -= 1
                                while (j != 1)
                                var_a8_1 = rsi_1
                            
                            if (i s< r12_1)
                                int64_t rdx_7 = var_90_1
                                uint64_t j_5 = zx.q(r12_1 - i)
                                uint64_t j_1
                                
                                do
                                    int16_t* rax_18 = rbp[5]
                                    int16_t rax_19 = *(rax_18 + rdx_7)
                                    
                                    if (rax_19 != 0xffff)
                                        *(rax_18 + rdx_7) = *(r15 + zx.q(rax_19) * 6 + 2)
                                    
                                    rdx_7 += 2
                                    j_1 = j_5
                                    j_5 -= 1
                                while (j_1 != 1)
                            
                            rbx = sx.q(var_a4)
                            r13_1 += 1
                            var_a0_1 += rbx.d
                            i_7 += rbx
                            var_90_1 += rbx * 2
                        while (r13_1 s< rax_6)
                        
                        i_3 = i_5
                        r9_1 = var_80_1
                    
                    i_3 += rax_5
                    rcx_4 = r8_11
                    r13 = var_9c
                    r8_5 = arg3
                    var_88_1 = rcx_4
                    i_5 = i_3
                while (r8_11 s< r13)
            
            r9_1 -= r8_5
            i += r8_5
            var_80_1 = r9_1
            rcx_4 = 0
        while (i s< rbx.d)
        
        r12 = arg4
    
    uint32_t rdx_8 = zx.d(rsi_1)
    *arg5 = rdx_8
    
    if (rdx_8 != 0)
        int64_t rax_24 = (*(*arg1 + 0x10))(arg1, zx.q(rdx_8 << 5))
        *r12 = rax_24
        
        if (rax_24 != 0)
            memset(rax_24, 0, sx.q(*arg5) << 5)
            int32_t i_1 = 0
            
            if (*arg5 s> 0)
                int64_t rsi_3 = 0
                
                do
                    int64_t rbx_3 = sx.q(i_1) << 5
                    *(rsi_3 + *r12 + 0x18) = 0xffff
                    sub_142616290(*r12 + rbx_3, 0x10)
                    sub_142616290(*r12 + rbx_3, 0)
                    i_1 += 1
                    rsi_3 += 0x20
                while (i_1 s< *arg5)
                
                rbp = arg2
                rbx = zx.q(var_a4)
            
            int32_t r12_2 = 0
            
            if (r13 != 0)
                int32_t rdi_2 = arg3
                char* rcx_21 = nullptr
                int32_t r13_3 = neg.d(rbx.d)
                char* var_90_2 = nullptr
                
                do
                    int32_t r9_5 = r12_2 - mods.dp.d(sx.q(r12_2), rdi_2)
                    int32_t var_98_2 = r9_5
                    char r10_3
                    
                    if (r12_2 == 0 || r12_2 == var_9c - 1)
                        r10_3 = 1
                    else
                        r10_3 = 0
                    
                    var_a8_1.b = r10_3
                    int32_t i_2 = 0
                    
                    if (rbx.d != 0)
                        char* r15_1 = rcx_21
                        
                        do
                            int16_t j_7 = *(rbp[5] + (r15_1 << 1))
                            
                            if (j_7 != 0xffff)
                                int64_t* r11_1 = arg4
                                uint64_t r8_15 = zx.q(j_7) << 5
                                int64_t rax_32 = *r11_1
                                *(r8_15 + rax_32 + 0x10) += 1
                                *(r8_15 + *r11_1 + 0x1a) = r15_1[rbp[3]]
                                *(r8_15 + *r11_1 + 0x14) = divs.dp.d(sx.q(i_2), rdi_2) + r9_5
                                int64_t rcx_23
                                
                                if (r10_3 != 0 || i_2 == 0 || i_2 == (rbx - 1).d)
                                    rcx_23.b = 2
                                else
                                    rcx_23.b = 0
                                
                                int64_t rax_40 = *r11_1
                                *(r8_15 + rax_40 + 0x1b) |= rcx_23.b
                                
                                if (r12_2 s> 0 && (r15_1[rbp[4]] & 8) != 0)
                                    int16_t j_4 = *(rbp[5] + (sx.q(i_2 + r13_3) << 1))
                                    
                                    if (j_4 != 0xffff && j_4 != j_7)
                                        int64_t rcx_25 = 0
                                        int32_t** rdi_4 = *r11_1 + r8_15
                                        uint32_t j_2 = zx.d(j_4)
                                        int64_t r8_16 = sx.q(rdi_4[1].d)
                                        
                                        if (r8_16.d s<= 0)
                                        label_14261da0c:
                                            sub_142616290(rdi_4, (r8_16 + 1).d)
                                            r11_1 = arg4
                                            (*rdi_4)[sx.q(rdi_4[1].d) - 1] = j_2
                                        else
                                            int32_t* rax_44 = *rdi_4
                                            
                                            while (*rax_44 != j_2)
                                                rcx_25 += 1
                                                rax_44 = &rax_44[1]
                                                
                                                if (rcx_25 s>= r8_16)
                                                    goto label_14261da0c
                                        
                                        int64_t rcx_28 = 0
                                        int32_t** rbx_6 = (zx.q(j_4) << 5) + *r11_1
                                        uint32_t j_3 = zx.d(j_7)
                                        int64_t r8_17 = sx.q(rbx_6[1].d)
                                        
                                        if (r8_17.d s<= 0)
                                        label_14261da57:
                                            sub_142616290(rbx_6, (r8_17 + 1).d)
                                            (*rbx_6)[sx.q(rbx_6[1].d) - 1] = j_3
                                        else
                                            int32_t* rax_46 = *rbx_6
                                            
                                            while (*rax_46 != j_3)
                                                rcx_28 += 1
                                                rax_46 = &rax_46[1]
                                                
                                                if (rcx_28 s>= r8_17)
                                                    goto label_14261da57
                                        
                                        rdi_2 = arg3
                                        rbx = zx.q(var_a4)
                                    
                                    rbp = arg2
                            
                            r9_5 = var_98_2
                            i_2 += 1
                            r10_3 = var_a8_1.b
                            r15_1 = &r15_1[1]
                        while (i_2 s< rbx.d)
                        
                        rcx_21 = var_90_2
                    
                    r12_2 += 1
                    rcx_21 = &rcx_21[sx.q(rbx.d)]
                    r13_3 += rbx.d
                    var_90_2 = rcx_21
                while (r12_2 s< var_9c)
                
                r15 = rax_2
            
            rbx_1 = 0x40000000
        else
            rbx_1 = -0x7ffffffc
    else
        *r12 = 0
        rbx_1 = 0x40000000
    
    sub_142609160(var_78)
    rsi = arg1
else
    rbx_1 = -0x7ffffffc

int64_t r8_18 = *rsi
(*(r8_18 + 0x18))(rsi, r15, r8_18)
return zx.q(rbx_1)
