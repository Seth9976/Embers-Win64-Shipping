// 函数: sub_1405b3f80
// 地址: 0x1405b3f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x10]
void* result = arg2

if (rax != 0)
label_1405b3fd4:
    void arg_8
    int64_t* rax_1 = sub_140b58260(&arg_8, u"Input", 1)
    sub_142131d00(arg1[0x10], *rax_1, result)
    int512_t zmm6
    zmm6.o = arg1[0xe].d
    int64_t* rax_2
    int512_t zmm2_1
    int128_t zmm6_1
    rax_2, zmm2_1, zmm6_1 = sub_140b58260(&arg_8, u"AlphaScale", 1)
    zmm2_1.o = zmm6_1
    sub_142131b70(arg1[0x10], *rax_2)
    void* result_1 = sub_1405c4270(arg1, 0x3f800000)
    result = result_1
    sub_1420bacc0(arg1, result_1, arg1[0x10])
    int512_t zmm6_2
    zmm6_2.o = arg3
else
    int64_t* rcx = arg1[0xf]
    
    if (rcx != 0)
        rax, arg3 = sub_142121cc0(rcx, arg1)
        arg1[0x10] = rax
    
    if (rax != 0)
        goto label_1405b3fd4

return result
