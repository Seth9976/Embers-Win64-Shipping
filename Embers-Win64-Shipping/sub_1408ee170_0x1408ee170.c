// 函数: sub_1408ee170
// 地址: 0x1408ee170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1[0x1d].d
void* result_1 = nullptr
int64_t r10 = *(sub_140d226f0(arg1, sub_141a6e000()) + 0x108)
int64_t rax_2 = arg1[0x12]
int128_t var_28
int32_t rdi

if (rax_2.b == 2)
    rdi = 0
else
    uint64_t r9_3 = zx.q((rax_2 u>> 0x20).d + 1)
    var_28 = *arg2
    
    if (rax_2.b == 1)
        r9_3 = zx.q((rax_2 u>> 0x20).d)
    
    int32_t arg_8
    rdi = *sub_1408ed260(&arg_8, &var_28, &arg1[0x1c], r9_3, r10)

var_28 = *arg2
void* result = sub_141a69ec0(arg1, &var_28, arg3)

if (result != 0)
    void* rax_4 = sub_1408ee390()
    void* rcx_5 = *(result + 0x10)
    int64_t rdx_3 = sx.q(*(rax_4 + 0x38))
    
    if (rdx_3.d s<= *(rcx_5 + 0x38) && *(*(rcx_5 + 0x30) + (rdx_3 << 3)) == rax_4 + 0x30)
        result_1 = result
    
    *(result_1 + 0xe8) = rdi

arg1[0x1d].d = rbx
return result
