// 函数: sub_140a46530
// 地址: 0x140a46530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int64_t rdi = -1

if (data_143db4010 == 0)
    int64_t var_38
    int64_t* rax_1 = sub_140b252d0(&var_38)
    int16_t* const r15_1 = &data_142d40450
    int16_t* rcx_1
    
    if (rax_1[1].d == 0)
        rcx_1 = &data_142d40450
    else
        rcx_1 = *rax_1
    
    void* rdx_1 = &data_143db4010 - rcx_1
    int16_t i
    
    do
        i = *rcx_1
        *(rcx_1 + rdx_1) = i
        rcx_1 = &rcx_1[1]
    while (i != 0)
    int64_t rcx_2 = var_38
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    int16_t* var_58 = nullptr
    int64_t var_50_1 = 0
    sub_140af2b60()
    
    if (sub_140b2acc0(&data_143dbb3f0, u"LOG=", &var_58, 0) == 0)
        sub_140af2b60()
        
        if (sub_140b2acc0(&data_143dbb3f0, u"ABSLOG=", &var_58, 0) != 0)
            data_143db4010 = 0
    
    int16_t* var_48
    sub_140b19c30(&var_48, &var_58, 0)
    void* const r9_1 = &data_142e5e738
    int16_t* r11_1 = var_48
    int16_t* const r10_1 = &data_142d40450
    int32_t var_40
    
    if (var_40 != 0)
        r10_1 = r11_1
    
    int32_t rcx_18
    
    while (true)
        int16_t rdx_3 = *(r10_1 - &data_142e5e738 + r9_1)
        int16_t r8_3 = *r9_1
        r9_1 += 2
        int32_t rcx_10
        
        if (rdx_3 != r8_3)
            uint32_t rdx_5
            
            if (((zx.d(r8_3) | zx.d(rdx_3)) & 0xffffff80) != 0)
                rdx_5 = zx.d(rdx_3) - zx.d(r8_3)
            else
                uint32_t rcx_6 = zx.d(*(zx.q(r8_3) + &data_142e5e8a0))
                uint32_t rdx_4 = zx.d(*(zx.q(rdx_3) + &data_142e5e8a0))
                rdx_5 = rdx_4 - rcx_6
                
                if (rdx_4 == rcx_6)
                    continue
            
            if (rdx_5 == 0)
                goto label_140a46708
            
            void* const r9_2 = &data_142d8ada0
            int16_t* r10_3 = &data_142d40450
            
            if (var_40 != 0)
                r10_3 = r11_1
            
            uint32_t rdx_9
            
            while (true)
                int16_t rdx_7 = *(r10_3 - &data_142d8ada0 + r9_2)
                int16_t r8_4 = *r9_2
                r9_2 += 2
                
                if (rdx_7 != r8_4)
                    if (((zx.d(rdx_7) | zx.d(r8_4)) & 0xffffff80) != 0)
                        rdx_9 = zx.d(rdx_7) - zx.d(r8_4)
                        break
                    
                    uint32_t rcx_9 = zx.d(*(zx.q(r8_4) + &data_142e5e8a0))
                    uint32_t rdx_8 = zx.d(*(zx.q(rdx_7) + &data_142e5e8a0))
                    rdx_9 = rdx_8 - rcx_9
                    
                    if (rdx_8 != rcx_9)
                        break
                else
                    if (rdx_7 == 0)
                        goto label_140a46708
            
            if (rdx_9 == 0)
                goto label_140a46708
            
            rcx_10 = var_50_1:4.d
            var_50_1.d = 0
            
            if (rcx_10 != 0)
                sub_1405947f0(&var_58, 0)
                r11_1 = var_48
            label_140a46708:
                rcx_18 = var_50_1.d
                
                if (rcx_18 != 0 && rcx_18 != 1)
                    break
                
                rcx_10 = var_50_1:4.d
        else
            if (rdx_3 == 0)
                goto label_140a46708
            
            continue
        
        int64_t rax_13 = -1
        
        do
            rax_13 += 1
        while ((*u"Embers")[rax_13] != 0)
        
        if (rax_13.d == 0)
            if (var_58 != &data_142d40e98)
                int32_t rdx_13 = 0
                var_50_1.d = 0
                
                if (rcx_10 != 4)
                    sub_1405947f0(&var_58, 4)
                    rcx_10 = var_50_1:4.d
                    rdx_13 = var_50_1.d
                
                var_50_1.d = rdx_13 + 4
                
                if (rdx_13 + 4 s> rcx_10)
                    sub_140594770(&var_58)
                
                *var_58 = 0x3400450055
        else if (var_58 != u"Embers")
            int32_t rbx_3
            
            if ((*u"Embers")[0] == 0)
                rbx_3 = 0
            else
                int64_t rbx_2 = -1
                
                do
                    rbx_2 += 1
                while ((*u"Embers")[rbx_2] != 0)
                
                rbx_3 = rbx_2.d + 1
            
            int32_t rdx_11 = 0
            var_50_1.d = 0
            
            if (rcx_10 != rbx_3)
                sub_1405947f0(&var_58, rbx_3)
                rcx_10 = var_50_1:4.d
                rdx_11 = var_50_1.d
            
            int32_t rax_14 = rdx_11 + rbx_3
            var_50_1.d = rax_14
            
            if (rax_14 s> rcx_10)
                sub_140594770(&var_58)
            
            if (rbx_3 != 0)
                memcpy(var_58, u"Embers", rbx_3 * 2)
        
        sub_140a20ba0(&var_58, u".log", 4)
        rcx_18 = var_50_1.d
        r11_1 = var_48
        break
    
    int16_t* r9_3 = var_58
    void* rdx_14 = &data_143db400e
    
    if (rcx_18 != 0)
        r15_1 = r9_3
    
    bool cond:4_1
    
    do
        cond:4_1 = *(rdx_14 + 2) != 0
        rdx_14 += 2
    while (cond:4_1)
    int64_t r8_7 = 0
    int16_t i_1
    
    do
        i_1 = r15_1[r8_7]
        *(rdx_14 + (r8_7 << 1)) = i_1
        r8_7 += 1
    while (i_1 != 0)
    
    if (r11_1 != 0)
        sub_140a74f90(r11_1)
        r9_3 = var_58
    
    if (r9_3 != 0)
        sub_140a74f90(r9_3)

*arg1 = 0
arg1[1] = 0

if (data_143db4010 != 0)
    do
        rdi += 1
    while ((&data_143db4010)[rdi] != 0)
    
    if (rdi.d + 1 s> 0)
        sub_1405947f0(arg1, rdi.d + 1)
        rsi = arg1[1].d
    
    int32_t rax_17 = rdi.d + 1 + rsi
    arg1[1].d = rax_17
    
    if (rax_17 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    memcpy(*arg1, &data_143db4010, (rdi.d + 1) * 2)

return arg1
