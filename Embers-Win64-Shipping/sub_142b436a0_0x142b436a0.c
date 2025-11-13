// 函数: sub_142b436a0
// 地址: 0x142b436a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_428 = -2
void var_468
int64_t rax_1 = __security_cookie ^ &var_468
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_418
sub_142b46920(arg1, &var_418)
int32_t rdi = 0
int32_t rbx = 0
int32_t rax_2 = sub_142a4a1f0(&var_418)
int32_t var_40c
int32_t r9 = var_40c
int16_t var_410
void var_40e
void* var_400

if (rax_2 s> 0)
    int16_t* r8 = nullptr
    
    do
        int32_t rcx_2
        
        if (var_410 s< 0)
            rcx_2 = r9
        else
            rcx_2 = sx.d(var_410) s>> 5
        
        if (rbx u< rcx_2)
            void* rax_3 = &var_40e
            
            if ((var_410.b & 2) == 0)
                rax_3 = var_400
            
            if (*(r8 + rax_3) == 0x2d)
                break
        
        rbx += 1
        r8 = &r8[1]
    while (rbx s< rax_2)

if (var_410 s>= 0)
    r9 = sx.d(var_410) s>> 5

if (rbx != r9)
    int16_t var_38c
    void* var_398 = &var_38c:1
    int32_t var_390_1 = 0x28
    var_38c = 0
    int32_t var_360_1 = 0
    int32_t var_438 = 0
    void* r8_1
    
    if ((var_410.b & 0x11) == 0)
        r8_1 = &var_40e
        
        if ((var_410.b & 2) == 0)
            r8_1 = var_400
    else
        r8_1 = nullptr
    
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_358
    sub_142a47a60(&var_358, 0, r8_1, rbx)
    sub_142a8cd50(&var_398, &var_358, &var_438)
    sub_142a47ff0(&var_358)
    int32_t rax_4 = var_438
    
    if (rax_4 == 0x1a)
        *arg3 = 0x10113
    else if (rax_4 s<= 0)
        int16_t var_3cc
        void* var_3d8 = &var_3cc:1
        int32_t var_3d0_1 = 0x28
        var_3cc = 0
        int32_t var_3a0_1 = 0
        var_438 = 0
        void* rdx_3
        
        if ((var_410.b & 0x11) == 0)
            rdx_3 = &var_40e
            
            if ((var_410.b & 2) == 0)
                rdx_3 = var_400
        else
            rdx_3 = nullptr
        
        int32_t r9_4
        
        if (var_410 s< 0)
            r9_4 = var_40c
        else
            r9_4 = sx.d(var_410) s>> 5
        
        sub_142a47a60(&var_358, 0, rdx_3 + (sx.q(rbx + 1) << 1), r9_4 - rbx - 1)
        sub_142a8cd50(&var_3d8, &var_358, &var_438)
        sub_142a47ff0(&var_358)
        int32_t rax_7 = var_438
        
        if (rax_7 == 0x1a)
            *arg3 = 0x10113
        else if (rax_7 s<= 0)
            int64_t (* var_448_1)(struct icu_64::UObject::icu_64::MeasureUnit::VTable** arg1) =
                sub_142ab6080
            void var_318
            `eh vector constructor iterator'(&var_318, 0x18, 0x1e)
            int32_t var_434 = 0
            int32_t rax_8 = sub_142ab6250(var_398, &var_318, 0x1e, &var_434)
            
            if (var_434 s> 0)
                *arg3 = 5
            else if (rax_8 s<= 0)
            label_142b4393d:
                *arg3 = 0x10113
            else
                while (true)
                    void* r15_1 = &var_318 + sx.q(rdi) * 0x18
                    void* rbx_1 = var_3d8
                    void* rax_11 = sub_142ab6380(r15_1) - rbx_1
                    uint32_t i
                    uint32_t rdx_6
                    
                    do
                        rdx_6 = zx.d(*rbx_1)
                        i = zx.d(*(rbx_1 + rax_11))
                        
                        if (rdx_6 != i)
                            break
                        
                        rbx_1 += 1
                    while (i != 0)
                    
                    if (rdx_6 - i == 0)
                        sub_142ab6090(arg2 + 0x10, r15_1)
                        break
                    
                    rdi += 1
                    
                    if (rdi s>= rax_8)
                        goto label_142b4393d
            
            `eh vector vbase constructor iterator'(&var_318, 0x18, 0x1e)
        else
            *arg3 = rax_7
        
        if (var_3cc.b != 0)
            sub_142a7dcd0(var_3d8)
    else
        *arg3 = rax_4
    
    if (var_38c.b != 0)
        sub_142a7dcd0(var_398)
else
    *arg3 = 0x10113

sub_142a47ff0(&var_418)
__security_check_cookie(rax_1 ^ &var_468)
return &icu_64::UObject::`vftable'
