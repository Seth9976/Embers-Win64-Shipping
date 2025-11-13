// 函数: sub_141cffe70
// 地址: 0x141cffe70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t r14 = sx.q(arg4)
void* rdi = arg1
int32_t var_100 = r14.d
int64_t var_88
__builtin_memset(&var_88, 0, 0x40)
EnterCriticalSection(arg1 + 8)
void* r8_2 = (r14 << 5) + rdi
*(r8_2 + 0x168) = arg3
char* r13 = *(arg3 + 0x10)
char* var_f0 = r13

if (*(arg3 + 0x63) == 0 || r13 == 0)
    *(arg3 + 0x10) = 0
else
    r13 = nullptr
    var_f0 = nullptr

int64_t r9 = *(r8_2 + 0x178)
int64_t i = 0x10
*(r8_2 + 0x180) = r13
int64_t var_e8 = r9
int64_t rax_4
int16_t rdx
rdx:rax_4 = sx.o((r9 + 0xffff) & 0xffffffffffff0000)
int64_t i_1 = (zx.q(rdx) + rax_4) s>> 0x10
int64_t rax_8 = *((sx.q(not.d(*(rdi + 0x104))) & sx.q(*(r8_2 + 0x170))) * 0x30 + *(rdi + 0xe0))
uint64_t rcx_5 = rax_8 u>> 0x30
uint64_t r14_1 = zx.q((rax_8 s>> 0x10).d)

if (i_1 s<= 0x10)
    i = i_1

int32_t rdx_3 = 0

if (i s> 0)
    int64_t* r8_3 = &var_88
    int64_t r10_1 = *(*(rcx_5 * 0x98 + *(rdi + 0xa8) + 0x88) + 0x30)
    
    do
        int32_t rax_11 = r14_1.d + rdx_3
        rdx_3 += 1
        r8_3 += 4
        *(r8_3 - 4) = *(r10_1 + (sx.q(rax_11) << 2))
    while (sx.q(rdx_3) s< i)

if (arg1 != -8)
    LeaveCriticalSection(arg1 + 8)
    r9 = var_e8

int64_t rsi_1 = 0

if (i_1 s> 0)
    do
        int64_t r15_1 = 0x10000
        
        if (r9 s<= 0x10000)
            r15_1 = r9
        
        if (rsi_1 s> 0 && (rsi_1.b & 0xf) == 0)
            EnterCriticalSection(arg1 + 8)
            int32_t rax_14 = 0
            int64_t* r9_1 = &var_88
            void* r10_3 = rcx_5 * 0x98 + *(rdi + 0xa8)
            
            while (sx.q(rax_14) + rsi_1 s< i_1)
                int32_t rcx_13 = r14_1.d + rax_14
                rax_14 += 1
                *r9_1 = *(*(*(r10_3 + 0x88) + 0x30) + (sx.q(rcx_13) << 2))
                r9_1 += 4
                
                if (rax_14 s>= 0x10)
                    break
            
            if (arg1 != -8)
                LeaveCriticalSection(arg1 + 8)
        
        int32_t rax_15 = sub_140b21160(r13, r15_1.d, 0)
        int32_t rax_16 = *(&var_88 + ((zx.q(rsi_1.d) & 0xf) << 2))
        
        if (rax_15 != rax_16)
            EnterCriticalSection(arg1 + 8)
            void* rdi_2 = rcx_5 * 0x98 + *(arg1 + 0xa8)
            int64_t var_a0
            __builtin_memset(&var_a0, 0, 0x14)
            void* rcx_21 = *(rdi_2 + 0x88)
            sub_140b3f690(*(rcx_21 + 0x30), sx.q(*(rcx_21 + 0x38)) << 2, &var_a0)
            int64_t var_d0
            int64_t var_b0
            sub_140596d10(&var_d0, sub_140b63b70(rdi_2 + 0x2c, &var_b0))
            int64_t rcx_25 = var_b0
            int32_t var_c0_1 = r14_1.d
            int32_t var_bc_1 = rax_16
            int32_t var_b8_1 = rax_15
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
            
            sub_141cfc6e0(&var_d0)
            int64_t rcx_27 = var_d0
            
            if (rcx_27 != 0)
                sub_140a74f90(rcx_27)
            
            if (arg1 != -8)
                LeaveCriticalSection(arg1 + 8)
            
            rdi = arg1
        
        rsi_1 += 1
        r13 = &var_f0[r15_1]
        r9 = var_e8 - r15_1
        var_f0 = r13
        r14_1 += 1
        var_e8 = r9
    while (rsi_1 s< i_1)

int64_t result = sub_141d0a5f0(rdi, arg2, arg3, var_100)
__security_check_cookie(rax_1 ^ &var_128)
return result
