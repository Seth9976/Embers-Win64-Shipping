// 函数: sub_142b269a0
// 地址: 0x142b269a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1 = arg4
int32_t rbx = arg2
int32_t result

if (arg4.b u>= 0xc0)
    result = sub_142aa6250(*arg1, arg4)
    result_1 = result

if (arg4.b u< 0xc0 || result != 0xc0)
    char rax_1 = sub_142b26d20(result_1)
    
    do
        int32_t rax_2 = sub_142aa3ce0(arg1[1], rbx)
        result = sub_142aa60d0(arg1[1], rax_2)
        int32_t rdx_4
        
        if (rax_1 != 0 && result.b u>= 0xc0)
            rdx_4 = result & 0xf
        
        if (rax_1 == 0 || (result.b u>= 0xc0 && (((rdx_4 - 1) & 0xfffffffc) != 0 || rdx_4 == 3)))
            sub_142b25cc0(arg1, rbx, result_1, result)
        else if (result_1 != result)
            sub_142a9e7d0(arg1[2], rbx)
        
        rbx += 1
    while (rbx s<= arg3)

result.b = arg1[0xc].d s<= 0
return result
