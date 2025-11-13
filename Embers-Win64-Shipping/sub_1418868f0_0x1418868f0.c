// 函数: sub_1418868f0
// 地址: 0x1418868f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
int64_t* result = arg1
int64_t* rsi = arg5
int64_t* rdi = arg3
int64_t r14 = arg4
int32_t r15 = 0
*result = 0
result[1] = 0
int64_t rbx = *arg2
int64_t rcx = 0
int64_t* var_218 = rsi
int64_t rax_5 = sx.q(arg2[1].d) * 0x50 + rbx
int64_t var_f8
__builtin_memset(&var_f8, 0, 0x2c)
int32_t var_cc = 0x80
int32_t var_c8 = 0xffffffff
int32_t var_c4 = 0
int64_t var_b8 = 0
int32_t var_b0 = 0
int64_t var_240 = rbx

if (rbx != rax_5)
    do
        int64_t* rcx_1 = *rsi
        int64_t var_a8
        __builtin_memset(&var_a8, 0, 0x2c)
        int32_t var_7c_1 = 0x80
        int32_t var_78_1 = 0xffffffff
        int32_t var_74_1 = 0
        int64_t var_68_1 = 0
        int32_t var_60_1 = 0
        int64_t var_148
        __builtin_memset(&var_148, 0, 0x2c)
        int32_t var_11c_1 = 0x80
        int32_t var_118_1 = 0xffffffff
        int32_t var_114_1 = 0
        int64_t var_108_1 = 0
        int32_t var_100_1 = 0
        int64_t var_1e8 = 0
        int32_t var_1e0_1 = 0
        int32_t var_1bc_1 = 0x80
        int64_t var_1d8
        __builtin_memset(&var_1d8, 0, 0x1c)
        int32_t var_1b8_1 = 0xffffffff
        int32_t var_1b4_1 = 0
        void* var_1a8_1 = nullptr
        int32_t var_1a0_1 = 0
        (*(*rcx_1 + 0x1a8))(rcx_1, r14, &var_a8)
        int64_t* rcx_2 = *rsi
        (*(*rcx_2 + 0x168))(rcx_2, &var_a8, &var_148)
        int64_t* rcx_3 = *rsi
        int32_t var_288
        char* var_280
        (*(*rcx_3 + 0x208))(rcx_3, r14, &var_148, &var_1e8, var_288, var_280)
        int64_t* rcx_4 = *rdi
        int32_t var_16c_1 = 0x80
        int64_t* var_270 = nullptr
        int32_t i_3 = 0
        int128_t* r12_1 = nullptr
        int64_t var_198
        __builtin_memset(&var_198, 0, 0x2c)
        int32_t r14_1 = 0
        int32_t var_168_1 = 0xffffffff
        int32_t var_164_1 = 0
        int64_t var_158_1 = 0
        int32_t var_150_1 = 0
        int64_t rax_9 = *rcx_4
        int128_t* var_258 = nullptr
        int32_t var_24c_1 = 0
        (*(rax_9 + 0x1b0))(rcx_4, rbx, &var_270)
        int64_t* rdx_4 = var_270
        void* rax_12 = &rdx_4[sx.q(i_3) * 2]
        int64_t* var_248_1 = rdx_4
        char var_278
        
        if (rdx_4 != rax_12)
            void* rdx_17
            
            do
                int64_t* rcx_5 = *rdi
                void* rax_14 = (*(*rcx_5 + 0x1c8))(rcx_5)
                
                if (rax_14 != 0)
                    int64_t* i = *(rax_14 + 0x48)
                    
                    for (void* r13 = &i[sx.q(*(rax_14 + 0x50)) * 3]; i != r13; i = &i[3])
                        int32_t rax_22
                        
                        if (var_1e0_1 == var_1b4_1)
                        label_141886c46:
                            rax_22 = -1
                        else
                            void var_1b0
                            void* rcx_9 = &var_1b0
                            int64_t rdx_6 = sx.q(var_1a0_1 - 1) & sx.q(sub_140a6b260(i, 0x10))
                            
                            if (var_1a8_1 != 0)
                                rcx_9 = var_1a8_1
                            
                            rax_22 = *(rcx_9 + (rdx_6 << 2))
                            
                            if (rax_22 == 0xffffffff)
                            label_141886c46_1:
                                rax_22 = -1
                            else
                                int64_t rsi_1 = var_1e8
                                
                                while (true)
                                    int64_t rdx_7 = sx.q(rax_22) * 3
                                    void* r8_4 = rsi_1 + (rdx_7 << 3)
                                    int32_t rdx_11 = (*(r8_4 + 8) ^ i[1].d)
                                        | (*(rsi_1 + (rdx_7 << 3) + 4) ^ *(i + 4))
                                        | (*(r8_4 + 0xc) ^ *(i + 0xc))
                                    
                                    if ((rdx_11 | (*i ^ *r8_4)) == 0)
                                        break
                                    
                                    rax_22 = *(r8_4 + 0x10)
                                    
                                    if (rax_22 == 0xffffffff)
                                        goto label_141886c46_1
                        
                        if (rax_22 == 0xffffffff)
                            var_278 = 0
                            int32_t var_208
                            sub_140598750(&var_198, &var_208)
                            int128_t* var_200
                            *var_200 = *i
                            var_200[1].d = 0xffffffff
                            int32_t rax_23 = sub_140a6b260(var_200, 0x10)
                            var_280 = &var_278
                            var_288 = var_208
                            void var_238
                            sub_14093ebb0(&var_198, &var_238, rax_23, var_200, var_288, var_280)
                            
                            if (var_278 == 0)
                                int64_t rbx_3 = sx.q(r14_1)
                                r14_1 = (rbx_3 + 1).d
                                
                                if (r14_1 s> r15)
                                    sub_1405a4f90(&var_258)
                                    r15 = var_24c_1
                                    r12_1 = var_258
                                
                                r12_1[rbx_3] = *i
                    
                    rdi = arg3
                
                rdx_17 = &var_248_1[2]
                var_248_1 = rdx_17
            while (rdx_17 != rax_12)
            result = arg1
        
        r15 = 0
        int32_t var_150_2 = 0
        
        if (var_158_1 != 0)
            sub_140a74f90(var_158_1)
        
        int64_t var_190_1
        var_190_1.d = 0
        int32_t var_168_2 = 0xffffffff
        int32_t var_164_2 = 0
        int64_t var_188
        sub_14059a8e0(&var_188, 0)
        int64_t var_178
        
        if (var_178 != 0)
            sub_140a74f90(var_178)
        
        int64_t rcx_25 = var_198
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        int32_t i_2 = i_3
        int64_t* rbx_4 = var_270
        
        if (i_2 != 0)
            int32_t i_1
            
            do
                int64_t rcx_26 = *rbx_4
                
                if (rcx_26 != 0)
                    sub_140a74f90(rcx_26)
                
                rbx_4 = &rbx_4[2]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
            rbx_4 = var_270
        
        if (rbx_4 != 0)
            sub_140a74f90(rbx_4)
        
        int32_t var_1a0_2 = 0
        
        if (var_1a8_1 != 0)
            sub_140a74f90(var_1a8_1)
        
        var_1e0_1 = 0
        int32_t var_1b8_2 = 0xffffffff
        int32_t var_1b4_2 = 0
        sub_14059a8e0(&var_1d8, 0)
        int64_t var_1c8
        
        if (var_1c8 != 0)
            sub_140a74f90(var_1c8)
        
        int64_t rcx_32 = var_1e8
        
        if (rcx_32 != 0)
            sub_140a74f90(rcx_32)
        
        int32_t var_100_2 = 0
        
        if (var_108_1 != 0)
            sub_140a74f90(var_108_1)
        
        int64_t var_140_1
        var_140_1.d = 0
        int32_t var_118_2 = 0xffffffff
        int32_t var_114_2 = 0
        int64_t var_138
        sub_14059a8e0(&var_138, 0)
        int64_t var_128
        
        if (var_128 != 0)
            sub_140a74f90(var_128)
        
        int64_t rcx_37 = var_148
        
        if (rcx_37 != 0)
            sub_140a74f90(rcx_37)
        
        int32_t var_60_2 = 0
        
        if (var_68_1 != 0)
            sub_140a74f90(var_68_1)
        
        sub_14059ad90(&var_a8, 0)
        int64_t var_88
        
        if (var_88 != 0)
            sub_140a74f90(var_88)
        
        int64_t rcx_41 = var_a8
        
        if (rcx_41 != 0)
            sub_140a74f90(rcx_41)
        
        int128_t* rdi_1 = r12_1
        void* rsi_4 = &r12_1[sx.q(r14_1)]
        
        if (r12_1 != rsi_4)
            do
                var_278 = 0
                int32_t var_1f8
                sub_140598750(&var_f8, &var_1f8)
                int32_t* var_1f0
                *var_1f0 = *rdi_1
                var_1f0[4] = 0xffffffff
                int32_t rax_27 = sub_140a6b260(var_1f0, 0x10)
                var_280 = &var_278
                var_288 = var_1f8
                void var_234
                sub_14093ebb0(&var_f8, &var_234, rax_27, var_1f0, var_288, var_280)
                
                if (var_278 == 0)
                    int64_t rbx_6 = sx.q(result[1].d)
                    int32_t rax_29 = (rbx_6 + 1).d
                    result[1].d = rax_29
                    
                    if (rax_29 s> *(result + 0xc))
                        sub_1405a4f90(result)
                    
                    *(*result + rbx_6 * 0x10) = *rdi_1
                
                rdi_1 = &rdi_1[1]
            while (rdi_1 != rsi_4)
        
        if (r12_1 != 0)
            sub_140a74f90(r12_1)
        
        rdi = arg3
        rbx = var_240 + 0x50
        rsi = var_218
        r14 = arg4
        var_240 = rbx
    while (rbx != rax_5)
    
    rcx = var_b8

int32_t var_b0_1 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t var_f0
bool cond:0 = var_f0:4.d == 0
var_f0.d = 0

if (not(cond:0))
    sub_1405a5130(&var_f8, 0)

int32_t var_c8_1 = 0xffffffff
int32_t var_c4_1 = 0
int64_t var_e8
sub_14059a8e0(&var_e8, 0)
int64_t var_d8

if (var_d8 != 0)
    sub_140a74f90(var_d8)

int64_t rcx_52 = var_f8

if (rcx_52 != 0)
    sub_140a74f90(rcx_52)

__security_check_cookie(rax_1 ^ &var_2a8)
return result
