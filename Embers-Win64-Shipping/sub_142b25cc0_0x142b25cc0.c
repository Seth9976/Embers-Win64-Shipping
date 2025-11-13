// 函数: sub_142b25cc0
// 地址: 0x142b25cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(arg4)
int32_t rbp = arg3
uint64_t rax

if (arg3.b u>= 0xc0)
    rax.b = rbp.b & 0xf

if (arg3.b u>= 0xc0 && rax.b == 8)
    void* rcx = *arg1
    uint64_t rdx_1 = zx.q(rbp) u>> 0xd
    int64_t rax_1 = *(rcx + 0x18)
    void* r15_1 = rax_1 + (rdx_1 << 1)
    rbp = sub_142aa60d0(rcx, zx.d(*(rax_1 + (rdx_1 << 1))) << 0x10 | zx.d(*(r15_1 + 2)))
    
    if (rsi.b u< 0xc0 || (rsi.b & 0xf) != 8)
        sub_142b25970(arg1, *arg1, arg2, r15_1 + 4)
    else
        void* rcx_1 = arg1[1]
        uint64_t rdx_6 = zx.q(rsi.d) u>> 0xd
        int64_t rax_5 = *(rcx_1 + 0x18)
        void* rbx_1 = rax_5 + (rdx_6 << 1)
        rsi = zx.q(sub_142aa60d0(rcx_1, zx.d(*(rax_5 + (rdx_6 << 1))) << 0x10 | zx.d(*(rbx_1 + 2))))
        sub_142b26230(arg1, arg2, r15_1 + 4, rbx_1 + 4)
else if (rsi.b u>= 0xc0)
    rax.b = rsi.d.b & 0xf
    
    if (rax.b == 8)
        void* rcx_3 = arg1[1]
        uint64_t rdx_13 = rsi u>> 0xd
        int64_t rax_8 = *(rcx_3 + 0x18)
        void* rbx_2 = rax_8 + (rdx_13 << 1)
        rsi =
            zx.q(sub_142aa60d0(rcx_3, zx.d(*(rbx_2 + 2)) | zx.d(*(rax_8 + (rdx_13 << 1))) << 0x10))
        sub_142b25970(arg1, arg1[1], arg2, rbx_2 + 4)

int16_t* rbx_3

if (rbp.b u>= 0xc0 && (rbp & 0xf).b == 9)
    void* r8_2 = *arg1
    rbx_3 = *(r8_2 + 0x18) + (zx.q(rbp) u>> 0xd << 1)
    
    if (not(test_bit(rbp, 8)))
        rbp = sub_142aa60d0(r8_2, zx.d(*rbx_3) << 0x10 | zx.d(rbx_3[1]))
    else
        rbp = 1
    
    if (rsi.b u< 0xc0 || (rsi.b & 0xf) != 9)
        sub_142b25770(arg1, arg2, &rbx_3[2])
    else
        void* r8_3 = arg1[1]
        int16_t* r15_2 = *(r8_3 + 0x18) + (zx.q(rsi.d) u>> 0xd << 1)
        
        if (not(test_bit(rsi.d, 8)))
            rsi = zx.q(sub_142aa60d0(r8_3, zx.d(*r15_2) << 0x10 | zx.d(r15_2[1])))
        else
            rsi = 1
        
        sub_142b26060(arg1, arg2, &rbx_3[2], &r15_2[2])
else if (rsi.b u>= 0xc0 && (rsi.d & 0xf).b == 9)
    void* rcx_12 = arg1[1]
    uint64_t rdx_24 = zx.q(rsi.d) u>> 0xd
    int64_t rax_22 = *(rcx_12 + 0x18)
    rbx_3 = rax_22 + (rdx_24 << 1)
    rsi = zx.q(sub_142aa60d0(rcx_12, zx.d(*(rax_22 + (rdx_24 << 1))) << 0x10 | zx.d(rbx_3[1])))
    sub_142b25770(arg1, arg2, &rbx_3[2])
uint32_t rcx_14 = zx.d(rbp.b)
int32_t r15_3 = -1
int32_t rbx_5

if (rcx_14 u< 0xc0)
    rbx_5 = -1
else
    rbx_5 = rbp & 0xf

if (rsi.b u>= 0xc0)
    r15_3 = rsi.d & 0xf

if (rsi.b u< 0xc0 || r15_3 != 0xe)
    if (rbx_5 != r15_3)
        sub_142b256a0(arg1, arg2)
    else
    label_142b25f20:
        
        if (rbx_5 == 5)
            int32_t rbp_2 = rbp u>> 8 & 0x1f
            int32_t* r8_6 = *(*arg1 + 8) + (zx.q(rbp) u>> 0xd << 2)
            
            if (rbp_2 != (rsi.d u>> 8 & 0x1f))
                sub_142b256a0(arg1, arg2)
            else
                int64_t rcx_21 = 0
                
                if (rbp_2 != 0)
                    void* r9_4 = *(arg1[1] + 8) + (zx.q(rsi.d) u>> 0xd << 2) - r8_6
                    
                    while (*r8_6 == *(r9_4 + r8_6))
                        rcx_21 += 1
                        r8_6 = &r8_6[1]
                        
                        if (rcx_21 s>= zx.q(rbp_2))
                            return 
                    
                    sub_142b256a0(arg1, arg2)
        else if (rbx_5 == 6)
            int32_t rbp_4 = rbp u>> 8 & 0x1f
            int64_t* r8_7 = *(*arg1 + 0x10) + (zx.q(rbp) u>> 0xd << 3)
            
            if (rbp_4 != (rsi.d u>> 8 & 0x1f))
                sub_142b256a0(arg1, arg2)
            else
                int64_t rcx_24 = 0
                
                if (rbp_4 != 0)
                    uint64_t* r9_6 = *(arg1[1] + 0x10) + (zx.q(rsi.d) u>> 0xd << 3) - r8_7
                    
                    while (*r8_7 == *(r9_6 + r8_7))
                        rcx_24 += 1
                        r8_7 = &r8_7[1]
                        
                        if (rcx_24 s>= zx.q(rbp_4))
                            return 
                    
                    sub_142b256a0(arg1, arg2)
        else
            bool cond:0_1
            
            if (rbx_5 != 0xc)
                cond:0_1 = rbp == rsi.d
            label_142b26039:
                
                if (not(cond:0_1))
                    sub_142b256a0(arg1, arg2)
            else
                int16_t var_28
                int32_t rax_29 = sub_142b1c2c0(arg2, &var_28)
                int16_t var_26
                
                if (sub_142a9f280(arg1[2], zx.q(var_28)) != 0)
                    sub_142b256a0(arg1, arg2)
                else if (sub_142a9f280(arg1[2], zx.q(var_26)).b != 0)
                    sub_142b256a0(arg1, arg2)
                else if (rax_29 == 3)
                    int16_t var_24
                    cond:0_1 = sub_142a9f280(arg1[2], zx.q(var_24)).b == 0
                    goto label_142b26039
else if (rcx_14 u< 0xc0 || (rbp.b & 0xf) != 1)
    sub_142b256a0(arg1, arg2)
else
    if ((rbp & 0xffffff00)
            == sub_142b2c2e0(arg2, *(*(arg1[1] + 0x10) + (zx.q(rsi.d) u>> 0xd << 3))).d && rbx_5 == r15_3)
        goto label_142b25f20
    
    sub_142b256a0(arg1, arg2)
