// 函数: sub_140751d30
// 地址: 0x140751d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
void* rax_2
int64_t rax_3
void* rdx

if (arg3 != 0)
    rax_2 = sub_141b41080()
    rdx = *(arg3 + 0x10)
    rax_3 = sx.q(*(rax_2 + 0x38))

if (arg3 == 0 || rax_3.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
    arg2[0x10].b &= 0xfe
    arg2[0x10].b |= 2
else
    int32_t rbx_1 = *(arg3 + 0x360)
    int32_t rsi_1 = 0
    int32_t i_2 = 0
    void* r13_1 = nullptr
    int32_t r15_1 = 0
    void* var_358 = nullptr
    int64_t var_350_1 = 0
    
    if (rbx_1 s> 0)
        do
            int64_t i_4 = sx.q(i_2)
            i_2 = (i_4 + 1).d
            var_350_1.d = i_2
            
            if (i_2 s> r15_1)
                sub_140775640(&var_358)
                r15_1 = var_350_1:4.d
                i_2 = var_350_1.d
                r13_1 = var_358
            
            sub_1407431a0(i_4 * 0xa0 + r13_1, arg3 + 0xe0 + sx.q(rsi_1) * 0xa0)
            rbx_1 = *(arg3 + 0x360)
            rsi_1 += 1
        while (rsi_1 s< rbx_1)
    
    void var_348
    void** var_318
    void*** rax_7 = sub_140743c60(&var_318, sub_140745220(&var_348, arg1 + 0x68), &var_358, rbx_1)
    arg2[0x10].b &= 0xfc
    int64_t* rax_8 = sub_140a82f30(0x2d0, 8)
    arg2[0x10].b |= 1
    int64_t* rbx_2 = arg2
    bool cond:0_1 = (arg2[0x10].b & 2) != 0
    *arg2 = rax_8
    
    if (not(cond:0_1))
        rbx_2 = rax_8
    
    *rbx_2 = &data_142d4b9d8
    rbx_2[1].b = rax_7[1].b
    *rbx_2 = &data_142d4ba68
    rbx_2[2].b = rax_7[2].b
    *(rbx_2 + 0x14) = *(rax_7 + 0x14)
    *rbx_2 = &data_142d9aae0
    sub_140745220(&rbx_2[4], &rax_7[4])
    int64_t r8_3 = rax_7 - rbx_2
    *rbx_2 = &data_142d9adc8
    void* r9_2 = &rbx_2[9]
    int64_t i_3 = 4
    void* rdx_7 = r9_2 + 0x68
    int64_t i
    
    do
        *r9_2 = &data_142d4c350
        void* rcx_10 = rdx_7 - 0x10
        r9_2 += 0xa0
        *(rdx_7 - 0x60) = *(r8_3 + rdx_7 - 0x60)
        *(rdx_7 - 0x5f) = *(r8_3 + rdx_7 - 0x5f)
        *(rdx_7 - 0x58) = 0
        *(rdx_7 - 0x58) = *(r8_3 + rdx_7 - 0x58)
        __builtin_memset(r8_3 + rdx_7 - 0x58, 0, 0x20)
        *(rdx_7 - 0x50) = *(r8_3 + rdx_7 - 0x50)
        *(rdx_7 - 0x4c) = *(r8_3 + rdx_7 - 0x4c)
        *(rdx_7 - 0x48) = 0
        *(rdx_7 - 0x48) = *(r8_3 + rdx_7 - 0x48)
        *(rdx_7 - 0x40) = *(r8_3 + rdx_7 - 0x40)
        *(rdx_7 - 0x3c) = *(r8_3 + rdx_7 - 0x3c)
        *(rdx_7 - 0x38) = *(r8_3 + rdx_7 - 0x38)
        *(rdx_7 - 0x34) = *(r8_3 + rdx_7 - 0x34)
        __builtin_memset(rdx_7 - 0x30, 0, 0x20)
        *rdx_7 = 0
        *(rdx_7 + 8) = 0
        *(rdx_7 + 0xc) = 0x80
        void* rax_22 = *rdx_7
        rdx_7 += 0xa0
        
        if (rax_22 != 0)
            rcx_10 = rax_22
        
        *rcx_10 = 0
        *(rcx_10 + 8) = 0
        *(rdx_7 - 0x90) = 0xffffffff
        *(rdx_7 - 0x8c) = 0
        *(rdx_7 - 0x80) = 0
        *(rdx_7 - 0x78) = 0
        *(rdx_7 - 0x70) = *(rdx_7 + r8_3 - 0x70)
        i = i_3
        i_3 -= 1
    while (i != 1)
    rbx_2[0x59].d = rax_7[0x59].d
    sub_140746770(&var_318)
    
    if (i_2 != 0)
        int64_t* rbx_3 = r13_1 + 0x38
        int32_t i_1
        
        do
            sub_1405ae180(&rbx_3[2])
            int32_t j_1 = rbx_3[1].d
            void* rax_25 = *rbx_3
            
            if (j_1 != 0)
                char* rax_26 = rax_25 + 4
                int32_t j
                
                do
                    if (*rax_26 != 0)
                        *rax_26 = 0
                    
                    rax_26 = &rax_26[8]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                rax_25 = *rbx_3
            
            if (rax_25 != 0)
                sub_140a74f90(rax_25)
            
            int64_t rcx_14 = rbx_3[-3]
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            int64_t rcx_15 = rbx_3[-5]
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            rbx_3[-7] = &data_142d4bb80
            rbx_3 = &rbx_3[0x14]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    if (r13_1 != 0)
        sub_140a74f90(r13_1)

__security_check_cookie(rax_1 ^ &var_378)
return arg2
