// 函数: sub_1418864b0
// 地址: 0x1418864b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t* result = arg1
int64_t* rbx = arg3
int64_t rcx = 0
int64_t* var_150 = rbx
*result = 0
result[1] = 0
int64_t r9 = *arg2
int64_t rax_2 = sx.q(arg2[1].d)
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int64_t rax_5 = rax_2 * 0x50 + r9
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
int64_t var_138 = r9

if (r9 != rax_5)
    do
        int64_t* rcx_1 = *rbx
        int64_t* var_160 = nullptr
        int32_t i_3 = 0
        int128_t* r15_1 = nullptr
        int64_t var_e8
        __builtin_memset(&var_e8, 0, 0x2c)
        int32_t rsi_1 = 0
        int32_t r14_1 = 0
        int32_t var_bc_1 = 0x80
        int32_t var_b8_1 = 0xffffffff
        int32_t var_b4_1 = 0
        int64_t var_a8_1 = 0
        int32_t var_a0_1 = 0
        int64_t rax_6 = *rcx_1
        int128_t* var_148 = nullptr
        int32_t var_13c_1 = 0
        (*(rax_6 + 0x1b0))(rcx_1, r9, &var_160)
        int64_t* r13_1 = var_160
        void* rax_9 = &r13_1[sx.q(i_3) * 2]
        char var_168
        
        if (r13_1 != rax_9)
            do
                int64_t* rcx_2 = *rbx
                void* rax_11 = (*(*rcx_2 + 0x1c8))(rcx_2, r13_1)
                
                if (rax_11 != 0)
                    int128_t* i = *(rax_11 + 0x48)
                    
                    for (void* r12 = i + sx.q(*(rax_11 + 0x50)) * 0x18; i != r12; i += 0x18)
                        var_168 = 0
                        int32_t var_110
                        sub_140598750(&var_e8, &var_110)
                        int128_t* var_108
                        *var_108 = *i
                        var_108[1].d = 0xffffffff
                        void var_130
                        sub_14093ebb0(&var_e8, &var_130, sub_140a6b260(var_108, 0x10), var_108, 
                            var_110, &var_168)
                        
                        if (var_168 == 0)
                            int64_t rdi_2 = sx.q(rsi_1)
                            rsi_1 = (rdi_2 + 1).d
                            
                            if (rsi_1 s> r14_1)
                                sub_1405a4f90(&var_148)
                                r14_1 = var_13c_1
                                r15_1 = var_148
                            
                            r15_1[rdi_2] = *i
                    
                    rbx = var_150
                
                r13_1 = &r13_1[2]
            while (r13_1 != rax_9)
            
            result = arg1
        
        int32_t var_a0_2 = 0
        
        if (var_a8_1 != 0)
            sub_140a74f90(var_a8_1)
        
        int64_t var_e0_1
        bool cond:1_1 = var_e0_1:4.d == 0
        var_e0_1.d = 0
        
        if (not(cond:1_1))
            sub_1405a5130(&var_e8, 0)
        
        int32_t var_b8_2 = 0xffffffff
        int32_t var_b4_2 = 0
        int64_t var_d8
        sub_14059a8e0(&var_d8, 0)
        int64_t var_c8
        
        if (var_c8 != 0)
            sub_140a74f90(var_c8)
        
        int64_t rcx_12 = var_e8
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        int32_t i_2 = i_3
        int64_t* rbx_1 = var_160
        
        if (i_2 != 0)
            int32_t i_1
            
            do
                int64_t rcx_13 = *rbx_1
                
                if (rcx_13 != 0)
                    sub_140a74f90(rcx_13)
                
                rbx_1 = &rbx_1[2]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
            rbx_1 = var_160
        
        if (rbx_1 != 0)
            sub_140a74f90(rbx_1)
        
        int128_t* rdi_3 = r15_1
        void* rsi_4 = &r15_1[sx.q(rsi_1)]
        
        if (r15_1 != rsi_4)
            do
                var_168 = 0
                int32_t var_100
                sub_140598750(&var_98, &var_100)
                int128_t* var_f8
                *var_f8 = *rdi_3
                var_f8[1].d = 0xffffffff
                void var_12c
                sub_14093ebb0(&var_98, &var_12c, sub_140a6b260(var_f8, 0x10), var_f8, var_100, 
                    &var_168)
                
                if (var_168 == 0)
                    int64_t rbx_3 = sx.q(result[1].d)
                    int32_t rax_19 = (rbx_3 + 1).d
                    result[1].d = rax_19
                    
                    if (rax_19 s> *(result + 0xc))
                        sub_1405a4f90(result)
                    
                    *(*result + rbx_3 * 0x10) = *rdi_3
                
                rdi_3 = &rdi_3[1]
            while (rdi_3 != rsi_4)
        
        if (r15_1 != 0)
            sub_140a74f90(r15_1)
        
        rbx = var_150
        r9 = var_138 + 0x50
        var_138 = r9
    while (r9 != rax_5)
    
    rcx = var_58

int32_t var_50_1 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t var_90
bool cond:0 = var_90:4.d == 0
var_90.d = 0

if (not(cond:0))
    sub_1405a5130(&var_98, 0)

int32_t var_68_1 = 0xffffffff
int32_t var_64_1 = 0
int64_t var_88
sub_14059a8e0(&var_88, 0)
int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

int64_t rcx_25 = var_98

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

__security_check_cookie(rax_1 ^ &var_198)
return result
