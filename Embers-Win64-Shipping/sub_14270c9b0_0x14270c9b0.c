// 函数: sub_14270c9b0
// 地址: 0x14270c9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg1[0x47].d

if (result == 0xffffffff || arg2 == 0xffffffff || (arg2 != result && arg2 != 0 && result != 0))
    return result

char rax_1 = (*(*arg1 + 0x4c0))()
int64_t rdx = *arg1
bool rax_2 = (*(rdx + 0x500))(arg1, rdx)
void* rcx_1 = arg1[0x20]

if (rax_2 == 0)
    if (rcx_1 == 0)
    label_14270caab:
        int16_t arg_8 = data_143b58114
        char arg_a = 2
        return (*(*arg1 + 0x440))(arg1, &arg_8)
    
    char rax_5 = (*(rcx_1 + 0x98)).b
    
    if ((rax_5 & 2) == 0 || *(rcx_1 + 0x30) s<= 1 || (rax_5 & 1) == 0)
        goto label_14270caab
    
    if (sub_140d3c6e0(rcx_1 + 0x9c) != 0)
        goto label_14270caab
    
    arg1[0x37].b = 3
else
    arg1[0x37].b = 3
    
    if (rcx_1 == 0)
        rax_2 = false
    else
        float zmm0 = arg1[0x36].d
        float temp0_1 = *(rcx_1 + 0xe8)
        zmm0 - temp0_1
        rax_2 = zmm0 < temp0_1
    
    if (rax_1 != 0 || rax_2 != 0)
        (*(*arg1 + 0x508))(arg1, rcx_1)
        jump(*(*arg1 + 0x4c8))

return sub_142717810(arg1) __tailcall
