// 函数: sub_140f8f7e0
// 地址: 0x140f8f7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x108)
int512_t result

if (rcx != 0)
    sub_140f61190(rcx, arg2, arg3)
    void* rcx_1 = *(arg1 + 0x108)
    char var_28_1 = arg4
    char var_27_1 = 1
    int64_t var_20 = 0
    *(rcx_1 + 0x4b8) = arg4
    *(rcx_1 + 0x4b9) = 1
    int32_t var_18_1 = 0
    sub_1407473e0(rcx_1 + 0x4c0, &var_20)
    sub_140745b20(&var_20)
    char rax_1
    rax_1, result = sub_140f4a5f0(*(arg1 + 0x108))
    
    if (rax_1 == 0)
        result.o = zx.o(0)
        return result

result.o = *(*(arg1 + 8) + 0x768)
return result
