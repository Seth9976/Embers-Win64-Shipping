// 函数: sub_1426e6140
// 地址: 0x1426e6140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_141ee9b30(arg1, arg2)
void* rdi = arg1[0x14]

if (rdi != 0)
    void* rax = sub_1427249f0()
    void* rdx_1 = *(rdi + 0x10)
    result = sx.q(*(rax + 0x38))
    
    if (result.d s<= *(rdx_1 + 0x38))
        int64_t result_1 = result
        result = *(rdx_1 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax + 0x30)
            arg1[0x18] = rdi
            return result

arg1[0x18] = 0
return result
