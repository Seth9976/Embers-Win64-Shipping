// 函数: sub_141a5edb0
// 地址: 0x141a5edb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t* var_50
(*(*arg2 + 0x268))(arg2, &var_50)

if (*(arg2 + 0x55) == 0)
    void* rbx_1 = *(arg1 + 0x10)
    int32_t var_78
    sub_141838ff0(rbx_1 + 0x190, &var_78, &arg2[5])
    int64_t rax_3 = sx.q(var_78)
    
    if (rax_3.d == 0xffffffff)
    label_141a5ee62:
        void* rax_6 = *(arg1 + 8)
        void* var_58_1 = arg1
        int128_t var_70 = *arg3
        char var_60_1 = *(rax_6 + 0x340)
        (*(*arg2 + 0x270))(arg2, &var_70)
    else
        int64_t rax_4 = rax_3 * 0x1c
        
        if (rax_4 == neg.q(*(rbx_1 + 0x190)))
            goto label_141a5ee62
        
        int32_t rbx_2 = *(rax_4 + *(rbx_1 + 0x190) + 0x10)
        
        if (rbx_2 == 0xffffffff)
            goto label_141a5ee62
        
        sub_140acafe0(arg1 + 0x18, &var_78, &arg2[5], nullptr)
        sub_141a41dc0(*(arg1 + 0x10), rbx_2, 0)
    
    void* rax_8 = sub_141a7a150()
    void* rcx_6 = arg2[2]
    int64_t rax_9 = sx.q(*(rax_8 + 0x38))
    
    if (rax_9.d s<= *(rcx_6 + 0x38) && *(*(rcx_6 + 0x30) + (rax_9 << 3)) == rax_8 + 0x30)
        sub_141a5daf0(arg1, arg2, arg3)

char result_1
char result = result_1

if ((result & 1) != 0)
    int64_t* rcx_8 = &var_50
    
    if ((result & 2) == 0)
        rcx_8 = var_50
    
    char var_40 = result & 0xfe
    result = (**rcx_8)(rcx_8, 0)
    
    if ((var_40 & 2) == 0)
        result = sub_140a74f90(var_50)

__security_check_cookie(rax_1 ^ &var_98)
return result
