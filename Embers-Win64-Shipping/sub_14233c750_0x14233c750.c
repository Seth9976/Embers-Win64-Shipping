// 函数: sub_14233c750
// 地址: 0x14233c750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(**arg1 + (sx.q(arg1[1].d) << 3))
void* rdx_1

if (arg3 == 0)
label_14233c798:
    rdx_1 = rsi[0x61]
    
    if (rdx_1 == 0)
        rdx_1 = &rsi[0x27]
else
    rdx_1 = *(arg3 + 0x18)
    int32_t rax_1 = *(rsi + 0xec)
    
    if (rdx_1 == 0 || *(rdx_1 + 0x40) != rax_1)
        rdx_1 = *(arg3 + 0x20)
        
        if (rdx_1 == 0 || *(rdx_1 + 0x40) != rax_1)
            goto label_14233c798

arg1[0x14] = rdx_1
void* rcx

if (arg3 != 0)
    rcx = *(arg3 + 0x10)

if (arg3 == 0 || rcx == 0 || *(rcx + 0x34) != *(rsi + 0xec))
    rcx = &rsi[0x1f]

arg1[0x15] = rcx
void* r12 = arg1[0x14]
void* var_58 = &rsi[6]
int64_t var_48 = arg1[0x15]
void* var_40 = &arg1[2]
void* var_38 = &rsi[0x38]
int32_t var_30 = *(rsi + 0xec)
void* var_50 = r12
void* result = sub_14233d080(&arg1[0xc], &var_58, rsi, arg4.b)
int64_t r14 = sx.q(rsi[1].d)

if (r14.d s> 0)
    int64_t rcx_2 = 0
    result = *rsi + 0x20
    
    do
        if (*result s> 0)
            int32_t i_2 = arg1[0x13].d
            void* rdi_1 = arg1[0x12]
            
            if (i_2 != 0)
                int32_t i
                
                do
                    int64_t* rcx_3 = *rdi_1
                    
                    if (rcx_3 != 0)
                        result = (**rcx_3)(rcx_3, 1)
                    
                    rdi_1 += 8
                    i = i_2
                    i_2 -= 1
                while (i != 1)
            
            arg1[0x13].d = 0
            
            if (*(arg1 + 0x9c) != r14.d)
                result = sub_1405c5570(&arg1[0x12], r14.d)
            
            int32_t i_1 = 0
            
            if (rsi[1].d s> 0)
                int64_t rbp_1 = 0
                
                do
                    if (*(*rsi + rbp_1 + 0x20) s<= 0 || arg4 s< 3)
                        int64_t rdi_2 = sx.q(arg1[0x13].d)
                        int32_t rax_13 = (rdi_2 + 1).d
                        arg1[0x13].d = rax_13
                        
                        if (rax_13 s> *(arg1 + 0x9c))
                            sub_1405a4d70(&arg1[0x12])
                        
                        result = arg1[0x12]
                        *(result + (rdi_2 << 3)) = 0
                    else
                        int32_t rax_12 = sub_1422c5b90(r12)
                        void** rdx_4 = &var_58
                        char r8_1 = arg4.b
                        
                        if (rax_12 == 0)
                            result = sub_142321e20(&arg1[0x12], rdx_4, r8_1)
                        else if (rax_12 != 1)
                            result = sub_142321b50(&arg1[0x12], rdx_4, r8_1)
                        else
                            result = sub_142321880(&arg1[0x12], rdx_4, r8_1)
                    
                    i_1 += 1
                    rbp_1 += 0xe8
                while (i_1 s< rsi[1].d)
            
            break
        
        rcx_2 += 1
        result += 0xe8
    while (rcx_2 s< r14)

return result
