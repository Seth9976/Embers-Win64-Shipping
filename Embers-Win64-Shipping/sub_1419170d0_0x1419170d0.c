// 函数: sub_1419170d0
// 地址: 0x1419170d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
bool cond:0 = data_143f01c92 == 0
void* r12 = arg2
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x40)
int32_t rax_2 = *(arg2 + 0x890)
void* rax_3 = *(arg1 + 0x570)
uint32_t r13 = *(arg2 + 0x88c)
void* rsi = *(rax_3 + 0x80)
void* rbx = *(rax_3 + 0x88)
void* var_b8 = rsi
void* var_c0 = arg1
char var_e8 = 0

if (not(cond:0))
    sub_140a80f40()
    arg1 = var_c0

uint64_t result = *(rbx + 0x38)
int32_t rdi = 0
int32_t r8 = arg5
uint32_t r14 = zx.d(*(result + 0xb0))
uint32_t var_dc = r14
int32_t var_f8

if (*(r12 + 0x880) != rsi || r14 != *(r12 + 0x888))
    *(r12 + 0x890) = 0
    r13 = 0
    var_e8 = 1
    int32_t i_1 = 0
    
    if (*(rsi + 0x1d8) s> 0)
        void* rbx_1 = rsi + 0x28
        int32_t i
        
        do
            uint64_t rbp_1 = zx.q(*(rbx_1 + 9))
            void* rsi_1 = *(*(arg1 + 0x570) + 0x88)
            
            if (data_143f01c92 != 0)
                sub_140a80f40()
                r8 = arg5
            
            int32_t rcx = rbp_1.d
            uint64_t r12_1 = zx.q(*(rbx_1 - 0xc))
            int32_t r15_1 = 1 << rcx.b
            uint32_t rdx = zx.d(*(*(rsi_1 + 0x38) + 0xb0))
            result = zx.q(*(r12 + 0x890))
            
            if (result.d u>= rbp_1.d)
                rcx = result.d
            
            *(r12 + 0x890) = rcx
            void* rsi_2 = r12 + rbp_1 * 0x28
            
            if ((r15_1 & rdx) == 0)
            label_1419172fe:
                
                if (*(rsi_2 + 0x498) != r12_1.d)
                    result = data_143f00330(zx.q(rbp_1.d), zx.q(*(rbx_1 - 0xc)))
                    *(rsi_2 + 0x498) = r12_1.d
            else
                int32_t rcx_3 = *(rbx_1 - 0xc)
                
                if (rcx_3 u< r8)
                    char var_68[0x10]
                    var_68[r12_1] = 1
                    int32_t rcx_4 = *(rbx_1 - 8)
                    r13 |= 1 << rcx_3.b
                    *(&var_a8 + (r12_1 << 2)) = *rbx_1
                    
                    if (*(rsi_2 + 0x494) == rcx_4 && *(rsi_2 + 0x488) == *(rbx_1 - 4)
                            && *(rsi_2 + 0x490) == *(rbx_1 - 0x10))
                        result = zx.q(*(rbx_1 + 8))
                    
                    if (*(rsi_2 + 0x494) != rcx_4 || *(rsi_2 + 0x488) != *(rbx_1 - 4)
                            || *(rsi_2 + 0x490) != *(rbx_1 - 0x10) || *(rsi_2 + 0x49c) != result.b)
                        uint64_t r8_1 = zx.q(*(rbx_1 - 0x10))
                        uint64_t rdx_1 = zx.q(*(rbx_1 - 4))
                        
                        if (*(rbx_1 + 0xa) != 0)
                            var_f8 = rcx_4
                            data_143f00320(zx.q(rbp_1.d), rdx_1, r8_1, zx.q(*(rbx_1 + 8)), var_f8)
                        else
                            data_143f00328(zx.q(rbp_1.d), rdx_1, r8_1, zx.q(rcx_4), var_f8)
                        
                        *(rsi_2 + 0x494) = *(rbx_1 - 8)
                        *(rsi_2 + 0x488) = *(rbx_1 - 4)
                        *(rsi_2 + 0x490) = *(rbx_1 - 0x10)
                        result = zx.q(*(rbx_1 + 8))
                        *(rsi_2 + 0x49c) = result.b
                    
                    goto label_1419172fe
                
                result = data_143f00018(zx.q(rbp_1.d), &data_143eff5f0)
                r14 &= not.d(r15_1)
            
            rbx_1 += 0x1c
            rsi = var_b8
            i = i_1 + 1
            r8 = arg5
            i_1 = i
            arg1 = var_c0
        while (i s< *(rsi + 0x1d8))
        r12 = arg2
        rdi = 0
        var_dc = r14
    
    *(r12 + 0x880) = rsi
    *(r12 + 0x88c) = r13

int32_t rbp_2 = 0

if (r8 != 0)
    void* var_d0_1 = arg4 - r12
    void* rbx_2 = r12 + 0x704
    int64_t* r15_2 = &var_a8
    
    do
        int32_t rcx_9 = *(var_d0_1 + rbx_2 - 0x6fc)
        int32_t rsi_5 = rcx_9 * arg3 + *(var_d0_1 + rbx_2 - 0x6f8)
        
        if ((r13.b & 1) != 0)
            result = *(var_d0_1 + rbx_2 - 0x704)
        
        if ((r13.b & 1) == 0 || result == 0)
            result = *(var_d0_1 + rbx_2 - 0x704)
            
            if (*(rbx_2 - 0xc) != result || *rbx_2 != rsi_5 || *(rbx_2 - 4) != rcx_9)
                result = data_143f00318(zx.q(rbp_2), 0, 0, 0, var_f8)
                *(rbx_2 - 0xc) = 0
                *(rbx_2 - 4) = 0
                r8 = arg5
        else
            if (*(rbx_2 - 0xc) != result || *rbx_2 != rsi_5 || *(rbx_2 - 4) != rcx_9)
                data_143f00318(zx.q(rbp_2), zx.q(*(result + 0x28)), zx.q(rsi_5), zx.q(rcx_9), 
                    var_f8)
                r8 = arg5
                *(rbx_2 - 0xc) = *(var_d0_1 + rbx_2 - 0x704)
                *rbx_2 = rsi_5
                result = zx.q(*(var_d0_1 + rbx_2 - 0x6fc))
                *(rbx_2 - 4) = result.d
            
            if (var_e8 != 0)
                int32_t rsi_6 = *r15_2
                
                if (*(rbx_2 + 4) != rsi_6)
                    result = data_143f00338(zx.q(rbp_2), zx.q(rsi_6))
                    *(rbx_2 + 4) = rsi_6
                    r8 = arg5
        
        rbp_2 += 1
        r13 u>>= 1
        rbx_2 += 0x18
        r15_2 += 4
    while (rbp_2 u< r8)
    
    r14 = var_dc
    r12 = arg2

uint32_t rbx_4 = r14 ^ *(r12 + 0x888)

if (rbx_4 != 0)
    int32_t rcx_14 = rax_2
    result = zx.q(*(r12 + 0x890))
    *(r12 + 0x888) = r14
    
    if (result.d u>= rcx_14)
        rcx_14 = result.d
    
    int32_t var_e4_1 = rcx_14
    
    while (rdi u<= rcx_14)
        if (rbx_4 == 0)
            break
        
        if ((rbx_4.b & 1) != 0)
            uint64_t rcx_15 = zx.q(rdi)
            
            if ((r14.b & 1) == 0)
                result = data_143effda8(rcx_15)
            else
                result = data_143effdb0(rcx_15)
            
            rcx_14 = var_e4_1
        
        r14 u>>= 1
        rdi += 1
        rbx_4 u>>= 1
        
        if (rdi u>= 0x10)
            break

__security_check_cookie(rax_1 ^ &var_118)
return result
