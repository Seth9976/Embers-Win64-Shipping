// 函数: sub_140fcc530
// 地址: 0x140fcc530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228

if (*(arg2 + 0x115) != 0)
    void var_58
    void* rax_2 = &var_58
    int32_t i = 0
    int64_t* r8_1 = arg2
    
    do
        int64_t rcx = *r8_1
        
        if (rcx == 0)
            break
        
        *rax_2 = rcx
        i += 1
        rax_2 += 8
        r8_1 = &r8_1[3]
    while (i s< 8)
    
    int32_t rax_4 = ((rax_2 - &var_58) s>> 3).d
    
    if (rax_4 != 0)
        (*(*arg1 + 0x138))(arg1, 4, &var_58, zx.q(rax_4))

void var_208
sub_1405d1370(&var_208)
sub_1419686f0(arg2, &var_208)
(*(*arg1 + 0x230))(arg1, &var_208)
*(arg1 + 8) = *arg2
arg1[3] = arg2[2]
*(arg1 + 0x20) = *(arg2 + 0x18)
arg1[6] = arg2[5]
*(arg1 + 0x38) = *(arg2 + 0x30)
arg1[9] = arg2[8]
*(arg1 + 0x50) = *(arg2 + 0x48)
arg1[0xc] = arg2[0xb]
*(arg1 + 0x68) = *(arg2 + 0x60)
arg1[0xf] = arg2[0xe]
*(arg1 + 0x80) = *(arg2 + 0x78)
arg1[0x12] = arg2[0x11]
*(arg1 + 0x98) = *(arg2 + 0x90)
arg1[0x15] = arg2[0x14]
*(arg1 + 0xb0) = *(arg2 + 0xa8)
arg1[0x18] = arg2[0x17]
*(arg1 + 0xc8) = *(arg2 + 0xc0)
arg1[0x1b] = arg2[0x1a]
*(arg1 + 0xe0) = *(arg2 + 0xd8)
*(arg1 + 0xf0) = *(arg2 + 0xe8)
*(arg1 + 0x100) = *(arg2 + 0xf8)
sub_1408c8cf0(&arg1[0x22], arg2[0x21])
arg1[0x23].d = arg2[0x22].d
*(arg1 + 0x11c) = *(arg2 + 0x114)
*(arg1 + 0x11d) = *(arg2 + 0x115)
*(arg1 + 0x11e) = *(arg2 + 0x116)
*(arg1 + 0x11f) = *(arg2 + 0x117)
arg1[0x24].b = arg2[0x23].b
char result = *(arg2 + 0x119)
*(arg1 + 0x121) = result
__security_check_cookie(rax_1 ^ &var_228)
return result
