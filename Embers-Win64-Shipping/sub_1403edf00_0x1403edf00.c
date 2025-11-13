// 函数: sub_1403edf00
// 地址: 0x1403edf00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t rax_2 = sx.q(arg6)
uint64_t rbx = zx.q(arg4)
int64_t r9 = sx.q(arg5)
int32_t var_168 = rbx.d
void* var_128 = arg1
int32_t rdx
void* rsi
int32_t result_2
void* const r14

if (r9.d != 4)
    rdx = 0xc
    rsi = &data_1436fdd10
    r14 = &data_1436fdcf8
    result_2 = 0xc
else
    r14 = &data_1436fdc50
    result_2 = (r9 + 0x1e).d
    rdx = sx.d(*(rax_2 + &data_1436fdc4c))
    rsi = &data_1436fdcd8 + (rax_2 << 3)

int64_t r12 = 0
void* var_150 = rsi
int64_t result = sx.q(result_2)
int64_t r15 = sx.q(rdx)
int128_t* r13 = arg2 + (sx.q((rbx << 2).d) << 2)
int64_t result_1 = result

if (r9.d s> 0)
    int64_t r8 = sx.q(rbx.d)
    int64_t rdx_1 = sx.q(arg3)
    int64_t var_158_1 = 0
    int64_t var_138_1 = rdx_1
    int64_t rax_5 = r8 << 2
    void* var_160_1 = arg1 + 8
    
    do
        int64_t rcx_1 = sx.q(*(rsi + (r12 << 1) + 1))
        int64_t rbx_1 = sx.q(*(rsi + (r12 << 1)))
        int64_t rdi_1 = 0
        void var_b8
        result =
            sub_140400670(r13, r13 - ((rcx_1 + rdx_1) << 2), &var_b8, r8.d, rcx_1.d - rbx_1.d + 1)
        int64_t r8_2 = rbx_1
        void var_118
        
        if (rbx_1 s<= rcx_1)
            int64_t rcx_6 = rcx_1 - rbx_1
            result = rcx_6 + 1
            
            if (result s>= 4)
                void var_98
                void* rcx_7 = &var_98 + (rcx_6 << 2) - 0x28
                int64_t i_3 = ((rcx_1 - rbx_1 - 3) u>> 2) + 1
                r8_2 = rbx_1 + (i_3 << 2)
                int64_t i
                
                do
                    int32_t rax_9 = *(rcx_7 + 8)
                    rdi_1 += 4
                    rcx_7 -= 0x10
                    *(&var_128 + (rdi_1 << 2)) = rax_9
                    *(&var_128:4 + (rdi_1 << 2)) = *(rcx_7 + 0x14)
                    void var_120
                    *(&var_120 + (rdi_1 << 2)) = *(rcx_7 + 0x10)
                    result = zx.q(*(rcx_7 + 0xc))
                    void var_11c
                    *(&var_11c + (rdi_1 << 2)) = result.d
                    i = i_3
                    i_3 -= 1
                while (i != 1)
            
            if (r8_2 s<= rcx_1)
                void* rcx_8 = &var_118 + (rdi_1 << 2)
                void* rdx_8 = &var_b8 + ((rcx_1 - r8_2) << 2)
                int64_t i_4 = rcx_1 - r8_2 + 1
                int64_t i_1
                
                do
                    result = zx.q(*rdx_8)
                    rcx_8 += 4
                    rdx_8 -= 4
                    *(rcx_8 - 4) = result.d
                    i_1 = i_4
                    i_4 -= 1
                while (i_1 != 1)
        
        rsi = var_150
        int64_t i_2 = 0
        int32_t r9_2 = sx.d(*(rsi + (r12 << 1)))
        void var_114
        void var_110
        void var_10c
        int32_t var_108[0x14]
        
        if (r15 s>= 4)
            void* rdx_9 = var_160_1
            
            do
                int32_t rax_14 = sx.d(*(r14 + i_2))
                i_2 += 4
                rdx_9 += 0x50
                int64_t rcx_9 = sx.q(rax_14 - r9_2)
                *(rdx_9 - 0x58) = *(&var_118 + (rcx_9 << 2))
                *(rdx_9 - 0x54) = *(&var_114 + (rcx_9 << 2))
                *(rdx_9 - 0x50) = *(&var_110 + (rcx_9 << 2))
                *(rdx_9 - 0x4c) = *(&var_10c + (rcx_9 << 2))
                *(rdx_9 - 0x48) = var_108[rcx_9]
                int64_t rcx_10 = sx.q(sx.d(*(r14 + i_2 - 3)) - r9_2)
                *(rdx_9 - 0x44) = *(&var_118 + (rcx_10 << 2))
                *(rdx_9 - 0x40) = *(&var_114 + (rcx_10 << 2))
                *(rdx_9 - 0x3c) = *(&var_110 + (rcx_10 << 2))
                *(rdx_9 - 0x38) = *(&var_10c + (rcx_10 << 2))
                *(rdx_9 - 0x34) = var_108[rcx_10]
                int64_t rcx_11 = sx.q(sx.d(*(r14 + i_2 - 2)) - r9_2)
                *(rdx_9 - 0x30) = *(&var_118 + (rcx_11 << 2))
                *(rdx_9 - 0x2c) = *(&var_114 + (rcx_11 << 2))
                *(rdx_9 - 0x28) = *(&var_110 + (rcx_11 << 2))
                *(rdx_9 - 0x24) = *(&var_10c + (rcx_11 << 2))
                *(rdx_9 - 0x20) = var_108[rcx_11]
                int64_t rcx_12 = sx.q(sx.d(*(r14 + i_2 - 1)) - r9_2)
                *(rdx_9 - 0x1c) = *(&var_118 + (rcx_12 << 2))
                *(rdx_9 - 0x18) = *(&var_114 + (rcx_12 << 2))
                *(rdx_9 - 0x14) = *(&var_110 + (rcx_12 << 2))
                *(rdx_9 - 0x10) = *(&var_10c + (rcx_12 << 2))
                result = zx.q(var_108[rcx_12])
                *(rdx_9 - 0xc) = result.d
            while (i_2 s< r15 - 3)
        
        if (i_2 s< r15)
            void* rdx_12 = var_128 + (((var_158_1 + i_2) * 5 + 2) << 2)
            
            do
                int32_t rax_44 = sx.d(*(r14 + i_2))
                i_2 += 1
                rdx_12 += 0x14
                int64_t rcx_13 = sx.q(rax_44 - r9_2)
                *(rdx_12 - 0x1c) = *(&var_118 + (rcx_13 << 2))
                *(rdx_12 - 0x18) = *(&var_114 + (rcx_13 << 2))
                *(rdx_12 - 0x14) = *(&var_110 + (rcx_13 << 2))
                *(rdx_12 - 0x10) = *(&var_10c + (rcx_13 << 2))
                result = zx.q(var_108[rcx_13])
                *(rdx_12 - 0xc) = result.d
            while (i_2 s< r15)
        
        r13 += rax_5
        var_158_1 += 0x22
        r14 += result_1
        r8 = zx.q(var_168)
        rdx_1 = var_138_1
        r12 += 1
        var_160_1 += 0x2a8
    while (r12 s< r9)

__security_check_cookie(rax_1 ^ &var_198)
return result
