// 函数: sub_140b4c620
// 地址: 0x140b4c620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c58
int64_t rax_1 = __security_cookie ^ &var_c58

if (*arg2 == 0)
    *arg1 = 0
else
    char* rax_2 = sub_140b5e5a0(arg2)
    int64_t r14_1 = sx.q(arg2[1])
    int16_t* rbx_1 = rax_2
    int16_t* rcx_1 = rax_2
    char var_c28[0x80]
    
    if ((*rax_2 & 1) == 0)
        sub_140b5e550(rcx_1, &var_c28)
        uint32_t rax_10 = zx.d(*rbx_1) u>> 6
        uint64_t rdx_7 = zx.q(rax_10)
        
        if (rax_10 != 0)
            int64_t rbx_3 = 0
            
            do
                int32_t rcx_9 = sx.d(var_c28[rbx_3])
                int32_t rax_11
                rax_11.b = sbb.b((rcx_9 - 0x61).b, (rcx_9 - 0x61).b, rcx_9 - 0x61 u< 0x1a)
                rax_11.b &= 0x20
                rcx_9.b -= rax_11.b
                var_c28[rbx_3] = rcx_9.b
                rbx_3 += 1
            while (rbx_3 s< rdx_7)
        
        *arg1 = CityHash64WithSeed(&var_c28, rdx_7.d, r14_1)
    else
        int16_t var_828[0x400]
        sub_140b5eb00(rcx_1, &var_828)
        char (* rbx_2)[0x80] = nullptr
        uint64_t r8_2 = zx.q(*rbx_1) u>> 6
        
        if (r8_2 != 0)
            int64_t rdx_1 = 0
            
            do
                uint32_t rcx_2 = zx.d(var_828[rdx_1])
                int32_t rax_3
                rax_3.w = sbb.w((rcx_2 - 0x61).w, (rcx_2 - 0x61).w, rcx_2 - 0x61 u< 0x1a)
                rax_3.w &= 0x20
                rcx_2.w -= rax_3.w
                var_828[rdx_1] = rcx_2.w
                rdx_1 += 1
            while (rdx_1 s< r8_2)
        
        char (* var_ba8_1)[0x80] = nullptr
        int64_t rdi_1 = -1
        
        do
            rdi_1 += 1
        while (var_828[rdi_1] != 0)
        
        int32_t var_c38 = 0
        sub_14060af80(&var_c38, (rdi_1 << 2).d, &var_828, rdi_1.d)
        int32_t rax_4 = var_c38
        
        if (rax_4 + 1 u> 0x80 && rax_4 != 0xffffffff)
            char (* rax_5)[0x80] = sub_140a84c80(0, sx.q(rax_4 + 1), 0)
            rbx_2 = rax_5
            var_ba8_1 = rax_5
        
        char (* rax_6)[0x80] = &var_c28
        
        if (rbx_2 != 0)
            rax_6 = rbx_2
        
        var_c38.q = rax_6
        sub_14060ac90(&var_c38, rax_4 + 1, &var_828, (rdi_1 + 1).d)
        *arg1 = CityHash64WithSeed(rax_6, rax_4, r14_1)
        
        if (var_ba8_1 != 0)
            sub_140a74f90(var_ba8_1)

__security_check_cookie(rax_1 ^ &var_c58)
return arg1
