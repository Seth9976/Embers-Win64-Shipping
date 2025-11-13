// 函数: sub_140d1caa0
// 地址: 0x140d1caa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_458
int64_t rax_1 = __security_cookie ^ &var_458
void* result = *arg2
int32_t r13 = 0
int64_t* r12 = arg2
int32_t var_408 = 0
char rsi = 0
void* const result_1

if (result == 0)
    result_1 = nullptr
else
    result = result()
    result_1 = result

if (*arg1 == 0)
    void var_2b8
    void* rax_2 = sub_14060c4d0(&var_2b8, r12[2])
    int32_t rdi_1 = *(r12 + 0x2c)
    void var_3e0
    uint64_t rbx_1 = *sub_140b58260(&var_3e0, *(rax_2 + 0x108), 1)
    void* rax_5
    int64_t r9_2
    rax_5, r9_2 = sub_140d2d830(sub_140bdf730(), result_1, rbx_1, rdi_1, 0, 0, nullptr)
    void var_198
    void*** rbx_3
    
    if (rax_5 == 0)
        rbx_3 = nullptr
    else
        void*** rax_7
        rax_7, r9_2 = sub_140bd62f0(rax_5, sub_140d159c0(&var_198))
        rbx_3 = rax_7
        rsi = 1
    
    var_408.q = rbx_3
    
    if ((rsi & 1) != 0)
        sub_140d16260(&var_198)
    
    int64_t var_1b8
    
    if (var_1b8 != 0)
        sub_140a74f90(var_1b8)
    
    *arg1 = rbx_3
    int32_t rax_8 = r12[5].d
    int64_t var_418 = 0
    int64_t var_410_1 = 0
    
    if (rax_8 s> 0)
        sub_1405a5410(&var_418, rax_8)
        rax_8 = r12[5].d
    
    int64_t* rsi_1 = r12[4]
    int64_t r14_1 = -1
    void* r15_2 = &rsi_1[sx.q(rax_8) * 2]
    int64_t* var_3f8_1 = rsi_1
    void* var_3f0_1 = r15_2
    void var_3d8
    char* var_2d8
    
    if (rsi_1 != r15_2)
        do
            char* r12_1 = *rsi_1
            char* rdx_5 = nullptr
            var_2d8 = nullptr
            char* rdi_2
            
            if (r12_1 == 0)
                rdi_2 = nullptr
                int64_t var_2d0_2 = 0
                int32_t var_2c8_2 = 0
            else
                int64_t rsi_2 = -1
                
                do
                    rsi_2 += 1
                while (r12_1[rsi_2] != 0)
                
                char* rax_9 = r12_1
                void* r15_4 = &r12_1[sx.q(rsi_2.d)]
                char* var_400 = rax_9
                int32_t rbx_4 = 0
                int32_t i = 0x7fffffff
                
                if (r12_1 u< r15_4)
                    while (i s> 0)
                        int32_t rax_12
                        int32_t rcx_9
                        
                        if (sub_14060e800(&var_400, r15_4.d - rax_9.d) - 0x10000 u> 0xfffff
                                || i s< 2)
                            rax_12 = 1
                            rcx_9 = -1
                        else
                            rax_12 = 2
                            rcx_9 = -2
                        
                        rbx_4 += rax_12
                        i += rcx_9
                        rax_9 = var_400
                        
                        if (rax_9 u>= r15_4)
                            break
                    
                    rdx_5 = var_2d8
                
                int32_t var_2c8_1 = rbx_4
                
                if (rbx_4 + 1 u> 0x80 && rbx_4 != 0xffffffff)
                    char* rax_13 = sub_140a84c80(0, sx.q(rbx_4 + 1) * 2, 0)
                    rdx_5 = rax_13
                    var_2d8 = rax_13
                
                char* rcx_10 = &var_3d8
                
                if (rdx_5 != 0)
                    rcx_10 = rdx_5
                
                var_400 = rcx_10
                sub_140917060(&var_400, rbx_4 + 1, r12_1, (rsi_2 + 1).d)
                rdi_2 = rcx_10
                rsi_1 = var_3f8_1
                r15_2 = var_3f0_1
            
            int64_t rbx_6 = sx.q(var_410_1.d)
            int32_t rax_14 = (rbx_6 + 1).d
            var_410_1.d = rax_14
            
            if (rax_14 s> var_410_1:4.d)
                sub_1405a4f90(&var_418)
            
            int64_t* rbx_8 = (rbx_6 << 4) + var_418
            sub_140b58260(rbx_8, rdi_2, 1)
            rbx_8[1] = rsi_1[1]
            
            if (var_2d8 != 0)
                sub_140a74f90(var_2d8)
            
            rsi_1 = &rsi_1[2]
            var_3f8_1 = rsi_1
        while (rsi_1 != r15_2)
        
        r12 = arg2
        rbx_3 = var_408.q
    
    r9_2.b = r12[6].d == 0
    (*rbx_3)[0x52](rbx_3, &var_418, zx.q(*(r12 + 0x34)), r9_2)
    int16_t* rdi_3 = *(sub_14060c4d0(&var_3d8, r12[3]) + 0x108)
    
    if (rbx_3[6] != rdi_3)
        int32_t r14_2
        
        if (rdi_3 == 0 || *rdi_3 == 0)
            r14_2 = 0
        else
            do
                r14_1 += 1
            while (rdi_3[r14_1] != 0)
            
            r14_2 = r14_1.d + 1
        
        rbx_3[7].d = 0
        
        if (*(rbx_3 + 0x3c) != r14_2)
            sub_1405947f0(&rbx_3[6], r14_2)
            r13 = rbx_3[7].d
        
        int32_t rax_18 = r14_2 + r13
        rbx_3[7].d = rax_18
        
        if (rax_18 s> *(rbx_3 + 0x3c))
            sub_140594770(&rbx_3[6])
        
        if (r14_2 != 0)
            memcpy(rbx_3[6], rdi_3, r14_2 * 2)
    
    if (var_2d8 != 0)
        sub_140a74f90(var_2d8)
    
    result = r12[1]
    
    if (result != 0)
        *(var_408.q + 0x58) = result
    
    int64_t rcx_22 = var_418
    
    if (rcx_22 != 0)
        result = sub_140a74f90(rcx_22)

__security_check_cookie(rax_1 ^ &var_458)
return result
