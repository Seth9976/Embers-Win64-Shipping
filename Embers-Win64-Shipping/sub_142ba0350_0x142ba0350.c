// 函数: sub_142ba0350
// 地址: 0x142ba0350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t arg_10 = arg2
int64_t r9 = sx.q(arg2)
int32_t r13 = 0
int64_t r8 = r9 * 0x898
arg2.b = 0
void* r15 = nullptr
int32_t var_64 = 0
void* rbp = *(r8 + arg1 + 0x50)
void* rdi = rbp
void* var_60 = rbp
char arg_18 = 0
int32_t arg_20 = 0
int64_t rax_1 = sx.q(*(r8 + arg1 + 0x48)) * 0x48
void* i = rax_1 + rbp
int32_t var_68 = 0

if (rbp u< i)
    do
        if ((*(rdi + 0xc) & 4) == 0)
            void* rcx = *(rdi + 0x18)
            void* r14_1 = *(rdi + 0x20)
            void* rax_2
            
            if (rcx != 0)
                rax_2 = rdi
            label_142ba040c:
                
                if (rax_2 != 0)
                    int32_t r12_1 = *(rcx + 8)
                    *(rax_2 + 0xc) |= 4
                    *(rax_2 + 8) = r12_1
                    
                    if (r14_1 != 0 && *(r14_1 + 0x18) == 0)
                        uint32_t rbx_1 = zx.d(*(r14_1 + 0xc))
                        *(rax_2 + 0xc)
                        uint32_t var_78_1 = rbx_1
                        int32_t rax_3
                        rax_3, arg2 = sub_142ba0200(arg1, arg_10, *(r14_1 + 4) - *(rax_2 + 4))
                        rbx_1.b |= 4
                        *(r14_1 + 8) = rax_3 + r12_1
                        *(r14_1 + 0xc) = rbx_1.b
                    
                    if (r15 == 0)
                        r15 = rdi
            else if (r14_1 != 0)
                rcx = *(r14_1 + 0x18)
                
                if (rcx != 0)
                    rax_2 = r14_1
                    r14_1 = rdi
                    goto label_142ba040c
        
        rdi += 0x48
    while (rdi u< i)
    
    rbp = var_60
    arg2.b = 0
    r13 = 0
    int32_t rcx_2 = 0
    r9 = zx.q(arg_10)
    int32_t r8_4 = 0
    void* r10_1 = arg1
    
    if (rbp u< i)
        char* rdi_1 = rbp + 0xc
        int32_t rbp_2 = r9.d
        
        do
            char r12_2 = *rdi_1
            
            if ((r12_2 & 4) == 0)
                void* rbx_2 = *(rdi_1 + 0x14)
                
                if (rbx_2 == 0)
                    r13 += 1
                else if (arg2.b != 0
                        && (*(rdi_1 - 4) s< rcx_2 + 0x40 || *(rbx_2 + 8) s< rcx_2 + 0x40))
                    r13 += 1
                else if (*(rbx_2 + 0x18) == 0)
                    if (rbx_2 u>= &rdi_1[-0xc])
                        if (rbp_2 == 1 || r15 != 0)
                            sub_142ba30f0(r10_1, &rdi_1[-0xc], rbx_2, r8_4, rbp_2)
                        else
                            int32_t rax_11
                            rax_11, arg2 = sub_142ba30f0(r10_1, &rdi_1[-0xc], rbx_2, 0, r15.d)
                            var_68 = rax_11
                        
                        *rdi_1 |= 4
                        r15 = &rdi_1[-0xc]
                        *(rbx_2 + 0xc) |= 4
                        rcx_2 = *(rbx_2 + 8)
                    else
                        *(rbx_2 + 0xc)
                        uint32_t var_78_3 = zx.d(r12_2)
                        int32_t rax_10
                        rax_10, arg2 = sub_142ba0200(r10_1, rbp_2, *(rdi_1 - 8) - *(rbx_2 + 4))
                        rcx_2 = rax_10 + *(rbx_2 + 8)
                        *(rdi_1 - 4) = rcx_2
                        *rdi_1 = r12_2 | 4
                    
                    arg2.b = 1
                    arg_20 = rcx_2
                    arg_18 = 1
                else
                    *(rbx_2 + 0xc)
                    uint32_t var_78_2 = zx.d(r12_2)
                    int32_t rax_8 =
                        sub_142ba0200(r10_1, rbp_2, *(rdi_1 - 8) - *(rbx_2 + 4)) + *(rbx_2 + 8)
                    rcx_2 = arg_20
                    arg2 = zx.d(arg_18)
                    *rdi_1 = r12_2 | 4
                    *(rdi_1 - 4) = rax_8
            
            r10_1 = arg1
            rdi_1 = &rdi_1[0x48]
            r8_4 = var_68
        while (&rdi_1[-0xc] u< i)
        
        rbp = var_60
        r9 = zx.q(arg_10)

int64_t rax_13
int64_t rdx_5
rdx_5:rax_13 = muls.dp.q(0xe38e38e38e38e39, rax_1)
void* result = rdx_5 s>> 2 u>> 0x3f
void* rdx_7 = rax_1 s/ 0x48

if (r9.d == 0)
    void* r8_11
    int64_t r10_2
    int64_t r11_1
    
    if (rdx_7 == 6)
        r8_11 = rbp
        r10_2 = 0x90
        r11_1 = 0x120
    label_142ba0641:
        result = r8_11 + 0x48
        int32_t result_1 = *(r10_2 + rbp + 4) * 2 - *(r11_1 + rbp + 4) - *(r8_11 + 4)
        
        if (*(r8_11 + 0x20) == result)
            result = rbp + 0x48 + r10_2
            
            if (*(r10_2 + rbp + 0x20) == result)
                void* r9_5 = *(r11_1 + rbp + 0x20)
                result = rbp + 0x48 + r11_1
                
                if (r9_5 == result)
                    result = zx.q(neg.d(result_1))
                    
                    if (result_1 s>= 0)
                        result = zx.q(result_1)
                    
                    if (result.d s< 8)
                        int32_t rcx_11 = *(r11_1 + rbp + 8)
                        int32_t r8_14 = *(r8_11 + 8) - *(r10_2 + rbp + 8) * 2 + rcx_11
                        *(r11_1 + rbp + 8) = rcx_11 - r8_14
                        
                        if (r9_5 != 0)
                            *(r9_5 + 8) -= r8_14
                        
                        if (rdx_7 == 0xc)
                            *(rbp + 0x248) -= r8_14
                            *(rbp + 0x320) -= r8_14
                        
                        *(r11_1 + rbp + 0xc) |= 4
                        result = *(r11_1 + rbp + 0x20)
                        
                        if (result != 0)
                            *(result + 0xc) |= 4
    else if (rdx_7 == 0xc)
        r8_11 = rbp + 0x48
        r10_2 = 0x168
        r11_1 = 0x288
        goto label_142ba0641

if (r13 != 0)
    if (rbp u< i)
        int64_t* r8_15 = rbp + 0x28
        int64_t rdx_8
        rdx_8:result = mulu.dp.q(-0x1c71c71c71c71c71, i - rbp - 1)
        int64_t i_2 = (i - rbp - 1) u/ 0x48 + 1
        int64_t i_1
        
        do
            char rcx_16 = *(r8_15 - 0x1c)
            
            if ((rcx_16 & 4) == 0)
                void* r9_6 = *r8_15
                
                if (r9_6 != 0)
                    result = zx.q(*(r8_15 - 0x24) - *(r9_6 + 4) + *(r9_6 + 8))
                    r8_15[-4].d = result.d
                    r13 -= 1
                    *(r8_15 - 0x1c) = rcx_16 | 4
            
            r8_15 = &r8_15[9]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    if (r13 != 0 && rbp u< i)
        void* rdi_2 = rbp - 0x48
        
        do
            if ((*(rdi_2 + 0x54) & 4) == 0)
                void* rbx_3 = rdi_2
                
                if (rdi_2 u>= rbp)
                    while ((*(rbx_3 + 0xc) & 4) == 0)
                        rbx_3 -= 0x48
                        
                        if (rbx_3 u< rbp)
                            break
                
                void* rax_22 = rdi_2 + 0x90
                
                if (rax_22 u< i)
                    while ((*(rax_22 + 0xc) & 4) == 0)
                        rax_22 += 0x48
                        
                        if (rax_22 u>= i)
                            break
                
                if (rbx_3 u>= rbp)
                    int32_t rax_25
                    
                    if (rax_22 u< i)
                        int16_t rcx_20 = *rbx_3
                        int16_t rdx_10 = *rax_22
                        
                        if (rdx_10 != rcx_20)
                            int32_t r9_7 = sx.d(rcx_20)
                            rax_25 = sub_142b93dd0(sx.d(*(rdi_2 + 0x48)) - r9_7, 
                                *(rax_22 + 8) - *(rbx_3 + 8), sx.d(rdx_10) - r9_7) + *(rbx_3 + 8)
                        else
                            rax_25 = *(rbx_3 + 8)
                    else
                        rax_25 = *(rdi_2 + 0x4c) - *(rbx_3 + 4) + *(rbx_3 + 8)
                    
                    *(rdi_2 + 0x50) = rax_25
                else if (rax_22 u< i)
                    *(rdi_2 + 0x50) = *(rdi_2 + 0x4c) - *(rax_22 + 4) + *(rax_22 + 8)
            
            rdi_2 += 0x48
            result = rdi_2 + 0x48
        while (result u< i)

return result
