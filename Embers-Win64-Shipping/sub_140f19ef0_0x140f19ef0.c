// 函数: sub_140f19ef0
// 地址: 0x140f19ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140eec7f0(arg1)
(*(*arg1 + 0x20))(arg1)
sub_140efdff0(arg1)
sub_140f07eb0(arg1)
float zmm6 = *(arg1 + 0x8c)
float zmm7 = zmm6 f* arg1[0x13].d
float zmm2 = (arg1[0x14].d f+ arg1[0x13].d) * zmm6
float zmm1 = (*(arg1 + 0xa4) f+ *(arg1 + 0x9c)) * zmm6
zmm6 = zmm6 f* *(arg1 + 0x9c)
zmm1 = zmm1 f+ arg1[0x17].d
arg1[0x16].d = zmm2 f+ arg1[0x16].d
*(arg1 + 0xb4) = zmm2 f+ *(arg1 + 0xb4)
arg1[0x17].d = zmm1
void* i = arg1[5]

for (void* r15_1 = sx.q(arg1[6].d) * 0x58 + i; i != r15_1; i += 0x58)
    zmm1 = zmm6 f+ *(i + 0x34)
    *(i + 0x30) = zmm7 f+ *(i + 0x30)
    *(i + 0x34) = zmm1
    int64_t* j = *i
    
    for (void* rbp_3 = &j[sx.q(*(i + 8)) * 2]; j != rbp_3; j = &j[2])
        int64_t* rbx_1 = *j
        void arg_10
        float* rax_3 = (*(*rbx_1 + 0x38))(rbx_1, &arg_10)
        zmm1 = zmm6 + rax_3[1]
        float arg_c = zmm1
        float arg_8 = zmm7 + *rax_3
        (*(*rbx_1 + 0x30))(rbx_1, &arg_8)

int64_t result = (*(*arg1 + 0x28))(arg1, zmm1)
arg1[0x11].b &= 0xfe
return result
