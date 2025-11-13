// 函数: sub_1416f3f10
// 地址: 0x1416f3f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t var_60 = *arg2
int32_t result = sub_1416f4100(arg1, &var_60, arg3)

if ((arg1[5].b & 1) != 0)
    void* r15_1 = arg1[0x13]
    int64_t rbx_1 = var_60
    int32_t var_68
    sub_140865c40(r15_1 + 0xb8, &var_68, rbx_1)
    int64_t rax_3 = sx.q(var_68)
    void*** rdi_2
    
    if (rax_3.d == 0xffffffff)
    label_1416f3fab:
        void*** rax_5 = j_sub_140a82f30(0x18)
        rdi_2 = rax_5
        
        if (rax_5 == 0)
            rdi_2 = rax_5
        else
            *rdi_2 = &data_142e78278
            rdi_2[1] = rbx_1
            void*** rax_6 = j_sub_140a82f30(0x18)
            
            if (rax_6 != 0)
                rax_6[1].d = 1
                *rax_6 = &data_142fc59a0
                *(rax_6 + 0xc) = 1
                rax_6[2] = rbx_1
            
            rdi_2[2] = rax_6
        
        void*** var_48 = rdi_2
        int64_t var_50
        int64_t* var_40 = &var_50
        var_50 = rbx_1
        void**** var_38_1 = &var_48
        void var_58
        sub_140bd29a0(r15_1 + 0xb8, &var_58, &var_40, nullptr)
    else
        void* rdi_1 = *(r15_1 + 0xb8) + rax_3 * 0x18
        
        if (rdi_1 == 0)
            goto label_1416f3fab
        
        rdi_2 = *(rdi_1 + 8)
        
        if (rdi_2 == 0)
            goto label_1416f3fab
    
    int64_t* rcx_3 = rdi_2[2]
    int64_t var_78 = rdi_2[1]
    int64_t* var_70_1 = rcx_3
    
    if (rcx_3 != 0)
        rcx_3[1].d += 1
        rcx_3 = var_70_1
    
    result = &var_78
    
    if (&var_78 != arg2)
        int128_t zmm1 = var_78.o
        int128_t var_30_1 = zmm1
        var_78.o = *arg2
        rcx_3 = var_70_1
        *arg2 = zmm1
    
    if (rcx_3 != 0)
        result = rcx_3[1].d
        rcx_3[1].d -= 1
        
        if (result == 1)
            result = (**var_70_1)(var_70_1)
            int32_t rdi_3 = *(var_70_1 + 0xc)
            *(var_70_1 + 0xc) -= 1
            
            if (rdi_3 == 1)
                result = (*(*var_70_1 + 8))(var_70_1, zx.q(rdi_3))

__security_check_cookie(rax_1 ^ &var_98)
return result
