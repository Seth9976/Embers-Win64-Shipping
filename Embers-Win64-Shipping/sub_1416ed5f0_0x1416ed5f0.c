// 函数: sub_1416ed5f0
// 地址: 0x1416ed5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r12 = arg1
int32_t* r14 = *(arg1 + 0x58)
void* r15_1 = sx.q(*(arg1 + 0x60)) * 0x1c + r14

if (r14 != r15_1)
    int32_t* rdi_3 = r14 - arg2 + 4
    
    do
        int64_t rcx = 0
        void* rax_2 = arg2 + 0xc
        
        while (not(*(rax_2 - 0xc) f> *(rdi_3 + rax_2)))
            if (*rax_2 f< *(rdi_3 + rax_2 - 0xc))
                break
            
            rcx += 1
            rax_2 += 4
            
            if (rcx s>= 3)
                int64_t* rsi_1 = *arg3
                int32_t rbx_1 = *r14
                int64_t rbp_1 = sx.q(rsi_1[1].d)
                int32_t rax_3 = (rbp_1 + 1).d
                rsi_1[1].d = rax_3
                
                if (rax_3 s> *(rsi_1 + 0xc))
                    sub_1405a4cf0(rsi_1)
                
                *(*rsi_1 + (rbp_1 << 2)) = rbx_1
                break
        
        r14 = &r14[7]
        rdi_3 = &rdi_3[7]
    while (r14 != r15_1)
    
    r12 = arg1

int64_t* var_38 = nullptr
int64_t var_30 = 1
sub_1405a4d70(&var_38)
int64_t* rsi_2 = var_38
int32_t i = var_30.d
*rsi_2 = 0
int64_t result

while (i != 0)
    int32_t i_1 = i - 1
    int32_t r13_2 = i - i_1
    int32_t rdi_4 = (rsi_2[sx.q(i_1)]).d
    
    if (r13_2 != 1)
        memmove(&rsi_2[sx.q(i_1)], &rsi_2[sx.q(i_1 + 1)], (r13_2 - 1) << 3)
    
    i = i_1
    void* rbx_3 = sx.q(rdi_4) * 0x3c + *(r12 + 0x28)
    
    if (*(rbx_3 + 0x38) != 0)
        int64_t rcx_5 = sx.q(*(rbx_3 + 0x30)) * 5
        int64_t rax_9 = *(r12 + 0x38)
        int32_t* r14_1 = *(rax_9 + (rcx_5 << 3))
        void* r12_3 = sx.q(*(rax_9 + (rcx_5 << 3) + 8)) * 0x1c + r14_1
        
        if (r14_1 != r12_3)
            int64_t result_1 = &r14_1[4]
            int32_t* rdi_7 = arg2 - r14_1 - 4
            
            do
                int64_t rcx_6 = 0
                result = result_1
                
                while (not(*(result - 0xc) f> *(rdi_7 + result)))
                    if (*result f< *(rdi_7 + result - 0xc))
                        break
                    
                    rcx_6 += 1
                    result += 4
                    
                    if (rcx_6 s>= 3)
                        int64_t* rsi_3 = *arg3
                        int32_t rbx_4 = *r14_1
                        int64_t rbp_3 = sx.q(rsi_3[1].d)
                        int32_t rax_10 = (rbp_3 + 1).d
                        rsi_3[1].d = rax_10
                        
                        if (rax_10 s> *(rsi_3 + 0xc))
                            sub_1405a4cf0(rsi_3)
                        
                        *(*rsi_3 + (rbp_3 << 2)) = rbx_4
                        break
                
                r14_1 = &r14_1[7]
                result_1 += 0x1c
                rdi_7 -= 0x1c
            while (r14_1 != r12_3)
            
            i = i_1
            rsi_2 = var_38
        
        r12 = arg1
    else if (rbx_3 != rbx_3 + 0x30)
        void* r8_3 = arg2
        int32_t* rsi_4 = rbx_3 + 0x30
        int64_t* rdx_5 = var_38
        void* rbx_5 = rbx_3 - r8_3
        void* r14_2 = r8_3 + 0xc
        
        do
            int64_t rcx_9 = 0
            void* rax_11 = r14_2
            
            while (not(*(rax_11 - 0xc) f> *(rbx_5 + rax_11)))
                if (*rax_11 f< *(rbx_5 + rax_11 - 0xc))
                    break
                
                rcx_9 += 1
                rax_11 += 4
                
                if (rcx_9 s>= 3)
                    int32_t rax_12 = *rsi_4
                    int64_t i_2 = sx.q(i)
                    int32_t var_3c_1 = 0
                    i = (i_2 + 1).d
                    var_30.d = i
                    
                    if (i s> var_30:4.d)
                        sub_1405a4d70(&var_38)
                        rdx_5 = var_38
                        r8_3 = arg2
                        i = var_30.d
                    
                    rdx_5[i_2] = rax_12.q
                    break
            
            rbx_5 += 0x18
            rsi_4 = &rsi_4[1]
        while (rbx_5 + r8_3 != rbx_3 + 0x30)
        
        rsi_2 = var_38

if (rsi_2 != 0)
    sub_140a74f90(rsi_2)

result.b = 1
return result
