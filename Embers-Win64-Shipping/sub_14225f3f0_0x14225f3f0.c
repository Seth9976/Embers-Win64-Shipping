// 函数: sub_14225f3f0
// 地址: 0x14225f3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_140962f60(arg2)
int64_t* rdi = *result

if (rdi != 0)
    int32_t r8
    result, r8 = (*(*rdi + 0x20))(rdi, "PxRigidBody")
    int64_t* rbx_1 = nullptr
    
    if (result.b != 0)
        rbx_1 = rdi
    
    if (rbx_1 != 0)
        if (arg4 == 0)
        label_14225f59e:
            int32_t zmm1 = *(arg3 + 4)
            int64_t r10_1 = *rbx_1
            int32_t var_40 = (*arg3).d
            int32_t var_3c_1 = zmm1
            int32_t var_38_1 = arg3[1].d.d
            return (*(r10_1 + 0x150))(rbx_1, &var_40, zx.q(sbb.d(r8, r8, arg5 != 0)) & 3, 1)
        
        void* rcx_2 = *(arg1 + 0x50)
        
        if (rcx_2 == 0)
            goto label_14225f59e
        
        if (sub_14243ade0(rcx_2) == 0 || *(arg1 + 0x48) == 0)
            goto label_14225f59e
        
        void* rbx_2 = *(arg1 + 0x110)
        void* var_48 = arg2
        result = sub_14221b270(arg2)
        
        if (result.b != 0)
            int64_t zmm0 = *arg3
            int32_t var_28_1 = arg3[1].d
            char var_24_1 = arg5
            bool z_1
            
            if (0 == *(rbx_2 + 0xac))
                *(rbx_2 + 0xac) = 0
                z_1 = true
            else
                *(rbx_2 + 0xac)
                z_1 = false
            
            uint32_t rcx_5 = (var_48 u>> 4).d
            int32_t r8_2 = (0x9e3779b9 - rcx_5) ^ rcx_5 << 8
            int32_t rdx_2 = neg.d(r8_2 + rcx_5) ^ r8_2 u>> 0xd
            int32_t rcx_8 = (rcx_5 - r8_2 - rdx_2) ^ rdx_2 u>> 0xc
            int32_t r8_5 = (r8_2 - rcx_8 - rdx_2) ^ rcx_8 << 0x10
            int32_t rdx_5 = (rdx_2 - r8_5 - rcx_8) ^ r8_5 u>> 5
            int32_t rcx_11 = (rcx_8 - r8_5 - rdx_5) ^ rdx_5 u>> 3
            int32_t r8_8 = (r8_5 - rcx_11 - rdx_5) ^ rcx_11 << 0xa
            void* rax_20 = sub_142258e30(zx.q(not(z_1)) * 0x50 + rbx_2, 
                (rdx_5 - r8_8 - rcx_11) ^ r8_8 u>> 0xf, &var_48)
            int64_t rdi_1 = sx.q(*(rax_20 + 0x18))
            int32_t rcx_15 = (rdi_1 + 1).d
            *(rax_20 + 0x18) = rcx_15
            
            if (rcx_15 s> *(rax_20 + 0x1c))
                sub_1405a4f90(rax_20 + 0x10)
            
            result = *(rax_20 + 0x10)
            *(result + rdi_1 * 0x10) = zmm0.o

return result
