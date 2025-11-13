// 函数: sub_141cd0e90
// 地址: 0x141cd0e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
uint64_t* r13 = arg3
int64_t* r14 = arg1
int64_t r15 = 0
arg3[1].d = 0

if (*(arg3 + 0xc) s<= 0xffffffff)
    sub_1405dadb0(arg3, 0)

int32_t (* var_58)[0xe] = nullptr
int32_t var_50 = 0
int32_t var_4c = 0x10
int32_t var_98[0xe]
sub_141cd1300(r14, arg2, &var_98)
int32_t (* rcx_2)[0xe] = var_58
int32_t (* rdx_1)[0xe] = &var_98

if (rcx_2 != 0)
    rdx_1 = rcx_2

int32_t (* var_e8)[0xe] = rdx_1
uint64_t result = &(*rdx_1)[sx.q(var_50)]
uint64_t result_1 = result

if (rdx_1 != result)
    do
        int32_t rbx_1 = 0
        void* var_a8_1 = nullptr
        void* r8_1 = nullptr
        int32_t var_a0_1 = 0
        int32_t var_9c_1 = 8
        int64_t rax_4 = r14[0xe]
        int64_t rsi_1 = sx.q(*rdx_1) * 0x18
        int32_t rdx_2 = *(rsi_1 + rax_4 + 0x10)
        void var_c8
        
        if (rdx_2 s> 8)
            sub_141a64350(&var_c8, rdx_2)
            rax_4 = r14[0xe]
            r8_1 = var_a8_1
            rbx_1 = var_a0_1
        
        int32_t* r14_1 = *(rsi_1 + rax_4 + 8)
        int64_t rsi_2 = 0
        uint64_t r12_2 = sx.q(*(rsi_1 + rax_4 + 0x10)) << 2 u>> 2
        
        if (r14_1 u> &r14_1[sx.q(*(rsi_1 + rax_4 + 0x10))])
            r12_2 = 0
        
        if (r12_2 != 0)
            do
                void* r9_1 = &var_c8
                void* r15_3 = (sx.q(*r14_1) << 4) + arg1[0x15]
                
                if (r8_1 != 0)
                    r9_1 = r8_1
                
                void* rax_7 = r9_1
                void* rdx_3 = r9_1 + (sx.q(rbx_1) << 2)
                
                if (r9_1 != rdx_3)
                    while (*rax_7 != *(r15_3 + 0xc))
                        rax_7 += 4
                        
                        if (rax_7 == rdx_3)
                            goto label_141cd1021
                
                if (r9_1 == rdx_3 || ((rax_7 - r9_1) s>> 2).d == 0xffffffff)
                label_141cd1021:
                    
                    if (rbx_1 + 1 s> var_9c_1)
                        sub_14083a280(&var_c8, rbx_1)
                        r8_1 = var_a8_1
                    
                    void* rdx_5 = &var_c8
                    
                    if (r8_1 != 0)
                        rdx_5 = r8_1
                    
                    *(rdx_5 + (sx.q(rbx_1) << 2)) = *(r15_3 + 0xc)
                    rbx_1 += 1
                    r8_1 = var_a8_1
                
                r14_1 = &r14_1[1]
                rsi_2 += 1
            while (rsi_2 != r12_2)
            
            r13 = arg3
            r15 = 0
        
        void* r14_2 = &var_c8
        
        if (r8_1 != 0)
            r14_2 = r8_1
        
        int64_t r12_3 = sx.q(rbx_1) << 2
        uint64_t r12_4 = r12_3 u>> 2
        result = 0
        
        if (r14_2 u> r12_3 + r14_2)
            r12_4 = 0
        
        if (r12_4 != 0)
            do
                int32_t rbx_2 = *r14_2
                
                if (rbx_2 != arg2)
                    int64_t rsi_3 = sx.q(r13[1].d)
                    int32_t rax_14 = (rsi_3 + 1).d
                    r13[1].d = rax_14
                    
                    if (rax_14 s> *(r13 + 0xc))
                        sub_1405a4cf0(r13)
                    
                    result = *r13
                    *(result + (rsi_3 << 2)) = rbx_2
                
                r14_2 += 4
                r15 += 1
            while (r15 != r12_4)
            
            r8_1 = var_a8_1
        
        if (r8_1 != 0)
            result = sub_140a74f90(r8_1)
        
        r15 = 0
        r14 = arg1
        rdx_1 = &(*var_e8)[1]
        var_e8 = rdx_1
    while (rdx_1 != result_1)
    
    rcx_2 = var_58

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

__security_check_cookie(rax_1 ^ &var_108)
return result
