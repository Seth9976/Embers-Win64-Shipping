// 函数: sub_1427068c0
// 地址: 0x1427068c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x37].b == 2)
    return 

int32_t rax = arg1[0x47].d

if (rax == 0xffffffff || arg2 == 0xffffffff || (arg2 != rax && arg2 != 0 && rax != 0))
    return 

if (arg3 == 0)
    int64_t* rcx = arg1[0x1d]
    
    if (rcx != 0 && (*(*rcx + 0x528))(rcx) != 0)
        sub_142714b30(arg1[0x1d])

void* rax_3 = arg1[0x1d]
float rax_4
float zmm0[0x4]

if (rax_3 == 0)
    zmm0 = zx.o(data_143dbb1f8.q)
    rax_4 = data_143dbb200
else
    void* rcx_2 = *(rax_3 + 0xb0)
    
    if (rcx_2 == 0)
        zmm0 = zx.o(data_143b58088)
        rax_4 = data_143b58090
    else
        float zmm1[0x4] = *(rcx_2 + 0x1d0)
        int64_t var_28
        var_28.d = zmm1[0]
        var_28:4.d = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
        float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
        temp0_2[0] = temp0_2[0] f- *(rcx_2 + 0x114)
        zmm0 = zx.o(var_28)
        rax_4 = temp0_2[0]

arg1[0x33] = zmm0.q
arg1[0x34].d = rax_4
void* rax_7 = arg1[0x20]

if (rax_7 == 0)
    zmm0 = zx.o(0)
else
    zmm0 = *(rax_7 + 0xe8)

arg1[0x36].d = zmm0[0]
arg1[0x37].b = 2
return sub_142717810(arg1) __tailcall
