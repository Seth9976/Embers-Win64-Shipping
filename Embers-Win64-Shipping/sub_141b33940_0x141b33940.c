// 函数: sub_141b33940
// 地址: 0x141b33940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg1[0x12]
void* result_1 = nullptr
int32_t rbx = arg1[0x1d].d
int128_t var_18
int32_t rdi_2

if (rax.b == 2)
    rdi_2 = 0
else
    uint32_t rdx_2 = (rax u>> 0x20).d + 1
    var_18 = *arg2
    
    if (rax.b == 1)
        rdx_2 = (rax u>> 0x20).d
    
    rdi_2 = var_18.d + rbx - rdx_2

var_18 = *arg2
void* result = sub_141a69ec0(arg1, &var_18, arg3)

if (result != 0)
    void* rax_1 = sub_141b36400()
    void* rcx_3 = *(result + 0x10)
    int64_t rdx_4 = sx.q(*(rax_1 + 0x38))
    
    if (rdx_4.d s<= *(rcx_3 + 0x38) && *(*(rcx_3 + 0x30) + (rdx_4 << 3)) == rax_1 + 0x30)
        result_1 = result
    
    *(result_1 + 0xe8) = rdi_2

arg1[0x1d].d = rbx
return result
