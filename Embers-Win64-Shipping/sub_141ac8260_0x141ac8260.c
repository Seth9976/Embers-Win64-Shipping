// 函数: sub_141ac8260
// 地址: 0x141ac8260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
ModQueryPdbFile(arg1)
void* result = nullptr
arg1[0x30] = 0
void* rbx_1 = *(arg3 + 0x20)
int64_t var_68 = 0

if (rbx_1 != 0)
    void* rbx_2 = *(rbx_1 + 0x430)
    
    if (rbx_2 != 0)
        void* rax_2 = sub_142310d00(rbx_2, *(arg1 + 0x154))
        float var_58[0x3][0x4]
        
        if (rax_2 != 0)
            float (* rax_3)[0x4] = sub_142316340(rax_2, &var_58)
            *(arg1 + 0xe0) = *rax_3
            *(arg1 + 0xf0) = rax_3[1]
            *(arg1 + 0x100) = rax_3[2]
            arg1[0x30] = *(rax_2 + 0x30)
        
        result = sub_142310d00(rbx_2, *(arg1 + 0x15c))
        
        if (result != 0)
            float (* rax_5)[0x4] = sub_142316340(result, &var_58)
            *(arg1 + 0x110) = *rax_5
            *(arg1 + 0x120) = rax_5[1]
            *(arg1 + 0x130) = rax_5[2]
            result = *(result + 0x30)
            arg1[0x32] = result

__security_check_cookie(rax_1 ^ &var_88)
return result
