// 函数: sub_141f4d200
// 地址: 0x141f4d200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t __saved_zmm6 = arg3
arg3 = arg2
(*(*arg1 + 0x9c8))()
char result = *(arg1 + 0x71a)
int512_t zmm2

if ((result & 0x40) != 0)
    *(arg1 + 0x71a) = result & 0xbf
    bool rax_1 = arg1[0xe3].b
    
    if (rax_1 == 1)
        *(arg1 + 0x716) = (*(arg1 + 0x716) == 2) + 1
    else if (rax_1 == 2)
        *(arg1 + 0x716) = rax_1
    
    result, zmm2, arg3 = sub_142320950(arg1)

int64_t* rcx_1 = arg1[0x116]

if (rcx_1 != 0)
    zmm2.o = arg3
    result = (*(*rcx_1 + 0x20))(rcx_1, arg1, zmm2, arg1[0x117], __saved_zmm6)
    int64_t* rcx_2 = arg1[0x118]
    
    if (rcx_2 != 0 && rcx_2[5].b != 0)
        result = (*(*rcx_2 + 0x270))(rcx_2, arg1[0x116], arg1[0x117])

*(arg1 + 0x716) = 0
arg1[0xe3].b = 0
return result
