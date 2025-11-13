// 函数: sub_142134d70
// 地址: 0x142134d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
void* result = __security_cookie ^ &var_68
void* result_1 = result

if ((arg1[0x1b].b & 1) != 0)
    void* rax_2 = (*(*arg1 + 0x268))()
    wchar32* r15_1 = U"1111"
    int32_t i = 0
    void* r12_1 = &arg1[0x73]
    
    do
        void* var_40_1 = nullptr
        int32_t var_38_1 = 0
        int32_t var_34_1 = 3
        void var_48
        sub_142110080(rax_2, &var_48, *r15_1)
        int32_t j = 0
        int64_t rbp_1 = 0
        void* rbx_1 = r12_1
        
        do
            result = *rbx_1
            
            if (result == 0)
                result = (*(*arg1 + 0x470))(arg1)
                *rbx_1 = result
            
            void* rdx_2 = &var_48
            
            if (var_40_1 != 0)
                rdx_2 = var_40_1
            
            rbx_1 += 0x20
            uint32_t rcx_3 = zx.d(*(rdx_2 + rbp_1))
            rbp_1 += 1
            *(result + 0x20) &= 0xfffffffe
            *(result + 0x20) |= rcx_3 & 1
            *(result + 0x18) = j
            j += 1
            *(result + 0x28) = rax_2
            *(result + 0x30) = arg1
            *(result + 0x1c) = i
        while (j s< 3)
        
        if (var_40_1 != 0)
            result = sub_140a74f90(var_40_1)
        
        i += 1
        r12_1 += 8
        r15_1 = &r15_1[1]
    while (i s< 4)

__security_check_cookie(result_1 ^ &var_68)
return result
