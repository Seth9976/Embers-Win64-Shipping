// 函数: sub_141d97030
// 地址: 0x141d97030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t result = __security_cookie ^ &var_e8
int64_t result_1 = result
void* rbp = *arg1

if (*(rbp + 0x3a8) s> 1 && *(rbp + 0x238) != 0 && *(rbp + 0x398) != 0)
    int64_t r15_1 = sx.q(*(rbp + 0x100))
    int64_t r12_1
    int32_t r13_1
    
    if (r15_1.d == 0xffffffff)
        r12_1 = 0
        r13_1 = 0
    else
        int64_t rax_1 = *(rbp + 0x108)
        int64_t rcx = r15_1 * 3
        r12_1 = *(rax_1 + (rcx << 3) + 8)
        r13_1 = *(rax_1 + (rcx << 3) + 4)
    
    void*** var_a8_1 = nullptr
    int64_t rsi_1 = *(rbp + 0x230)
    *(rbp + 0x230) = 0
    int32_t rdi_1 = *(rbp + 0x238)
    int32_t rbx_1 = *(rbp + 0x23c)
    *(rbp + 0x238) = 0
    void** const var_98 = &data_142da2668
    void* var_90_1 = rbp
    int64_t (* var_b8)(int64_t* arg1, int32_t* arg2) = sub_141d9bc20
    void*** rax_2 = sub_140a82f30(0x38, 8)
    rax_2[1] = rbp
    rax_2[2].d = r15_1.d
    rax_2[3] = r12_1
    rax_2[4].d = r13_1
    rax_2[5] = rsi_1
    rax_2[6].d = rdi_1
    *(rax_2 + 0x34) = rbx_1
    *rax_2 = &data_1432398a0
    void* const var_78
    void* const rax_3 = var_78
    
    if (rax_2 != -8)
        rax_3 = &data_141d9ba30
    
    var_78 = rax_3
    sub_141d92760(rbp, 2, &var_78, &var_b8)
    
    if (var_78 != 0)
        void var_58
        int64_t* rcx_3 = &var_58
        
        if (rax_2 != 0)
            rcx_3 = rax_2
        
        (*(*rcx_3 + 0x10))(rcx_3)
    
    if (var_b8 != 0)
        void** const* rcx_4 = &var_98
        
        if (var_a8_1 != 0)
            rcx_4 = var_a8_1
        
        (*rcx_4)[2](rcx_4)
    
    *(rbp + 0x238) = 0
    
    if (*(rbp + 0x23c) != 0)
        sub_1405c5510(rbp + 0x230, 0)
    
    *(rbp + 0x240) = 0
    int64_t performanceCount[0x2]
    result = QueryPerformanceCounter(&performanceCount)
    *(rbp + 0x160) = float.d(performanceCount[0]) f* data_143d796f8 f+ 16777216.0

__security_check_cookie(result_1 ^ &var_e8)
return result
