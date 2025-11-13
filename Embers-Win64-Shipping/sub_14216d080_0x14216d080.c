// 函数: sub_14216d080
// 地址: 0x14216d080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
uint8_t result = (*(arg1 + 8) u>> 4).b

if ((result & 1) == 0)
    int64_t var_78
    __builtin_memset(&var_78, 0, 0x2c)
    int32_t var_44_1 = 0
    int64_t var_38_1 = 0
    int32_t var_30_1 = 0
    int32_t var_4c_1 = 0x80
    int32_t var_48_1 = 0xffffffff
    sub_141e85af0(arg1 + 0x1a8)
    int128_t* i = *(arg1 + 0x198)
    int32_t var_98
    
    for (void* r14_1 = i + sx.q(*(arg1 + 0x1a0)) * 0x28; i != r14_1; i += 0x28)
        int64_t var_90
        int64_t* rax_4 = sub_140b63b70(i + 8, &var_90)
        int16_t* rdi_1
        
        if (rax_4[1].d == 0)
            rdi_1 = &data_142d40450
        else
            rdi_1 = *rax_4
        
        void* rax_6 = sub_140d2f240(sub_14248a010(), 0, rdi_1, 0, 0x2000, 0)
        int64_t rcx_4 = var_90
        i[1].q = rax_6
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        if (i[1].q != 0)
            sub_142159ad0(arg1 + 0x1a8, i, i)
        
        if (*(i + 0x18) != 0xffffffff)
            sub_14077a5e0(&var_78, &var_98, i + 0x18, nullptr)
    
    int32_t rcx_8 = *sub_140b5e500(&var_98, 0xff)
    int32_t rax_8 = *(arg1 + 0x1b0)
    var_98 = rcx_8
    int32_t var_94_1 = 0
    
    if (rax_8 != *(arg1 + 0x1dc))
        int32_t rax_9 = sub_140b5ead0(rcx_8)
        void* rcx_9 = *(arg1 + 0x1e8)
        void* r8_4 = arg1 + 0x1e0
        
        if (rcx_9 != 0)
            r8_4 = rcx_9
        
        int32_t i_1 = *(r8_4 + (((sx.q(*(arg1 + 0x1f0)) - 1) & sx.q(rax_9)) << 2))
        
        if (i_1 != 0xffffffff)
            int64_t r8_5 = *(arg1 + 0x1a8)
            
            do
                int64_t* rax_11 = sx.q(i_1) * 0x38
                
                if (*(rax_11 + r8_5) == var_98.q)
                    break
                
                i_1 = *(rax_11 + r8_5 + 0x30)
            while (i_1 != 0xffffffff)
    
    int32_t var_30_2 = 0
    
    if (var_38_1 != 0)
        sub_140a74f90(var_38_1)
    
    int64_t var_70
    var_70.d = 0
    int32_t var_48_2 = 0xffffffff
    int32_t var_44_2 = 0
    int64_t var_68
    result = sub_14059a8e0(&var_68, 0)
    int64_t var_58
    
    if (var_58 != 0)
        result = sub_140a74f90(var_58)
    
    int64_t rcx_15 = var_78
    
    if (rcx_15 != 0)
        result = sub_140a74f90(rcx_15)

__security_check_cookie(rax_1 ^ &var_c8)
return result
