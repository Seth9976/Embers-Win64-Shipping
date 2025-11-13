// 函数: sub_141ac1410
// 地址: 0x141ac1410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
void* rbx = *(arg1 + 0xe0)
int64_t rdi = sx.q(*(arg1 + 0xe8))
int64_t var_98 = 0
void* rsi_2 = rdi * 0xa0 + rbx
int32_t var_6c = 0x80
int64_t var_88
__builtin_memset(&var_88, 0, 0x1c)
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
void* var_58 = nullptr
int32_t var_50 = 0
int32_t var_170
void* var_b8

if (rbx != rsi_2)
    do
        void* rax_2 = *(rbx + 0x30)
        
        if (rax_2 != 0)
            var_b8 = rax_2 + 0x10
            void* var_b0_1 = rbx + 0x60
            sub_141a87f70(&var_98, &var_170, &var_b8, nullptr)
        
        rbx += 0xa0
    while (rbx != rsi_2)
    
    rdi = zx.q(*(arg1 + 0xe8))

int32_t rax_5 = *(arg1 + 0xec)
void* rbx_1 = *(arg1 + 0xe0)

if (rax_5 s< 0)
    if (rdi.d != 0)
        void* rbx_3 = rbx_1 + 0x50
        int32_t i
        
        do
            int64_t rcx_4 = *(rbx_3 + 0x10)
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            int64_t rcx_5 = *rbx_3
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            int64_t rcx_6 = *(rbx_3 - 0x10)
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            rbx_3 += 0xa0
            i = rdi.d
            rdi = zx.q(rdi.d - 1)
        while (i != 1)
        rax_5 = *(arg1 + 0xec)
    
    *(arg1 + 0xe8) = 0
    
    if (rax_5 != 0)
        sub_1407c4520(arg1 + 0xe0, 0)
else
    if (rdi.d != 0)
        void* rbx_2 = rbx_1 + 0x50
        int32_t i_1
        
        do
            int64_t rcx_1 = *(rbx_2 + 0x10)
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            int64_t rcx_2 = *rbx_2
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            int64_t rcx_3 = *(rbx_2 - 0x10)
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            rbx_2 += 0xa0
            i_1 = rdi.d
            rdi = zx.q(rdi.d - 1)
        while (i_1 != 1)
    
    *(arg1 + 0xe8) = 0

void* r15 = *(arg1 + 0xd0)
void* rax_8 = sx.q(*(arg1 + 0xd8)) * 0x2c + r15
var_b8 = rax_8

if (r15 != rax_8)
    int64_t* rbx_4 = arg2
    
    do
        sub_141ea5640(r15, rbx_4)
        sub_141ea5640(r15 + 0x10, rbx_4)
        int128_t zmm1 = data_143dbb0d0
        int32_t rcx_10 = *(r15 + 8)
        int32_t rax_9 = data_143dbb200
        uint128_t var_158 = data_143dbb0c0
        uint128_t var_138_1 = data_143dbb0e0
        uint64_t var_d0_1 = data_143dbb1f8.q
        int128_t var_148_1 = zmm1
        int64_t var_128_1 = 0
        int32_t var_11c_1 = 0xffffffff
        int32_t* var_118
        __builtin_memset(&var_118, 0, 0x30)
        int64_t var_e0_1 = 0
        int32_t var_d8_1 = 0
        int32_t var_d4_1 = 0xffffffff
        int32_t var_c8_1 = rax_9
        int16_t var_c4_1 = 0
        int32_t rdx_3
        
        if (rcx_10 s>= 0)
            rdx_3 = *(r15 + 0xc)
        else
            int32_t rcx_11 = rcx_10 * 2
            
            if ((rcx_11 & 0xfffffffe) == 0xfffffffe)
                rdx_3 = -1
            else
                rdx_3 = *(rbx_4[0x10] + (sx.q(rcx_11) s>> 1 << 2))
        
        int32_t rax_13 = *(r15 + 0x18)
        int32_t var_120_1 = rdx_3
        int32_t rax_17
        
        if (rax_13 s>= 0)
            rax_17 = *(r15 + 0x1c)
        else
            int32_t rcx_14 = rax_13 * 2
            
            if ((rcx_14 & 0xfffffffe) == 0xfffffffe)
                rax_17 = -1
            else
                rax_17 = *(rbx_4[0x10] + (sx.q(rcx_14) s>> 1 << 2))
        
        if (rdx_3 != 0xffffffff && rax_17 != 0xffffffff)
            int32_t i_2 = 1
            int32_t var_178 = rax_17
            int64_t var_110_1
            var_110_1.d = 1
            
            if (*(r15 + 0x20) s>= 1)
                i_2 = *(r15 + 0x20)
            
            sub_1405a4cf0(&var_118)
            int32_t* r14_1 = var_118
            *r14_1 = var_178
            sub_141ea4020(rbx_4, &var_170, &var_178)
            int32_t rbx_5 = var_110_1.d
            
            if (i_2 s> 0)
                int32_t rax_19 = var_170
                
                do
                    i_2 -= 1
                    
                    if (rax_19 == 0xffffffff)
                        break
                    
                    int64_t rdi_1 = sx.q(rbx_5)
                    var_178 = rax_19
                    rbx_5 = (rdi_1 + 1).d
                    var_110_1.d = rbx_5
                    
                    if (rbx_5 s> var_110_1:4.d)
                        sub_1405a4cf0(&var_118)
                        rax_19 = var_178
                        rbx_5 = var_110_1.d
                        r14_1 = var_118
                    
                    r14_1[rdi_1] = rax_19
                    void var_a8
                    rax_19 = *sub_141ea4020(arg2, &var_a8, &var_178)
                    var_170 = rax_19
                while (i_2 s> 0)
            
            int64_t var_f8
            
            if (rbx_5 s>= 3)
                int32_t var_11c_2 = rbx_5
                int64_t rbx_6 = *(r15 + 0x10)
                var_178.q = rbx_6
                void* rax_27
                
                if (0 == var_64)
                label_141ac17e2:
                    rax_27 = nullptr
                else
                    void var_60
                    void* rcx_24 = &var_60
                    int32_t var_174
                    int64_t rdx_9 = sx.q(var_50 - 1) & sx.q(sub_140b5ead0(rbx_6.d) + var_174)
                    
                    if (var_58 != 0)
                        rcx_24 = var_58
                    
                    int32_t rax_26 = *(rcx_24 + (rdx_9 << 2))
                    
                    if (rax_26 == 0xffffffff)
                    label_141ac17e2_1:
                        rax_27 = nullptr
                    else
                        int64_t r8_4 = var_98
                        int64_t rdx_10
                        
                        while (true)
                            rdx_10 = sx.q(rax_26) * 9
                            
                            if (*(r8_4 + (rdx_10 << 3)) == rbx_6)
                                break
                            
                            rax_26 = *(r8_4 + (rdx_10 << 3) + 0x40)
                            
                            if (rax_26 == 0xffffffff)
                                goto label_141ac17e2_2
                        
                        rax_27 = r8_4 + (rdx_10 << 3)
                        
                        if (rax_26 == 0xffffffff)
                        label_141ac17e2_2:
                            rax_27 = nullptr
                
                int64_t* rbx_7 = rax_27 + 8
                
                if (rax_27 == 0)
                    rbx_7 = nullptr
                
                if (rbx_7 != 0)
                    if (&var_f8 != rbx_7)
                        int32_t rdi_2 = rbx_7[1].d
                        int64_t rsi_3 = *rbx_7
                        int64_t var_f0_1
                        int32_t r8_5 = var_f0_1:4.d
                        var_f0_1.d = rdi_2
                        
                        if (rdi_2 != 0 || r8_5 != 0)
                            sub_14174fdd0(&var_f8, rdi_2, r8_5)
                            memcpy(var_f8, rsi_3, rdi_2 * 0x3c)
                        else
                            var_f0_1:4.d = 0
                    
                    int64_t var_e0_2 = rbx_7[3]
                    int32_t var_d4_2 = *(rbx_7 + 0x24)
                    int32_t var_c8_2 = rbx_7[6].d
                    int32_t var_e8_1 = rbx_7[2].d.d
                    var_c4_1.b = *(rbx_7 + 0x34)
                    int32_t var_d8_2 = rbx_7[4].d.d
                    var_c4_1:1.b = *(rbx_7 + 0x35)
                    uint64_t var_d0_2 = rbx_7[5]
                
                int64_t rbx_8 = sx.q(*(arg1 + 0xe8))
                void* var_128_2 = r15
                int32_t rax_33 = (rbx_8 + 1).d
                *(arg1 + 0xe8) = rax_33
                
                if (rax_33 s> *(arg1 + 0xec))
                    sub_140775640(arg1 + 0xe0)
                
                sub_141a8d0e0(rbx_8 * 0xa0 + *(arg1 + 0xe0), &var_158)
                r14_1 = var_118
            
            int64_t rcx_32 = var_f8
            
            if (rcx_32 != 0)
                sub_140a74f90(rcx_32)
            
            int64_t var_108
            
            if (var_108 != 0)
                sub_140a74f90(var_108)
            
            if (r14_1 != 0)
                sub_140a74f90(r14_1)
            
            rbx_4 = arg2
        
        r15 += 0x2c
    while (r15 != var_b8)

int32_t var_50_1 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

void* result = sub_141a90710(&var_98)
__security_check_cookie(rax_1 ^ &var_198)
return result
