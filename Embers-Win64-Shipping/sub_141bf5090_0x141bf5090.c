// 函数: sub_141bf5090
// 地址: 0x141bf5090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t rsi
rsi.b = 0
float zmm6[0x4] = *(arg1 + 0x478)
uint32_t rcx = zx.d(*(arg1 + 0x49c))
int64_t rbp
rbp.b = 0
float var_38[0x4] = zmm6
int128_t zmm7
float zmm0[0x4]

if (rcx == 0)
    zmm7 = 0x3f800000
    zmm0 = 0x3f800000
label_141bf50f2:
    zmm6 = var_38
    float temp0_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x93)
    temp0_1[0] = zmm0[0]
    zmm6 = _mm_shuffle_ps(temp0_1, temp0_1, 0x39)
    var_38 = zmm6
else
    if (rcx == 1)
        zmm7 = zx.o(0)
        zmm0 = zx.o(0)
        goto label_141bf50f2
    
    zmm7 = var_38[3]

if (arg2.d != 0 && (arg2 u>> 0x20).d != 0)
    int64_t* rax_3 = arg1[0xa0]
    
    if (rax_3 != 0)
        int32_t r8_3 = arg_10:4.d
        int64_t* rcx_5
        
        if (rax_3[0x18].d == arg2.d)
            rcx_5 = rax_3
        
        if (rax_3[0x18].d != arg2.d || *(rax_3 + 0xc4) != r8_3)
            sub_1423c21e0(rax_3, arg2, r8_3, 2, 0)
            rax_3 = arg1[0xa0]
            rsi.b = 1
            rcx_5 = rax_3
        
        if (zmm6[0] f!= rax_3[0x19].d)
        label_141bf521b:
            rsi.b = 1
            *(rax_3 + 0xc8) = zmm6
            rbp = 1
            arg2.b = 1
            sub_1423cc130(arg1[0xa0], arg2)
        else
            if (_mm_shuffle_ps(zmm6, zmm6, 0x55)[0] f!= *(rax_3 + 0xcc))
                goto label_141bf521b
            
            if (_mm_shuffle_ps(zmm6, zmm6, 0xaa)[0] f!= rax_3[0x1a].d || zmm7.d f!= *(rax_3 + 0xd4))
                goto label_141bf521b
            
            if (rsi.b != 0)
                arg2.b = 1
                sub_1423cc130(rcx_5, arg2)
    else
        void* rax_4
        int128_t zmm6_1
        rax_4, zmm6_1 = sub_1405a9f30(arg1)
        uint64_t r8_1 = zx.q(arg_10:4.d)
        rsi.b = 1
        arg1[0xa0] = rax_4
        *(rax_4 + 0xc8) = zmm6_1
        rbp = 1
        sub_1423c21e0(arg1[0xa0], zx.q(arg2.d), r8_1, 2, 0)
        
        if (arg1[0xa1] != 0)
            void* rbx_1 = arg1[0xa0]
            int64_t* rax_5 = sub_140b58170(&arg_10, "SlateUI", 1)
            sub_142131d00(arg1[0xa1], *rax_5, rbx_1)

uint64_t result = arg1[0xa0]

if (result != 0)
    if (rbp.b != 0 && arg1[0xa1] != 0)
        var_38 = *(result + 0xc8)
        int64_t* rax_6 = sub_140b58170(&arg_10, "BackColor", 1)
        result = sub_1421321b0(arg1[0xa1], *rax_6, &var_38)
    
    if (rsi.b != 0)
        return sub_141ee8490(arg1)

return result
