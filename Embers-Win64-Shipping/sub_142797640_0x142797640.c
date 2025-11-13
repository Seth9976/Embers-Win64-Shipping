// 函数: sub_142797640
// 地址: 0x142797640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
char result
float zmm6_1[0x4]
result, zmm6_1 = sub_141efce60(arg1, arg2.d)

if (not(zmm6_1[0] < 9.99999975e-06f) && arg3 == 2)
    result = (*(*arg1 + 0x308))(arg1)
    
    if (result != 0)
        int64_t* rbx_1 = arg1[0x14]
        int64_t rax_3 = sub_142591550()
        int64_t r8 = *rbx_1
        int64_t* var_90_1 = rbx_1
        int64_t rax_4 = (*(r8 + 0x610))(rbx_1, rax_3, r8)
        void* rcx_2 = arg1[0x25]
        void** const var_58 = &data_142e345d8
        uint64_t (* var_78)(int64_t* arg1, int32_t* arg2) = sub_14278ebe0
        void*** var_68_1 = nullptr
        int128_t var_50_1 = arg1.o
        int64_t var_40_1 = rax_4
        result = sub_141d35cf0(rcx_2, zmm6_1, &var_78)
        
        if (var_78 != 0)
            void** const* rcx_3 = &var_58
            
            if (var_68_1 != 0)
                rcx_3 = var_68_1
            
            result = (*rcx_3)[2](rcx_3)

__security_check_cookie(rax_1 ^ &var_b8)
return result
