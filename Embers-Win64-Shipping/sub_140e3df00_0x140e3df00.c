// 函数: sub_140e3df00
// 地址: 0x140e3df00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int32_t var_158 = arg3.d
uint32_t i_1

if (arg3.d != 1)
    void* rbx_1 = &arg1[2]
    void var_144
    void* r13_1 = &var_144
    void* var_160_1 = &data_142ed5ce8 + sx.q((arg3 << 3).d)
    int32_t i = 8
    void* r15_1 = var_160_1
    uint32_t i_3 = 8
    int32_t i_2 = 8
    void* var_168_1 = &var_144
    
    do
        uint64_t rcx_9 = zx.q(*r15_1)
        
        if (rcx_9.d u<= 8)
            int32_t var_170_1
            int32_t r12_7
            int32_t r13_5
            int32_t r14_11
            
            switch (rcx_9)
                case 1
                    int32_t rax_8 = sx.d(*(rbx_1 - 4)) << 2
                    *(r13_1 - 4) = rax_8
                    *r13_1 = rax_8
                    *(r13_1 + 4) = rax_8
                    *(r13_1 + 8) = rax_8
                    *(r13_1 + 0xc) = rax_8
                    *(r13_1 + 0x10) = rax_8
                    *(r13_1 + 0x14) = rax_8
                    *(r13_1 + 0x18) = rax_8
                case 2
                    int32_t rcx_12 = sx.d(*(rbx_1 - 2))
                    int32_t rdi_2 = sx.d(*(rbx_1 - 4)) << 0xd
                    int32_t r9_1 = rcx_12 * 0x25a1
                    int32_t rdx_1 = rcx_12 * 0xffffe333
                    int32_t r10_2 = r9_1 - rcx_12 * 0xc7c
                    int32_t r8_2 = rcx_12 * 0x300b + r10_2 + rdx_1
                    int32_t r11_1 = rdx_1 + r9_1
                    *(r13_1 - 4) = (rdi_2 + 0x400 + r8_2) s>> 0xb
                    *(r13_1 + 0x18) = (rdi_2 - r8_2 + 0x400) s>> 0xb
                    *r13_1 = (rdi_2 + 0x400 + r9_1) s>> 0xb
                    *(r13_1 + 0x14) = (rdi_2 - r9_1 + 0x400) s>> 0xb
                    *(r13_1 + 4) = (rdi_2 + 0x400 + r10_2) s>> 0xb
                    *(r13_1 + 0x10) = (rdi_2 - r10_2 + 0x400) s>> 0xb
                    *(r13_1 + 0xc) = (rdi_2 - r11_1 + 0x400) s>> 0xb
                    *(r13_1 + 8) = (rdi_2 + 0x400 + r11_1) s>> 0xb
                case 3
                    int32_t rax_34 = sx.d(*rbx_1)
                    int32_t rdx_2 = rax_34 * 0x1151
                    int32_t r14_2 = sx.d(*(rbx_1 - 4)) << 0xd
                    int32_t rcx_14 = rax_34 * 0x187e + rdx_2
                    int32_t rbp_2 = r14_2 - rcx_14
                    int32_t rdi_6 = r14_2 + rdx_2
                    int32_t r10_3 = r14_2 + rcx_14
                    int32_t rcx_15 = sx.d(*(rbx_1 - 2))
                    int32_t r14_3 = r14_2 - rdx_2
                    int32_t r9_2 = rcx_15 * 0x25a1
                    int32_t rdx_3 = rcx_15 * 0xffffe333
                    int32_t r11_3 = r9_2 - rcx_15 * 0xc7c
                    int32_t r8_5 = rcx_15 * 0x300b + r11_3 + rdx_3
                    int32_t rsi_1 = rdx_3 + r9_2
                    *(r13_1 - 4) = (r10_3 + 0x400 + r8_5) s>> 0xb
                    *(r13_1 + 0x18) = (r10_3 - r8_5 + 0x400) s>> 0xb
                    *r13_1 = (rdi_6 + 0x400 + r9_2) s>> 0xb
                    *(r13_1 + 0x14) = (rdi_6 - r9_2 + 0x400) s>> 0xb
                    *(r13_1 + 4) = (r14_3 + 0x400 + r11_3) s>> 0xb
                    *(r13_1 + 0x10) = (r14_3 - r11_3 + 0x400) s>> 0xb
                    *(r13_1 + 8) = (rbp_2 + 0x400 + rsi_1) s>> 0xb
                    *(r13_1 + 0xc) = (rbp_2 - rsi_1 + 0x400) s>> 0xb
                case 4
                    sub_140e3dc20(r13_1 - 4, rbx_1 - 4)
                case 5
                    int32_t r8_6 = sx.d(*(rbx_1 + 2))
                    int32_t r10_7 = sx.d(*(rbx_1 - 2))
                    int32_t rax_48 = sx.d(*rbx_1)
                    int32_t r15_2 = sx.d(*(rbx_1 - 4))
                    int32_t rdx_5 = rax_48 * 0x1151
                    int32_t rax_49 = sx.d(*(rbx_1 + 4))
                    int32_t r11_4 = r10_7 * 0xffffe333
                    int32_t rcx_18 = rax_48 * 0x187e + rdx_5
                    int32_t r12_2 = (rax_49 + r15_2) << 0xd
                    int32_t r15_4 = (r15_2 - rax_49) << 0xd
                    int32_t r9_3 = (r10_7 + r8_6) * 0x25a1
                    int32_t rsi_2 = r12_2 + rcx_18
                    int32_t r12_3 = r12_2 - rcx_18
                    int32_t r14_7 = r15_4 + rdx_5
                    int32_t r15_5 = r15_4 - rdx_5
                    int32_t rdx_6 = r8_6 * 0xffffadfd
                    int32_t rcx_20 = r9_3 - r8_6 * 0x3ec5
                    int32_t rbp_6 = rcx_20 + r11_4
                    int32_t r9_4 = r9_3 - r10_7 * 0xc7c
                    int32_t r8_9 = r8_6 * 0x6254 + rcx_20 + rdx_6
                    int32_t rdi_10 = r9_4 + rdx_6
                    int32_t rcx_23 = r10_7 * 0x300b + r9_4 + r11_4
                    *(r13_1 - 4) = (rsi_2 + 0x400 + rcx_23) s>> 0xb
                    *r13_1 = (r14_7 + 0x400 + r8_9) s>> 0xb
                    *(r13_1 + 0x18) = (rsi_2 - rcx_23 + 0x400) s>> 0xb
                    *(r13_1 + 4) = (r15_5 + 0x400 + rdi_10) s>> 0xb
                    *(r13_1 + 0x10) = (r15_5 - rdi_10 + 0x400) s>> 0xb
                    r15_1 = var_160_1
                    *(r13_1 + 0xc) = (r12_3 - rbp_6 + 0x400) s>> 0xb
                    *(r13_1 + 0x14) = (r14_7 - r8_9 + 0x400) s>> 0xb
                    *(r13_1 + 8) = (r12_3 + 0x400 + rbp_6) s>> 0xb
                case 6
                    int32_t rax_65 = sx.d(*rbx_1)
                    int32_t r13_2 = sx.d(*(rbx_1 - 4))
                    int32_t rdx_7 = rax_65 * 0x1151
                    int32_t rax_66 = sx.d(*(rbx_1 + 4))
                    int32_t rcx_25 = rax_65 * 0x187e + rdx_7
                    int32_t r8_11 = (rax_66 + r13_2) << 0xd
                    int32_t r13_4 = (r13_2 - rax_66) << 0xd
                    r14_11 = r8_11 + rcx_25
                    r12_7 = rdx_7 + r13_4
                    var_170_1 = r8_11 - rcx_25
                    r13_5 = r13_4 - rdx_7
                label_140e3e364:
                    int32_t r8_13 = sx.d(*(rbx_1 + 6))
                    int32_t r10_8 = sx.d(*(rbx_1 + 2))
                    int32_t rsi_6 = sx.d(*(rbx_1 - 2))
                    int32_t rdi_11 = rsi_6 * 0xffffe333
                    int32_t rcx_26 = rsi_6 + r8_13
                    int32_t r11_5 = (rcx_26 + r10_8) * 0x25a1
                    int32_t r9_5 = (r10_8 + r8_13) * 0xffffadfd
                    int32_t rdx_9 = r11_5 - r10_8 * 0x3ec5
                    int32_t r8_16 = r10_8 * 0x6254 + rdx_9 + r9_5
                    int32_t r15_9 = rdx_9 + rdi_11
                    int32_t r11_6 = r11_5 - rcx_26 * 0xc7c
                    int32_t rcx_29 = rsi_6 * 0x300b + r11_6 + rdi_11
                    int32_t rbp_9 = r8_13 * 0x41b3 + r11_6 + r9_5
                    *(var_168_1 - 4) = (r14_11 + 0x400 + rcx_29) s>> 0xb
                    *var_168_1 = (r12_7 + 0x400 + r8_16) s>> 0xb
                    *(var_168_1 + 0x18) = (r14_11 - rcx_29 + 0x400) s>> 0xb
                    *(var_168_1 + 4) = (r13_5 + 0x400 + rbp_9) s>> 0xb
                    *(var_168_1 + 0x10) = (r13_5 - rbp_9 + 0x400) s>> 0xb
                    r15_1 = var_160_1
                    r13_1 = var_168_1
                    *(var_168_1 + 0xc) = (var_170_1 - r15_9 + 0x400) s>> 0xb
                    *(var_168_1 + 0x14) = (r12_7 - r8_16 + 0x400) s>> 0xb
                    *(var_168_1 + 8) = (var_170_1 + 0x400 + r15_9) s>> 0xb
                case 7
                    int32_t rcx_34 = sx.d(*(rbx_1 + 8))
                    int32_t r8_17 = sx.d(*rbx_1)
                    int32_t r13_9 = sx.d(*(rbx_1 - 4))
                    int32_t rdx_11 = (rcx_34 + r8_17) * 0x1151
                    int32_t r9_7 = rdx_11 - rcx_34 * 0x3b21
                    int32_t rax_85 = sx.d(*(rbx_1 + 4))
                    int32_t rcx_36 = r8_17 * 0x187e + rdx_11
                    int32_t rdx_13 = (rax_85 + r13_9) << 0xd
                    int32_t r13_11 = (r13_9 - rax_85) << 0xd
                    r14_11 = rdx_13 + rcx_36
                    r12_7 = r9_7 + r13_11
                    var_170_1 = rdx_13 - rcx_36
                    r13_5 = r13_11 - r9_7
                    goto label_140e3e364
                case 8
                    sub_140e3dd70(r13_1 - 4, rbx_1 - 4)
            
            i = i_2
        
        r13_1 += 0x20
        i -= 1
        r15_1 += 1
        var_168_1 = r13_1
        rbx_1 += 0x10
        i_2 = i
        var_160_1 = r15_1
    while (i s> 0)
    
    void var_148
    int32_t* rdi_12 = &var_148
    uint32_t* rbx_2 = arg2
    i_1 = 8
    int32_t rsi_8 = zx.d(*(sx.q(var_158) + 0x142ed666f)) - 1
    
    do
        if (rsi_8 u<= 7)
            switch (rsi_8)
                case 0
                    int32_t rax_90 = (*rdi_12 + 0x1010) s>> 5
                    
                    if (rax_90 u> 0xff)
                        rax_90 = not.d(rax_90) s>> 0x1f
                    
                    *rbx_2 = rax_90.b
                    rbx_2[2].b = rax_90.b
                    rbx_2[4].b = rax_90.b
                    rbx_2[6].b = rax_90.b
                    rbx_2[8].b = rax_90.b
                    rbx_2[0xa].b = rax_90.b
                    rbx_2[0xc].b = rax_90.b
                    rbx_2[0xe].b = rax_90.b
                case 1
                    sub_140e3cf70(rbx_2, rdi_12)
                case 2
                    sub_140e3d0d0(rbx_2, rdi_12)
                case 3
                    sub_140e3d260(rbx_2, rdi_12)
                case 4
                    sub_140e3d420(rbx_2, rdi_12)
                case 5
                    sub_140e3d5f0(rbx_2, rdi_12)
                case 6
                    sub_140e3d7f0(rbx_2, rdi_12)
                case 7
                    sub_140e3da00(rbx_2, rdi_12)
            
            i_1 = i_3
        
        i_1 -= 1
        rdi_12 = &rdi_12[1]
        rbx_2 += 1
        i_3 = i_1
    while (i_1 s> 0)
else
    uint32_t rcx_3 = ((sx.d(*arg1) + 4) s>> 3) + 0x80
    
    if (rcx_3 u> 0xff)
        rcx_3 = zx.d((not.d(rcx_3) s>> 0x1f).b)
    
    uint32_t rcx_6 = rcx_3 | rcx_3 << 8
    i_1 = rcx_6 << 0x10
    uint32_t rcx_7 = rcx_6 | i_1
    *arg2 = rcx_7
    arg2[1] = rcx_7
    arg2[2] = rcx_7
    arg2[3] = rcx_7
    arg2[4] = rcx_7
    arg2[5] = rcx_7
    arg2[6] = rcx_7
    arg2[7] = rcx_7
    arg2[8] = rcx_7
    arg2[9] = rcx_7
    arg2[0xa] = rcx_7
    arg2[0xb] = rcx_7
    arg2[0xc] = rcx_7
    arg2[0xd] = rcx_7
    arg2[0xe] = rcx_7
    arg2[0xf] = rcx_7

__security_check_cookie(rax_1 ^ &var_198)
return i_1
