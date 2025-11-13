// 函数: sub_140a3ec10
// 地址: 0x140a3ec10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
void* r13 = arg1
void* var_128 = arg1
int64_t result

if (*(arg1 + 0x30) != 0)
    arg1.b = 1
    void* rax_2 = sub_140b66930(arg1.b)
    void var_108
    sub_140b2f110(&var_108)
    int64_t var_120
    __builtin_memset(&var_120, 0, 0x14)
    int32_t i = 0
    
    while (i s>= 0)
        if (i s>= *(r13 + 0x30))
            break
        
        int64_t rdi_2 = sx.q(i) << 5
        int64_t* r11_2 = *(r13 + 0x28) + rdi_2
        int16_t* const r10_1
        
        if (r11_2[1].d == 0)
            r10_1 = &data_142d40450
        else
            r10_1 = *r11_2
        
        void* r9_1 = rax_2
        
        while (true)
            int16_t rdx_1 = *(r10_1 - rax_2 + r9_1)
            int16_t r8_1 = *r9_1
            r9_1 += 2
            
            if (rdx_1 != r8_1)
                uint32_t rdx_3
                
                if (((zx.d(r8_1) | zx.d(rdx_1)) & 0xffffff80) != 0)
                    rdx_3 = zx.d(rdx_1) - zx.d(r8_1)
                else
                    uint32_t rcx_4 = zx.d(*(zx.q(r8_1) + &data_142e5e8a0))
                    uint32_t rdx_2 = zx.d(*(zx.q(rdx_1) + &data_142e5e8a0))
                    rdx_3 = rdx_2 - rcx_4
                    
                    if (rdx_2 == rcx_4)
                        continue
                
                if (rdx_3 != 0 && sub_140a23cf0(r11_2, UE4Editor", 1, 0, 0xffffffff) == 0xffffffff)
                    break
            else if (rdx_1 != 0)
                continue
            
            sub_140b4ad80(&var_108, *(r13 + 0x28) + 0x18 + rdi_2, 8)
            break
        
        i += 1
    
    sub_140b39010(&var_108)
    sub_140b3da80(&var_108, &var_120)
    int64_t* r15_1 = &var_120
    int16_t* var_148
    __builtin_memset(&var_148, 0, 0x1c)
    int32_t i_2 = 0x14
    sub_1405947f0(&var_148, 0x28)
    int64_t var_140
    int32_t r8_2 = var_140.d
    int16_t* rbx_1 = var_148
    int32_t i_1
    
    do
        uint8_t rsi_2 = *r15_1
        int16_t rdi_3 = 0x37
        uint16_t rcx_10 = zx.w(rsi_2 u>> 4)
        
        if (rcx_10.b u<= 9)
            rdi_3 = 0x30
        
        if (rdi_3 != neg.w(rcx_10))
            int32_t r14_1 = r8_2 - 1
            
            if (r8_2 s<= 0)
                r14_1 = 0
            
            int32_t r8_3
            r8_3.b = r8_2 s<= 0
            r8_2 += r8_3 + 1
            var_140.d = r8_2
            
            if (r8_2 s> var_140:4.d)
                sub_140594770(&var_148)
                r8_2 = var_140.d
                rbx_1 = var_148
            
            int64_t rax_9 = sx.q(r14_1)
            rbx_1[rax_9] = rdi_3 + rcx_10
            rbx_1[rax_9 + 1] = 0
        
        int16_t rdi_4 = 0x37
        uint16_t rax_10 = zx.w(rsi_2) & 0xf
        
        if (rax_10.b u<= 9)
            rdi_4 = 0x30
        
        if (rdi_4 != neg.w(rax_10))
            int32_t rsi_3 = r8_2 - 1
            
            if (r8_2 s<= 0)
                rsi_3 = 0
            
            int32_t r8_5
            r8_5.b = r8_2 s<= 0
            r8_2 += r8_5 + 1
            var_140.d = r8_2
            
            if (r8_2 s> var_140:4.d)
                sub_140594770(&var_148)
                r8_2 = var_140.d
                rbx_1 = var_148
            
            int64_t rax_11 = sx.q(rsi_3)
            rbx_1[rax_11] = rdi_4 + rax_10
            rbx_1[rax_11 + 1] = 0
        
        r15_1 += 1
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    int16_t* rdi_5 = &data_142d40450
    int16_t* rdx_11 = &data_142d40450
    
    if (r8_2 != 0)
        rdx_11 = rbx_1
    
    int16_t* var_138
    sub_140a3f2f0(&var_138, rdx_11)
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    int32_t var_130
    
    if (var_130 != 0)
        rdi_5 = var_138
    
    sub_140a3e8b0(var_128 + 0x48, u"PCallStackHash", rdi_5)
    int16_t* rcx_16 = var_138
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    result = sub_140b30ae0(&var_108)
else
    result = sub_140a3e8b0(arg1 + 0x48, u"PCallStackHash", &data_142d40450)

__security_check_cookie(rax_1 ^ &var_178)
return result
