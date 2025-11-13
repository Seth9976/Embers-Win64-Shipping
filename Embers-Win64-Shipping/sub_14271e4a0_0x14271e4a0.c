// 函数: sub_14271e4a0
// 地址: 0x14271e4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t var_58 = 0
void* var_48 = nullptr
*(arg1 + 0x130)

if (*(arg1 + 0x140) != neg.d(*(arg1 + 0x130)))
    int32_t var_78 = *(arg2 + 0x2c)
    int32_t* var_70 = &var_78
    int64_t* var_68_1 = &var_58
    sub_142719ea0(arg1 + 0x138, &var_70)
    char rax_5 = sub_142719ea0(arg1 + 0x128, &var_70)
    
    if (rax_5 == 1)
        *(arg1 + 0x124) = rax_5
    
    if (var_58 != 0)
        void var_38
        void* rcx_2 = &var_38
        
        if (var_48 != 0)
            rcx_2 = var_48
        
        (*(*rcx_2 + 0x10))(rcx_2)

int32_t i

if (*(arg1 + 0xd8) != *(arg1 + 0x104))
    void* r8_1 = *(arg1 + 0x110)
    void* r9_1 = arg1 + 0x108
    int64_t rax_9 = sx.q(*(arg2 + 0x2c))
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    i = *(r9_1 + (((sx.q(*(arg1 + 0x118)) - 1) & rax_9) << 2))
    
    if (i != 0xffffffff)
        int64_t r8_2 = *(arg1 + 0xd0)
        
        do
            int64_t rcx_4 = sx.q(i) << 5
            
            if (*(rcx_4 + r8_2) == rax_9.d)
                goto label_14271e59f
            
            i = *(rcx_4 + r8_2 + 0x18)
        while (i != 0xffffffff)

i = -1
label_14271e59f:
int64_t result = sub_1405c3390(arg1 + 0xd0, i)
__security_check_cookie(rax_1 ^ &var_98)
return result
