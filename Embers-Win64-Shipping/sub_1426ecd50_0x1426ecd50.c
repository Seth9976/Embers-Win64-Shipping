// 函数: sub_1426ecd50
// 地址: 0x1426ecd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = (arg1[0x13].d).b
void* rdx = arg1[0xd]

if (rdx != 0 && (rax & 0x10) != 0)
    *(rdx + 0x250)
    sub_142730840(arg1, rdx)
else if ((rax & 8) != 0)
    int512_t zmm2
    zmm2.o = arg4
    sub_1427307f0(arg1, arg1[0xe])

int32_t result = arg1[0x13].d

if ((result & 0x6000) != 0)
    result &= 6
    
    if (result.b != 6)
        result = sub_1426e01a0(arg1, arg2)
        
        if (result.b != 0)
            return sub_1426bd0c0(arg2, arg1)

return result
