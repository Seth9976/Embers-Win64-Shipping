// 函数: sub_142a53250
// 地址: 0x142a53250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_18
int32_t rbx_5

if (arg2 - 0x16 u<= 0x21)
    switch (arg2)
        case 0x16
            int32_t rbx
            rbx.b = sub_142a53180(arg1) == 1
            return zx.q(rbx)
        case 0x1b
            int32_t rbx_2
            rbx_2.b = sub_142a51de0(arg1) == 0x20
            return zx.q(rbx_2)
        case 0x1e
            int32_t rbx_1
            rbx_1.b = sub_142a53180(arg1) == 2
            return zx.q(rbx_1)
        case 0x22
            return zx.q(sx.d(sub_142a53450(arg1)))
        case 0x31
            int32_t rbx_3
            rbx_3.b = sub_142a53180(arg1) != 0
            return zx.q(rbx_3)
        case 0x32
            return zx.q(sx.d((sub_142a530b0(arg1) s>> 2).b))
        case 0x33
            int32_t rbx_4
            rbx_4.b = sub_142a537d0(arg1, 0, 0, &arg_18, 1) s>= 0
            return zx.q(rbx_4)
        case 0x34
            rbx_5.b = sub_142a524d0(arg1, 0, 0, &arg_18, 1, 1) s>= 0
            return zx.q(rbx_5)
        case 0x35
            rbx_5.b = sub_142a524d0(arg1, 0, 0, &arg_18, 1, 0) s>= 0
            return zx.q(rbx_5)
        case 0x37
            if (sub_142a537d0(arg1, 0, 0, &arg_18, 1) s< 0
                    && sub_142a524d0(arg1, 0, 0, &arg_18, 1, 1) s< 0
                    && sub_142a524d0(arg1, 0, 0, &arg_18, 1, 0) s< 0)
                return 0
            
            return 1
return 0
