// 函数: sub_142c8c270
// 地址: 0x142c8c270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b38
int64_t rax_1 = __security_cookie ^ &var_b38
void var_888
void* var_910 = &var_888
char rax_4 = *(arg4 + 4) & 1
int32_t var_954 = 0x18
void* var_930 = nullptr
char var_468[0x410]
memset(&var_468, 0, 0x401)
void* rdi = nullptr
void* const r13 = &data_1434cce10
void* r15 = nullptr
void* const var_920 = &data_1434cce10
void* var_938 = nullptr
void* var_948 = nullptr
char* rax_5 = strchr(arg2, 0x5c)
char* rsi = rax_5
char* rax_6

if (rax_5 == 0)
    rax_6 = strchr(arg2, 0x2f)
    rsi = rax_6

void* rsi_1

if (rax_5 != 0 || rax_6 != 0)
    var_920 = arg2
    r15 = rsi - arg2
    r13 = arg2
    var_948 = r15
    rsi_1 = &rsi[1]
else
    rsi_1 = arg2

int64_t rbx_1 = -1

if (rsi_1 != 0)
    rdi = -ffffffffffffffff
    
    do
        rdi += 1
    while (*(rsi_1 + rdi) != 0)
    
    var_938 = rdi

int32_t rax_7
int64_t r8
rax_7, r8 = sub_142c8fff0(&var_468, 0x401)

if (rax_7 == 0)
    do
        rbx_1 += 1
    while (var_468[rbx_1] != 0)
else
    arg6 = sub_142c64850(arg1, "gethostname() failed, continuing without!\n", r8, arg6)
    rbx_1 = 0

int64_t var_928 = rbx_1
int32_t result
int64_t var_8e8
int64_t var_8e0
int64_t var_8c8
char var_8a0[0x18]

if (*(arg4 + 0x18) != 0)
    int512_t zmm2
    result, zmm2 = sub_142c91030(arg1, &var_8e8, 8)
    
    if (result == 0)
        result = sub_142c8e770(arg1, arg3, &var_8a0)
        
        if (result == 0)
            result = sub_142c8e850(rsi_1, rdi, r13, r15, &var_8a0, &var_8e0)
            
            if (result == 0)
                result = sub_142c8e6c0(&var_8e0, &var_8e8, arg4 + 8, &var_8c8)
                
                if (result == 0)
                    result, arg6 = sub_142c8e960(&var_8e0, &var_8e8, arg4, &var_930, zmm2, &var_954)
                    
                    if (result == 0)
                        var_910 = var_930
                        goto label_142c8c53e
else
    char* rcx_13
    void* rdx_7
    char* r8_7
    
    if ((*(arg4 + 4) & 0x80000) == 0)
        result = sub_142c8e770(arg1, arg3, &var_8a0)
        
        if (result == 0)
            sub_142c8e4a0(&var_8a0, arg4 + 8, &var_888)
            sub_142c8e550(arg1, arg3, &var_8e0)
            r8_7 = &var_8c8
            rdx_7 = arg4 + 8
            rcx_13 = &var_8e0
            goto label_142c8c535
    else
        result, arg6 = sub_142c91030(arg1, &var_8e8, 8)
        
        if (result == 0)
            int64_t rax_9 = var_8e8
            var_8c8 = rax_9
            int64_t var_8c0_1 = 0
            int64_t var_8b8 = 0
            var_8e0 = *(arg4 + 8)
            int64_t var_8d8_1 = rax_9
            uint64_t var_8b0
            post_pgo_initialization(&var_8e0, 0x10, &var_8b0)
            result = sub_142c8e770(arg1, arg3, &var_8a0)
            
            if (result == 0)
                r8_7 = &var_888
                rdx_7 = &var_8b0
                rcx_13 = &var_8a0
            label_142c8c535:
                sub_142c8e4a0(rcx_13, rdx_7, r8_7)
            label_142c8c53e:
                
                if (rax_4 != 0)
                    r15 *= 2
                    rdi *= 2
                    rbx_1 *= 2
                    var_948 = r15
                    var_928 = rbx_1
                    var_938 = rdi
                
                int32_t rcx_16 = var_954
                uint64_t r12_1 = zx.q(rbx_1.b)
                uint64_t rax_10 = zx.q(rcx_16 + 0x58)
                void* rsi_3 = r15 + rax_10
                int32_t r14_1 = rax_10.d
                void* r10_1 = rdi + rsi_3
                uint64_t r15_2 = zx.q((rbx_1 u>> 8).b)
                uint64_t r13_1 = zx.q((rdi u>> 8).b)
                var_8b0 = zx.q((var_948 u>> 8).b)
                uint32_t rdx_12 = zx.d((rcx_16 u>> 8).b)
                char* var_950
                var_950.d = zx.d(rcx_16.b)
                uint32_t var_968_1 = zx.d(*(arg4 + 7))
                uint32_t var_970_1 = zx.d(*(arg4 + 6))
                uint32_t var_978_1 = zx.d(*(arg4 + 5))
                uint32_t var_980_1 = zx.d(*(arg4 + 4))
                int64_t var_9d0
                __builtin_memset(&var_9d0, 0, 0x50)
                uint64_t var_9d8_1 = zx.q((r10_1 u>> 8).b)
                uint64_t var_9e0_1 = zx.q(r10_1.b)
                uint64_t var_9e8_1 = r15_2
                uint64_t var_9f0_1 = r12_1
                uint64_t var_9f8_1 = r15_2
                uint64_t var_a00_1 = r12_1
                int64_t var_a08_1 = 0
                int64_t var_a10_1 = 0
                uint64_t var_a18_1 = zx.q((rsi_3 u>> 8).b)
                uint64_t var_a20_1 = zx.q(rsi_3.b)
                uint64_t var_a28_1 = r13_1
                uint64_t rcx_18 = zx.q(var_938.b)
                uint64_t var_a30_1 = rcx_18
                uint64_t var_a38_1 = r13_1
                uint64_t var_a40_1 = rcx_18
                int64_t var_a48_1 = 0
                int64_t var_a50_1 = 0
                uint64_t var_a58_1 = zx.q((zx.q(r14_1) u>> 8).b)
                uint64_t var_a60_1 = zx.q(r14_1.b)
                uint64_t rax_28 = var_8b0
                uint64_t var_a68_1 = rax_28
                uint64_t rcx_19 = zx.q(var_948.b)
                uint64_t var_a70_1 = rcx_19
                uint64_t var_a78_1 = rax_28
                uint64_t var_a80_1 = rcx_19
                int32_t rcx_20 = var_950.d
                int64_t var_a88_1 = 0
                int64_t var_a90_1 = 0
                int32_t var_a98_1 = 0
                int32_t var_aa0_1 = 0x58
                uint32_t var_aa8_1 = rdx_12
                int32_t var_ab0_1 = rcx_20
                uint32_t var_ab8_1 = rdx_12
                int32_t var_ac0_1 = rcx_20
                int64_t var_ac8_1 = 0
                int64_t var_ad0_1 = 0
                int32_t var_ad8_1 = 0
                int32_t var_ae0_1 = 0x40
                int64_t var_ae8_1 = 0
                int32_t var_af0_1 = 0x18
                int64_t var_af8_1 = 0
                int32_t var_b00_1 = 0x18
                int64_t var_b18_3
                __builtin_memset(&var_b18_3, 0, 0x18)
                char var_868[0x10]
                int32_t rax_30
                int512_t zmm2_1
                rax_30, zmm2_1 = sub_142c564b0(&var_868, 0x400, "NTLMSSP%c", 0, arg6)
                int64_t r14_2 = sx.q(rax_30)
                
                if (r14_2 u< 0x3e8)
                    arg5 = var_8b8
                    *(&var_868 + r14_2) = var_8c8.o
                    void var_858
                    *(&var_858 + r14_2) = arg5
                    r14_2 += 0x18
                
                int32_t rcx_22 = var_954
                
                if (r14_2 u< zx.q(0x400 - rcx_22))
                    uint64_t rbx_3 = zx.q(rcx_22)
                    memcpy(&var_868[r14_2], var_910, rbx_3.d)
                    r14_2 += rbx_3
                
                int64_t r8_13 = data_143ccb8a0(var_930, arg5)
                void* r15_3 = r14_2 + var_948
                
                if (r15_3 + var_938 + var_928 u< 0x400)
                    if (rax_4 == 0)
                        memcpy(&var_868[r14_2], var_920, var_948.d)
                    else
                        char* rcx_26 = nullptr
                        void* rdx_15 = &var_868[r14_2]
                        uint64_t rsi_6 = var_948 u>> 1
                        
                        if (rsi_6 != 0)
                            do
                                *(rdx_15 + (rcx_26 << 1)) = *(rcx_26 + var_920)
                                *(rdx_15 + (rcx_26 << 1) + 1) = 0
                                rcx_26 = &rcx_26[1]
                            while (rcx_26 u< rsi_6)
                    
                    if (rax_4 == 0)
                        memcpy(&var_868 + r15_3, rsi_1, var_938.d)
                    else
                        int64_t r8_15 = &var_868 + r15_3
                        char* rcx_28 = nullptr
                        uint64_t r9_6 = var_938 u>> 1
                        
                        if (r9_6 != 0)
                            do
                                *(r8_15 + (rcx_28 << 1)) = *(rcx_28 + rsi_1)
                                *(r8_15 + (rcx_28 << 1) + 1) = 0
                                rcx_28 = &rcx_28[1]
                            while (rcx_28 u< r9_6)
                    
                    int64_t r15_4 = r15_3 + var_938
                    
                    if (rax_4 == 0)
                        memcpy(&var_868[r15_4], &var_468, var_928.d)
                    else
                        int64_t rcx_30 = 0
                        void* rdx_19 = &var_868[r15_4]
                        uint64_t r8_18 = var_928 u>> 1
                        
                        if (r8_18 != 0)
                            do
                                *(rdx_19 + (rcx_30 << 1)) = var_468[rcx_30]
                                *(rdx_19 + (rcx_30 << 1) + 1) = 0
                                rcx_30 += 1
                            while (rcx_30 u< r8_18)
                    
                    int32_t result_1 =
                        sub_142c75c90(0, &var_868, r15_4 + var_928, arg7, zmm2_1, arg8)
                    data_143ccb8a0(*(arg4 + 0x10))
                    result = result_1
                    *(arg4 + 0x10) = 0
                    *(arg4 + 0x18) = 0
                else
                    sub_142c64760(arg1, "user + domain + host name too big", r8_13, zmm2_1)
                    result = 0x1b
__security_check_cookie(rax_1 ^ &var_b38)
return result
