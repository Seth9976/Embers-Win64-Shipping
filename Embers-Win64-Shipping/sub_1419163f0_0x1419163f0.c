// 函数: sub_1419163f0
// 地址: 0x1419163f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg1 + 0x318
uint64_t r9
r9.b = 0
void* rcx = arg1 - arg2
char arg_18 = 0
int32_t i = 0
int64_t* var_48 = r14
int32_t* rbx = arg2 + 0x74
int32_t* r10 = rcx + 0x144
int32_t* r8 = rcx + 0x148
int32_t* arg_20 = r10
int32_t* rsi = rcx + 0x140
int32_t* var_58 = r8
char* r11 = rcx + 0x14c
int32_t* var_60 = rsi
uint64_t result = rcx + 0x15c
char* var_68 = r11
int32_t* result_1 = result
char* rcx_1 = rcx + 0x13c
char* var_50 = rcx_1

do
    if (*r14 != 0)
        char rax = *(rcx_1 + rbx)
        
        if (rbx[-3].b != rax)
            uint64_t i_1 = zx.q(i)
            
            if (rax == 0)
                data_143effbc0(0xbe2, i_1)
            else
                data_143effbc8(0xbe2, i_1)
            
            r8 = var_58
            r9 = zx.q(arg_18)
            r10 = arg_20
            r11 = var_68
            rbx[-3].b = *(var_50 + rbx)
            rax = *(var_50 + rbx)
        
        uint8_t var_78
        
        if (rax != 0)
            if (data_143efbce6 != 0)
                int32_t rax_2 = rbx[-1]
                int32_t rdx = *(r10 + rbx)
                int32_t* rsi_1
                void* r14_2
                
                if (*(r11 + rbx) == 0)
                    if (rax_2 == rdx)
                        rsi_1 = r8 + rbx
                    
                    if (rax_2 != rdx || *rbx != *(r8 + rbx) || rbx[3] != *(rcx + 0x154 + rbx)
                            || rbx[4] != *(rcx + 0x158 + rbx))
                        rsi_1 = r8 + rbx
                        data_143f002b0(zx.q(i), rdx, zx.q(*rsi_1))
                        r10 = arg_20
                        r11 = var_68
                    
                    r14_2 = var_60 + rbx
                    int32_t rdx_2 = *r14_2
                    
                    if (rbx[-2] != rdx_2)
                        data_143f002a0(zx.q(i), rdx_2)
                        r11 = var_68
                        r10 = arg_20
                else
                    if (rax_2 == rdx)
                        rsi_1 = r8 + rbx
                    
                    if (rax_2 != rdx || *rbx != *(r8 + rbx) || rbx[3] != *(rcx + 0x154 + rbx)
                            || rbx[4] != *(rcx + 0x158 + rbx))
                        rsi_1 = r8 + rbx
                        var_78.d = *(rcx + 0x158 + rbx)
                        data_143f002b8(zx.q(i), rdx, zx.q(*(r8 + rbx)), zx.q(*(rcx + 0x154 + rbx)), 
                            var_78)
                        r10 = arg_20
                        r11 = var_68
                    
                    r14_2 = var_60 + rbx
                    int32_t rdx_1 = *r14_2
                    
                    if (rbx[-2] != rdx_1 || rbx[2] != *(rbx + rcx + 0x150))
                        data_143f002a8(zx.q(i), rdx_1, zx.q(*(rbx + rcx + 0x150)))
                        r11 = var_68
                        r10 = arg_20
                
                rbx[1].b = *(r11 + rbx)
                rbx[-2] = *r14_2
                rbx[-1] = *(r10 + rbx)
                *rbx = *rsi_1
                
                if (*(r11 + rbx) == 0)
                    r9 = zx.q(arg_18)
                    rbx[3] = *(r10 + rbx)
                    rbx[4] = *rsi_1
                else
                    r9 = zx.q(arg_18)
                    rbx[3] = *(rcx + 0x154 + rbx)
                    rbx[4] = *(rcx + 0x158 + rbx)
                
                r14 = var_48
                rsi = var_60
            else if (r9.b == 0)
                int32_t rax_22 = rbx[-1]
                int32_t rcx_10 = *(r10 + rbx)
                int32_t* rsi_3
                int32_t* r14_4
                
                if (*(r11 + rbx) == 0)
                    if (rax_22 == rcx_10)
                        r14_4 = r8 + rbx
                    
                    if (rax_22 != rcx_10 || *rbx != *(r8 + rbx) || rbx[3] != *(rcx + 0x154 + rbx)
                            || rbx[4] != *(rcx + 0x158 + rbx))
                        r14_4 = r8 + rbx
                        data_143eff990(rcx_10, zx.q(*(r8 + rbx)))
                        r10 = arg_20
                        r11 = var_68
                    
                    rsi_3 = rsi + rbx
                    int32_t rcx_12 = *rsi_3
                    
                    if (rbx[-2] != rcx_12 || rbx[2] != rcx_12)
                        data_143effbf0(rcx_12)
                        r11 = var_68
                        r10 = arg_20
                else
                    if (rax_22 == rcx_10)
                        r14_4 = r8 + rbx
                    
                    if (rax_22 != rcx_10 || *rbx != *(r8 + rbx) || rbx[3] != *(rcx + 0x154 + rbx)
                            || rbx[4] != *(rcx + 0x158 + rbx))
                        r14_4 = r8 + rbx
                        data_143effc60(rcx_10, zx.q(*(r8 + rbx)), zx.q(*(rcx + 0x154 + rbx)), 
                            zx.q(*(rcx + 0x158 + rbx)), var_78)
                        r10 = arg_20
                        r11 = var_68
                    
                    rsi_3 = rsi + rbx
                    int32_t rcx_11 = *rsi_3
                    
                    if (rbx[-2] != rcx_11 || rbx[2] != *(rbx + rcx + 0x150))
                        data_143effd38(rcx_11, zx.q(*(rbx + rcx + 0x150)))
                        r11 = var_68
                        r10 = arg_20
                
                *(arg2 + 0x78) = *(r11 + rbx)
                *(arg2 + 0x6c) = *rsi_3
                *(arg2 + 0x70) = *(r10 + rbx)
                *(arg2 + 0x74) = *r14_4
                int32_t rax_36
                int32_t* rcx_13
                
                if (*(r11 + rbx) == 0)
                    rcx_13 = rsi_3
                    *(arg2 + 0x7c) = *rsi_3
                    *(arg2 + 0x80) = *(r10 + rbx)
                    rax_36 = *r14_4
                else
                    rcx_13 = rbx + rcx + 0x150
                    *(arg2 + 0x7c) = *(rbx + rcx + 0x150)
                    *(arg2 + 0x80) = *(rcx + 0x154 + rbx)
                    rax_36 = *(rcx + 0x158 + rbx)
                
                *(arg2 + 0x84) = rax_36
                *(arg2 + 0x7c) = *rcx_13
                *(arg2 + 0x9c) = *(r11 + rbx)
                *(arg2 + 0x90) = *rsi_3
                *(arg2 + 0x94) = *(r10 + rbx)
                *(arg2 + 0x98) = *r14_4
                int32_t rax_46
                int32_t* rcx_14
                
                if (*(r11 + rbx) == 0)
                    rcx_14 = rsi_3
                    *(arg2 + 0xa0) = *rsi_3
                    *(arg2 + 0xa4) = *(r10 + rbx)
                    rax_46 = *r14_4
                else
                    rcx_14 = rbx + rcx + 0x150
                    *(arg2 + 0xa0) = *(rbx + rcx + 0x150)
                    *(arg2 + 0xa4) = *(rcx + 0x154 + rbx)
                    rax_46 = *(rcx + 0x158 + rbx)
                
                *(arg2 + 0xa8) = rax_46
                *(arg2 + 0xa0) = *rcx_14
                *(arg2 + 0xc0) = *(r11 + rbx)
                *(arg2 + 0xb4) = *rsi_3
                *(arg2 + 0xb8) = *(r10 + rbx)
                *(arg2 + 0xbc) = *r14_4
                int32_t rax_56
                int32_t* rcx_15
                
                if (*(r11 + rbx) == 0)
                    rcx_15 = rsi_3
                    *(arg2 + 0xc4) = *rsi_3
                    *(arg2 + 0xc8) = *(r10 + rbx)
                    rax_56 = *r14_4
                else
                    rcx_15 = rbx + rcx + 0x150
                    *(arg2 + 0xc4) = *(rbx + rcx + 0x150)
                    *(arg2 + 0xc8) = *(rcx + 0x154 + rbx)
                    rax_56 = *(rcx + 0x158 + rbx)
                
                *(arg2 + 0xcc) = rax_56
                *(arg2 + 0xc4) = *rcx_15
                *(arg2 + 0xe4) = *(r11 + rbx)
                *(arg2 + 0xd8) = *rsi_3
                *(arg2 + 0xdc) = *(r10 + rbx)
                *(arg2 + 0xe0) = *r14_4
                int32_t rax_66
                int32_t* rcx_16
                
                if (*(r11 + rbx) == 0)
                    rcx_16 = rsi_3
                    *(arg2 + 0xe8) = *rsi_3
                    *(arg2 + 0xec) = *(r10 + rbx)
                    rax_66 = *r14_4
                else
                    rcx_16 = rbx + rcx + 0x150
                    *(arg2 + 0xe8) = *(rbx + rcx + 0x150)
                    *(arg2 + 0xec) = *(rcx + 0x154 + rbx)
                    rax_66 = *(rcx + 0x158 + rbx)
                
                *(arg2 + 0xf0) = rax_66
                *(arg2 + 0xe8) = *rcx_16
                *(arg2 + 0x108) = *(r11 + rbx)
                *(arg2 + 0xfc) = *rsi_3
                *(arg2 + 0x100) = *(r10 + rbx)
                *(arg2 + 0x104) = *r14_4
                int32_t rax_76
                int32_t* rcx_17
                
                if (*(r11 + rbx) == 0)
                    rcx_17 = rsi_3
                    *(arg2 + 0x10c) = *rsi_3
                    *(arg2 + 0x110) = *(r10 + rbx)
                    rax_76 = *r14_4
                else
                    rcx_17 = rbx + rcx + 0x150
                    *(arg2 + 0x10c) = *(rbx + rcx + 0x150)
                    *(arg2 + 0x110) = *(rcx + 0x154 + rbx)
                    rax_76 = *(rcx + 0x158 + rbx)
                
                *(arg2 + 0x114) = rax_76
                *(arg2 + 0x10c) = *rcx_17
                *(arg2 + 0x12c) = *(r11 + rbx)
                *(arg2 + 0x120) = *rsi_3
                *(arg2 + 0x124) = *(r10 + rbx)
                *(arg2 + 0x128) = *r14_4
                int32_t rax_86
                int32_t* rcx_18
                
                if (*(r11 + rbx) == 0)
                    rcx_18 = rsi_3
                    *(arg2 + 0x130) = *rsi_3
                    *(arg2 + 0x134) = *(r10 + rbx)
                    rax_86 = *r14_4
                else
                    rcx_18 = rbx + rcx + 0x150
                    *(arg2 + 0x130) = *(rbx + rcx + 0x150)
                    *(arg2 + 0x134) = *(rcx + 0x154 + rbx)
                    rax_86 = *(rcx + 0x158 + rbx)
                
                *(arg2 + 0x138) = rax_86
                *(arg2 + 0x130) = *rcx_18
                *(arg2 + 0x150) = *(r11 + rbx)
                *(arg2 + 0x144) = *rsi_3
                *(arg2 + 0x148) = *(r10 + rbx)
                *(arg2 + 0x14c) = *r14_4
                int32_t rax_96
                int32_t* rcx_19
                
                if (*(r11 + rbx) == 0)
                    rcx_19 = rsi_3
                    *(arg2 + 0x154) = *rsi_3
                    *(arg2 + 0x158) = *(r10 + rbx)
                    rax_96 = *r14_4
                else
                    rcx_19 = rbx + rcx + 0x150
                    *(arg2 + 0x154) = *(rbx + rcx + 0x150)
                    *(arg2 + 0x158) = *(rcx + 0x154 + rbx)
                    rax_96 = *(rcx + 0x158 + rbx)
                
                *(arg2 + 0x15c) = rax_96
                *(arg2 + 0x154) = *rcx_19
                *(arg2 + 0x174) = *(r11 + rbx)
                *(arg2 + 0x168) = *rsi_3
                *(arg2 + 0x16c) = *(r10 + rbx)
                *(arg2 + 0x170) = *r14_4
                int32_t rax_106
                
                if (*(r11 + rbx) == 0)
                    *(arg2 + 0x178) = *rsi_3
                    *(arg2 + 0x17c) = *(r10 + rbx)
                    rax_106 = *r14_4
                else
                    rsi_3 = rbx + rcx + 0x150
                    *(arg2 + 0x178) = *(rbx + rcx + 0x150)
                    *(arg2 + 0x17c) = *(rcx + 0x154 + rbx)
                    rax_106 = *(rcx + 0x158 + rbx)
                
                *(arg2 + 0x180) = rax_106
                r9.b = 1
                *(arg2 + 0x178) = *rsi_3
                arg_18 = 1
                r14 = var_48
                rsi = var_60
            else
                char rcx_9 = *(r11 + rbx)
                
                if (rbx[1].b != rcx_9 || rbx[-2] != *(rsi + rbx) || rbx[-1] != *(r10 + rbx)
                    || *rbx != *(r8 + rbx))
                label_141916694:
                    sub_140af98a0("Unknown", 0x57f, 
                        OpenGL state on draw requires setting different blend operation or factors to "
                    "different render targets. This is", r9)
                    sub_140afbb40()
                    r9 = zx.q(arg_18)
                    r10 = arg_20
                    r11 = var_68
                else if (rcx_9 != 0
                        && (rbx[3] != *(rcx + 0x154 + rbx) || rbx[4] != *(rcx + 0x158 + rbx)))
                    goto label_141916694
        
        int32_t rcx_20 = rbx[5]
        rbx[1].b = *(r11 + rbx)
        int32_t rdx_6 = *(result_1 + rbx)
        
        if (((rdx_6.b ^ rcx_20.b) & 1) == 0 && ((rdx_6.b ^ rcx_20.b) & 2) == 0
                && ((rdx_6.b ^ rcx_20.b) & 4) == 0)
            result = zx.q(rdx_6) ^ zx.q(rcx_20)
        
        if (((rdx_6.b ^ rcx_20.b) & 1) != 0 || ((rdx_6.b ^ rcx_20.b) & 2) != 0
                || ((rdx_6.b ^ rcx_20.b) & 4) != 0 || (result.b & 8) != 0)
            var_78 = (rdx_6 u>> 3).b & 1
            uint8_t r9_4 = (rdx_6 u>> 2).b & 1
            uint64_t r8_7 = zx.q((rdx_6 u>> 1).b) & 1
            rdx_6.b &= 1
            data_143effbb8(zx.q(i), rdx_6, r8_7, r9_4, var_78)
            r9 = zx.q(arg_18)
            r10 = arg_20
            r11 = var_68
            rbx[5] ^= (*(result_1 + rbx) ^ rbx[5]) & 1
            int32_t rcx_25 = ((rbx[5] ^ *(result_1 + rbx)) & 2) ^ rbx[5]
            rbx[5] = rcx_25
            int32_t rdx_10 = ((rcx_25 ^ *(result_1 + rbx)) & 4) ^ rcx_25
            rbx[5] = rdx_10
            result = ((zx.q(rdx_10) ^ zx.q(*(result_1 + rbx))) & 8) ^ zx.q(rdx_10)
            rbx[5] = result.d
        
        rcx_1 = var_50
        r8 = var_58
    
    r14 = &r14[1]
    i += 1
    rbx = &rbx[9]
    var_48 = r14
while (i u< 8)

return result
