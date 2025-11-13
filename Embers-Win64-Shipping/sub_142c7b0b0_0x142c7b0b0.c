// 函数: sub_142c7b0b0
// 地址: 0x142c7b0b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int32_t result

if (*(arg1 + 0x3f8) != 0)
    void** rax_2 = sub_142c8fef0(&data_1436bb7a8)
    
    if (rax_2 != 0)
        int64_t rbx_1 = -1
        int64_t rcx = -1
        
        do
            rcx += 1
        while ((*(arg1 + 0x748))[rcx] != 0)
        
        *(arg1 + 0x748)
        sub_142c8ff50(rax_2)
        
        do
            rbx_1 += 1
        while ((*(arg1 + 0x1f8))[rbx_1] != 0)
        
        *(arg1 + 0x1f8)
        sub_142c8ff50(rax_2)
        char var_48[0x10]
        sub_142c8feb0(rax_2, &var_48)
        int64_t i = 0
        void var_38
        void* rdi_2 = &var_38
        int512_t entry_zmm2
        
        do
            entry_zmm2 = sub_142c564b0(rdi_2, 3, "%02x", zx.q(var_48[i]), entry_zmm2)
            i += 1
            rdi_2 += 2
        while (i u< 0x10)
        
        result = gzprintf(arg1 + 0x698, "APOP %s %s", *(arg1 + 0x1f0), entry_zmm2)
        
        if (result == 0)
            *(arg1 + 0x708) = 6
    else
        result = (rax_2 + 0x1b).d
else
    *(arg1 + 0x708) = 0
    result = 0

__security_check_cookie(rax_1 ^ &var_68)
return result
