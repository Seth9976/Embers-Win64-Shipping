// 函数: sub_14207a140
// 地址: 0x14207a140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
void* result = __security_cookie ^ &var_1e8
void* result_1 = result
void* result_2 = *arg1
int32_t i = 0

if (*(result_2 + 0x20) s> 0)
    result = result_2
    void** r14_1 = nullptr
    int32_t var_1c0_1 = 0
    int32_t var_1bc_1 = 0x5041000
    int32_t var_1b0_1 = 0
    char var_1ac_1 = 0
    char var_1a9_1 = 5
    int32_t var_1a0_1 = 0
    char var_199_1 = 5
    int32_t var_190_1 = 0
    char var_189_1 = 5
    int32_t var_180_1 = 0
    int32_t var_17c_1 = 0x50e0800
    
    do
        void* rsi_1 = *(r14_1 + **(result + 0x28))
        int64_t var_178_1
        __builtin_memset(&var_178_1, 0, 0x74)
        int64_t var_100
        __builtin_memset(&var_100, 0, 0x30)
        int32_t var_90_1 = 0
        int32_t var_8c_1 = 4
        int64_t var_88
        __builtin_memset(&var_88, 0, 0x40)
        int64_t var_48_1 = -1
        int32_t var_40_1 = 0xffffffff
        int32_t var_3c_1 = 0
        int64_t var_38_1 = 0
        int64_t* rbx_2 = *(r14_1 + *(result_2 + 0x18))
        sub_142290930(rsi_1 + 0xf8, rbx_2, &var_100)
        sub_1422b9c80(rsi_1 + 0x70, rbx_2, &var_100)
        sub_1422b9b10(rsi_1 + 0x70, rbx_2, &var_100)
        int32_t r9_1 = arg1[1].d
        
        if (r9_1 s< *(rsi_1 + 0xe8) && r9_1 s>= 0)
            sub_1422b9a60(rsi_1 + 0x70, rbx_2, &var_100, r9_1)
        
        sub_142290850(rsi_1 + 0x138, rbx_2, &var_100)
        char r9_2 = 0x10
        void* r10_1 = *(*arg1 + 8)
        uint128_t var_128_1
        var_128_1.q = *(r10_1 + 0x58)
        var_128_1:8.q = *(r10_1 + 0x78)
        int128_t var_118_1
        var_118_1.q = *(r10_1 + 0x98)
        var_118_1:8.q = *(r10_1 + 0xb8)
        int32_t rcx_6 = *(*(r10_1 + 0x28) + 0x44)
        var_178_1.o = (r10_1 + 0x40).o
        char rcx_7 = *(*(r10_1 + 0x28) + 0x48)
        
        if (rcx_7 != 0)
            r9_2 = 8
        
        char var_19c_1 = r9_2
        char rdx_5 = r9_2 * 3
        char rax_11 = 4
        
        if (rcx_7 != 0)
            rax_11 = 0xd
        
        char var_1ab_1 = rdx_5
        char var_1aa_1 = rax_11
        char var_19b_1 = rdx_5
        char var_19a_1 = rax_11
        int64_t var_168_1
        var_168_1.o = (r10_1 + 0x60).o
        char var_18b_1 = rdx_5
        char var_18a_1 = rax_11
        char var_18c_1 = r9_2 * 2
        int64_t var_158_1
        var_158_1.o = (r10_1 + 0x60).o
        int64_t var_148_1
        var_148_1.o = (r10_1 + 0x60).o
        int64_t var_138_1
        var_138_1.o = (r10_1 + 0x80).o
        sub_142079dc0(&rbx_2[0x26], &var_100)
        *(rbx_2 + 0x210) = var_178_1.o
        *(rbx_2 + 0x220) = var_168_1.o
        *(rbx_2 + 0x230) = var_158_1.o
        *(rbx_2 + 0x240) = var_148_1.o
        *(rbx_2 + 0x250) = var_138_1.o
        *(rbx_2 + 0x260) = var_128_1
        *(rbx_2 + 0x270) = var_118_1
        rbx_2[0x50] = rcx_6.q
        sub_142079dc0(&rbx_2[0x51], &var_100)
        sub_1419ba620(rbx_2)
        (*(*rbx_2 + 0x28))(rbx_2)
        result_2 = *arg1
        i += 1
        r14_1 = &r14_1[1]
        result = result_2
    while (i s< *(result_2 + 0x20))

__security_check_cookie(result_1 ^ &var_1e8)
return result
