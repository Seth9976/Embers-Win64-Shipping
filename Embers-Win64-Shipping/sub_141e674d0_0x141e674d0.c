// 函数: sub_141e674d0
// 地址: 0x141e674d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t* rbx = arg1
int64_t* rsi = arg2
int64_t* r12 = nullptr
void* r14 = *arg2
int32_t i_5 = 0
void* rax_3 = r14 + sx.q(arg2[1].d) * 0x28
int64_t* var_f0 = nullptr
int32_t var_e4 = 0
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
void* var_58 = nullptr
int32_t var_50 = 0
void* var_f8 = r14
int32_t var_108

if (r14 != rax_3)
    do
        sub_1407d1800(&var_98, &var_108, r14 + 0x10, nullptr)
        int64_t* rdi_1 = *(r14 + 0x18)
        void* r13_1 = &rdi_1[sx.q(*(r14 + 0x20)) * 3]
        
        if (rdi_1 != r13_1)
            int32_t r14_1 = var_e4
            
            do
                int64_t* rbx_1 = r12
                void* rsi_1 = &r12[sx.q(i_5) * 3]
                int64_t rdx_3
                
                if (r12 != rsi_1)
                    while (sub_140d16af0(rbx_1, rdi_1) == 0)
                        rbx_1 = &rbx_1[3]
                        
                        if (rbx_1 == rsi_1)
                            goto label_141e67610
                    
                    int64_t rax_7
                    int64_t rdx_2
                    rdx_2:rax_7 = muls.dp.q(0x2aaaaaaaaaaaaaab, rbx_1 - r12)
                    rdx_3 = rdx_2 s>> 2
                
                if (r12 == rsi_1 || rdx_3.d + (rdx_3 u>> 0x3f).d == 0xffffffff)
                label_141e67610:
                    int64_t i_7 = sx.q(i_5)
                    i_5 = (i_7 + 1).d
                    
                    if (i_5 s> r14_1)
                        sub_1405a4df0(&var_f0)
                        r12 = var_f0
                        r14_1 = var_e4
                    
                    int64_t rcx_6 = i_7 * 3
                    r12[rcx_6] = *rdi_1
                    sub_140596d10(&r12[rcx_6 + 1], &rdi_1[1])
                
                rdi_1 = &rdi_1[3]
            while (rdi_1 != r13_1)
            
            r14 = var_f8
        
        r14 += 0x28
        var_f8 = r14
    while (r14 != rax_3)
    
    rbx = arg1
    rsi = arg2

var_108 = 0
int32_t r14_2 = 0
int64_t var_90

if (i_5 s> 0)
    int64_t var_f8_1 = 0
    int64_t rdi_2 = 0
    
    do
        int64_t r9_1 = *rbx
        int64_t var_b8
        (*(r9_1 + 0x2d0))(rbx, &var_b8, &r12[sx.q(r14_2) * 3], r9_1)
        void* rax_12 = nullptr
        int32_t i_6 = 0
        void* var_e0 = nullptr
        
        if (var_b8 != rdi_2)
            int32_t var_b0
            int32_t rcx_11
            rcx_11.b = sub_140b5b8a0(var_b0, 0) == 0
            int32_t var_ac
            
            if ((var_ac != 0 | rcx_11.b) == 0)
                rax_12 = var_e0
            else if ((*(*rbx + 0x358))(rbx, &var_b8, &var_e0) == 0)
                rax_12 = var_e0
            else
                rax_12 = var_e0
                void* i_3 = rax_12 + sx.q(i_6) * 0x28
                
                if (rax_12 != i_3)
                    int32_t rdi_3 = var_e4
                    void* r14_3 = rax_12 + 0x10
                    void* var_d0_1 = r14_3
                    void* i = i_3
                    
                    do
                        int64_t rbx_3 = *r14_3
                        
                        if (var_90.d != var_64)
                            int64_t rdx_10 =
                                sx.q(var_50 - 1) & sx.q(sub_140b5ead0(rbx_3.d) + rbx_3:4.d)
                            void var_60
                            void* rax_21 = &var_60
                            
                            if (var_58 != 0)
                                rax_21 = var_58
                            
                            int32_t j = *(rax_21 + (rdx_10 << 2))
                            
                            if (j != 0xffffffff)
                                int64_t rdx_11 = var_98
                                
                                do
                                    int64_t rcx_19 = sx.q(j) * 2
                                    
                                    if (*(rdx_11 + (rcx_19 << 3)) == rbx_3)
                                        if (j != 0xffffffff)
                                            sub_141c98160(rsi, *r14_3, r14_3 + 8)
                                            void* rsi_2 = *(r14_3 + 8)
                                            void* r13_2 = rsi_2 + sx.q(*(r14_3 + 0x10)) * 0x18
                                            
                                            if (rsi_2 != r13_2)
                                                do
                                                    int64_t* rbx_4 = r12
                                                    void* r14_4 = &r12[sx.q(i_5) * 3]
                                                    int64_t rdx_15
                                                    
                                                    if (r12 != r14_4)
                                                        while (sub_140d16af0(rbx_4, rsi_2) == 0)
                                                            rbx_4 = &rbx_4[3]
                                                            
                                                            if (rbx_4 == r14_4)
                                                                goto label_141e67850
                                                        
                                                        int64_t rax_25
                                                        int64_t rdx_14
                                                        rdx_14:rax_25 = muls.dp.q(
                                                            0x2aaaaaaaaaaaaaab, rbx_4 - r12)
                                                        rdx_15 = rdx_14 s>> 2
                                                    
                                                    if (r12 == r14_4
                                                        || rdx_15.d + (rdx_15 u>> 0x3f).d
                                                        == 0xffffffff)
                                                    label_141e67850:
                                                        int64_t i_8 = sx.q(i_5)
                                                        i_5 = (i_8 + 1).d
                                                        
                                                        if (i_5 s> rdi_3)
                                                            sub_1405a4df0(&var_f0)
                                                            r12 = var_f0
                                                            rdi_3 = var_e4
                                                        
                                                        int64_t rcx_25 = i_8 * 3
                                                        r12[rcx_25] = *rsi_2
                                                        sub_140596d10(&r12[rcx_25 + 1], rsi_2 + 8)
                                                    
                                                    rsi_2 += 0x18
                                                while (rsi_2 != r13_2)
                                                
                                                r14_3 = var_d0_1
                                        
                                        break
                                    
                                    j = *(rdx_11 + (rcx_19 << 3) + 8)
                                while (j != 0xffffffff)
                            
                            i = i_3
                        
                        rsi = arg2
                        r14_3 += 0x28
                        var_d0_1 = r14_3
                    while (r14_3 - 0x10 != i)
                    
                    rdi_2 = var_f8_1
                    r14_2 = var_108
                    rax_12 = var_e0
        
        int32_t i_4 = i_6
        
        if (i_4 != 0)
            void* rbx_6 = rax_12 + 0x18
            int32_t i_1
            
            do
                sub_1408464b0(rbx_6)
                rbx_6 += 0x28
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
            rax_12 = var_e0
        
        if (rax_12 != 0)
            sub_140a74f90(rax_12)
        
        rbx = arg1
        r14_2 += 1
        rsi = arg2
        var_108 = r14_2
    while (r14_2 s< i_5)

int32_t var_50_1 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

bool cond:0 = var_90:4.d == 0
var_90.d = 0

if (not(cond:0))
    sub_1405a5410(&var_98, 0)

int32_t var_68_1 = 0xffffffff
int32_t var_64_1 = 0
int64_t var_88
void* result = sub_14059a8e0(&var_88, 0)
int64_t var_78

if (var_78 != 0)
    result = sub_140a74f90(var_78)

int64_t rcx_34 = var_98

if (rcx_34 != 0)
    result = sub_140a74f90(rcx_34)

if (i_5 != 0)
    void* rbx_7 = &r12[1]
    int32_t i_2
    
    do
        int64_t rcx_35 = *rbx_7
        
        if (rcx_35 != 0)
            result = sub_140a74f90(rcx_35)
        
        rbx_7 += 0x18
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

if (r12 != 0)
    result = sub_140a74f90(r12)

__security_check_cookie(rax_1 ^ &var_128)
return result
