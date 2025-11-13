// 函数: sub_142af9100
// 地址: 0x142af9100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg2 + 8) != 0)
    return 

void* rbp_1 = *(arg1 + 0x30)
char r14_1 = *(rbp_1 + 0xfc)

if (r14_1 == 0xdb)
    *(arg2 + 0xc) &= 0xffffffef
    *(arg1 + 0x38) = *(arg2 + 0xc)

if ((*(arg2 + 0xc) & 0x10) == 0)
    goto label_142af9198

sub_142a860a0(nullptr)
int64_t rbx_1 = *(rbp_1 + 0x40)
sub_142a860d0(nullptr)

if (rbx_1 != 0)
    goto label_142af9198

if (sub_142afa5e0(*(arg1 + 0x30), arg3).b != 0)
    goto label_142af9198

if (*arg3 s> 0)
    return 

*(arg2 + 0xc) &= 0xffffffef
*(arg1 + 0x38) = *(arg2 + 0xc)
label_142af9198:
char* rax_3 = strstr(*(arg2 + 0x18), "18030")
char* str1 = *(arg2 + 0x18)

if (rax_3 == 0)
    char* rax_6 = strstr(str1, "KEIS")
    char* rax_7
    
    if (rax_6 == 0)
        rax_7 = strstr(*(arg2 + 0x18), "keis")
    
    if (rax_6 != 0 || rax_7 != 0)
        *(arg1 + 0x38) |= 0x1000
    else
        char* rax_8 = strstr(*(arg2 + 0x18), "JEF")
        char* rax_9
        
        if (rax_8 == 0)
            rax_9 = strstr(*(arg2 + 0x18), "jef")
        
        if (rax_8 != 0 || rax_9 != 0)
            *(arg1 + 0x38) |= 0x2000
        else
            char* rax_10 = strstr(*(arg2 + 0x18), "JIPS")
            char* rax_11
            
            if (rax_10 == 0)
                rax_11 = strstr(*(arg2 + 0x18), "jips")
            
            if (rax_10 != 0 || rax_11 != 0)
                *(arg1 + 0x38) |= 0x4000
else
    char* rax_4 = strstr(str1, "gb18030")
    char* rax_5
    
    if (rax_4 == 0)
        rax_5 = strstr(*(arg2 + 0x18), "GB18030")
    
    if (rax_4 != 0 || rax_5 != 0)
        *(arg1 + 0x38) |= 0x8000

if (r14_1 == 0xc)
    *(arg1 + 0x58) = 3

uint64_t rax = *(rbp_1 + 0x120)

if (rax == 0)
    return 

rax = zx.q(*(rax + 0x44))

if (r14_1 == 0xc)
    rax.b += 1

if (rax.b s> *(arg1 + 0x58))
    *(arg1 + 0x58) = rax.b
