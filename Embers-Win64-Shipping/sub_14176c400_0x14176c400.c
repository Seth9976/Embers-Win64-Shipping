// 函数: sub_14176c400
// 地址: 0x14176c400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int32_t r10 = *(arg1 + 0x50)
int32_t r11 = arg4
int128_t zmm6 = arg2
int64_t rdx = sx.q(arg3)
void* rdi_2

if (arg3 s>= r10)
    rdi_2 = arg1 + 0x58
else
    rdi_2 = *(arg1 + 0x48) + ((rdx * 3 + 1) << 3)

void* var_138 = rdi_2
int32_t r13

if (arg3 s>= r10)
    r13 = -1
else
    r13 = *(*(arg1 + 0x48) + rdx * 0x18)

int32_t var_15c = r13
void* r10_1 = arg1
int32_t rdx_1

if (arg3 s>= r10)
    rdx_1 = -1
else
    rdx_1 = *(*(arg1 + 0x48) + rdx * 0x18 + 4)

int64_t rcx_21 = 0
uint64_t r12
r12.b = 0
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x2c)
int32_t var_7c = 0x80
int32_t var_78 = 0xffffffff
int32_t var_74 = 0
int64_t var_68 = 0
int32_t var_60 = 0
int32_t var_168 = r12.d

if (rdx_1 s>= 0)
    int64_t i = 0
    int64_t i_1 = 0
    
    do
        int32_t rbx_1 = 0
        int64_t var_158
        int64_t var_140
        
        if (r13 s>= 0)
            int64_t r14_2 = i * 0x50
            int64_t r15_1 = 0
            
            do
                void* r8 = *rdi_2
                
                if (*(r14_2 + r8 + 8) != *(r14_2 + r8 + 0x34))
                    void* rdx_3 = r8 + 0x38 + r14_2
                    void* rax_7 = *(rdx_3 + 8)
                    
                    if (rax_7 != 0)
                        rdx_3 = rax_7
                    
                    int32_t j_3 = *(rdx_3 + (((sx.q(*(r14_2 + r8 + 0x48)) - 1) & r15_1) << 2))
                    int32_t j = j_3
                    
                    if (j_3 != 0xffffffff)
                        int64_t r8_1 = *(r14_2 + r8)
                        
                        do
                            int64_t rdx_5 = sx.q(j) << 5
                            
                            if (*(rdx_5 + r8_1) == rbx_1)
                                if (j != 0xffffffff)
                                    int32_t j_4 = j_3
                                    int32_t* r9_3
                                    
                                    if (j_3 != 0xffffffff)
                                        while (true)
                                            r9_3 = (sx.q(j_4) << 5) + r8_1
                                            
                                            if (*r9_3 == rbx_1)
                                                break
                                            
                                            j_4 = r9_3[6]
                                            
                                            if (j_4 == 0xffffffff)
                                                goto label_14176c5df
                                    
                                    if (j_3 == 0xffffffff || j_4 == 0xffffffff)
                                    label_14176c5df:
                                        r9_3 = nullptr
                                    
                                    if (r9_3[4] != 0)
                                        int32_t* rdx_8
                                        
                                        if (j_3 == 0xffffffff)
                                        label_14176c60f:
                                            rdx_8 = nullptr
                                        else
                                            while (true)
                                                rdx_8 = (sx.q(j_3) << 5) + r8_1
                                                
                                                if (*rdx_8 == rbx_1)
                                                    break
                                                
                                                j_3 = rdx_8[6]
                                                
                                                if (j_3 == 0xffffffff)
                                                    goto label_14176c60f_1
                                            
                                            if (j_3 == 0xffffffff)
                                            label_14176c60f_1:
                                                rdx_8 = nullptr
                                        
                                        void* rdi_3 = *(r10_1 + 0x10)
                                        int128_t zmm0 = zmm6
                                        var_140.d = arg5
                                        uint32_t rax_8
                                        rax_8.b = 0
                                        var_168 = zmm6.d
                                        int32_t var_148 = r11
                                        bool cond:4_1 = *(rdi_3 + 0x6c) s<= 0
                                        char var_178 = 0
                                        
                                        if (not(cond:4_1))
                                            int32_t rcx_5 = rdx_8[4]
                                            int32_t* var_d0_1 = &var_168
                                            void* var_e0 = &rdx_8[2]
                                            int32_t* var_c8_1 = &var_148
                                            void* var_d8_1 = rdi_3
                                            int64_t* var_c0_1 = &var_140
                                            char* var_b8_1 = &var_178
                                            int64_t* var_b0_1 = &var_a8
                                            void** var_f8_1 = &var_e0
                                            int64_t (* var_100)(int64_t* arg1, int32_t* arg2) =
                                                sub_14176ff90
                                            zmm6 = sub_1417487a0(rcx_5, &var_100, 0, r9_3)
                                            zmm0 = var_168
                                            rax_8 = zx.d(var_178)
                                        
                                        if (*(rdi_3 + 0xd0) != 0)
                                            char var_170 = rax_8.b
                                            void* rcx_6 = rdi_3 + 0xf0
                                            void* rax_9 = *(rdi_3 + 0xe0)
                                            var_158.d = zmm0.d
                                            
                                            if (rax_9 != 0)
                                                rcx_6 = rax_9
                                            
                                            (*(rdi_3 + 0xd0))((*(*rcx_6 + 8))(rcx_6, zmm0), 
                                                &var_158, &rdx_8[2], &var_170)
                                            rax_8 = zx.d(var_178)
                                        
                                        r11 = arg4
                                        rdi_2 = var_138
                                        r12 = zx.q(r12.b)
                                        
                                        if (rax_8.b != 0)
                                            r12 = 1
                                
                                break
                            
                            j = *(rdx_5 + r8_1 + 0x18)
                        while (j != 0xffffffff)
                
                r10_1 = arg1
                rbx_1 += 1
                r15_1 += 1
            while (rbx_1 s<= r13)
            
            i = i_1
            var_168 = r12.d
        
        int32_t r12_1 = 0
        
        if (r13 s>= 0)
            int64_t r9_6 = i * 0x50
            int64_t r10_2 = 0
            var_140 = r9_6
            var_158 = 0
            
            do
                void* r8_3 = *rdi_2
                
                if (*(r9_6 + r8_3 + 8) != *(r9_6 + r8_3 + 0x34))
                    void* rdx_12 = r8_3 + 0x38 + r9_6
                    void* rax_13 = *(rdx_12 + 8)
                    
                    if (rax_13 != 0)
                        rdx_12 = rax_13
                    
                    int32_t j_2 = *(rdx_12 + (((sx.q(*(r9_6 + r8_3 + 0x48)) - 1) & r10_2) << 2))
                    int32_t j_1 = j_2
                    
                    if (j_2 != 0xffffffff)
                        int64_t r8_4 = *(r9_6 + r8_3)
                        
                        do
                            int64_t rdx_14 = sx.q(j_1) << 5
                            
                            if (*(rdx_14 + r8_4) == r12_1)
                                if (j_1 != 0xffffffff)
                                    int32_t* rsi_4
                                    
                                    if (j_2 == 0xffffffff)
                                    label_14176c7ce:
                                        rsi_4 = nullptr
                                    else
                                        while (true)
                                            rsi_4 = (sx.q(j_2) << 5) + r8_4
                                            
                                            if (*rsi_4 == r12_1)
                                                break
                                            
                                            j_2 = rsi_4[6]
                                            
                                            if (j_2 == 0xffffffff)
                                                goto label_14176c7ce_1
                                        
                                        if (j_2 == 0xffffffff)
                                        label_14176c7ce_1:
                                            rsi_4 = nullptr
                                    
                                    int32_t k = 0
                                    
                                    if (rsi_4[4] s> 0)
                                        int64_t* r15_2 = nullptr
                                        
                                        do
                                            int32_t* rdx_15 = *(r15_2 + *(rsi_4 + 8))
                                            int32_t r8_5 = rdx_15[4]
                                            int64_t rcx_11 = *(rdx_15 + 8)
                                            int64_t rdx_16 = sx.q(*rdx_15)
                                            void* rax_16
                                            
                                            if (r8_5 == 1)
                                                rax_16 = rdx_16 * 0xe0 + *(rcx_11 + 0x10)
                                            else if (r8_5 != 2)
                                                rax_16 = rdx_16 * 0x140 + *(rcx_11 + 0x30)
                                            else
                                                rax_16 = rdx_16 * 0xe0 + *(rcx_11 + 0x20)
                                            
                                            int64_t rax_21 = sx.q(rdx_16.d)
                                            void* rax_23
                                            
                                            if (r8_5 == 1)
                                                rax_23 = rax_21 * 0xe0 + *(rcx_11 + 0x10)
                                            else if (r8_5 != 2)
                                                rax_23 = rax_21 * 0x140 + *(rcx_11 + 0x30)
                                            else
                                                rax_23 = rax_21 * 0xe0 + *(rcx_11 + 0x20)
                                            
                                            int64_t var_e8_1 = *(rax_23 + 0x68)
                                            int128_t var_128 = (*(rax_16 + 0x60)).o
                                            
                                            if (r11 == arg5 - 1)
                                                int64_t* r8_6 = var_128.q
                                                int64_t* rax_28 = nullptr
                                                char rcx_12 = *(r8_6 + 0xc)
                                                
                                                if (rcx_12 u>= 2)
                                                    rax_28 = r8_6
                                                
                                                if (rax_28 == 0)
                                                    r9_6.b = 0
                                                else
                                                    int64_t* rax_29 = nullptr
                                                    
                                                    if (rcx_12 u>= 1)
                                                        rax_29 = r8_6
                                                    
                                                    if (rax_29 == 0)
                                                        r9_6.b = 0
                                                    else
                                                        int64_t* rcx_13 = nullptr
                                                        
                                                        if (*(rax_29 + 0xc) u>= 2)
                                                            rcx_13 = rax_29
                                                        
                                                        if (rcx_13 == 0 || *(sx.q(rcx_13[1].d)
                                                                + *(*rcx_13 + 0x398)) != 4)
                                                            r9_6.b = 0
                                                        else
                                                            r9_6.b = 1
                                                
                                                int64_t* rdi_4 = var_128:8.q
                                                int64_t* rax_31 = nullptr
                                                char rcx_15 = *(rdi_4 + 0xc)
                                                
                                                if (rcx_15 u>= 2)
                                                    rax_31 = rdi_4
                                                
                                                if (rax_31 == 0)
                                                    rbx_1.b = 0
                                                else
                                                    int64_t* rax_32 = nullptr
                                                    
                                                    if (rcx_15 u>= 1)
                                                        rax_32 = rdi_4
                                                    
                                                    if (rax_32 == 0)
                                                        rbx_1.b = 0
                                                    else
                                                        int64_t* rcx_16 = nullptr
                                                        
                                                        if (*(rax_32 + 0xc) u>= 2)
                                                            rcx_16 = rax_32
                                                        
                                                        if (rcx_16 == 0 || *(sx.q(rcx_16[1].d)
                                                                + *(*rcx_16 + 0x398)) != 4)
                                                            rbx_1.b = 0
                                                        else
                                                            rbx_1.b = 1
                                                
                                                int32_t* rax_34
                                                void var_118
                                                
                                                if (r9_6.b != 0)
                                                    rax_34 = sub_1408296b0(&var_a8, &var_118, r8_6)
                                                void var_10c
                                                
                                                if (r9_6.b == 0 || *rax_34 != 0xffffffff)
                                                    sub_140812a70(&var_a8, &var_10c, &var_128:8, 
                                                        nullptr)
                                                else
                                                    int32_t* rax_35
                                                    void var_114
                                                    
                                                    if (rbx_1.b != 0)
                                                        rax_35, r9_6 =
                                                            sub_1408296b0(&var_a8, &var_114, rdi_4)
                                                    void var_110
                                                    
                                                    if (rbx_1.b == 0 || *rax_35 != 0xffffffff)
                                                        sub_140812a70(&var_a8, &var_110, &var_128, 
                                                            nullptr)
                                                r11 = arg4
                                            
                                            k += 1
                                            r15_2 = &r15_2[1]
                                        while (k s< rsi_4[4])
                                        
                                        r9_6 = var_140
                                        r10_2 = var_158
                                        r13 = var_15c
                                        rdi_2 = var_138
                                
                                break
                            
                            j_1 = *(rdx_14 + r8_4 + 0x18)
                        while (j_1 != 0xffffffff)
                
                r10_2 += 1
                r12_1 += 1
                var_158 = r10_2
            while (r12_1 s<= r13)
            
            i = i_1
        
        r12 = zx.q(var_168)
        i += 1
        r10_1 = arg1
        i_1 = i
    while (i s<= sx.q(rdx_1))
    
    rcx_21 = var_68

int32_t var_60_1 = 0

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

int64_t var_a0
bool cond:1 = var_a0:4.d == 0
var_a0.d = 0

if (not(cond:1))
    sub_1405a5410(&var_a8, 0)

int32_t var_78_1 = 0xffffffff
int32_t var_74_1 = 0
int64_t var_98
sub_14059a8e0(&var_98, 0)
int64_t var_88

if (var_88 != 0)
    sub_140a74f90(var_88)

int64_t rcx_25 = var_a8

if (rcx_25 != 0)
    sub_140a74f90(rcx_25)

__security_check_cookie(rax_1 ^ &var_198)
return zx.q(r12.b)
