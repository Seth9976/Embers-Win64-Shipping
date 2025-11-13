// 函数: sub_142c3e3a0
// 地址: 0x142c3e3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = arg1[3]
int32_t rax = 0
*arg4 = 0
int64_t* r14 = arg1

if (arg2 != 0 && arg3 != 0)
    int64_t var_18_1 = *(r10 + 0x80)
    rax, arg1 = (*(r10 + 0x40))(r10)

arg1.b = rax != 0

if (rax == 0 && (*(*r14 + 0xb8) & 8) == 0)
    uint64_t rax_3 = zx.q(arg3 - 0x5b4)
    bool cond:1_1
    
    if (rax_3.d u<= 0xe)
        switch (rax_3)
            case 0
                if (arg2 == 0x5d9)
                    *arg4 = 0xfb1d
                    arg1.b = 1
            case 3
                if (arg2 == 0x5f2)
                    *arg4 = 0xfb1f
                    arg1.b = 1
                else if (arg2 == 0x5d0)
                    *arg4 = 0xfb2e
                    arg1.b = 1
            case 4
                if (arg2 == 0x5d0)
                    *arg4 = 0xfb2f
                    arg1.b = 1
            case 5
                if (arg2 == 0x5d5)
                    *arg4 = 0xfb4b
                    arg1.b = 1
            case 8
                if (arg2 - 0x5d0 u> 0x1a)
                    if (arg2 != 0xfb2a)
                        cond:1_1 = arg2 != 0xfb2b
                        goto label_142c3e526
                    
                    *arg4 = 0xfb2c
                    arg1.b = 1
                else
                    int32_t rax_8 = *((zx.q(arg2 - 0x5d0) << 2) + 0x1436a19a0)
                    *arg4 = rax_8
                    arg1.b = rax_8 != 0
            case 0xb
                if (arg2 == 0x5d1)
                    *arg4 = 0xfb4c
                    arg1.b = 1
                else if (arg2 == 0x5db)
                    *arg4 = 0xfb4d
                    arg1.b = 1
                else if (arg2 == 0x5e4)
                    *arg4 = 0xfb4e
                    arg1.b = 1
            case 0xd
                if (arg2 == 0x5e9)
                    *arg4 = 0xfb2a
                    arg1.b = 1
                else if (arg2 == 0xfb49)
                    *arg4 = 0xfb2c
                    arg1.b = 1
            case 0xe
                if (arg2 != 0x5e9)
                    cond:1_1 = arg2 != 0xfb49
                label_142c3e526:
                    
                    if (not(cond:1_1))
                        *arg4 = 0xfb2d
                        arg1.b = 1
                else
                    *arg4 = 0xfb2b
                    arg1.b = 1

return zx.q(arg1.b)
