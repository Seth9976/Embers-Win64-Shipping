// 函数: sub_1405c4110
// 地址: 0x1405c4110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax
float zmm6_1
rax, zmm6_1 = sub_1405be050(arg1)
int64_t r10 = *(arg1 + 0x458)
void* result_1 = nullptr
char rax_1 = (*(r10 + 0x10))(arg1 + 0x458, arg2, &result_1)
void* result = result_1
void* rax_2
int64_t rcx_1
void* rdx_1

if (result != 0)
    rax_2 = sub_1425b6f00()
    rdx_1 = *(result + 0x10)
    rcx_1 = sx.q(*(rax_2 + 0x38))

if (result == 0 || rcx_1.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rcx_1 << 3)) != rax_2 + 0x30)
    result = nullptr

char rax_4

if (rax_1 != 0 && result != 0)
    rax_4 = sub_1405ba3e0(*rax, result)

if (rax_1 == 0 || result == 0 || (rax_4 & 0x20) == 0)
    void* rcx_3
    
    if (*(arg1 + 0x2a0) != 1)
        rcx_3 = *(arg1 + 0x310)
    
    uint64_t arg_8
    uint64_t rax_5
    
    if (*(arg1 + 0x2a0) == 1 || rcx_3 == 0)
        rax_5 = *(arg1 + 0x2a4)
    else
        sub_1405be000(rcx_3, &arg_8)
        rax_5 = arg_8
    
    uint32_t r9 = zx.d(*(arg1 + 0x2ac))
    arg_8 = rax_5
    int32_t rcx_4 = int.d(zmm6_1)
    uint32_t rbp_1 = zx.d(arg4)
    arg_8.d = rax_5.d * rcx_4
    arg_8:4.d *= rcx_4
    void* result_2 = sub_1405b4ff0(*rax, arg1, arg_8, r9, rbp_1)
    result = result_2
    
    if (result_2 != 0 && arg2 != 0)
        sub_1405bfed0(arg1 + 0x458, arg2, result_2, rbp_1)

return result
