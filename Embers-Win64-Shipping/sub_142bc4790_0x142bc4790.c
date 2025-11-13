// 函数: sub_142bc4790
// 地址: 0x142bc4790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0xe0)
int32_t rbx = 0
int64_t rsi = *(arg1 + 0x98)
void* r14 = arg1
int64_t* rbp = *(arg1 + 0x1e8)
int32_t* r12 = nullptr
int64_t var_70 = rsi
int64_t* var_68 = rbp
int32_t arg_18 = 0
int32_t arg_10
int32_t* rax_1 = sub_142b99a90(rsi, 0x10, 0, *(arg1 + 0x1b0), 0, &arg_10)
int32_t* r13 = rax_1
*(r14 + 0x1d0) = rax_1

if (arg_10 == 0)
    int32_t i = 0
    int32_t i_1 = 0
    
    if (*(r14 + 0x1b0) s> 0)
        int64_t rdx_1 = 0
        int64_t var_60_1 = 0
        
        do
            void* rdi_2 = *(r14 + 0x1b8) + rdx_1
            uint64_t j_8 = zx.q(*(rdi_2 + 0xf0))
            int32_t rax_2 = *(rdi_2 + 4)
            
            if (j_8.d != 0)
                int32_t j_7 = (j_8 + 1).d
                
                if (j_7 u<= rbx)
                    goto label_142bc48d0
                
                int32_t rbx_2 = (j_8 + 4).d & 0xfffffffc
                
                if (rbx_2 u<= arg_18)
                    arg_10 = 0xa0
                label_142bc4b25:
                    rsi = var_70
                label_142bc4b2a:
                    
                    if (*(r14 + 0x1d0) == 0)
                        break
                    
                    int32_t j = 0
                    
                    if (*(r14 + 0x1b0) s> 0)
                        int64_t rbx_6 = 0
                        
                        do
                            int64_t* rdx_16 = *(rbx_6 + *(r14 + 0x1d0) + 8)
                            
                            if (rdx_16 != 0)
                                sub_142b99980(rsi, *rdx_16)
                                **(rbx_6 + *(r14 + 0x1d0) + 8) = 0
                            
                            sub_142b99980(rsi, *(rbx_6 + *(r14 + 0x1d0) + 8))
                            j += 1
                            *(rbx_6 + *(r14 + 0x1d0) + 8) = 0
                            rbx_6 += 0x10
                        while (j s< *(r14 + 0x1b0))
                    
                    sub_142b99980(rsi, *(r14 + 0x1d0))
                    *(r14 + 0x1d0) = 0
                    break
                
                r12 = sub_142b99a90(var_70, 4, arg_18, rbx_2, r12, &arg_10)
                
                if (arg_10 != 0)
                    goto label_142bc4b25
                
                arg_18 = rbx_2
            label_142bc48d0:
                int32_t rax_4 = sub_142b97060(rbp, *(rdi_2 + 0xf4) + *(r14 + 0x1c0), arg2)
                arg_10 = rax_4
                
                if (rax_4 != 0)
                    goto label_142bc4b25
                
                int32_t rax_5 = sub_142b96500(rbp, *(rdi_2 + 0xf8) * j_7)
                arg_10 = rax_5
                
                if (rax_5 != 0)
                    goto label_142bc4b25
                
                char* rdx_6 = rbp[7]
                int32_t* r9_2 = r12
                uint64_t j_6 = zx.q(j_7)
                uint64_t j_1
                
                do
                    char k_1 = *(rdi_2 + 0xf8)
                    int32_t rax_6 = 0
                    
                    if (k_1 != 0)
                        char k
                        
                        do
                            uint32_t rcx_4 = zx.d(*rdx_6)
                            rdx_6 = &rdx_6[1]
                            rax_6 = rax_6 << 8 | rcx_4
                            k = k_1
                            k_1 -= 1
                        while (k != 1)
                    
                    *r9_2 = rax_6
                    r9_2 = &r9_2[1]
                    j_1 = j_6
                    j_6 -= 1
                while (j_1 != 1)
                sub_142b96620(rbp)
                int32_t r8_3 = 1
                
                if (j_8.d u>= 1)
                    while (r12[zx.q(r8_3 - 1)] u<= r12[zx.q(r8_3)])
                        r8_3 += 1
                        
                        if (r8_3 u> j_8.d)
                            goto label_142bc4973
                    
                    arg_10 = 3
                    goto label_142bc4b25
                
            label_142bc4973:
                uint64_t j_4 = j_8
                int32_t rbx_3 = r12[j_8]
                
                if (rbx_3 u> var_68[1].d - *(r14 + 0x1c0))
                    arg_10 = 3
                    goto label_142bc4b25
                
                uint32_t rbx_4 = rbx_3 - *r12
                rsi = var_70
                *(r13 + 8) = sub_142b99a90(rsi, 8, 0, j_7, 0, &arg_10)
                
                if (arg_10 != 0)
                    goto label_142bc4b2a
                
                int64_t rax_12
                int512_t zmm0_1
                rax_12, zmm0_1 = sub_142b99860(rsi, rbx_4, &arg_10)
                **(r13 + 8) = rax_12
                
                if (arg_10 != 0)
                    goto label_142bc4b2a
                
                int32_t rax_13 = sub_142b97060(var_68, *r12 + *(r14 + 0x1c0), arg2)
                arg_10 = rax_13
                
                if (rax_13 != 0)
                    goto label_142bc4b2a
                
                int32_t rax_14 = sub_142b96990(var_68, **(r13 + 8), rbx_4, zmm0_1)
                arg_10 = rax_14
                
                if (rax_14 != 0)
                    goto label_142bc4b2a
                
                int32_t j_2 = 1
                
                if (j_8.d u>= 1)
                    do
                        int64_t rdx_13 = *(r13 + 8)
                        uint64_t rax_15 = zx.q(j_2 - 1)
                        uint64_t j_5 = zx.q(j_2)
                        j_2 += 1
                        *(rdx_13 + (j_5 << 3)) =
                            zx.q(r12[j_5] - r12[rax_15]) + *(rdx_13 + (rax_15 << 3))
                    while (j_2 u<= j_8.d)
                
                if (rax_2 s>= 0 && j_8.d != 0)
                    void* rsi_1 = &r12[1]
                    int64_t* rbx_5 = nullptr
                    int32_t* rdi_4 = r12
                    uint64_t j_3
                    
                    do
                        (*(rax + 0x20))(*(rbx_5 + *(r13 + 8)), zx.q(*rsi_1 - *rdi_4), 0x10ea)
                        rsi_1 += 4
                        rdi_4 = &rdi_4[1]
                        rbx_5 = &rbx_5[1]
                        j_3 = j_4
                        j_4 -= 1
                    while (j_3 != 1)
                    r14 = arg1
                    rsi = var_70
                
                rbp = var_68
                rbx = arg_18
                i = i_1
                rdx_1 = var_60_1
                *r13 = j_8.d
            
            i += 1
            rdx_1 += 0xfc
            r13 = &r13[4]
            i_1 = i
            var_60_1 = rdx_1
        while (i s< *(r14 + 0x1b0))

sub_142b99980(rsi, r12)
return zx.q(arg_10)
