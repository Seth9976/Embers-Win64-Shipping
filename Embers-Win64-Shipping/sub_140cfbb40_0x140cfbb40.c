// 函数: sub_140cfbb40
// 地址: 0x140cfbb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_8a8
int64_t var_48 = __security_cookie ^ &var_8a8
int64_t* rbx = arg3
int64_t* var_878 = rbx
int16_t* r9

if (arg2[1].d == 0)
    r9 = &data_142d40450
else
    r9 = *arg2

int16_t i = *r9
int32_t r14 = 0
int32_t r15 = 0
void* r9_1 = &r9[1]
int32_t var_888 = 0

if (i != 0)
    do
        uint32_t i_1 = zx.d(i)
        int64_t rcx = 0
        uint64_t rax_3 = zx.q(i_1) & 0xffffffc0
        
        if (rax_3.d == 0x40)
            rcx = 0x10000000
        
        int32_t rax_7
        
        if (not(test_bit(rcx | (sbb.q(rax_3, rax_3, i_1 u< 0x40) & 0x400002600), 
                zx.q(i_1.b) & 0x3f)))
            rax_7 = 1
            
            if (i u> 0x7f)
                rax_7 = 4
        else
            rax_7 = 2
        
        i = *r9_1
        r15 += rax_7
        r9_1 += 2
    while (i != 0)
    
    var_888 = r15

int16_t var_850 = 0x100
int128_t var_848
int128_t* var_868 = &var_848
int128_t* rcx_2 = &var_848
int128_t* var_860 = &var_848
int64_t* rdx_1 = &var_48
int64_t* var_858 = &var_48
int32_t r13 = 0

if (r15 s> 0x1000)
    void var_834
    rcx_2 = &var_834
    var_860 = &var_834
    __builtin_memcpy(&var_848, u"*(FString(", 0x14)

int16_t* r12 = r9
int16_t* rdi = r12

while (true)
    if (rdi u> r12)
        if (rcx_2 + 2 u>= rdx_1)
            sub_140b38e20(&var_868, 1)
            rcx_2 = var_860
        
        var_860 = rcx_2 + 2
        *rcx_2 = 0xa
        sub_140b31040(&var_868, rbx)
        rdx_1 = var_858
        rcx_2 = var_860
    
    r13 += 1
    
    if (r15 s> 0x1000)
        int32_t rax_11 = r13 & 0x8000000f
        
        if (rax_11 s< 0)
            rax_11 = ((rax_11 - 1) | 0xfffffff0) + 1
        
        if (rax_11 == 0)
            if (rcx_2 + 0x18 u>= rdx_1)
                sub_140b38e20(&var_868, 0xc)
                rcx_2 = var_860
            
            var_860 = rcx_2 + 0x18
            __builtin_memcpy(rcx_2, u") + FString(", 0x18)
            rdx_1 = var_858
            rcx_2 = var_860
    
    if (rcx_2 + 0xc u>= rdx_1)
        sub_140b38e20(&var_868, 6)
        rcx_2 = var_860
    
    int16_t* var_860_1 = rcx_2 + 0xc
    *rcx_2 = 0x54005800450054
    *(rcx_2 + 8) = 0x220028
    int16_t* rax_18 = var_860_1
    int128_t* rdx_3 = var_868
    int32_t rsi_3 = ((rax_18 - rdx_3) s>> 1).d
    
    if (*rdi != 0)
        while (((rax_18 - rdx_3) s>> 1).d - rsi_3 s< 0x100)
            uint32_t rbx_1 = zx.d(*rdi)
            int64_t r8 = 0
            
            if ((rbx_1 & 0xffffffc0) == 0x40)
                r8 = 0x10000000
            
            if (test_bit(r8 | (sbb.q(0x10000000, 0x10000000, rbx_1 u< 0x40) & 0x400002600), 
                    zx.q(rbx_1.b) & 0x3f))
                if (&rax_18[1] u>= var_858)
                    sub_140b38e20(&var_868, 1)
                    rax_18 = var_860_1
                
                *rax_18 = 0x5c
                int16_t* rcx_20 = &var_860_1[1]
                var_860_1 = rcx_20
                
                if (rbx_1 == 9)
                    if (&rcx_20[1] u>= var_858)
                        sub_140b38e20(&var_868, 1)
                        rcx_20 = var_860_1
                    
                    *rcx_20 = 0x74
                else if (rbx_1 == 0xa)
                    if (&rcx_20[1] u>= var_858)
                        sub_140b38e20(&var_868, 1)
                        rcx_20 = var_860_1
                    
                    *rcx_20 = 0x6e
                else if (rbx_1 == 0xd)
                    if (&rcx_20[1] u>= var_858)
                        sub_140b38e20(&var_868, 1)
                        rcx_20 = var_860_1
                    
                    *rcx_20 = 0x72
                else
                    if (&rcx_20[1] u>= var_858)
                        sub_140b38e20(&var_868, 1)
                        rcx_20 = var_860_1
                    
                    *rcx_20 = rbx_1.w
                
                goto label_140cfbf5a
            
            int64_t rcx_27
            
            if (rbx_1 u<= 0x7f)
                if (&rax_18[1] u>= var_858)
                    sub_140b38e20(&var_868, 1)
                    rax_18 = var_860_1
                
                *rax_18 = rbx_1.w
            label_140cfbf5a:
                rcx_27 = 2
                rax_18 = &var_860_1[1]
                var_860_1 = rax_18
            else
                uint32_t rcx_25
                
                if (0x2800 + rbx_1.w u<= 0x3ff)
                    rcx_25 = zx.d(rdi[1])
                
                if (0x2800 + rbx_1.w u> 0x3ff || 0x2400 + rcx_25.w u> 0x3ff)
                    sub_140b33460(&var_868, u"\u%04x", zx.q(rbx_1))
                    rax_18 = var_860_1
                    rcx_27 = 2
                else
                    sub_140b33460(&var_868, u"\U%08x", zx.q(rcx_25 - 0x35fdc00 + (rbx_1 << 0xa)))
                    rax_18 = var_860_1
                    rcx_27 = 4
            
            rdi += rcx_27
            
            if (*rdi == 0)
                break
            
            rdx_3 = var_868
        
        r15 = var_888
        r12 = r9
        rbx = var_878
    
    if (&rax_18[2] u>= var_858)
        sub_140b38e20(&var_868, 2)
        rax_18 = var_860_1
    
    var_860 = &rax_18[2]
    *rax_18 = 0x290022
    
    if (*rdi == 0)
        break
    
    rdx_1 = var_858
    rcx_2 = var_860

if (r15 s> 0x1000)
    int128_t* rcx_34 = var_860
    
    if (rcx_34 + 4 u>= var_858)
        sub_140b38e20(&var_868, 2)
        rcx_34 = var_860
    
    var_860 = rcx_34 + 4
    *rcx_34 = 0x290029

if (*var_860 != 0)
    *var_860 = 0

int128_t* rdi_1 = var_868
*arg1 = 0
arg1[1] = 0

if (rdi_1 != 0 && *rdi_1 != 0)
    int64_t rbx_3 = -1
    
    do
        rbx_3 += 1
    while (*(rdi_1 + (rbx_3 << 1)) != 0)
    
    if (rbx_3.d + 1 s> 0)
        sub_1405947f0(arg1, rbx_3.d + 1)
        r14 = arg1[1].d
    
    int32_t rax_25 = r14 + rbx_3.d + 1
    arg1[1].d = rax_25
    
    if (rax_25 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    UnDecorator::getReferenceType(*arg1, rdi_1, (rbx_3.d + 1) * 2)

sub_140b301c0(&var_868)
__security_check_cookie(var_48 ^ &var_8a8)
return arg1
