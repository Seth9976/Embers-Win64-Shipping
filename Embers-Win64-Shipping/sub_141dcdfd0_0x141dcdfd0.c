// 函数: sub_141dcdfd0
// 地址: 0x141dcdfd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = sub_140d226f0(arg1, sub_142527690())
int64_t r8 = *arg1
int64_t* result = (*(r8 + 0x150))(arg1, arg3, r8)
int64_t* result_1 = result

if (rax_1 != result[6])
    if (arg2 == 0 || result[0x14].d s<= 0)
        result.b = 0
        return result
    
    void* rdi_1 = *result[0x13]
    
    if (rdi_1 == 0)
        result.b = 0
        return result
    
    void* rax_2 = sub_14252ce80()
    void* rdx_1 = *(rdi_1 + 0x10)
    result = sx.q(*(rax_2 + 0x38))
    
    if (result.d s> *(rdx_1 + 0x38))
        result.b = 0
        return result
    
    if ((*(rdx_1 + 0x30))[result] != rax_2 + 0x30 || *(*result_1[0x13] + 0x128) != rax_1)
        result.b = 0
        return result

result.b = 1
return result
