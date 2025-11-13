// 函数: sub_140be4f90
// 地址: 0x140be4f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_1
uint64_t i_3 = i_1
int64_t* rsi = arg4
int128_t* i_5 = arg2
*arg3 = *arg2
arg3[1].q = arg2[1].q
int64_t* var_60 = nullptr
int32_t i_2 = 0
char rax = sub_140bde920(arg1, arg2, &var_60)
int64_t* rbp = var_60

if (rax != 0)
    i_1 = zx.q(i_2)
    uint64_t i_4 = i_5
    sub_140bd5060(rbp, i_1.d, arg2.b, &i_4)
    
    if (i_1.d s> 0)
        int64_t* rdi = rbp
        int64_t* var_68_1 = rbp
        i_4 = i_1
        uint64_t i
        
        do
            int32_t* r14_1 = *rdi
            
            if (r14_1 != 0 && sub_140be2f90(&r14_1[1], arg3, (*r14_1 u>> 0x12).b & 1) != 0)
                if (rsi != 0)
                    bool rax_4
                    
                    if (r14_1[0x16] - r14_1[0x21] s<= 0)
                        rax_4 = sub_140be1db0(&r14_1[0xd])
                    
                    if (r14_1[0x16] - r14_1[0x21] s> 0 || rax_4 != 0)
                        void* rbp_1 = *rsi
                        
                        if (rbp_1 == 0)
                            *rsi = r14_1
                        else
                            int32_t rax_5 = *(rbp_1 + 0x58)
                            
                            if (rax_5 == r14_1[0x16])
                                int32_t j = 0
                                
                                if (rax_5 s> 0)
                                    void* r10_1 = &r14_1[0x18]
                                    int64_t r15_1 = 0
                                    
                                    do
                                        void* r9_1 = *(rbp_1 + 0x70)
                                        int32_t r8_4 = 1 << (j.b & 0x1f)
                                        int32_t j_1 = j
                                        
                                        if (j s< 0)
                                            j_1 = j + 0x1f
                                        
                                        int32_t* rcx_6 = r10_1
                                        void* rax_7 = rbp_1 + 0x60
                                        
                                        if (r9_1 != 0)
                                            rax_7 = r9_1
                                        
                                        int32_t* rax_8 = *(r10_1 + 0x10)
                                        
                                        if (rax_8 != 0)
                                            rcx_6 = rax_8
                                        
                                        rcx_6.b = (rcx_6[sx.q(j_1 s>> 5)] & r8_4) != 0
                                        int32_t r9_3 = *(rax_7 + (sx.q(j_1 s>> 5) << 2)) & r8_4
                                        rax_8.b = r9_3 != 0
                                        
                                        if (rax_8.b != rcx_6.b)
                                            break
                                        
                                        if (r9_3 != 0)
                                            int64_t* rdi_2 = *(r14_1 + 0x50) + r15_1
                                            int64_t* rsi_2 = *(rbp_1 + 0x50) + r15_1
                                            int16_t* rdx_3
                                            
                                            if (rdi_2[1].d == 0)
                                                rdx_3 = &data_142d40450
                                            else
                                                rdx_3 = *rdi_2
                                            
                                            int16_t* const rcx_7
                                            
                                            if (rsi_2[1].d == 0)
                                                rcx_7 = &data_142d40450
                                            else
                                                rcx_7 = *rsi_2
                                            
                                            int32_t rax_9 = sub_140a54510(rcx_7, rdx_3)
                                            
                                            if (rax_9 != 0)
                                                break
                                            
                                            int16_t* rdx_4
                                            
                                            if (rdi_2[3].d == rax_9)
                                                rdx_4 = &data_142d40450
                                            else
                                                rdx_4 = rdi_2[2]
                                            
                                            int16_t* const rcx_8
                                            
                                            if (rsi_2[3].d == 0)
                                                rcx_8 = &data_142d40450
                                            else
                                                rcx_8 = rsi_2[2]
                                            
                                            if (sub_140a54510(rcx_8, rdx_4) != 0)
                                                break
                                            
                                            r10_1 = &r14_1[0x18]
                                        
                                        j += 1
                                        r15_1 += 0x28
                                    while (j s< *(rbp_1 + 0x58))
                                    
                                    rsi = arg4
                                    rdi = var_68_1
                                
                                i_1 = i_4
                
                void var_50
                int64_t* rax_11 = sub_140be4c40(r14_1, &var_50, arg3)
                *arg3 = *rax_11
                arg3[1].q = rax_11[2]
            
            rdi = &rdi[1]
            i = i_1
            i_1 -= 1
            var_68_1 = rdi
            i_4 = i_1
        while (i != 1)
        i_5 = arg2
        rbp = var_60

if (*arg3 != *i_5 || *(arg3 + 8) != *(i_5 + 8) || arg3[1].q != i_5[1].q)
    i_1.b = 1
else
    i_1.b = 0

if (rbp != 0)
    sub_140a74f90(rbp)

return zx.q(i_1.b)
