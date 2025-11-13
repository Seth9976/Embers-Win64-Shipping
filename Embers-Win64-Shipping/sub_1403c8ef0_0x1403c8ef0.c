// 函数: sub_1403c8ef0
// 地址: 0x1403c8ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 == 0)
    return 

int32_t* r13_1 = arg1
uint64_t r11_1 = zx.q(*arg1)
int64_t rbx
rbx.b = arg1[4].b

if ((rbx.b & 4) == 0)
label_1403c8f2c:
    uint64_t rax
    
    if (rbx.b u<= 6)
        int32_t* var_50_1 = arg4
        
        switch (rbx.b)
            case 0
                rax.b = *(r13_1 + 0x11)
                rax.b -= 1
                
                switch (rax.b)
                    case 0
                        if (r11_1.d != 0)
                            int32_t i_13 = r11_1.d
                            rax = 7
                            int32_t i
                            
                            do
                                uint32_t rbx_1 = zx.d(*arg2)
                                
                                if ((rbx_1 u>> rax.b & 1) == zx.d(*(arg3 + 8)))
                                    uint32_t rcx_1
                                    rcx_1.b = 7
                                    rcx_1.b = 7 - rax.b
                                    uint8_t rbp_4 = (0x7f7f u>> rcx_1.b).b & rbx_1.b
                                    *arg2 = rbp_4
                                    *arg2 = (zx.d(arg4[2].w) << rax.b).b | rbp_4
                                
                                int32_t temp0_1 = rax.d
                                rax = zx.q((rax - 1).d)
                                
                                if (temp0_1 == 0)
                                    rax = 7
                                
                                if (temp0_1 == 0)
                                    arg2 += 1
                                
                                i = i_13
                                i_13 -= 1
                            while (i != 1)
                    case 1
                        if (arg6 == 0)
                            if (r11_1.d != 0)
                                int32_t i_14 = r11_1.d
                                rax = 6
                                int32_t i_1
                                
                                do
                                    uint32_t rbx_114 = zx.d(*arg2)
                                    
                                    if ((rbx_114 u>> rax.b & 3) == zx.d(*(arg3 + 8)))
                                        uint32_t rcx_86
                                        rcx_86.b = 6
                                        rcx_86.b = 6 - rax.b
                                        uint8_t rbp_143 = (0x3f3f u>> rcx_86.b).b & rbx_114.b
                                        *arg2 = rbp_143
                                        *arg2 = (zx.d(arg4[2].w) << rax.b).b | rbp_143
                                    
                                    int32_t temp3_1 = rax.d
                                    rax = zx.q((rax - 2).d)
                                    
                                    if (temp3_1 == 0)
                                        rax = 6
                                    
                                    if (temp3_1 == 0)
                                        arg2 += 1
                                    
                                    i_1 = i_14
                                    i_14 -= 1
                                while (i_1 != 1)
                        else if (r11_1.d != 0)
                            int32_t i_11 = r11_1.d
                            rax = 6
                            int32_t i_2
                            
                            do
                                uint64_t rbp_137 = zx.q(*arg2)
                                uint64_t rsi_28 = zx.q((rbp_137 u>> rax.b).d) & 3
                                uint8_t rsi_29
                                uint32_t rdi_47
                                
                                if (rsi_28.d != zx.d(*(arg3 + 8)))
                                    uint64_t rcx_74 = zx.q(rsi_28.d)
                                    rdi_47 = zx.d(*(arg6
                                        + (rcx_74 << 6 | rcx_74 << 4 | (rcx_74 + (rsi_28 << 2)))))
                                        u>> 6
                                    uint64_t rcx_76
                                    rcx_76.b = 6
                                    rcx_76.b = 6 - rax.b
                                    rsi_29 = (0x3f3f u>> rcx_76.b).b & rbp_137.b
                                else
                                    uint32_t rcx_73
                                    rcx_73.b = 6
                                    rcx_73.b = 6 - rax.b
                                    rsi_29 = (0x3f3f u>> rcx_73.b).b & rbp_137.b
                                    *arg2 = rsi_29
                                    rdi_47 = zx.d(arg4[2].w)
                                
                                *arg2 = (rdi_47 << rax.b).b | rsi_29
                                int32_t temp7_1 = rax.d
                                rax = zx.q((rax - 2).d)
                                
                                if (temp7_1 == 0)
                                    rax = 6
                                
                                if (temp7_1 == 0)
                                    arg2 += 1
                                
                                i_2 = i_11
                                i_11 -= 1
                            while (i_2 != 1)
                    case 3
                        if (arg6 == 0)
                            if (r11_1.d != 0)
                                int32_t i_15 = r11_1.d
                                rax = 4
                                int32_t i_3
                                
                                do
                                    uint32_t rbx_117 = zx.d(*arg2)
                                    
                                    if ((rbx_117 u>> rax.b & 0xf) == zx.d(*(arg3 + 8)))
                                        uint32_t rcx_89
                                        rcx_89.b = 4
                                        rcx_89.b = 4 - rax.b
                                        uint8_t rbp_147 = (0xf0f u>> rcx_89.b).b & rbx_117.b
                                        *arg2 = rbp_147
                                        *arg2 = (zx.d(arg4[2].w) << rax.b).b | rbp_147
                                    
                                    int32_t temp4_1 = rax.d
                                    rax = zx.q((rax - 4).d)
                                    
                                    if (temp4_1 == 0)
                                        rax = 4
                                    
                                    if (temp4_1 == 0)
                                        arg2 += 1
                                    
                                    i_3 = i_15
                                    i_15 -= 1
                                while (i_3 != 1)
                        else if (r11_1.d != 0)
                            int32_t i_12 = r11_1.d
                            rax = 4
                            int32_t i_4
                            
                            do
                                uint64_t rbp_138 = zx.q(*arg2)
                                uint64_t rsi_33 = zx.q((rbp_138 u>> rax.b).d) & 0xf
                                uint8_t rsi_34
                                uint32_t rdi_53
                                
                                if (rsi_33.d != zx.d(*(arg3 + 8)))
                                    rdi_53 = zx.d(*(arg6 + (zx.q(rsi_33.d) | rsi_33 << 4))) u>> 4
                                    uint64_t rcx_81
                                    rcx_81.b = 4
                                    rcx_81.b = 4 - rax.b
                                    rsi_34 = (0xf0f u>> rcx_81.b).b & rbp_138.b
                                else
                                    uint32_t rcx_79
                                    rcx_79.b = 4
                                    rcx_79.b = 4 - rax.b
                                    rsi_34 = (0xf0f u>> rcx_79.b).b & rbp_138.b
                                    *arg2 = rsi_34
                                    rdi_53 = zx.d(arg4[2].w)
                                
                                *arg2 = (rdi_53 << rax.b).b | rsi_34
                                int32_t temp8_1 = rax.d
                                rax = zx.q((rax - 4).d)
                                
                                if (temp8_1 == 0)
                                    rax = 4
                                
                                if (temp8_1 == 0)
                                    arg2 += 1
                                
                                i_4 = i_12
                                i_12 -= 1
                            while (i_4 != 1)
                    case 7
                        if (arg6 == 0)
                            if (r11_1.d != 0)
                                rax = zx.q(r11_1.d) & 1
                                
                                if (r11_1.d != 1)
                                    arg1 = zx.q(rax.d - r11_1.d)
                                    int32_t i_5
                                    
                                    do
                                        if (zx.d(*arg2) == zx.d(*(arg3 + 8)))
                                            *arg2 = arg4[2].b
                                        
                                        if (zx.d(*(arg2 + 1)) == zx.d(*(arg3 + 8)))
                                            *(arg2 + 1) = arg4[2].b
                                        
                                        arg2 += 2
                                        i_5 = arg1.d
                                        arg1 = zx.q(arg1.d + 2)
                                    while (i_5 != 0xfffffffe)
                                
                                if (rax.d != 0 && zx.d(*arg2) == zx.d(*(arg3 + 8)))
                                    rax.b = arg4[2].b
                                    *arg2 = rax.b
                        else if (r11_1.d != 0)
                            rax = zx.q(r11_1.d) & 1
                            
                            if (r11_1.d != 1)
                                arg1 = zx.q(rax.d - r11_1.d)
                                int32_t i_6
                                
                                do
                                    uint64_t rsi_37 = zx.q(*arg2)
                                    char rbx_107
                                    
                                    if (rsi_37.d != zx.d(*(arg3 + 8)))
                                        rbx_107 = *(arg6 + rsi_37)
                                    else
                                        rbx_107 = arg4[2].b
                                    
                                    *arg2 = rbx_107
                                    uint64_t rsi_38 = zx.q(*(arg2 + 1))
                                    char rbx_108
                                    
                                    if (rsi_38.d != zx.d(*(arg3 + 8)))
                                        rbx_108 = *(arg6 + rsi_38)
                                    else
                                        rbx_108 = arg4[2].b
                                    
                                    *(arg2 + 1) = rbx_108
                                    arg2 += 2
                                    i_6 = arg1.d
                                    arg1 = zx.q(arg1.d + 2)
                                while (i_6 != 0xfffffffe)
                            
                            if (rax.d != 0)
                                rax = zx.q(*arg2)
                                
                                if (rax.d == zx.d(*(arg3 + 8)))
                                    rax.b = arg4[2].b
                                    *arg2 = rax.b
                                else
                                    rax.b = *(arg6 + rax)
                                    *arg2 = rax.b
                    case 0xf
                        if (arg9 == 0)
                            if (r11_1.d != 0)
                                rax = 0
                                
                                do
                                    if ((zx.d(*(arg2 + (rax << 1) + 1))
                                            | zx.d(*(arg2 + (rax << 1))) << 8) == zx.d(*(arg3 + 8)))
                                        *(arg2 + (rax << 1)) = *(arg4 + 9)
                                        *(arg2 + (rax << 1) + 1) = arg4[2].b
                                    
                                    rax += 1
                                while (r11_1.d != rax.d)
                        else if (r11_1.d != 0)
                            rax = 0
                            
                            do
                                uint64_t rsi_39 = zx.q(*(arg2 + (rax << 1)))
                                uint32_t rdi_58 = zx.d(*(arg2 + (rax << 1) + 1))
                                int16_t rbx_113
                                
                                if ((rsi_39.d << 8 | rdi_58) != zx.d(*(arg3 + 8)))
                                    rbx_113 =
                                        *(*(arg9 + (sx.q(rdi_58 u>> arg12.b) << 3)) + (rsi_39 << 1))
                                    *(arg2 + (rax << 1)) = rbx_113:1.b
                                else
                                    *(arg2 + (rax << 1)) = *(arg4 + 9)
                                    rbx_113 = arg4[2].w
                                
                                *(arg2 + (rax << 1) + 1) = rbx_113.b
                                rax += 1
                            while (r11_1.d != rax.d)
            case 2
                if (*(r13_1 + 0x11) != 8)
                    if (arg9 == 0)
                        if (r11_1.d != 0)
                            void* rdx_5 = arg2 + 5
                            rax = zx.q(r11_1.d)
                            int32_t i_7
                            
                            do
                                if ((zx.d(*(rdx_5 - 4)) | zx.d(*(rdx_5 - 5)) << 8)
                                        == zx.d(*(arg3 + 2))
                                        && (zx.d(*(rdx_5 - 3)) << 8 | zx.d(*(rdx_5 - 2)))
                                        == zx.d(*(arg3 + 4)) && (zx.d(*rdx_5) | zx.d(*(rdx_5 - 1)) << 8)
                                        == zx.d(*(arg3 + 6)))
                                    *(rdx_5 - 5) = *(arg4 + 3)
                                    *(rdx_5 - 4) = *(arg4 + 2)
                                    *(rdx_5 - 3) = *(arg4 + 5)
                                    *(rdx_5 - 2) = arg4[1].b
                                    *(rdx_5 - 1) = *(arg4 + 7)
                                    *rdx_5 = *(arg4 + 6)
                                
                                rdx_5 += 6
                                i_7 = rax.d
                                rax = zx.q(rax.d - 1)
                            while (i_7 != 1)
                    else if (r11_1.d != 0)
                        void* rdx_1 = arg2 + 5
                        rax = zx.q(r11_1.d)
                        int32_t i_8
                        
                        do
                            uint64_t r12_3 = zx.q(*(rdx_1 - 5))
                            uint32_t rbp_20 = zx.d(*(rdx_1 - 4))
                            uint64_t r14_2 = zx.q(*(rdx_1 - 1))
                            uint32_t r13_2 = zx.d(*rdx_1)
                            int16_t rbx_32
                            uint32_t rsi_11
                            uint32_t r15_2
                            
                            if ((r12_3.d << 8 | rbp_20) != zx.d(*(arg3 + 2)))
                                rsi_11 = zx.d(*(rdx_1 - 2))
                                r15_2 = zx.d(*(rdx_1 - 3))
                            label_1403c9349:
                                arg1 = zx.q(arg12)
                                int16_t rbx_34 =
                                    *(*(arg9 + (sx.q(rbp_20 u>> arg1.b) << 3)) + (r12_3 << 1))
                                *(rdx_1 - 5) = rbx_34:1.b
                                *(rdx_1 - 4) = rbx_34.b
                                int16_t rbx_36 = *(*(arg9 + (sx.q(rsi_11 u>> arg1.b) << 3))
                                    + (zx.q(r15_2.b) << 1))
                                *(rdx_1 - 3) = rbx_36:1.b
                                *(rdx_1 - 2) = rbx_36.b
                                rbx_32 = *(*(arg9 + (sx.q(r13_2 u>> arg1.b) << 3)) + (r14_2 << 1))
                                *(rdx_1 - 1) = rbx_32:1.b
                            else
                                r15_2 = zx.d(*(rdx_1 - 3))
                                rsi_11 = zx.d(*(rdx_1 - 2))
                                
                                if ((r15_2 << 8 | rsi_11) != zx.d(*(arg3 + 4))
                                        || (r14_2.d << 8 | r13_2) != zx.d(*(arg3 + 6)))
                                    goto label_1403c9349
                                
                                *(rdx_1 - 5) = *(var_50_1 + 3)
                                *(rdx_1 - 4) = *(var_50_1 + 2)
                                *(rdx_1 - 3) = *(var_50_1 + 5)
                                *(rdx_1 - 2) = var_50_1[1].b
                                *(rdx_1 - 1) = *(var_50_1 + 7)
                                rbx_32 = *(var_50_1 + 6)
                            *rdx_1 = rbx_32.b
                            rdx_1 += 6
                            i_8 = rax.d
                            rax = zx.q(rax.d - 1)
                        while (i_8 != 1)
                else if (arg6 == 0)
                    if (r11_1.d != 0)
                        void* rdx_4 = arg2 + 2
                        rax = zx.q(r11_1.d)
                        int32_t i_9
                        
                        do
                            if (zx.d(*(rdx_4 - 2)) == zx.d(*(arg3 + 2))
                                    && zx.d(*(rdx_4 - 1)) == zx.d(*(arg3 + 4))
                                    && zx.d(*rdx_4) == zx.d(*(arg3 + 6)))
                                *(rdx_4 - 2) = *(arg4 + 2)
                                *(rdx_4 - 1) = arg4[1].b
                                *rdx_4 = *(arg4 + 6)
                            
                            rdx_4 += 3
                            i_9 = rax.d
                            rax = zx.q(rax.d - 1)
                        while (i_9 != 1)
                else if (r11_1.d != 0)
                    void* rdx = arg2 + 2
                    rax = zx.q(r11_1.d)
                    int32_t i_10
                    
                    do
                        uint64_t rcx_3 = zx.q(*(rdx - 2))
                        uint32_t rsi_4 = zx.d(*(rdx - 1))
                        
                        if (rcx_3.d != zx.d(*(arg3 + 2)) || rsi_4 != zx.d(*(arg3 + 4))
                                || zx.d(*rdx) != zx.d(*(arg3 + 6)))
                            *(rdx - 2) = *(arg6 + rcx_3)
                            *(rdx - 1) = *(arg6 + zx.q(rsi_4))
                            arg1 = zx.q(*(arg6 + zx.q(*rdx)))
                        else
                            *(rdx - 2) = *(arg4 + 2)
                            *(rdx - 1) = arg4[1].b
                            arg1 = zx.q(*(arg4 + 6))
                        
                        *rdx = arg1.b
                        rdx += 3
                        i_10 = rax.d
                        rax = zx.q(rax.d - 1)
                    while (i_10 != 1)
            case 4
                if (*(r13_1 + 0x11) != 8)
                    if (arg9 == 0 || arg10 == 0 || arg11 == 0)
                        if (r11_1.d != 0)
                            rax = 0
                            
                            do
                                uint32_t rcx_50 =
                                    zx.d(*(&arg2[rax] + 3)) | zx.d(*(&arg2[rax] + 2)) << 8
                                
                                if (rcx_50.w == 0)
                                    *(arg2 + (rax << 1)) = *(arg4 + 9)
                                    *(arg2 + (rax << 1) + 1) = arg4[2].b
                                else if (rcx_50.w != 0xffff)
                                    int32_t rbx_94 =
                                        (zx.d(*(&arg2[rax] + 1)) | zx.d(arg2[rax].b) << 8) * rcx_50
                                    int32_t rcx_53 = (rcx_50 ^ 0xffff) * zx.d(*(arg5 + 8))
                                    *(arg2 + (rax << 1)) = ((((rcx_53 + rbx_94 + 0x8000) u>> 0x10)
                                        + rcx_53 + rbx_94 + 0x8000) u>> 0x18).b
                                    *(arg2 + (rax << 1) + 1) = ((((rcx_53 + rbx_94 + 0x8000)
                                        u>> 0x10) + rcx_53 + rbx_94 + 0x8000) u>> 0x10).b
                                else
                                    *(arg2 + (rax << 1)) = arg2[rax].w
                                
                                rax += 1
                            while (r11_1.d != rax.d)
                    else if (r11_1.d != 0)
                        rax = 0
                        
                        do
                            uint32_t rbp_29 = zx.d(*(&arg2[rax] + 3)) | zx.d(*(&arg2[rax] + 2)) << 8
                            int16_t rbx_40
                            
                            if (rbp_29.w == 0)
                                *(arg2 + (rax << 1)) = *(arg4 + 9)
                                rbx_40 = arg4[2].w
                            else
                                if (rbp_29.w != 0xffff)
                                    int32_t rbx_47 = zx.d(*(
                                        *(arg11 + (sx.q(zx.d(*(&arg2[rax] + 1)) u>> arg12.b) << 3))
                                        + (zx.q(arg2[rax].b) << 1))) * rbp_29
                                    int32_t rbp_35 = (rbp_29 ^ 0xffff) * zx.d(*(arg5 + 8))
                                    rbx_40 = *(*(arg10 + (sx.q(zx.d(((rbx_47 + rbp_35
                                        + ((rbx_47 + rbp_35 + 0x8000) u>> 0x10) + 0x8000) u>> 0x10).b)
                                        u>> arg12.b) << 3)) + (zx.q((rbx_47 + rbp_35
                                        + ((rbx_47 + rbp_35 + 0x8000) u>> 0x10) + 0x8000) u>> 0x18)
                                        << 1))
                                else
                                    rbx_40 = *(
                                        *(arg9 + (sx.q(zx.d(*(&arg2[rax] + 1)) u>> arg12.b) << 3))
                                        + (zx.q(arg2[rax].b) << 1))
                                
                                *(arg2 + (rax << 1)) = rbx_40:1.b
                            
                            *(arg2 + (rax << 1) + 1) = rbx_40.b
                            rax += 1
                        while (r11_1.d != rax.d)
                else if (arg6 == 0 || arg7 == 0 || arg8 == 0)
                    if (r11_1.d != 0)
                        rax = 0
                        
                        do
                            uint16_t rcx_42 = zx.w(*(arg2 + (rax << 1) + 1))
                            
                            if (rcx_42 == 0)
                                arg1 = zx.q(arg4[2].b)
                            else if (rcx_42.b != 0xff)
                                int16_t rbx_72 = zx.w(*(arg2 + (rax << 1))) * rcx_42
                                rcx_42.b = not.b(rcx_42.b)
                                uint32_t rbp_83 = zx.d(zx.w(rcx_42.b) * *(arg5 + 8) + rbx_72 + 0x80)
                                arg1 = zx.q(((rbp_83 u>> 8) + rbp_83) u>> 8)
                            else
                                arg1 = zx.q(*(arg2 + (rax << 1)))
                            
                            *(arg2 + rax) = arg1.b
                            rax += 1
                        while (r11_1.d != rax.d)
                else if (r11_1.d != 0)
                    arg1 = nullptr
                    
                    do
                        uint16_t rbp_6 = zx.w(*(arg2 + (arg1 << 1) + 1))
                        char rbx_5
                        
                        if (rbp_6 == 0)
                            rbx_5 = arg4[2].b
                        else if (rbp_6.b != 0xff)
                            uint16_t rbx_6 = rbp_6
                            rbp_6.b = not.b(rbp_6.b)
                            uint32_t rbp_10 = zx.d(
                                zx.w(*(arg8 + zx.q(*(arg2 + (arg1 << 1))))) * rbx_6
                                + zx.w(rbp_6.b) * *(arg5 + 8) + 0x80)
                            rbx_5 = *(arg7 + zx.q((((rbp_10 u>> 8) + rbp_10) u>> 8).b))
                        else
                            rbx_5 = *(arg6 + zx.q(*(arg2 + (arg1 << 1))))
                        
                        *(arg2 + arg1) = rbx_5
                        arg1 += 1
                    while (r11_1.d != arg1.d)
            case 6
                if (*(r13_1 + 0x11) != 8)
                    if (arg9 == 0 || arg10 == 0 || arg11 == 0)
                        if (r11_1.d != 0)
                            rax = 0
                            arg1 = nullptr
                            
                            do
                                uint32_t rbx_96 = zx.d(*(arg2 + 5 + (arg1 << 3) + 2))
                                    | zx.d(*(arg2 + 5 + (arg1 << 3) + 1)) << 8
                                
                                if (rbx_96.w == 0)
                                    *(arg2 + 5 + rax - 5) = *(arg4 + 3)
                                    *(arg2 + 5 + rax - 4) = *(arg4 + 2)
                                    *(arg2 + 5 + rax - 3) = *(arg4 + 5)
                                    *(arg2 + 5 + rax - 2) = arg4[1].b
                                    *(arg2 + 5 + rax - 1) = *(arg4 + 7)
                                    *(arg2 + 5 + rax) = *(arg4 + 6)
                                else if (rbx_96.w != 0xffff)
                                    uint32_t rsi_21 = zx.d(*(arg2 + 5 + (arg1 << 3) - 2))
                                        | zx.d(*(arg2 + 5 + (arg1 << 3) - 3)) << 8
                                    uint32_t r8_5 = zx.d(*(arg2 + 5 + (arg1 << 3)))
                                        | zx.d(*(arg2 + 5 + (arg1 << 3) - 1)) << 8
                                    int32_t rdi_38 = (zx.d(*(arg2 + 5 + (arg1 << 3) - 4))
                                        | zx.d(*(arg2 + 5 + (arg1 << 3) - 5)) << 8) * rbx_96
                                    int32_t r10_6 = rbx_96 ^ 0xffff
                                    int32_t rbp_111 = zx.d(*(arg4 + 2)) * r10_6
                                    arg4 = var_50_1
                                    *(arg2 + 5 + rax - 5) = ((((rdi_38 + rbp_111 + 0x8000) u>> 0x10)
                                        + rdi_38 + rbp_111 + 0x8000) u>> 0x18).b
                                    *(arg2 + 5 + rax - 4) = ((((rdi_38 + rbp_111 + 0x8000) u>> 0x10)
                                        + rdi_38 + rbp_111 + 0x8000) u>> 0x10).b
                                    int32_t rsi_22 = rsi_21 * rbx_96
                                    int32_t rbp_116 = zx.d(arg4[1].w) * r10_6
                                    *(arg2 + 5 + rax - 3) = ((rsi_22 + rbp_116
                                        + ((rsi_22 + rbp_116 + 0x8000) u>> 0x10) + 0x8000) u>> 0x18).b
                                    *(arg2 + 5 + rax - 2) = ((rsi_22 + rbp_116
                                        + ((rsi_22 + rbp_116 + 0x8000) u>> 0x10) + 0x8000) u>> 0x10).b
                                    int32_t r8_6 = r8_5 * rbx_96
                                    int32_t rbp_124 = zx.d(*(arg4 + 6)) * r10_6
                                    *(arg2 + 5 + rax - 1) = ((r8_6 + rbp_124
                                        + ((r8_6 + rbp_124 + 0x8000) u>> 0x10) + 0x8000) u>> 0x18).b
                                    *(arg2 + 5 + rax) = ((r8_6 + rbp_124
                                        + ((r8_6 + rbp_124 + 0x8000) u>> 0x10) + 0x8000) u>> 0x10).b
                                else
                                    *(arg2 + 5 + rax - 1) = *(arg2 + 5 + (arg1 << 3) - 1)
                                    *(arg2 + 5 + rax - 5) = *(arg2 + 5 + (arg1 << 3) - 5)
                                
                                arg1 += 1
                                rax += 6
                            while (r11_1.d != arg1.d)
                    else if (r11_1.d != 0)
                        rax = 0
                        int64_t rsi_14 = 0
                        int32_t* var_48_1 = r13_1
                        
                        do
                            uint32_t rbx_55 = zx.d(*(arg2 + 5 + (rsi_14 << 3) + 2))
                                | zx.d(*(arg2 + 5 + (rsi_14 << 3) + 1)) << 8
                            int16_t rbx_62
                            
                            if (rbx_55.w == 0)
                                *(arg2 + 5 + rax - 5) = *(arg4 + 3)
                                *(arg2 + 5 + rax - 4) = *(arg4 + 2)
                                *(arg2 + 5 + rax - 3) = *(arg4 + 5)
                                *(arg2 + 5 + rax - 2) = arg4[1].b
                                *(arg2 + 5 + rax - 1) = *(arg4 + 7)
                                rbx_62 = *(arg4 + 6)
                            else
                                if (rbx_55.w != 0xffff)
                                    char r15_3 = arg12.b
                                    uint32_t rbp_60 = zx.d(*(*(arg11 + (
                                        sx.q(zx.d(*(arg2 + 5 + (rsi_14 << 3) - 4)) u>> r15_3) << 3))
                                        + (zx.q(*(arg2 + 5 + (rsi_14 << 3) - 5)) << 1)))
                                    int32_t rbp_61 = rbp_60 * rbx_55
                                    int32_t r8_2 = rbx_55 ^ 0xffff
                                    int32_t rdi_16 = zx.d(*(arg5 + 2)) * r8_2
                                    int16_t rcx_15 = *(*(arg10 + (sx.q(zx.d(((((rdi_16 + rbp_61
                                        + 0x8000) u>> 0x10) + rdi_16 + rbp_61 + 0x8000) u>> 0x10).b)
                                        u>> r15_3) << 3)) + (zx.q((((rdi_16 + rbp_61 + 0x8000)
                                        u>> 0x10) + rdi_16 + rbp_61 + 0x8000) u>> 0x18) << 1))
                                    *(arg2 + 5 + rax - 5) = rcx_15:1.b
                                    *(arg2 + 5 + rax - 4) = rcx_15.b
                                    uint32_t rcx_19 = zx.d(*(*(arg11 + (
                                        sx.q(zx.d(*(arg2 + 5 + (rsi_14 << 3) - 2)) u>> r15_3) << 3))
                                        + (zx.q(*(arg2 + 5 + (rsi_14 << 3) - 3)) << 1)))
                                    int32_t rcx_20 = rcx_19 * rbx_55
                                    int32_t rbp_69 = zx.d(*(arg5 + 4)) * r8_2
                                    int16_t rcx_29 = *(*(arg10 + (sx.q(zx.d(((((rcx_20 + rbp_69
                                        + 0x8000) u>> 0x10) + rcx_20 + rbp_69 + 0x8000) u>> 0x10).b)
                                        u>> r15_3) << 3)) + (zx.q((((rcx_20 + rbp_69 + 0x8000)
                                        u>> 0x10) + rcx_20 + rbp_69 + 0x8000) u>> 0x18) << 1))
                                    *(arg2 + 5 + rax - 3) = rcx_29:1.b
                                    *(arg2 + 5 + rax - 2) = rcx_29.b
                                    r13_1 = var_48_1
                                    uint32_t rcx_33 = zx.d(*(*(arg11
                                        + (sx.q(zx.d(*(arg2 + 5 + (rsi_14 << 3))) u>> r15_3) << 3))
                                        + (zx.q(*(arg2 + 5 + (rsi_14 << 3) - 1)) << 1)))
                                    int32_t rcx_34 = rcx_33 * rbx_55
                                    int32_t rbp_77 = zx.d(*(arg5 + 6)) * r8_2
                                    rbx_62 = *(*(arg10 + (sx.q(zx.d(((((rcx_34 + rbp_77 + 0x8000)
                                        u>> 0x10) + rcx_34 + rbp_77 + 0x8000) u>> 0x10).b) u>> r15_3)
                                        << 3)) + (zx.q((((rcx_34 + rbp_77 + 0x8000) u>> 0x10) + rcx_34
                                        + rbp_77 + 0x8000) u>> 0x18) << 1))
                                else
                                    arg1 = zx.q(arg12)
                                    int16_t rbx_58 = *(*(arg9 + (
                                        sx.q(zx.d(*(arg2 + 5 + (rsi_14 << 3) - 4)) u>> arg1.b)
                                        << 3)) + (zx.q(*(arg2 + 5 + (rsi_14 << 3) - 5)) << 1))
                                    *(arg2 + 5 + rax - 5) = rbx_58:1.b
                                    *(arg2 + 5 + rax - 4) = rbx_58.b
                                    int16_t rbx_60 = *(*(arg9 + (
                                        sx.q(zx.d(*(arg2 + 5 + (rsi_14 << 3) - 2)) u>> arg1.b)
                                        << 3)) + (zx.q(*(arg2 + 5 + (rsi_14 << 3) - 3)) << 1))
                                    *(arg2 + 5 + rax - 3) = rbx_60:1.b
                                    *(arg2 + 5 + rax - 2) = rbx_60.b
                                    rbx_62 = *(*(arg9 +
                                        (sx.q(zx.d(*(arg2 + 5 + (rsi_14 << 3))) u>> arg1.b) << 3))
                                        + (zx.q(*(arg2 + 5 + (rsi_14 << 3) - 1)) << 1))
                                
                                *(arg2 + 5 + rax - 1) = rbx_62:1.b
                            
                            *(arg2 + 5 + rax) = rbx_62.b
                            rsi_14 += 1
                            rax += 6
                        while (r11_1.d != rsi_14.d)
                else if (arg6 == 0 || arg7 == 0 || arg8 == 0)
                    if (r11_1.d != 0)
                        rax = 0
                        arg1 = nullptr
                        
                        do
                            uint32_t rbp_84 = zx.d(*(&arg2[arg1] + 3))
                            uint8_t rbp_85
                            
                            if (rbp_84 == 0)
                                *(arg2 + rax) = *(arg4 + 2)
                                *(arg2 + rax + 1) = arg4[1].b
                                rbp_85 = *(arg4 + 6)
                            else if (rbp_84.b != 0xff)
                                int16_t rdi_30 = zx.w(arg2[arg1].b) * rbp_84.w
                                uint32_t r10_4 = zx.d(not.b(rbp_84.b))
                                int16_t rsi_16 = *(arg4 + 2) * r10_4.w
                                *(arg2 + rax) = (zx.w((rdi_30 + rsi_16 + 0x80):1.b) + rdi_30
                                    + rsi_16 + 0x80):1.b
                                int16_t rbx_83 = zx.w(*(&arg2[arg1] + 1)) * rbp_84.w
                                int16_t rdi_32 = arg4[1].w * r10_4.w
                                *(arg2 + rax + 1) = (zx.w((rbx_83 + rdi_32 + 0x80):1.b) + rbx_83
                                    + rdi_32 + 0x80):1.b
                                int32_t rbx_89 = zx.d(*(&arg2[arg1] + 2)) * rbp_84
                                int32_t rbp_87 = zx.d(*(arg4 + 6)) * r10_4
                                rbp_85 = ((zx.d((rbx_89.w + rbp_87.w + 0x80):1.b) + rbx_89 + rbp_87
                                    + 0x80) u>> 8).b
                            else
                                *(arg2 + rax) = arg2[arg1].b
                                *(arg2 + rax + 1) = *(&arg2[arg1] + 1)
                                rbp_85 = *(&arg2[arg1] + 2)
                            
                            *(arg2 + rax + 2) = rbp_85
                            arg1 += 1
                            rax += 3
                        while (r11_1.d != arg1.d)
                else if (r11_1.d != 0)
                    arg1 = nullptr
                    int64_t rdi_7 = 0
                    
                    do
                        uint32_t rsi_5 = zx.d(*(&arg2[rdi_7] + 3))
                        char rbx_13
                        
                        if (rsi_5 == 0)
                            *(arg2 + arg1) = *(arg4 + 2)
                            *(arg2 + arg1 + 1) = arg4[1].b
                            rbx_13 = *(arg4 + 6)
                        else if (rsi_5.b != 0xff)
                            int16_t rbp_17 = zx.w(*(arg8 + zx.q(arg2[rdi_7].b))) * rsi_5.w
                            uint16_t r8 = zx.w(not.b(rsi_5.b))
                            int16_t rax_4 = *(arg5 + 2) * r8
                            *(arg2 + arg1) = *(arg7 + zx.q((zx.w((rax_4 + rbp_17 + 0x80):1.b)
                                + rax_4 + rbp_17 + 0x80):1.b))
                            int16_t rax_13 = zx.w(*(arg8 + zx.q(*(&arg2[rdi_7] + 1)))) * rsi_5.w
                            int16_t rbx_19 = *(arg5 + 4) * r8
                            *(arg2 + arg1 + 1) = *(arg7 + zx.q((zx.w((rax_13 + rbx_19 + 0x80):1.b)
                                + rax_13 + rbx_19 + 0x80):1.b))
                            int16_t rax_22 = zx.w(*(arg8 + zx.q(*(&arg2[rdi_7] + 2)))) * rsi_5.w
                            int16_t rsi_7 = *(arg5 + 6) * r8
                            rbx_13 = *(arg7 + zx.q((zx.w((rax_22 + rsi_7 + 0x80):1.b) + rax_22
                                + rsi_7 + 0x80):1.b))
                        else
                            *(arg2 + arg1) = *(arg6 + zx.q(arg2[rdi_7].b))
                            *(arg2 + arg1 + 1) = *(arg6 + zx.q(*(&arg2[rdi_7] + 1)))
                            rbx_13 = *(arg6 + zx.q(*(&arg2[rdi_7] + 2)))
                        
                        *(arg2 + arg1 + 2) = rbx_13
                        rdi_7 += 1
                        arg1 += 3
                    while (r11_1.d != rdi_7.d)
    
    rax.b = r13_1[4].b
    
    if ((rax.b & 4) != 0)
        rax.b &= 0xfb
        r13_1[4].b = rax.b
        rax.b = *(r13_1 + 0x11)
        arg1.b = *(r13_1 + 0x12)
        arg1.b -= 1
        *(r13_1 + 0x12) = arg1.b
        rax.w = mulu.dp.b(rax.b, arg1.b)
        *(r13_1 + 0x13) = rax.b
        uint64_t rcx_95 = zx.q(rax.b)
        uint64_t rcx_97
        
        if (rax.b u< 8)
            rcx_97 = (rcx_95 * r11_1 + 7) u>> 3
        else
            rcx_97 = (rcx_95 u>> 3) * r11_1
        
        *(r13_1 + 8) = rcx_97
else if (arg3 != 0 && rbx.b != 3)
    goto label_1403c8f2c
