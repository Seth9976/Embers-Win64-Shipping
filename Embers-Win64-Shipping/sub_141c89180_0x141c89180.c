// 函数: sub_141c89180
// 地址: 0x141c89180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t* rdi = arg2[1]
int64_t* i = *arg2
int64_t* i_1 = i

if (rdi != 0)
    rdi[1].d += 1
    i_1 = *arg2

void var_90
int64_t* rax_3 = (*(*i_1 + 0x10))(i_1, &var_90)
int64_t rcx = *rax_3
void* rax_6 = sub_141c80d40(arg1 + 0xb0, sub_140b5ead0(rcx.d) + rcx:4.d, rax_3)
int64_t* r8_1 = *rax_6
int64_t rdx_2 = sx.q(*(rax_6 + 8))
int64_t* rcx_2 = r8_1
int64_t r15_1 = rdx_2 * 2
void* result = &r8_1[r15_1]

if (r8_1 != result)
    while (*rcx_2 != i)
        rcx_2 = &rcx_2[2]
        
        if (rcx_2 == result)
            goto label_141c89232

if (r8_1 == result || ((rcx_2 - r8_1) s>> 4).d == 0xffffffff)
label_141c89232:
    int32_t rax_7 = (rdx_2 + 1).d
    *(rax_6 + 8) = rax_7
    
    if (rax_7 s> *(rax_6 + 0xc))
        sub_1405a4f90(rax_6)
    
    result = *rax_6
    *(result + (r15_1 << 3)) = i
    *(result + (r15_1 << 3) + 8) = rdi
else if (rdi != 0)
    result = zx.q(rdi[1].d)
    rdi[1].d -= 1
    
    if (result.d == 1)
        (**rdi)(rdi)
        result = zx.q(*(rdi + 0xc))
        *(rdi + 0xc) -= 1
        
        if (result.d == 1)
            result = (*(*rdi + 8))(rdi, 1)

void* rbx_2 = *(arg1 + 0x148)

if (*(rbx_2 + 0x1b9) != 0)
    int64_t performanceCount[0x2]
    QueryPerformanceCounter(&performanceCount)
    void** const var_58 = &data_142d42d18
    int64_t (* var_78_1)() = sub_140594850
    void*** var_68_1 = nullptr
    result = j_sub_140a82f30(0x50)
    void* result_1 = result
    
    if (result != 0)
        *result = 0
        *(result + 0x10) = var_78_1
        *(result + 0x20) = var_68_1
        *(result + 0x30) = var_58.o
        int128_t var_48
        *(result + 0x40) = var_48
        int64_t (* rax_8)() = var_78_1
        
        if (*(result_1 + 0x10) != 0)
            rax_8 = nullptr
        
        var_78_1 = rax_8
        int32_t result_2 = *(rbx_2 + 0x1d0)
        *(rbx_2 + 0x1d0) = result_1
        result = result_2
        int32_t result_3 = *result
        *result = result_1
        result_1 = result_3
    
    if (var_78_1 != 0)
        void** const* rcx_7 = &var_58
        
        if (var_68_1 != 0)
            rcx_7 = var_68_1
        
        result = (*rcx_7)[2](rcx_7, result_1)

int64_t* rbx_3 = arg2[1]

if (rbx_3 != 0)
    result = zx.q(rbx_3[1].d)
    rbx_3[1].d -= 1
    
    if (result.d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t rsi_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rsi_1 == 1)
            result = (*(*rbx_3 + 8))(rbx_3, zx.q(rsi_1))

__security_check_cookie(rax_1 ^ &var_b8)
return result
