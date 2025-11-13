// 函数: sub_1414ff310
// 地址: 0x1414ff310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int128_t* r13 = arg2
int128_t* var_a0 = arg2
int32_t* r14 = arg1
sub_141504b40(arg1)
void* rax_3 = sub_1414efd40(&r14[0x3e], sub_140b21160(r13, 0x38, 0), r13)
void* r15 = rax_3
void* rcx_2 = *rax_3
void*** result

if (rcx_2 == 0)
    uint32_t i_4 = zx.d(*(r13 + 9))
    uint32_t rdi_1 = -1
    uint32_t rsi_1 = -1
    void*** result_1 = nullptr
    int64_t var_88
    __builtin_memset(&var_88, 0, 0x40)
    int32_t var_ac_1 = 0
    int32_t rbp_1 = 0
    int32_t var_b0_1 = 0
    int32_t var_b4_1 = 0
    char var_b8_1 = 0
    
    if (i_4.b != 0)
        int32_t rbx_1 = r14[0x28]
        void* r9_1 = r13 + 0xc
        uint64_t i_3 = zx.q(i_4)
        int64_t* r8_1 = &var_88
        int32_t r10_1 = 0
        r13.b = 0
        int32_t r15_1 = 0
        uint64_t i
        
        do
            int32_t rdx_1 = *r9_1
            uint64_t rax_5 = zx.q(rdx_1) & 0x3fffff
            void* const rcx_5
            
            if (rax_5.d u< rbx_1)
                rcx_5 = rax_5 * 0x60 + *(r14 + 0x98)
            
            if (rax_5.d u>= rbx_1 || *(rcx_5 + 0x5c) != (rdx_1 u>> 0x16).w)
                rcx_5 = nullptr
            
            *r8_1 = rcx_5
            
            if (rcx_5 != 0)
                int32_t rax_6 = *(rcx_5 + 0x14)
                
                if (rbp_1 u>= rax_6)
                    rax_6 = rbp_1
                
                rbp_1 = rax_6
                int32_t rax_7 = *(rcx_5 + 0x18)
                
                if (r15_1 u>= rax_7)
                    rax_7 = r15_1
                
                r15_1 = rax_7
                uint32_t rax_8 = zx.d(*(rcx_5 + 0x20))
                
                if (rdi_1 u<= rax_8)
                    rax_8 = rdi_1
                
                rdi_1 = rax_8
                uint32_t rax_9 = zx.d(*(rcx_5 + 0x22))
                
                if (rsi_1 u<= rax_9)
                    rax_9 = rsi_1
                
                rsi_1 = rax_9
                int32_t rax_10 = *(rcx_5 + 0x1c)
                
                if (r10_1 u>= rax_10)
                    rax_10 = r10_1
                
                r13.b |= *(rcx_5 + 8)
                r10_1 = rax_10
            
            r9_1 += 4
            r8_1 = &r8_1[1]
            i = i_3
            i_3 -= 1
        while (i != 1)
        var_b8_1 = r13.b
        r13 = var_a0
        var_b4_1 = r10_1
        var_b0_1 = r15_1
        r15 = rax_3
        i_4 = zx.d(*(r13 + 9))
        var_ac_1 = rbp_1
    
    uint32_t rbp_2 = rdi_1
    
    while (true)
        int32_t r9_2 = 0
        
        if (i_4 == 0)
            break
        
        int64_t* r8_2 = &var_88
        
        while (true)
            void* rax_11 = *r8_2
            
            if (rax_11 != 0 && modu.dp.d(0:rbp_2, zx.d(*(rax_11 + 0x20))) != 0)
                rbp_2 += rdi_1
                break
            
            r9_2 += 1
            r8_2 = &r8_2[1]
            
            if (r9_2 u>= i_4)
                goto label_1414ff517
    
label_1414ff517:
    uint32_t rdi_2 = rsi_1
label_1414ff520:
    int32_t r9_3 = 0
    
    if (i_4 != 0)
        int64_t* r8_3 = &var_88
        
        do
            void* rax_14 = *r8_3
            
            if (rax_14 != 0 && modu.dp.d(0:rdi_2, zx.d(*(rax_14 + 0x22))) != 0)
                rdi_2 += rsi_1
                goto label_1414ff520
            
            r9_3 += 1
            r8_3 = &r8_3[1]
        while (r9_3 u< i_4)
    
    if ((*(r13 + 0x34) & 2) != 0)
        var_a0 = nullptr
        int128_t* r11_1 = nullptr
        int32_t var_94_1 = 0
        int32_t r9_4 = 0
        int32_t r15_2 = 0
        int32_t i_1 = 0
        
        if (i_4.b != 0)
            do
                uint64_t i_2 = zx.q(i_1)
                int64_t j = (&var_88)[i_2]
                
                if (j != 0)
                    int128_t* rax_17 = r11_1
                    void* r8_4 = r11_1 + (sx.q(r9_4) << 3)
                    
                    if (r11_1 != r8_4)
                        while (*rax_17 != j)
                            rax_17 += 8
                            
                            if (rax_17 == r8_4)
                                goto label_1414ff5d0
                    
                    if (r11_1 == r8_4 || ((rax_17 - r11_1) s>> 3).d == 0xffffffff)
                    label_1414ff5d0:
                        int64_t rbx_2 = sx.q(r9_4)
                        r9_4 = (rbx_2 + 1).d
                        
                        if (r9_4 s> r15_2)
                            sub_1405a4d70(&var_a0)
                            r11_1 = var_a0
                            r15_2 = var_94_1
                        
                        *(r11_1 + (rbx_2 << 3)) = (&var_88)[i_2]
                
                i_1 += 1
            while (i_1 u< zx.d(*(r13 + 9)))
            
            if (r11_1 != 0)
                sub_140a74f90(r11_1)
            
            r14 = arg1
        
        r15 = rax_3
    
    void*** rax_22 = j_sub_140a82f30(0xa8)
    
    if (rax_22 != 0)
        result_1 = sub_1414f8240(rax_22, r14, zx.q(*r14), r13, &var_88, var_ac_1, var_b0_1, rbp_2, 
            rdi_2, var_b4_1)
    
    *r15 = result_1
    
    if (var_b8_1 != 0)
        int64_t rdi_3 = sx.q(r14[0xbe])
        int32_t rax_24 = (rdi_3 + 1).d
        r14[0xbe] = rax_24
        
        if (rax_24 s> r14[0xbf])
            sub_1405a4d70(&r14[0xbc])
        
        *(*(r14 + 0x2f0) + (rdi_3 << 3)) = *r15
        result_1 = *r15
    
    result = result_1
else
    *(rcx_2 + 0x68) += 1
    result = *rax_3

__security_check_cookie(rax_1 ^ &var_108)
return result
