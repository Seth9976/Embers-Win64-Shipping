// 函数: sub_1429d2fb0
// 地址: 0x1429d2fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
char r15 = *(arg1[2] + 0xe)
char var_d8 = r15
int32_t rdi = *(arg1[3] + 0x14)
void var_88
void* var_98 = &var_88
void* rax_4 = nullptr
int32_t var_90 = rdi
int32_t var_8c = 0x10
void* var_48 = nullptr

if (rdi u> 0x10)
    rax_4 = j_sub_140a82f30(zx.q(rdi) << 2)
    var_48 = rax_4
    var_98 = rax_4
    int32_t var_8c_1 = rdi

void* rcx_2 = *arg1
int64_t rdx = sx.q(*(rcx_2 + 0x54))
int64_t r13 = rdx
int64_t rbp = sx.q(*(rcx_2 + 0x3c) + rdx.d)
int64_t var_d0 = rbp

if (rdx s< rbp)
    do
        void* rdx_1 = arg1[4]
        char* r11_2 = sx.q(*(*(rdx_1 + 0x60) + (r13 << 2))) + *(rdx_1 + 0xa8)
        uint64_t i_7 = zx.q(*(*(rdx_1 + 0x48) + (r13 << 1)))
        
        if ((*r11_2 & 1) != 0)
            void* r8_1 = *arg1
            
            if ((not.b((*(r8_1 + 0x180))[r13]) & 1) != 0)
                void* r10_1 = arg1[1]
                int64_t r9_1 = sx.q(*(*(r8_1 + 0x138) + (r13 << 2)))
                
                if ((*(*(r10_1 + 0x1b0) + (r9_1 << 1)) & 0x60) != 0)
                    void* r8_2 = arg1[3]
                    char rax_11 = (*(*(r8_2 + 0x1b0) + (r13 << 1))).b
                    
                    if ((rax_11 & 0x30) == 0)
                        if ((rax_11 & 0x60) != 0)
                            int16_t* r14_1 =
                                *(rdx_1 + 0xc0) + (sx.q(*(*(rdx_1 + 0x60) + (r13 << 2))) << 2)
                            int96_t zmm0
                            
                            if (((*(r8_2 + 0x170) - *(r8_2 + 0x168)) s>> 2).d == 0)
                                void* rdx_3 = *(r10_1 + 0x150)
                                int32_t r8_3 = (r9_1 * 2).d
                                int64_t r9_2 = sx.q(r8_3 + 1) << 2
                                int64_t rdi_1 = *(r10_1 + 0x168) + (sx.q(*(r9_2 + rdx_3)) << 2)
                                int32_t i_6 = *(rdx_3 + (sx.q(r8_3) << 2))
                                int16_t* r9_3 = *(r10_1 + 0x180) + (sx.q(*(rdx_3 + r9_2)) << 1)
                                
                                if (i_6 s> 0)
                                    int32_t* r8_4 = nullptr
                                    uint64_t i_5 = zx.q(i_6)
                                    uint64_t i
                                    
                                    do
                                        int32_t rax_25 = *(r8_4 + rdi_1)
                                        r8_4 = &r8_4[1]
                                        uint64_t rax_27 = zx.q(*r9_3)
                                        r9_3 = &r9_3[1]
                                        *(r8_4 + var_98 - 4) =
                                            *(*(*arg1 + 0xc0) + ((sx.q(rax_25 * 2) + rax_27) << 2))
                                        i = i_5
                                        i_5 -= 1
                                    while (i != 1)
                                
                                int32_t i_8 = i_6
                                zmm0 = var_98.12
                            else
                                int64_t rax_18 = *(r8_2 + 0x150)
                                int32_t var_b0_1 = *(rax_18 + (r13 << 3))
                                zmm0 =
                                    (*(r8_2 + 0x168) + (sx.q(*(rax_18 + (r13 << 3) + 4)) << 2)).12
                            
                            if (i_7.d s> 0)
                                char* rdi_2 = r11_2
                                int32_t* r15_1 = zmm0.q
                                uint64_t i_4 = i_7
                                uint64_t i_1
                                
                                do
                                    char r10_2 = *rdi_2
                                    
                                    if ((r10_2 & 0x10) != 0 && (r10_2 & 0x20) == 0)
                                        int16_t rcx_13 = *r14_1
                                        uint64_t rax_20
                                        rax_20.b = 0
                                        int16_t r9_4 = r14_1[1]
                                        
                                        if (rcx_13 u< r9_4)
                                            uint64_t rdx_8 = zx.q(zx.d(rcx_13) + 1)
                                            int32_t* r8_5 = &r15_1[rdx_8]
                                            
                                            while (rdx_8.d s<= zx.d(r9_4))
                                                int64_t rcx_15 = sx.q(*r8_5)
                                                rdx_8 = zx.q(rdx_8.d + 1)
                                                r8_5 = &r8_5[1]
                                                rax_20.b = *(rcx_15 + *(arg1[3] + 0xf0)) u>> 3
                                                rax_20.b &= 1
                                                
                                                if (rax_20.b != 0)
                                                    goto label_1429d32fc
                                            
                                        label_1429d32ed:
                                            
                                            if (rax_20.b == 0)
                                                *rdi_2 = (r10_2 & 0xcf) | 8
                                        else if (rcx_13 u<= r9_4)
                                            *rdi_2 = (r10_2 & 0xcf) | 8
                                        else
                                            uint64_t rdx_10 = zx.q(zx.d(rcx_13) + 1)
                                            void* r8_6 = &r15_1[rdx_10]
                                            
                                            while (rdx_10.d s< zmm0:8.d)
                                                int64_t rcx_17 = sx.q(*r8_6)
                                                rdx_10 = zx.q(rdx_10.d + 1)
                                                r8_6 += 4
                                                rax_20.b = *(rcx_17 + *(arg1[3] + 0xf0)) u>> 3
                                                rax_20.b &= 1
                                                
                                                if (rax_20.b != 0)
                                                    break
                                            
                                            int32_t j = 0
                                            
                                            if (rax_20.b == 0)
                                                int32_t* r8_7 = r15_1
                                                
                                                while (j s<= zx.d(r9_4))
                                                    int64_t rcx_18 = sx.q(*r8_7)
                                                    j += 1
                                                    r8_7 = &r8_7[1]
                                                    rax_20.b = *(rcx_18 + *(arg1[3] + 0xf0)) u>> 3
                                                    rax_20.b &= 1
                                                    
                                                    if (rax_20.b != 0)
                                                        goto label_1429d32fc
                                                
                                                goto label_1429d32ed
                                    
                                label_1429d32fc:
                                    r14_1 = &r14_1[2]
                                    rdi_2 = &rdi_2[1]
                                    i_1 = i_4
                                    i_4 -= 1
                                while (i_1 != 1)
                                rbp = var_d0
                                r15 = var_d8
                            
                            if (i_7.d == 2 && r15 != 0)
                                char rax_36 = *r11_2
                                
                                if ((rax_36 & 0x20) == 0 || (r11_2[1] & 0x10) != 0)
                                    char rcx_19 = r11_2[1]
                                    
                                    if ((rcx_19 & 0x20) != 0 && (rax_36 & 0x10) == 0)
                                        r11_2[1] = rcx_19 & 0xdf
                                else
                                    *r11_2 = rax_36 & 0xdf
                        else if (i_7.d s> 0)
                            uint64_t i_3 = zx.q(i_7.d)
                            uint64_t i_2
                            
                            do
                                char rax_12 = *r11_2
                                
                                if ((rax_12 & 0x10) != 0)
                                    *r11_2 = (rax_12 & 0xcf) | 8
                                
                                r11_2 = &r11_2[1]
                                i_2 = i_3
                                i_3 -= 1
                            while (i_2 != 1)
        
        r13 += 1
    while (r13 s< rbp)
    
    rax_4 = var_48

int64_t result = j_sub_140a74f90(rax_4)
__security_check_cookie(rax_1 ^ &var_f8)
return result
