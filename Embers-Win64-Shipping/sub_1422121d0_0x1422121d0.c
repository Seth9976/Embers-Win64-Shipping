// 函数: sub_1422121d0
// 地址: 0x1422121d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[1]
int64_t var_18 = 0
int32_t var_10 = 0
int32_t rcx_2
int64_t zmm0

if (__crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(rdi + 0xf0) == 0)
    rcx_2 = var_10
    zmm0 = var_18
else
    int32_t* rax_1 = sub_14226dc30(&var_18, rdi + 0xf0)
    zmm0 = *rax_1
    rcx_2 = rax_1[2]

int64_t* result = *arg1
*result = zmm0
result[1].d = rcx_2
return result
