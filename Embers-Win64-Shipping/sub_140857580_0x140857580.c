// 函数: sub_140857580
// 地址: 0x140857580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
void* result = sub_140d30a00(arg1 + 0x68, 0)
void* result_1 = result

if (result != 0)
    void* rax = sub_140872050()
    void* rcx_1 = *(result_1 + 0x10)
    result = rax + 0x30
    int64_t rdx_1 = sx.q(*(result + 8))
    
    if (rdx_1.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rdx_1 << 3)) == result)
        *(arg1 + 0x90) = result_1
        return result

*(arg1 + 0x90) = 0
return result
