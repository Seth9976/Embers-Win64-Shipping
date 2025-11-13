// 函数: sub_141887670
// 地址: 0x141887670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
CRITICAL_SECTION* lpCriticalSection = arg1 + 0x68
void* rdi = arg4
int32_t i = arg3
EnterCriticalSection(lpCriticalSection)
int32_t var_6c = 0x80
*arg2 = 0
int32_t rdx = 0
arg2[1] = 0
int32_t rcx_1 = 0
int32_t rax_2 = *(arg1 + 0x60)
void* r9 = nullptr
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int64_t rax_4 = sx.q(rax_2 - 1)
int64_t var_c0 = rax_4
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
void* var_58 = nullptr
int32_t var_50 = 0

if (rax_2 - 1 s>= 0)
    int64_t r13_2 = rax_4 << 4
    
    for (; i s> arg2[1].d; i = arg3)
        int64_t* rsi_2 = *(arg1 + 0x58) + r13_2
        
        if (rdx == rcx_1)
            goto label_1418877dd
        
        r9 = var_58
        int64_t rdx_2 = sx.q(var_50 - 1) & sx.q(sub_140a6b260(rsi_2, 0x10))
        void var_60
        void* rax_9 = &var_60
        
        if (r9 != 0)
            rax_9 = r9
        
        int32_t rax_10 = *(rax_9 + (rdx_2 << 2))
        
        if (rax_10 == 0xffffffff)
            goto label_1418877dd
        
        int64_t r12_1 = var_98
        
        while (true)
            int64_t rdx_3 = sx.q(rax_10) * 3
            int32_t r8_3 = (*(r12_1 + (rdx_3 << 3) + 4) ^ *(rsi_2 + 4))
                | (*(r12_1 + (rdx_3 << 3) + 8) ^ rsi_2[1].d)
                | (*(r12_1 + (rdx_3 << 3) + 0xc) ^ *(rsi_2 + 0xc))
            
            if ((r8_3 | (*(r12_1 + (rdx_3 << 3)) ^ *rsi_2)) == 0)
                break
            
            rax_10 = *(r12_1 + (rdx_3 << 3) + 0x10)
            
            if (rax_10 == 0xffffffff)
                goto label_1418877d6
        
        if (rax_10 != 0xffffffff)
            rdi = arg4
        else
        label_1418877d6:
            rdi = arg4
        label_1418877dd:
            void* rax_11 = *(rdi + 0x10)
            void* rcx_11 = rdi + 0x20
            
            if (rax_11 != 0)
                rcx_11 = rax_11
            
            if ((*rdi)((*(*rcx_11 + 8))(rcx_11), rsi_2) == 0)
                r9 = var_58
            else
                int32_t var_b0
                sub_140598750(&var_98, &var_b0)
                int128_t* var_a8
                *var_a8 = *rsi_2
                var_a8[1].d = 0xffffffff
                void var_c8
                sub_14093ebb0(&var_98, &var_c8, sub_140a6b260(var_a8, 0x10), var_a8, var_b0, 
                    nullptr)
                int64_t rdi_3 = sx.q(arg2[1].d)
                int32_t rax_17 = (rdi_3 + 1).d
                arg2[1].d = rax_17
                
                if (rax_17 s> *(arg2 + 0xc))
                    sub_1405a4f90(arg2)
                
                *(*arg2 + rdi_3 * 0x10) = *rsi_2
                r9 = var_58
                rdi = arg4
        
        r13_2 -= 0x10
        int64_t rax_20 = var_c0 - 1
        var_c0 = rax_20
        
        if (rax_20 s< 0)
            break
        
        rcx_1 = var_64
        int32_t var_90
        rdx = var_90

int32_t var_50_1 = 0

if (r9 != 0)
    sub_140a74f90(r9)

int32_t var_90_1 = 0
int64_t var_8c

if (var_8c.d != 0)
    sub_1405a5130(&var_98, 0)

int32_t var_68_1 = 0xffffffff
int32_t var_64_1 = 0
sub_14059a8e0(&var_8c:4, 0)
int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

int64_t rcx_23 = var_98

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

__security_check_cookie(rax_1 ^ &var_108)
return arg2
