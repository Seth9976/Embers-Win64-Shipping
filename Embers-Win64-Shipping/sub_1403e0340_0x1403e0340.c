// 函数: sub_1403e0340
// 地址: 0x1403e0340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t rax_2 = sx.q(arg3)
int64_t rsi = arg2
int16_t var_114 = rax_2.w
int32_t rax_4 = sub_1403f73c0(arg1, (rax_2 s>> 1) * 9 + &data_1436fd6e8, 8)
int32_t i_3 = arg5 s>> 4
int32_t i_4 = i_3

if (i_3 << 4 s< arg5)
    i_3 += 1
    i_4 = i_3

int32_t r13 = 0
void var_f8
void var_a8

if (i_3 s> 0)
    int64_t rdi_1 = 0
    uint64_t i_2 = zx.q(i_3)
    uint64_t i
    
    do
        *(&var_a8 + rdi_1) = 0
        int32_t rax_6 = sub_1403f73c0(arg1, &data_1436fd630 + sx.q(rax_4) * 0x12, 8)
        *(&var_f8 + rdi_1) = rax_6
        
        if (rax_6 == 0x11)
            int32_t rbx_1 = 0
            int32_t j
            
            do
                rbx_1 += 1
                int64_t rdx_3
                rdx_3.b = rbx_1 == 0xa
                j = sub_1403f73c0(arg1, rdx_3 + &data_1436fd6d2, 8)
                *(&var_f8 + rdi_1) = j
            while (j == 0x11)
            *(&var_a8 + rdi_1) = rbx_1
        
        rdi_1 += 4
        i = i_2
        i_2 -= 1
    while (i != 1)
    rsi = arg2

int32_t rbx_2 = 0

if (i_3 s> 0)
    void* rdi_2 = &var_f8
    
    do
        int32_t r8 = *rdi_2
        int32_t* rcx_5 = rsi + (sx.q(sx.d(rbx_2.w) << 4) << 2)
        
        if (r8 s<= 0)
            memset(rcx_5, 0, 0x40)
        else
            try_get_proc_address_from_first_available_module(rcx_5, arg1, r8)
        
        rbx_2 += 1
        rdi_2 += 4
    while (rbx_2 s< i_3)
    
    if (i_3 s> 0)
        int64_t r12_1 = 0
        
        do
            uint64_t j_3 = zx.q(*(&var_a8 + r12_1))
            
            if (j_3.d s> 0)
                int64_t r15_1 = rsi + (sx.q(sx.d(r13.w) << 4) << 2)
                
                for (int64_t i_1 = 0; i_1 s< 0x10; i_1 += 1)
                    uint64_t rbx_3 = zx.q(*(r15_1 + (i_1 << 2)))
                    
                    if (j_3.d s> 0)
                        uint64_t j_2 = j_3
                        uint64_t j_1
                        
                        do
                            rbx_3 = zx.q(sub_1403f73c0(arg1, &data_1436fc840, 8) + (rbx_3 << 1).d)
                            j_1 = j_2
                            j_2 -= 1
                        while (j_1 != 1)
                    
                    *(r15_1 + (i_1 << 2)) = rbx_3.d
                
                i_3 = i_4
                *(&var_f8 + r12_1) |= j_3.d << 5
            
            rsi = arg2
            r13 += 1
            r12_1 += 4
        while (r13 s< i_3)

char* result = sub_1403e6230(arg1, arg2, arg5, var_114, arg4, &var_f8)
__security_check_cookie(rax_1 ^ &var_148)
return result
