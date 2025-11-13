// 函数: sub_142095c10
// 地址: 0x142095c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg2

if (*(arg1 + 0x40) == 0)
    if (*(arg1 + 0x78) != 0)
        *arg2 = **(arg1 + 0x70)
        *arg3 = *(sx.q(*(arg1 + 0x78)) * 0x2c + *(arg1 + 0x70) - 0x2c)
        return 
    
    *arg2 = 0
    *arg3 = 0
    return 

int64_t* rax_3 = *(arg1 + 0x38)
int32_t arg_8 = 0
int32_t arg_20 = 0
int64_t* rcx_2 = *rax_3
(*(*rcx_2 + 0x268))(rcx_2)
int32_t i = 1

if (*(arg1 + 0x40) s<= 1)
    return 

int64_t* r14_1 = 8

do
    int64_t* rcx_3 = *(r14_1 + *(arg1 + 0x38))
    (*(*rcx_3 + 0x268))(rcx_3, &arg_8, &arg_20)
    r14_1 = &r14_1[1]
    i += 1
    *rdi = __minss_xmmss_memss(*rdi, arg_8)
    *arg3 = __maxss_xmmss_memss(*arg3, arg_20)
while (i s< *(arg1 + 0x40))
