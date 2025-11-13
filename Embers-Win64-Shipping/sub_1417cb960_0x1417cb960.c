// 函数: sub_1417cb960
// 地址: 0x1417cb960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
int64_t* rax = sub_140b13b30(&var_28)
int32_t rdx = arg1[1].d
int32_t rbx = 0
int32_t rdi = rdx - 1

if (rdx == 0)
    rdi = 0

int32_t rcx_1

if (rax[1].d == 0)
    rcx_1 = 2

if (rax[1].d != 0 || rdi == 0xffffffff)
    rcx_1 = 1

int16_t* var_38 = *rax
*rax = 0
int32_t rax_3 = rax[1].d
int32_t rax_4 = *(rax + 0xc)
rax[1] = 0
int32_t rdx_2 = rdi + rcx_1 + rax_3

if (rdx_2 s> rax_4)
    sub_1405947f0(&var_38, rdx_2)

sub_140a2cf70(&var_38, *arg1, rdi)
int64_t rcx_4 = var_28

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int16_t* const rsi_1 = &data_142d40450
int16_t* const rcx_5 = &data_142d40450

if (rax_3 != 0)
    rcx_5 = var_38

HMODULE result_1 = sub_140b67ab0(rcx_5)
HMODULE result = result_1

if (result_1 == 0)
    int128_t zmm6 = 0x3f000000
    
    while (true)
        zmm6 = sub_140b73230(zmm6)
        int16_t* rcx_6 = &data_142d40450
        
        if (rax_3 != 0)
            rcx_6 = var_38
        
        HMODULE result_2 = sub_140b67ab0(rcx_6)
        result = result_2
        
        if (result_2 != 0)
            break
        
        rbx += 1
        
        if (rbx s>= 5)
            int64_t* rax_5 = __crt_deferred_errno_cache::get(&data_143db7b00)
            int16_t* rdx_4 = &data_142d40450
            
            if (rax_3 != result.d)
                rdx_4 = var_38
            
            int64_t r8_2 = *rax_5
            (*(r8_2 + 0x70))(rax_5, rdx_4, r8_2)
            int16_t* rdx_5 = &data_142d40450
            
            if (rax_3 != result.d)
                rdx_5 = var_38
            
            (*(*rax_5 + 0x78))(rax_5, rdx_5)
            
            if (rax_3 != result.d)
                rsi_1 = var_38
            
            int64_t* rax_8 = (*(*rax_5 + 0xc0))(rax_5, rsi_1, 0)
            
            if (rax_8 != 0)
                int64_t r8_3 = *rax_8
                (*r8_3)(rax_8, zx.q((&result->unused + 1).d), r8_3)
            
            break

int16_t* rcx_11 = var_38

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

return result
