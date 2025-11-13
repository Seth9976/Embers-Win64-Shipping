// 函数: sub_14199f040
// 地址: 0x14199f040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int64_t rsi = 0
int32_t r10 = 8
void** rbx_1 = arg1[5] + 8
int32_t var_108 = 0
void* r13 = arg2
int32_t var_104 = 8
char* rdx = nullptr
void* var_c0 = nullptr
char* var_110 = nullptr
int64_t* r14 = arg1
int32_t var_b8 = 0
uint32_t rdi = 0
int32_t var_b4 = 8
int32_t i = 0
void var_118

if (rbx_1[1].d s> 0)
    do
        void* r9_1 = *rbx_1
        int64_t rax_3 = r9_1 s>> 1
        void* r8_1 = rax_3 + rbx_1
        char rcx = *rbx_1 & 1
        
        if (rcx == 0)
            r8_1 = r9_1
        
        if (*(rsi + r8_1 + 2) == 0x13)
            void* rax_4 = rax_3 + rbx_1
            
            if (rcx == 0)
                rax_4 = r9_1
            
            void* r15_1 = *(zx.q(*(rax_4 + rsi)) + r14[4])
            
            if (r15_1 != 0)
                char r14_1 = *(*(r15_1 + 0x18) + 4)
                
                if (r14_1 u< 0xff)
                    if (rdi + 1 s> r10)
                        sub_1419ab090(&var_118, rdi)
                        rdx = var_110
                    
                    char* rcx_3 = &var_118
                    
                    if (rdx != 0)
                        rcx_3 = rdx
                    
                    rcx_3[sx.q(rdi)] = r14_1
                    int64_t rdi_1 = sx.q(var_b8)
                    int32_t rax_9 = (rdi_1 + 1).d
                    var_b8 = rax_9
                    void var_100
                    
                    if (rax_9 s> var_b4)
                        sub_1407752f0(&var_100, rdi_1.d)
                    
                    void* rcx_5 = &var_100
                    
                    if (var_c0 != 0)
                        rcx_5 = var_c0
                    
                    *(rcx_5 + (rdi_1 << 3)) = r15_1
                    r10 = var_104
                    rdi += 1
                    rdx = var_110
                
                r14 = arg1
        
        i += 1
        rsi += 4
    while (i s< rbx_1[1].d)
    
    rsi = 0

void var_180
void* rax_11 = sub_141992f50(&var_180, &var_118)
void* r15_2 = r13 + 0x30
void*** rcx_9 = (*(r13 + 0x30) + 7) & 0xfffffffffffffff8
void* rdx_4 = &rcx_9[0xf]

if (rdx_4 u> *(r15_2 + 8))
    sub_140b0e3d0(r15_2, 0x80)
    rcx_9 = (*r15_2 + 7) & 0xfffffffffffffff8
    rdx_4 = &rcx_9[0xf]

*r15_2 = rdx_4
void**** rax_12 = *(r13 + 8)
*(r13 + 0x14) += 1
*rax_12 = rcx_9
*(r13 + 8) = &rcx_9[1]
*rcx_9 = &data_143009c00
rcx_9[1] = 0
sub_141992f50(&rcx_9[2], rax_11)
int64_t rcx_14 = *(rax_11 + 0x58)

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t rcx_15 = *(rax_11 + 8)

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

(*(*r14 + 8))(r14, r13)
int32_t i_1 = 0
void** rdi_3 = r14[5] + 8

if (rdi_3[1].d s> 0)
    do
        void* r8_2 = *rdi_3
        int64_t rax_16 = r8_2 s>> 1
        void* rcx_17 = rax_16 + rdi_3
        char rdx_7 = *rdi_3 & 1
        
        if (rdx_7 == 0)
            rcx_17 = r8_2
        
        if (*(rsi + rcx_17 + 2) == 0x13)
            void* rax_17 = rax_16 + rdi_3
            
            if (rdx_7 == 0)
                rax_17 = r8_2
            
            int64_t* rcx_19 = zx.q(*(rax_17 + rsi)) + arg1[4]
            void var_188
            
            if (rcx_19 != &var_188)
                int64_t* rbx_3 = *rcx_19
                *rcx_19 = 0
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        char rax_19
                        
                        if (rbx_3[2].b == 0 && data_143f0f1d0 == 0)
                            rax_19 = sub_1405949a0()
                        
                        if (rbx_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_19 != 0))
                            (**rbx_3)(rbx_3, 1)
                        else
                            bool z_1
                            
                            if (0 == *(rbx_3 + 0xc))
                                *(rbx_3 + 0xc) = 1
                                z_1 = true
                            else
                                *(rbx_3 + 0xc)
                                z_1 = false
                            
                            if (z_1)
                                int32_t rax_21 = sub_140a20af0()
                                uint64_t rdx_8 = zx.q(rax_21)
                                void* const rax_22
                                
                                if (rax_21 != 0)
                                    rax_22 = *(&data_143cf0bf8 + (rdx_8 u>> 0xe << 3))
                                        + (zx.q(rdx_8.d) & 0x3fff) * 0x18
                                else
                                    rax_22 = nullptr
                                
                                *(rax_22 + 8) = rbx_3
                                sub_1405a42f0(&data_143f02390, rdx_8.d)
        
        i_1 += 1
        rsi += 4
    while (i_1 s< rdi_3[1].d)
    
    r13 = arg2
    r15_2 = r13 + 0x30

void var_b0
memset(&var_b0, 0, 0x68)
int32_t var_9c = 8
void*** rcx_27 = (*r15_2 + 7) & 0xfffffffffffffff8
int64_t var_58 = 0
int32_t var_50 = 0
int32_t var_4c = 8
void* rax_27 = &rcx_27[0xf]

if (rax_27 u> *(r15_2 + 8))
    sub_140b0e3d0(r15_2, 0x80)
    rcx_27 = (*r15_2 + 7) & 0xfffffffffffffff8
    rax_27 = &rcx_27[0xf]

*r15_2 = rax_27
int64_t* rax_28 = *(r13 + 8)
*(r13 + 0x14) += 1
*rax_28 = rcx_27
*(r13 + 8) = &rcx_27[1]
*rcx_27 = &data_143009c00
rcx_27[1] = 0
void* result = sub_141992f50(&rcx_27[2], &var_b0)

if (var_58 != 0)
    result = sub_140a74f90(var_58)

int64_t var_a8

if (var_a8 != 0)
    result = sub_140a74f90(var_a8)

if (var_c0 != 0)
    result = sub_140a74f90(var_c0)

if (var_110 != 0)
    result = sub_140a74f90(var_110)

__security_check_cookie(rax_1 ^ &var_1b8)
return result
