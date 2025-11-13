// 函数: ?MapStreamToMemory@MSF_HB@@UEAAHGJJAEAUMemMapCallBack@@@Z
// 地址: 0x1417a1690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fc8ff8
__builtin_memset(&arg1[2], 0, 0x28)
arg1[8] = 0
arg1[0xe] = 0
arg1[0x10] = 0
arg1[0x16] = 0
arg1[0x18] = 0
__builtin_memset(&arg1[0x1e], 0, 0x20)
sub_141761c70(&arg1[0x22])
arg1[0x41] = 0
arg1[0x42] = 0
arg1[0x40] = &data_142fc40a0
arg1[0x44] = 0
arg1[0x45] = 0
arg1[0x43] = &data_142fc8fc8
arg1[0x47] = 0
arg1[0x48] = 0
arg1[0x46] = &data_142fc41f0
arg1[0x4a] = 0
arg1[0x4b] = 0
arg1[0x49] = &data_142fc4160
void* rcx_1 = &arg1[0x62]
arg1[0x4c] = arg2
__builtin_memset(&arg1[0x4d], 0, 0x21)
*(arg1 + 0x289) = arg5
__builtin_memset(&arg1[0x52], 0, 0x80)
*(rcx_1 + 0x10) = 0
*(rcx_1 + 0x18) = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

*rcx_1 = 0
*(rcx_1 + 8) = 0
arg1[0x66].d = 0xffffffff
*(arg1 + 0x334) = 0
arg1[0x68] = 0
arg1[0x69].d = 0
arg1[0x6a] = 0
arg1[0x6b].d = arg3
*(arg1 + 0x35c) = arg4
void*** rax_2 = j_sub_140a82f30(0x28)

if (rax_2 == 0)
    rax_2 = nullptr
else
    __builtin_memset(rax_2 + 0xc, 0, 0x18)
    rax_2[4] = 0x47c35000
    *rax_2 = &data_142fc9010
    __builtin_memcpy(&rax_2[1], 
        "\x03\x00\x00\x00\x23\x00\x00\x00\x05\x00\x00\x00\xc8\x00\x00\x00\xf4\x01\x00\x00\xc8\x00\x00\x00", 
        0x18)
    *(rax_2 + 0x24) = 0xfa0

arg1[0x6c] = rax_2
sub_14172eb30(&arg1[0x4c][0x48], &arg1[0x40])
sub_14172eb30(&arg1[0x4c][0x48], &arg1[0x43])
sub_14172eb30(&arg1[0x4c][0x48], &arg1[0x46])
sub_14172eb30(&arg1[0x4c][0x48], &arg1[0x49])

if (arg2[0x11].b != 0)
    sub_14175a890(arg2, 0)

int64_t* var_58
__builtin_memset(&var_58, 0, 0x15)
void* var_60 = &arg2[0x36]
int32_t var_40 = 0
sub_141750820(&var_60)
void* i_1
void* i = i_1

if (i != 0)
    int64_t* r14_1 = var_58
    
    do
        int64_t* rax_4 = &i_1
        char var_44
        
        if (var_44 u< 2)
            rax_4 = nullptr
        
        int32_t var_48_1
        
        if (rax_4 == 0 || *(sx.q(rax_4[1].d) + *(*rax_4 + 0x368)) == 0)
        label_1417a1a7e:
            int64_t r15_1 = sx.q(var_48_1)
            int32_t rbx_1 = *(*(i + 0x50) + (r15_1 << 2))
            int128_t* rax_11 = sub_1417ae350(&arg1[0x52], rbx_1)
            int64_t rax_12 = *(i + 0xf8)
            int32_t r8_2 = 0
            int32_t r10_1 = 0
            int64_t var_6c_1 = 0
            int32_t r9 = 0
            int64_t var_74_1 = 0
            int32_t r11_1 = 0
            int64_t var_80_1 = *(*(i + 0xc8) + (r15_1 << 3))
            int64_t rcx_19 = r15_1 * 3
            void* rdx_12 = rax_12 + (rcx_19 << 3)
            void* rax_13 = *(rax_12 + (rcx_19 << 3) + 8)
            void* rcx_20 = rdx_12
            
            if (rax_13 != 0)
                rcx_20 = rax_13
            
            void* rdx_13 = rcx_20 + (sx.q(*(rdx_12 + 0x10)) << 3)
            
            if (rcx_20 != rdx_13)
                do
                    int64_t rax_15 = *rcx_20
                    rcx_20 += 8
                    r11_1 |= *rax_15
                    r10_1 |= *(rax_15 + 4)
                    r9 |= *(rax_15 + 8)
                    r8_2 |= *(rax_15 + 0xc)
                while (rcx_20 != rdx_13)
                
                var_6c_1:4.d = r8_2
                var_6c_1.d = r9
                var_74_1:4.d = r10_1
                var_74_1.d = r11_1
            
            char var_64_1 = 1
            int128_t zmm1 = (*(*(i + 0x50) + (r15_1 << 2))).o
            *rax_11 = (*(*(i + 0xe0) + (r15_1 << 3))).o
            rax_11[1] = zmm1
            rax_11[2].q = 0
            *(rax_11 + 0x28) = *(*(i + 0x170) + (r15_1 << 1))
            int128_t* rax_17 = sub_1417ae350(&arg1[0x56], rbx_1)
            *rax_17 = *rax_11
            rax_17[1] = rax_11[1]
            rax_17[2] = rax_11[2]
            int128_t* rax_18 = sub_1417ae350(&arg1[0x5a], rbx_1)
            *rax_18 = *rax_11
            rax_18[1] = rax_11[1]
            rax_18[2] = rax_11[2]
        else
            int64_t* rax_6 = &i_1
            
            if (var_44 u< 3)
                rax_6 = nullptr
            
            if (rax_6 != 0)
                int64_t* r8_1 = *(*(*rax_6 + 0x428) + sx.q(rax_6[1].d) * 0x10)
                
                if (r8_1 == 0)
                    goto label_1417a1a7e
                
                int64_t* rax_8 = nullptr
                
                if (*(r8_1 + 0xc) u>= 3)
                    rax_8 = r8_1
                
                if (rax_8 == 0 || *(sx.q(rax_8[1].d) + *(*rax_8 + 0x470)) != 0)
                    goto label_1417a1a7e
        
        if (r14_1 != 0)
            int32_t var_38
            int32_t rax_23 = var_38 + 1
            var_38 = rax_23
            
            if (rax_23 s>= r14_1[1].d)
            label_1417a1bb6:
                var_40 += 1
                sub_141750820(&var_60)
                r14_1 = var_58
                i = i_1
            else
                int64_t* rdx_16 = *(*r14_1 + (sx.q(rax_23) << 3))
                void* rcx_27 = *rdx_16
                int32_t var_90_1 = rdx_16[1].d
                
                if (rcx_27 == 0)
                    char var_8c_2 = 0
                    i_1.o = rcx_27.o
                else
                    char var_8c_1 = *(rcx_27 + 0x40)
                    i_1.o = rcx_27.o
                
                i = i_1
        else
            int32_t rax_20 = var_48_1 + 1
            var_48_1 = rax_20
            int32_t var_3c
            
            if (rax_20 s>= var_3c)
                goto label_1417a1bb6
    while (i != 0)

sub_1417a9230(arg1, 0)
return arg1
