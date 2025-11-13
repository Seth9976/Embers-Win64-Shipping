// 函数: sub_140e2f620
// 地址: 0x140e2f620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg3)
void*** rbx = nullptr
void*** arg_10

if (rax.d u<= 6)
    switch (rax)
        case 0
            void*** rax_1 = j_sub_140a82f30(0x70)
            arg_10 = rax_1
            rbx = rax_1
            
            if (rax_1 == 0)
                rbx = nullptr
            else
                __builtin_memset(&rax_1[1], 0, 0x30)
                rax_1[7].d = 0xff00ff
                *(rax_1 + 0x3c) = 0
                *(rax_1 + 0x44) = 1
                __builtin_memset(&rax_1[0xa], 0, 0x1d)
                *rbx = &data_142ed6558
        case 1
            void*** rax_2 = j_sub_140a82f30(0x68)
            arg_10 = rax_2
            rbx = rax_2
            
            if (rax_2 == 0)
                rbx = nullptr
            else
                __builtin_memset(&rax_2[1], 0, 0x30)
                rax_2[7].d = 0xff00ff
                *(rax_2 + 0x3c) = 0
                *(rax_2 + 0x44) = 1
                rax_2[0xa] = 0
                rax_2[0xb] = 0
                rbx[0xc].d = 4
                *rbx = &data_142ed65d8
        case 2
            void*** rax_3 = j_sub_140a82f30(0x68)
            arg_10 = rax_3
            rbx = rax_3
            
            if (rax_3 == 0)
                rbx = nullptr
            else
                __builtin_memset(&rax_3[1], 0, 0x30)
                rax_3[7].d = 0xff00ff
                *(rax_3 + 0x3c) = 0
                *(rax_3 + 0x44) = 1
                rax_3[0xa] = 0
                rax_3[0xb] = 0
                rbx[0xc].d = 1
                *rbx = &data_142ed65d8
        case 3
            void*** rax_4 = j_sub_140a82f30(0x68)
            arg_10 = rax_4
            rbx = rax_4
            
            if (rax_4 == 0)
                rbx = nullptr
            else
                __builtin_memset(&rax_4[1], 0, 0x30)
                rax_4[7].d = 0xff00ff
                *(rax_4 + 0x3c) = 0
                *(rax_4 + 0x44) = 1
                rax_4[0xa] = 0
                rax_4[0xb] = 0
                rbx[0xc].w = 1
                *rbx = &data_142ed6300
        case 4
            void*** rax_5 = j_sub_140a82f30(0x80)
            arg_10 = rax_5
            rbx = rax_5
            
            if (rax_5 == 0)
                rbx = nullptr
            else
                __builtin_memset(&rax_5[1], 0, 0x30)
                rax_5[7].d = 0xff00ff
                *(rax_5 + 0x3c) = 0
                *(rax_5 + 0x44) = 1
                __builtin_memset(&rax_5[0xa], 0, 0x20)
                *rbx = &data_142ed64d8
        case 5
            void*** rax_6 = j_sub_140a82f30(0x68)
            arg_10 = rax_6
            rbx = rax_6
            
            if (rax_6 == 0)
                rbx = nullptr
            else
                __builtin_memset(&rax_6[1], 0, 0x30)
                rax_6[7].d = 0xff00ff
                *(rax_6 + 0x3c) = 0
                *(rax_6 + 0x44) = 1
                rax_6[0xa] = 0
                rax_6[0xb] = 0
                rbx[0xc].b = 1
                *rbx = &data_142ed6380
        case 6
            void*** rax_7 = j_sub_140a82f30(0x60)
            arg_10 = rax_7
            rbx = rax_7
            
            if (rax_7 == 0)
                rbx = nullptr
            else
                __builtin_memset(&rax_7[1], 0, 0x30)
                rax_7[7].d = 0xff00ff
                *(rax_7 + 0x3c) = 0
                *(rax_7 + 0x44) = 1
                rax_7[0xa] = 0
                rax_7[0xb] = 0
                *rbx = &data_142ed6458

void*** rax_8 = j_sub_140a82f30(0x18)
arg_10 = rax_8

if (rax_8 == 0)
    rax_8 = nullptr
else
    rax_8[1].d = 1
    *rax_8 = &data_142e151a8
    *(rax_8 + 0xc) = 1
    rax_8[2] = rbx

*arg2 = rbx
arg2[1] = rax_8
return arg2
