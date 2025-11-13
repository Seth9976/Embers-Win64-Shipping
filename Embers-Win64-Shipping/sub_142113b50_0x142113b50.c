// 函数: sub_142113b50
// 地址: 0x142113b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
uint64_t rbp = 0
int64_t* result_1 = arg3
int64_t* var_b0 = arg2
int64_t* result_4 = arg3
int64_t* rsi = arg2
int64_t* r13 = arg1
int64_t* var_d8_1

if (arg1 == 0)
    var_d8_1 = nullptr
else
    void* rax_2
    rax_2, arg2 = sub_1425312f0()
    void* r9_1 = r13[2]
    int64_t rax_3 = sx.q(*(rax_2 + 0x38))
    
    if (rax_3.d s> *(r9_1 + 0x38))
        var_d8_1 = nullptr
    else
        var_d8_1 = r13
        
        if (*(*(r9_1 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
            var_d8_1 = nullptr

void* rax_5
int64_t rax_6

if (r13 != 0)
    rax_5 = sub_142543020()
    arg2 = r13[2]
    rax_6 = sx.q(*(rax_5 + 0x38))

if (r13 == 0 || rax_6.d s> arg2[7].d || *(arg2[6] + (rax_6 << 3)) != rax_5 + 0x30)
    r13 = nullptr

void* i = *rsi

for (void* rdi_1 = sx.q(rsi[1].d) * 0x38 + i; i != rdi_1; i += 0x38)
    arg2.b = 1
    sub_14212fa20(i)

int64_t rbx = data_143f48a78
int64_t rcx_3

if (data_143de5480 == 0)
    rcx_3 = 0
else
    rcx_3.b = GetCurrentThreadId() != data_143de5470

int64_t* result

if (*(rbx + (rcx_3 << 2)) == 0)
    int64_t rdx_2 = 0
    result = 2
    int64_t var_f0_1 = 0
    int64_t* result_2 = 2
    int64_t* i_1
    
    do
        int32_t j = 0
        int32_t j_2 = 0
        
        if (rsi[1].d s> 0)
            int64_t r8_5 = 0
            int64_t var_c0_1 = 0
            
            do
                void* r14_1 = *(r8_5 + *rsi + 8)
                
                if (r14_1 != 0)
                    void* rax_21 = *(r14_1 + 0x28)
                    uint32_t rcx_14
                    
                    if (rax_21 == 0)
                        rcx_14 = 0x31
                    else
                        rcx_14 = zx.d(*(rax_21 + 0x58))
                    
                    if (rcx_14 == data_143f0f1a0)
                        int64_t r15_1 = sx.q(*(r14_1 + 0x54))
                        void* rsi_1 = &result_4[sx.q(*(r14_1 + 0x58))]
                        int64_t k_1 = 3
                        int64_t k
                        
                        do
                            if (rdx_2 != 0)
                                if (rdx_2 == 1 && rbp == r15_1)
                                    goto label_142113f26
                            else if (r15_1 == 1)
                            label_142113f26:
                                void* rbx_4 = *rsi_1
                                
                                if (rbx_4 == 0)
                                    int64_t rax_23
                                    int64_t* rcx_15
                                    
                                    if (r13 == 0)
                                        rcx_15 = var_d8_1
                                        rax_23 = *rcx_15
                                    else
                                        rax_23 = *r13
                                        rcx_15 = r13
                                    
                                    void* rax_24 = (*(rax_23 + 0x470))(rcx_15)
                                    rbx_4 = rax_24
                                    *rsi_1 = rax_24
                                
                                void* rdi_5 = *(rbx_4 + 8)
                                *(rbx_4 + 8) = r14_1
                                sub_14211e240(r14_1)
                                
                                if (rdi_5 != 0)
                                    sub_14212fcb0(rdi_5)
                                
                                *(rbx_4 + 0x20) |= 0xc
                                
                                if (sub_140a80f40() == 0)
                                    uint32_t rax_27
                                    
                                    if (data_143f138f4 == 0 && data_143de5480 != 0)
                                        rax_27.b = GetCurrentThreadId() == data_143de5470
                                    
                                    if (data_143f138f4 != 0
                                            || (data_143de5480 != 0 && rax_27.b == 0))
                                        void var_90
                                        void** rax_29 = sub_14210e3a0(&var_90, nullptr, 0xff)
                                        *(*rax_29 + 0x10) = rbx_4
                                        void* rcx_20 = *rax_29
                                        int32_t r8_6 = rax_29[2].d
                                        int64_t* rdx_3 = rax_29[1]
                                        int64_t* rbx_5 = *(rcx_20 + 0x20)
                                        int64_t* var_c8_1 = rbx_5
                                        int32_t* rdi_6 = &rbx_5[9]
                                        
                                        if (rbx_5 != 0)
                                            *rdi_6 += 1
                                            rbx_5 = var_c8_1
                                        
                                        sub_1407c9450(rcx_20, rdx_3, r8_6, 1)
                                        
                                        if (rbx_5 != 0)
                                            int32_t rax_30 = *rdi_6
                                            *rdi_6 -= 1
                                            
                                            if (rax_30 == 1)
                                                sub_140a2f6e0(var_c8_1)
                                    else
                                        *(rbx_4 + 0x10) = *(rbx_4 + 8)
                                else
                                    *(rbx_4 + 0x10) = *(rbx_4 + 8)
                                
                                rdx_2 = var_f0_1
                            
                            rbp += 1
                            rsi_1 += 0x20
                            k = k_1
                            k_1 -= 1
                        while (k != 1)
                        r8_5 = var_c0_1
                        rbp = 0
                        j = j_2
                        rsi = var_b0
                        result_4 = result_1
                
                j += 1
                r8_5 += 0x38
                j_2 = j
                var_c0_1 = r8_5
            while (j s< rsi[1].d)
            
            result = result_2
        
        rdx_2 += 1
        i_1 = result
        result -= 1
        var_f0_1 = rdx_2
        result_2 = result
    while (i_1 != 1)
else
    void* rdx = *rsi
    int128_t var_58 = data_1432d45b0
    int64_t r11_1 = sx.q(data_143a30368:0xc.d)
    int64_t var_78
    __builtin_memset(&var_78, 0, 0x20)
    void* r10_2 = sx.q(rsi[1].d) * 0x38 + rdx
    
    if (rdx != r10_2)
        int32_t rdi_2 = data_143f0f1a0
        
        do
            void* rax_11 = *(rdx + 8)
            
            if (rax_11 != 0)
                void* rcx_4 = *(rax_11 + 0x28)
                uint32_t r8_2
                
                if (rcx_4 == 0)
                    r8_2 = 0x31
                else
                    r8_2 = zx.d(*(rcx_4 + 0x58))
                
                if (r8_2 == rdi_2)
                    int64_t rcx_5 = sx.q(*(rax_11 + 0x54))
                    int64_t r9_2 = sx.q(*(rax_11 + 0x58))
                    int32_t r8_3 = *(&var_58 + (rcx_5 << 2))
                    
                    if (rcx_5.d == r11_1.d)
                        (&var_78)[r9_2] = rdx
                        rbp = zx.q(r8_3)
                    else if (rbp.d == *(&var_58 + (r11_1 << 2)))
                        if ((&var_78)[r9_2] == 0)
                            (&var_78)[r9_2] = rdx
                            rbp = zx.q(r8_3)
                    else if (r8_3 s> rbp.d || (&var_78)[r9_2] == 0)
                        (&var_78)[r9_2] = rdx
                        rbp = zx.q(r8_3)
            
            rdx += 0x38
        while (rdx != r10_2)
    
    result = result_1
    void* r12 = &var_78 - result
    int64_t i_3 = 4
    void* var_e0 = r12
    int64_t i_2
    
    do
        void* rbp_1 = *(r12 + result)
        
        if (rbp_1 != 0)
            void* rbp_2 = *(rbp_1 + 8)
            int64_t* result_3 = result
            int64_t j_3 = 3
            int64_t j_1
            
            do
                void* rax_13 = *result_3
                
                if (rax_13 == 0)
                    int64_t rax_12
                    int64_t* rcx_6
                    
                    if (r13 == 0)
                        rax_12 = *var_d8_1
                        rcx_6 = var_d8_1
                    else
                        rax_12 = *r13
                        rcx_6 = r13
                    
                    rax_13 = (*(rax_12 + 0x470))(rcx_6)
                    *result_3 = rax_13
                
                sub_14212fe40(rax_13)
                void* rbx_2 = *result_3
                void* rdi_3 = *(rbx_2 + 8)
                *(rbx_2 + 8) = rbp_2
                
                if (rbp_2 != 0)
                    sub_14211e240(rbp_2)
                
                if (rdi_3 != 0)
                    sub_14212fcb0(rdi_3)
                
                *(rbx_2 + 0x20) |= 0xc
                
                if (sub_140a80f40() == 0)
                    uint32_t rax_16
                    
                    if (data_143f138f4 == 0 && data_143de5480 != 0)
                        rax_16.b = GetCurrentThreadId() == data_143de5470
                    
                    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_16.b == 0))
                        void var_a8
                        void** rax_18 = sub_14210e3a0(&var_a8, nullptr, 0xff)
                        *(*rax_18 + 0x10) = rbx_2
                        void* rcx_12 = *rax_18
                        int32_t r8_4 = rax_18[2].d
                        int64_t* rdx_1 = rax_18[1]
                        int64_t* rbx_3 = *(rcx_12 + 0x20)
                        int64_t* var_d0_1 = rbx_3
                        int32_t* rdi_4 = &rbx_3[9]
                        
                        if (rbx_3 != 0)
                            *rdi_4 += 1
                            rbx_3 = var_d0_1
                        
                        sub_1407c9450(rcx_12, rdx_1, r8_4, 1)
                        
                        if (rbx_3 != 0)
                            int32_t rax_19 = *rdi_4
                            *rdi_4 -= 1
                            
                            if (rax_19 == 1)
                                sub_140a2f6e0(var_d0_1)
                    else
                        *(rbx_2 + 0x10) = *(rbx_2 + 8)
                else
                    *(rbx_2 + 0x10) = *(rbx_2 + 8)
                
                result_3 = &result_3[4]
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
            r12 = var_e0
            result = result_1
        
        result = &result[1]
        result_1 = result
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

__security_check_cookie(rax_1 ^ &var_118)
return result
