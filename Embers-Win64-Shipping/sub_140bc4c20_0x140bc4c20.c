// 函数: sub_140bc4c20
// 地址: 0x140bc4c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
void* rax_2 = *(arg1 + 0x40)
void* rsi = arg1

if (rax_2 != 0)
    rsi = rax_2

int64_t rax_3 = sx.q(*(arg1 + 0x48))
int64_t* r15 = *rsi
void*** result

if ((*(r15 + 0x1a) & 1) == 0)
    int64_t* rsi_2 = *(rsi + (rax_3 << 3) - 8)
    int64_t rax_13 = sub_140bc7eb0(r15)
    int64_t rdi_3 = sub_140bc7eb0(rsi_2) - rax_13
    int64_t rax_15
    int128_t zmm1_1
    rax_15, zmm1_1 = sub_140bc7f20(rsi_2)
    result = sub_140bc4910(r15, 0, rdi_3 + rax_15, arg2, zmm1_1, arg3, 0)
else
    int64_t r12_1 = rax_3 << 3
    void* rcx = nullptr
    uint64_t r12_2 = r12_1 u>> 3
    int32_t rbx = 0
    void* var_58_1 = nullptr
    int32_t rdx = 8
    int32_t var_50_1 = 0
    
    if (rsi u> rsi + r12_1)
        r12_2 = 0
    
    int32_t var_4c_1 = 8
    int64_t r15_1 = 0
    void var_b8
    
    if (r12_2 != 0)
        while (true)
            int64_t* rdi_1 = *rsi
            var_50_1 = rbx + 1
            
            if (rbx + 1 s> rdx)
                sub_140bcf0c0(&var_b8, rbx)
                rcx = var_58_1
            
            void* rdx_2 = &var_b8
            
            if (rcx != 0)
                rdx_2 = rcx
            
            rsi += 8
            r15_1 += 1
            int64_t rcx_2 = sx.q(rbx) * 3
            *(rdx_2 + (rcx_2 << 2)) = *rdi_1
            *(rdx_2 + (rcx_2 << 2) + 8) = rdi_1[1].d
            
            if (r15_1 == r12_2)
                break
            
            rdx = var_4c_1
            rbx = var_50_1
            rcx = var_58_1
    
    void*** result_2 = j_sub_140a82f30(0x1d0)
    void*** result_1 = result_2
    
    if (result_2 == 0)
        result_1 = nullptr
    else
        *result_1 = &data_142e868b8
        void* rsi_1 = &var_b8
        result_1[0x29] = 0
        result_1[0x2a].d = 0
        *(result_1 + 0x154) = 8
        result_1[0x2c] = 0
        result_1[0x2e] = 0
        __builtin_memset(&result_1[0x34], 0, 0x22)
        
        if (var_58_1 != 0)
            rsi_1 = var_58_1
        
        void* r12_3 = rsi_1 + sx.q(var_50_1) * 0xc
        
        while (rsi_1 != r12_3)
            int64_t r15_2 = sx.q(result_1[0x2a].d)
            int32_t var_d8_1 = *(rsi_1 + 8)
            uint64_t var_e0_1 = *rsi_1
            int32_t rax_11 = (r15_2 + 1).d
            int64_t var_d0_1 = 0
            int64_t var_c8_1 = -1
            int64_t var_c0_1 = 0
            result_1[0x2a].d = rax_11
            
            if (rax_11 s> *(result_1 + 0x154))
                sub_140bceea0(&result_1[1], r15_2.d)
            
            void* rax_12 = result_1[0x29]
            int64_t rcx_5 = r15_2 * 5
            void* rdx_4 = &result_1[1]
            
            if (rax_12 != 0)
                rdx_4 = rax_12
            
            rsi_1 += 0xc
            *(rdx_4 + (rcx_5 << 3)) = var_e0_1.o
            *(rdx_4 + (rcx_5 << 3) + 0x10) = var_d0_1.o
            *(rdx_4 + (rcx_5 << 3) + 0x20) = var_c0_1
        
        if (arg3 != 0)
            sub_140a3c510(&result_1[0x2c], arg3)
    
    sub_140bd1060(result_1)
    
    if (var_58_1 != 0)
        sub_140a74f90(var_58_1)
    
    result = result_1

__security_check_cookie(rax_1 ^ &var_118)
return result
