// 函数: sub_142bcd1c0
// 地址: 0x142bcd1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
char r14 = *(arg1 + 0x5c)
int32_t var_78 = 0
uint64_t result

if (r14 == 0 || arg1[0x65] != 0)
    int64_t** rax_2 = arg1[0x66]
    int64_t rsi_1 = *arg1
    int64_t* rbx_1 = *rax_2
    
    if (rbx_1 != 0)
    label_142bcd2de:
        rbx_1[0x1e] = arg1
        rbx_1[0x1d] = arg1
        void* r10_1 = arg1[1]
        void* r8_1 = arg1[2]
        int64_t var_58_1 = arg2
        void* rcx_3 = *(r10_1 + 0x90)
        char r11_1 = *(r8_1 + 0xf8)
        int64_t var_68_1 = arg2
        char r9_1 = *(*(r10_1 + 0xd0) + 0x58)
        char r12_1 = *(rcx_3 + 0x3c)
        int64_t var_70 = 0
        char r15_1 = *(r8_1 + 0xf9)
        int64_t var_60_1 = zx.q(arg3) + arg2
        int64_t var_50
        __builtin_memset(&var_50, 0, 0x18)
        int32_t rbp_1
        int32_t rsi_2
        int64_t var_48
        
        if (r11_1 == 0)
            rsi_2 = 0x400
            var_50.d = 0x400
            rbp_1 = 0x400
            var_48:4.d = 0x400
        else
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(*(r8_1 + 0xfc) + 0x20)
            int32_t rax_13 = (temp1_1 + (temp0_1 & 0x3f)) s>> 6
            rsi_2 = rax_13
            var_50.d = rax_13
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(*(r8_1 + 0x100) + 0x20)
            int32_t rax_18 = (temp3_1 + (temp2_1 & 0x3f)) s>> 6
            rbp_1 = rax_18
            var_48:4.d = rax_18
        
        if (r14 == 0)
            *(rbx_1 + 0xd) = *(r10_1 + 0x408)
        else
            *(rbx_1 + 0xd) = 0
        
        rbx_1[2].d = 0
        int32_t rax_20 = rbx_1[2].d
        
        if (r11_1 != 0)
            rax_20 = 1
        
        *(rbx_1 + 0xc) = r14
        rbx_1[2].d = rax_20
        
        if (r15_1 != 0)
            if (r9_1 == 0)
                rbx_1[2].d |= 2
            else if (r9_1 s< 0 && r12_1 == 0)
                rbx_1[2].d |= 2
        
        *(rbx_1 + 0x104) = *(rcx_3 + 0x40)
        rbx_1[0x21].d = *(rcx_3 + 0x44)
        *(rbx_1 + 0x10c) = *(rcx_3 + 0x48)
        rbx_1[0x22].d = *(rcx_3 + 0x4c)
        *(rbx_1 + 0x114) = *(rcx_3 + 0x50)
        rbx_1[0x23].d = *(rcx_3 + 0x54)
        *(rbx_1 + 0x11c) = *(rcx_3 + 0x58)
        rbx_1[0x24].d = *(rcx_3 + 0x5c)
        uint32_t rdx_4 = zx.d(*(arg1[1] + 0x68))
        rbx_1[0x14].d = rdx_4
        
        if (r15_1 == 0)
        label_142bcd480:
            int32_t var_74
            
            if (sub_142bd2d00(rbx_1, &var_70, &var_50, &var_74, arg4) == 0)
                void* rdx_7 = rbx_1[0x1d]
                
                if (*(rdx_7 + 0x5c) == 0)
                    **(rdx_7 + 0x338) = sx.d(((var_74 + 0x8000) u>> 0x10).w)
                
                result = 0
            else
                result = 3
        else if (rsi_2 s<= 0 || rbp_1 s<= 0)
            result = 0x24
        else
            uint32_t rax_30
            
            if (rdx_4 s<= 0x7fff)
                rax_30 = sub_142b91790(0x7d00000, rdx_4 << 0x10)
            
            if (rdx_4 s<= 0x7fff && rsi_2 s<= rax_30 && rbp_1 s<= rax_30)
                goto label_142bcd480
            
            result = 0xa4
    else
        rax_2[1] = sub_142bd2cb0
        *arg1[0x66] = sub_142b99860(rsi_1, 0x290, &var_78)
        
        if (var_78 == rbx_1.d)
            rbx_1 = *arg1[0x66]
            *rbx_1 = rsi_1
            
            if (r14 == 0)
                rbx_1[0x51] = *(arg1[0x64] + 0x10e8)
            
            rbx_1[0x18] = 0
            rbx_1[0x1a] = 0
            rbx_1[0x1d] = 0
            rbx_1[0x1c] = &rbx_1[1]
            rbx_1[0x16] = sub_142bd1f30
            rbx_1[0x17] = sub_142bd1e90
            rbx_1[0x19] = sub_142bd1d20
            rbx_1[0x1b] = rsi_1
            goto label_142bcd2de
        
        result = zx.q((&rbx_1[8]).d)
else
    result = 8

__security_check_cookie(rax_1 ^ &var_98)
return result
