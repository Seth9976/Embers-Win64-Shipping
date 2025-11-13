// 函数: sub_142056ba0
// 地址: 0x142056ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_3 = 0
int32_t* r12 = arg1 + 0x18
int64_t i_4 = 0x11
uint64_t i_2

if (arg2 != 0)
    for (void* i = 0x110; i s< 0x440; i += 0x110)
        int32_t* rsi_2 = r12
        int64_t j_4 = 0x11
        int64_t j
        
        do
            int32_t k_5 = *(i + rsi_2)
            
            if (k_5 != 0)
                int32_t rax_10 = *rsi_2
                int32_t rdx_4 = rax_10 + k_5
                
                if (rdx_4 s> rsi_2[1])
                    sub_1405a5130(&rsi_2[-2], rdx_4)
                    rax_10 = *rsi_2
                
                int64_t* rdx_5 = *(i + rsi_2 - 8)
                int32_t k_4 = k_5
                int64_t* r8_5 = *(rsi_2 - 8) + sx.q(rax_10) * 0x18
                int32_t k
                
                do
                    void* rax_13 = *rdx_5
                    *r8_5 = rax_13
                    
                    if (rax_13 != 0)
                        *(rax_13 + 8) += 1
                    
                    void* rax_14 = rdx_5[1]
                    r8_5[1] = rax_14
                    
                    if (rax_14 != 0)
                        *(rax_14 + 8) += 1
                    
                    r8_5[2].d = rdx_5[2].d
                    int32_t rax_16 = *(rdx_5 + 0x14)
                    rdx_5 = &rdx_5[3]
                    *(r8_5 + 0x14) = rax_16
                    r8_5 = &r8_5[3]
                    k = k_4
                    k_4 -= 1
                while (k != 1)
                *rsi_2 += k_5
            
            i_2 = zx.q(*(i + rsi_2 + 4))
            int32_t* r14_2 = i + rsi_2
            int64_t* rbx_2 = *(r14_2 - 8)
            int32_t k_3 = *(i + rsi_2)
            
            if (i_2.d s< 0)
                if (k_3 != 0)
                    int32_t k_1
                    
                    do
                        sub_1405ec8a0(&rbx_2[1])
                        sub_1405d1550(rbx_2)
                        rbx_2 = &rbx_2[3]
                        k_1 = k_3
                        k_3 -= 1
                    while (k_1 != 1)
                    i_2 = zx.q(r14_2[1])
                
                *r14_2 = 0
                
                if (i_2.d != 0)
                    i_2 = sub_1405a5130(&r14_2[-2], 0)
            else
                if (k_3 != 0)
                    int32_t k_2
                    
                    do
                        sub_1405ec8a0(&rbx_2[1])
                        i_2 = sub_1405d1550(rbx_2)
                        rbx_2 = &rbx_2[3]
                        k_2 = k_3
                        k_3 -= 1
                    while (k_2 != 1)
                
                *r14_2 = 0
            
            rsi_2 = &rsi_2[4]
            j = j_4
            j_4 -= 1
        while (j != 1)
else
    void* rcx = sx.q((data_14399fa54 + 1) u% 3) * 0x110
    int64_t i_1
    
    do
        int32_t j_7 = *(rcx + 0x110 + r12)
        
        if (j_7 != 0)
            int32_t rax_3 = *r12
            int32_t rdx_2 = rax_3 + j_7
            
            if (rdx_2 s> r12[1])
                sub_1405a5130(&r12[-2], rdx_2)
                rax_3 = *r12
            
            int64_t* rdx_3 = *(r12 + rcx + 0x108)
            int32_t j_6 = j_7
            int64_t* r8_4 = *(r12 - 8) + sx.q(rax_3) * 0x18
            int32_t j_1
            
            do
                void* rax_6 = *rdx_3
                *r8_4 = rax_6
                
                if (rax_6 != 0)
                    *(rax_6 + 8) += 1
                
                void* rax_7 = rdx_3[1]
                r8_4[1] = rax_7
                
                if (rax_7 != 0)
                    *(rax_7 + 8) += 1
                
                r8_4[2].d = rdx_3[2].d
                int32_t rax_9 = *(rdx_3 + 0x14)
                rdx_3 = &rdx_3[3]
                *(r8_4 + 0x14) = rax_9
                r8_4 = &r8_4[3]
                j_1 = j_6
                j_6 -= 1
            while (j_1 != 1)
            *r12 += j_7
        
        i_2 = zx.q(*(rcx + 0x114 + r12))
        void* rsi_1 = r12 + rcx + 0x108
        void* rbx_1 = *rsi_1
        int32_t j_5 = *(rcx + 0x110 + r12)
        
        if (i_2.d s< 0)
            if (j_5 != 0)
                int32_t j_2
                
                do
                    sub_1405ec8a0(rbx_1 + 8)
                    sub_1405d1550(rbx_1)
                    rbx_1 += 0x18
                    j_2 = j_5
                    j_5 -= 1
                while (j_2 != 1)
                i_2 = zx.q(*(rsi_1 + 0xc))
            
            *(rsi_1 + 8) = 0
            
            if (i_2.d != 0)
                i_2 = sub_1405a5130(rsi_1, 0)
        else
            if (j_5 != 0)
                int32_t j_3
                
                do
                    sub_1405ec8a0(rbx_1 + 8)
                    i_2 = sub_1405d1550(rbx_1)
                    rbx_1 += 0x18
                    j_3 = j_5
                    j_5 -= 1
                while (j_3 != 1)
            
            *(rsi_1 + 8) = 0
        
        r12 = &r12[4]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

int32_t r13 = 0xa
int64_t* rdi_2 = arg1 + 0x10

do
    int32_t rsi_3 = rdi_2[1].d
    int32_t rsi_4 = rsi_3 - 1
    
    if (rsi_3 - 1 s>= 0)
        int64_t r14_4 = sx.q(rsi_4) * 0x18
        int32_t temp11_1
        
        do
            int64_t* rcx_15 = *rdi_2
            i_2 = zx.q(data_14399fa54 - *(rcx_15 + r14_4 + 0x14))
            
            if (i_2.d u> 0x1e || arg2 != 0)
                void* rax_19 = *(rcx_15 + r14_4)
                void* var_48 = rax_19
                
                if (rax_19 != 0)
                    *(rax_19 + 8) += 1
                
                void* rax_20 = *(rcx_15 + r14_4 + 8)
                void* var_40 = rax_20
                
                if (rax_20 != 0)
                    *(rax_20 + 8) += 1
                
                sub_1405ec8a0(&var_40)
                sub_1405d1550(&var_48)
                int64_t r15_1 = sx.q(rsi_4) * 0x18
                int64_t* rbx_4 = *rdi_2 + r15_1
                sub_1405ec8a0(&rbx_4[1])
                sub_1405d1550(rbx_4)
                int32_t rcx_21 = rdi_2[1].d
                int32_t rdx_8 = rcx_21 - rsi_4 - 1
                
                if (rdx_8 s>= 1)
                    rdx_8 = 1
                
                if (rdx_8 != 0)
                    int64_t r9_1 = *rdi_2
                    memcpy(r9_1 + r15_1, r9_1 + sx.q(rcx_21 - rdx_8) * 0x18, rdx_8 * 0x18)
                    rcx_21 = rdi_2[1].d
                
                rdi_2[1].d = rcx_21 - 1
                i_2 = sub_1405fde90(rdi_2)
                r13 -= 1
                
                if (arg2 == 0 && r13 == 0)
                    return i_2
            
            r14_4 -= 0x18
            temp11_1 = rsi_4
            rsi_4 -= 1
        while (temp11_1 - 1 s>= 0)
    
    if (arg2 == 0 && r13 == 0)
        break
    
    rdi_2 = &rdi_2[2]
    i_2 = i_3 + 1
    i_3 = i_2
while (i_2 s< 0x11)

return i_2
