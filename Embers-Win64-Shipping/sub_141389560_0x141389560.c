// 函数: sub_141389560
// 地址: 0x141389560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
void* var_1e0 = nullptr
int64_t var_1d8 = 0
sub_1413a8ac0(&var_1e0, 0xc0)
int64_t* r9 = arg1
int32_t rdi = var_1d8.d
void* r15 = var_1e0
int32_t r13_1 = arg2 << 6
int32_t rdx = r9[2].d
int64_t rcx_1 = sx.q(r13_1)
int64_t var_1c8 = rcx_1
int64_t var_1a0 = rcx_1

if (r13_1 + 0x40 s<= rdx)
    rdx = r13_1 + 0x40

int64_t rax_3 = sx.q(rdx)

while (rcx_1 s< rax_3)
    void* r14_1 = *(r9[1] + (rcx_1 << 3))
    int64_t r12_1 = sx.q(*(r14_1 + 0x30))
    uint32_t i_6 = *(r14_1 + 0x50) * 0x12
    int32_t rax_6 = r12_1.d + i_6
    *(r14_1 + 0x30) = rax_6
    
    if (rax_6 s> *(r14_1 + 0x34))
        sub_1405c4d20(r14_1 + 0x28)
    
    void* rdx_2 = *(r14_1 + 0x28) + r12_1 * 0x14
    
    if (i_6 != 0)
        uint32_t i
        
        do
            *(rdx_2 + 0x10) &= 0xfffff6d2
            *(rdx_2 + 0x10) |= 0x6d2
            *rdx_2 = 0
            *(rdx_2 + 8) = -1
            rdx_2 += 0x14
            i = i_6
            i_6 -= 1
        while (i != 1)
    
    if ((*(*(r14_1 + 8) + 0x39) & 0x20) == 0)
        int32_t i_1 = 0
        
        if (*(r14_1 + 0x50) s> 0)
            do
                if (sub_1422aea30(sx.q(i_1) * 0xb0 + *(r14_1 + 0x48)) != 0)
                    int64_t rsi_1 = sx.q(rdi)
                    int32_t i_5 = i_1
                    rdi = (rsi_1 + 1).d
                    var_1d8.d = rdi
                    
                    if (rdi s> var_1d8:4.d)
                        sub_1413a8770(&var_1e0, rsi_1.d)
                        rdi = var_1d8.d
                        r15 = var_1e0
                    
                    *(r15 + (rsi_1 << 3)) = r13_1.q
                
                i_1 += 1
            while (i_1 s< *(r14_1 + 0x50))
    
    r13_1 += 1
    r9 = arg1
    rcx_1 = var_1c8 + 1
    var_1c8 = rcx_1

int64_t rsi_2 = 0
void* r12_2 = nullptr
void* r13_2 = nullptr
int32_t i_2 = 0
void* r8 = nullptr
void* var_198_1
__builtin_memset(&var_198_1, 0, 0x20)
int64_t result

do
    void* rcx_8 = *r9
    int64_t rbx_2 = 0
    
    if (*(rcx_8 + 8) s>= 3)
        rbx_2 = 0x12
    
    void* var_190_1
    void* var_188_1
    int64_t var_180_1
    
    if (((&data_143e8e980)[rbx_2 + rsi_2].b & 1) != 0)
        int64_t var_1c0 = 0
        int32_t rdx_5 = i_2 & 0x3f
        int64_t var_1b8_1 = -1
        int32_t var_1b0 = (var_1b0 & 0xfffff6c0) | rdx_5 | 0x6c0
        void** var_160
        sub_14125bcd0(&var_160, &var_1c0, r12_2 + 0x120 + rcx_8, r13_2 + 0x900 + rcx_8, 
            r8 + 0x3f0 + rcx_8, rcx_8)
        int64_t* rax_20 = (&data_143e8e850)[rbx_2 + rsi_2](*arg1, 0, &var_160)
        int64_t* r8_4 = rax_20
        
        if (rax_20 != 0)
            void* j = r15 + (sx.q(rdi) << 3)
            
            if (r15 != j)
                int32_t* rbx_3 = r15 + 4
                
                do
                    int64_t var_170_1 = -1
                    void* var_1f8_1
                    var_1f8_1.d = 0xffffffff
                    void* r13_3 = *(arg1[1] + (sx.q(rbx_3[-1]) << 3))
                    var_1c0.o = 0.o
                    int32_t var_168
                    var_1b0 = (var_168 & 0xfffff6c0) | rdx_5 | 0x6c0
                    int32_t* rsi_3 = *(r13_3 + 0x38) + sx.q(*rbx_3) * 0x14
                    (*(*rax_20 + 8))(rax_20, sx.q(*rbx_3) * 0xb0 + *(r13_3 + 0x48), -1, 
                        *(r13_3 + 8), var_1f8_1)
                    
                    if (var_1b8_1.d != 0xffffffff || var_1b8_1:4.d != 0xffffffff)
                        *rsi_3 |= 1 << i_2.b
                        *(rsi_3 + 0xe) += 1
                        int128_t* rcx_19 = *(r13_3 + 0x28) + sx.q(i_2 + *rbx_3 * 0x12) * 0x14
                        *rcx_19 = var_1c0.o
                        rcx_19[1].d = var_1b0
                    
                    rbx_3 = &rbx_3[2]
                while (&rbx_3[-1] != j)
                
                rdi = var_1d8.d
                r15 = var_1e0
                r8_4 = rax_20
                rsi_2 = var_180_1
                r13_2 = var_190_1
            
            (**r8_4)(r8_4, 0)
            r12_2 = var_188_1
        
        int64_t var_b0
        
        if (var_b0 != 0)
            sub_140a74f90(var_b0)
        
        void var_158
        sub_14125cf90(&var_158)
        r8 = var_198_1
        r9 = arg1
    
    r8 += 0x48
    r13_2 += 0x40
    r12_2 += 0x28
    var_198_1 = r8
    rsi_2 += 1
    var_190_1 = r13_2
    i_2 += 1
    var_188_1 = r12_2
    var_180_1 = rsi_2
    result = 0x12
while (i_2 s< 0x12)

int64_t r15_2 = var_1a0
int64_t r12_3 = rax_3

while (r15_2 s< r12_3)
    result = r9[1]
    int32_t rdi_2 = 0
    int32_t i_3 = 0
    void* rbx_4 = *(result + (r15_2 << 3))
    
    if (*(rbx_4 + 0x50) s> 0)
        int32_t rsi_4 = 0
        int64_t r15_3 = 0
        
        do
            void* r11_1 = *(rbx_4 + 0x38)
            
            if (*(r11_1 + r15_3 + 0xe) u> 0)
                char rcx_23 = 0
                int32_t r10_1 = rdi_2
                int64_t r9_6 = sx.q(rdi_2) * 0x14
                
                while (true)
                    int32_t rcx_24 = 0x20
                    result = zx.q(0xffffffff << rcx_23) & zx.q(*(r11_1 + r15_3))
                    
                    if (result.d != 0)
                        uint64_t rflags_1
                        int32_t temp0_1
                        temp0_1, rflags_1 = _bit_scan_forward(result.d)
                        rcx_24 = temp0_1
                    
                    if (rcx_24 u>= 0x12)
                        rcx_24 = 0x12
                    
                    if (rcx_24 == 0x12)
                        break
                    
                    int64_t r8_5 = *(rbx_4 + 0x28)
                    r10_1 += 1
                    int64_t rax_41 = sx.q(rsi_4 + rcx_24) * 5
                    *(r9_6 + r8_5) = *(r8_5 + (rax_41 << 2))
                    *(r9_6 + r8_5 + 0x10) = *(r8_5 + (rax_41 << 2) + 0x10)
                    r9_6 += 0x14
                    rcx_23 = rcx_24.b + 1
                
                *(r11_1 + r15_3 + 0xe) = rdi_2.w
                rdi_2 = r10_1
            
            i_3 += 1
            rsi_4 += 0x12
            r15_3 += 0x14
        while (i_3 s< *(rbx_4 + 0x50))
        
        r15_2 = var_1a0
        r12_3 = rax_3
    
    int64_t rsi_5 = sx.q(*(rbx_4 + 0x30))
    
    if (rdi_2 s> rsi_5.d)
        *(rbx_4 + 0x30) = rdi_2
        int32_t i_7 = rdi_2 - rsi_5.d
        
        if (rdi_2 s> *(rbx_4 + 0x34))
            sub_1405c4d20(rbx_4 + 0x28)
        
        result = *(rbx_4 + 0x28)
        int64_t rdx_12 = result + rsi_5 * 0x14
        
        if (i_7 != 0)
            int32_t i_4
            
            do
                result = 0
                *(rdx_12 + 0x10) &= 0xfffff6d2
                *(rdx_12 + 0x10) |= 0x6d2
                *rdx_12 = 0
                *(rdx_12 + 8) = -1
                rdx_12 += 0x14
                i_4 = i_7
                i_7 -= 1
            while (i_4 != 1)
    else if (rdi_2 s< rsi_5.d && rdi_2 != rsi_5.d)
        *(rbx_4 + 0x30) = rdi_2
        result = sub_1413a8970(rbx_4 + 0x28)
    
    r9 = arg1
    r15_2 += 1
    var_1a0 = r15_2

__security_check_cookie(rax_1 ^ &var_218)
return result
