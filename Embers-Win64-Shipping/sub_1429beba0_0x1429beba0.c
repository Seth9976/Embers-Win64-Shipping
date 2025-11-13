// 函数: sub_1429beba0
// 地址: 0x1429beba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_b0 = -2
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t* var_b8 = arg2
int64_t r10 = 0
int32_t rbx = 0
int64_t* rcx = *(arg1 + 0x10)
int64_t rax_2
int64_t rdx_2
rdx_2:rax_2 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(arg1 + 0x18) - rcx)
int64_t rbp_1 = rdx_2 s>> 2
uint64_t rax_4 = rbp_1 u>> 0x3f
int64_t rbp_2 = rbp_1 + rax_4

if (rbp_1 != neg.q(rax_4))
    uint64_t rax_5 = 0
    
    do
        int32_t i_2 = 0
        uint64_t rax_6 = rax_5 * 3
        int64_t r11_1 = rcx[rax_6]
        int64_t rax_7
        int64_t rdx_5
        rdx_5:rax_7 = muls.dp.q(0x2aaaaaaaaaaaaaab, rcx[rax_6 + 1] - r11_1)
        int64_t r9_2 = rdx_5 s>> 2
        uint64_t rax_9 = r9_2 u>> 0x3f
        
        if (r9_2 != neg.q(rax_9))
            uint64_t i = 0
            
            do
                uint64_t rax_10 = i * 3
                r10 += (*(r11_1 + (rax_10 << 3) + 8) - *(r11_1 + (rax_10 << 3))) s>> 3
                i_2 += 1
                i = zx.q(i_2)
            while (i u< r9_2 + rax_9)
        
        rbx += 1
        rax_5 = zx.q(rbx)
    while (rax_5 u< rbp_2)

if ((arg2[1] - *arg2) s>> 3 != r10)
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
    sub_14297d3f0(&exceptionObject, "Wrong offset count, not able to read from this array")
    _CxxThrowException(&exceptionObject, &data_143946538)
    noreturn

int64_t i_1 = 0

if (rbp_2 != 0)
    int64_t rbx_1 = 0
    void* r9_4 = nullptr
    int64_t rdx_29
    
    do
        int64_t j = 0
        int64_t rax_14
        int64_t rdx_11
        rdx_11:rax_14 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(rcx + r9_4 + 8) - *(rcx + r9_4))
        int64_t rdx_12 = rdx_11 s>> 2
        
        if (rdx_12 != neg.q(rdx_12 u>> 0x3f))
            int64_t* r10_1 = nullptr
            int64_t rdx_24
            
            do
                int64_t k = 0
                int64_t rax_17 = *(rcx + r9_4)
                
                if ((*(r10_1 + rax_17 + 8) - *(r10_1 + rax_17)) s>> 3 != 0)
                    void* r11_3 = *(arg1 + 0x10) + r9_4
                    int64_t rax_20
                    
                    do
                        *(*(r10_1 + *r11_3) + (k << 3)) = *(*arg2 + (rbx_1 << 3))
                        rbx_1 += 1
                        k += 1
                        rcx = *(arg1 + 0x10)
                        r11_3 = r9_4 + rcx
                        rax_20 = *r11_3
                    while (k u< (*(r10_1 + rax_20 + 8) - *(r10_1 + rax_20)) s>> 3)
                
                j += 1
                r10_1 = &r10_1[3]
                int64_t rax_21
                int64_t rdx_23
                rdx_23:rax_21 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(rcx + r9_4 + 8) - *(rcx + r9_4))
                rdx_24 = rdx_23 s>> 2
            while (j u< rdx_24 + (rdx_24 u>> 0x3f))
        
        i_1 += 1
        r9_4 += 0x18
        int64_t rax_24
        int64_t rdx_28
        rdx_28:rax_24 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(arg1 + 0x18) - rcx)
        rdx_29 = rdx_28 s>> 2
    while (i_1 u< rdx_29 + (rdx_29 u>> 0x3f))

char result = sub_1429be280(arg1) ^ 1
*arg3 = result
void* rcx_3 = *arg2

if (rcx_3 != 0)
    if (((arg2[2] - rcx_3) & 0xfffffffffffffff8) u>= 0x1000)
        void* r8 = *(rcx_3 - 8)
        
        if (rcx_3 - r8 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_3 = r8
    
    result = j_sub_140a74f90(rcx_3)
    __builtin_memset(arg2, 0, 0x18)

__security_check_cookie(rax_1 ^ &var_d8)
return result
