// 函数: sub_140a13270
// 地址: 0x140a13270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
sub_140a10380(arg1)
uint64_t i = 0
int64_t var_28 = 1
int32_t var_20 = 0
int64_t r8 = 0
int64_t* rax_2

while (true)
    char rcx = arg2[r8]
    r8 += 1
    
    if (rcx != *(r8 + 0x142e4d4c3))
        do
            char rcx_1 = arg2[i]
            i += 1
            
            if (rcx_1 != *(i + 0x142e4d4cb))
                i.b = 0
                goto label_140a13318
        while (i != 6)
        
        rax_2 = sub_1429dc7a0()
        break
    
    if (r8 == 6)
        rax_2 = sub_1429db030()
        break

sub_1429da0b0(arg1, rax_2, &var_28, 0, 0xa)
i.b = 1
*(arg1 + 0x69) = 1
label_140a13318:
__security_check_cookie(rax_1 ^ &var_58)
return i
