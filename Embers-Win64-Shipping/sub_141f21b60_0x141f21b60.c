// 函数: sub_141f21b60
// 地址: 0x141f21b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg2

if (arg3 != 0)
    void*** rax_1
    rax_1, zmm6 = sub_141f88540()
    void** r8 = *rax_1
    r8[7](rax_1, 0x1e, r8)

int64_t** var_28 = nullptr
int32_t result_1 = 0
(*(*arg1 + 0x688))(arg1, &var_28, 3)
int64_t** rbx_1 = var_28
int64_t result = sx.q(result_1)
void* rsi = &rbx_1[result]

if (rbx_1 != rsi)
    do
        int64_t* rdi_1 = *rbx_1
        
        if (rdi_1 != 0)
            void* rax_3 = sub_1425b3af0()
            void* rcx_2 = rdi_1[2]
            result = sx.q(*(rax_3 + 0x38))
            
            if (result.d s<= *(rcx_2 + 0x38))
                int64_t result_2 = result
                result = *(rcx_2 + 0x30)
                
                if (*(result + (result_2 << 3)) == rax_3 + 0x30)
                    result, zmm6 = sub_142397530(rdi_1, zmm6, arg4)
        
        rbx_1 = &rbx_1[1]
    while (rbx_1 != rsi)
    
    rbx_1 = var_28

if (rbx_1 == 0)
    return result

return sub_140a74f90(rbx_1)
