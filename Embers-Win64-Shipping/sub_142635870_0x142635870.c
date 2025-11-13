// 函数: sub_142635870
// 地址: 0x142635870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t* rbp = arg1
int64_t rdi = sx.q(arg4)
int32_t r11 = arg3
int32_t rbx = arg2
uint64_t result = *rbp
uint32_t rdx = zx.d(*(rdi + arg5))
uint32_t r9 = zx.d(*(result + 0x30))
uint32_t r8 = zx.d(*(result + 0x32))
result.b = 0

if ((rdx.b & 1) == 0)
    do
        result.b += 1
    while (not(test_bit(rdx, zx.d(result.b))))

int32_t rsi = 0
uint32_t rcx_2 = zx.d(result.b)
int32_t r8_2 = r8 * r9 * 2
int32_t var_6c = rdi.d
int32_t var_70 = 0
arg6[1].d = 0

if (r8_2 s<= 0)
label_142635b4d:
    int16_t* r8_7 = *arg6
    uint64_t rdx_16 = zx.q(arg6[1].d)
    int64_t rcx_34 = sx.q((rdx_16 * 5).d)
    
    if (r8_7[rcx_34 - 5] == *r8_7 && r8_7[rcx_34 - 3] == r8_7[2])
        arg6[1].d = (rdx_16 - 1).d
    
    result.b = 1
else
    while (true)
        uint32_t r15_1 = zx.d(result.b)
        uint32_t r10_1 = zx.d(*(*rbp + 0x30))
        char r9_1 = 1 << r15_1.b
        uint8_t r8_3 = *(sx.q(r10_1 * r11 + rbx) + rbp[4])
        int128_t var_50
        int16_t* r8_4
        uint16_t r9_2
        
        if ((r8_3 & r9_1 & 0xf) != 0)
            uint64_t rcx_11 = zx.q(r15_1) & 3
            r8_4 = rbp[5]
            int128_t var_40
            int32_t rdx_4 = (*(&var_40 + (rcx_11 << 2)) + r11) * r10_1
            __builtin_memcpy(&var_50, 
                "\xff\xff\xff\xff\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x01\x"
            "00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff", 
                0x20)
            int64_t rdx_7 = sx.q(rdx_4 + *(&var_50 + (rcx_11 << 2)) + rbx)
            r9_2 = r8_4[rdx_7]
            var_78 = *(rdx_7 + rbp[3])
        else if ((r9_1 & r8_3 u>> 4) == 0)
            r8_4 = rbp[5]
            r9_2 = -1
            var_78 = 0
        else
            r8_4 = rbp[5]
            r9_2 = zx.w(result.b) - 0x800
            var_78 = 0
        
        int32_t r12_1 = rbx
        int32_t r13_1 = r11
        int64_t r10_2 = sx.q(r9 * r11 + rbx) * 2
        
        if (r9_2 == r8_4[sx.q(r9 * r11 + rbx)])
            var_50 = data_142fc59d0
            uint64_t rdx_15 = (zx.q(result.b) & 3) << 2
            int32_t r12_2 = *(&var_50 + rdx_15)
            var_50 = data_14344e350
            r12_1 = r12_2 + rbx
            r13_1 = *(&var_50 + rdx_15) + r11
            result.b -= 1
        else
            if (result.b == 0)
                r11 += 1
            else if (r15_1 == 1)
                rbx += 1
                r11 += 1
            else if (r15_1 == 2)
                rbx += 1
            
            int16_t rsi_1 = *(r10_2 + rbp[2])
            uint64_t r10_3 = zx.q(arg6[1].d)
            
            if (r10_3.d s<= 1)
            label_142635a83:
                
                if (r10_3.d s>= *(arg6 + 0xc))
                    result.b = 0
                    break
                
                int64_t rdx_12 = sx.q((r10_3 * 5).d)
                int64_t rcx_27 = *arg6
                *(rcx_27 + (rdx_12 << 1)) = rbx.w
                *(rcx_27 + (rdx_12 << 1) + 2) = rsi_1
                *(rcx_27 + (rdx_12 << 1) + 4) = r11.w
                void* r8_6 = rcx_27 + (rdx_12 << 1)
                uint16_t rcx_28 = zx.w(var_78)
                *(r8_6 + 6) = r9_2
                *(r8_6 + 8) = rcx_28
                arg6[1].d += 1
            else
                int64_t r8_5 = *arg6
                int16_t* rbp_1 = r8_5 + (sx.q((r10_3 - 2).d * 5) << 1)
                int64_t rdx_11 = sx.q((r10_3 * 5).d)
                
                if (*(r8_5 + (rdx_11 << 1) - 4) != r9_2)
                    goto label_142635a83
                
                int16_t rcx_22 = *(r8_5 + (rdx_11 << 1) - 0xa)
                
                if (*rbp_1 != rcx_22 || zx.d(rcx_22) != rbx)
                    int16_t rcx_24 = *(r8_5 + (rdx_11 << 1) - 6)
                    
                    if (rbp_1[2] != rcx_24 || zx.d(rcx_24) != r11)
                        goto label_142635a83
                    
                    *(r8_5 + (rdx_11 << 1) - 0xa) = rbx.w
                    *(r8_5 + (rdx_11 << 1) - 8) = rsi_1
                else
                    *(r8_5 + (rdx_11 << 1) - 8) = rsi_1
                    *(r8_5 + (rdx_11 << 1) - 6) = r11.w
            
            rsi = var_70
            rbp = arg1
            char* rdx_14 = arg5 + sx.q(rdi.d)
            *rdx_14 &= (not.d(1 << (r15_1 u% 0x20))).b
            result.b += 1
        
        result.b &= 3
        
        if (rsi s> 0 && rdi.d == var_6c && r15_1 == rcx_2)
            goto label_142635b4d
        
        rsi += 1
        rbx = r12_1
        r11 = r13_1
        var_70 = rsi
        rdi = zx.q(r13_1 * r9 + r12_1)
        
        if (rsi s>= r8_2)
            goto label_142635b4d

__security_check_cookie(rax_1 ^ &var_78)
return result
