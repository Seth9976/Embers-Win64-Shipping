// 函数: sub_14225e140
// 地址: 0x14225e140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_140962f60(arg2)
int64_t* rdi = *result

if (rdi != 0)
    result = (*(*rdi + 0x20))(rdi, "PxRigidBody")
    int64_t* rbx_1 = nullptr
    
    if (result.b != 0)
        rbx_1 = rdi
    
    if (rbx_1 != 0)
        int64_t zmm0
        
        if (arg5 == 0)
        label_14225e2ff:
            zmm0 = *arg4
            int32_t zmm1 = *(arg4 + 4)
            int32_t zmm2 = arg4[1].d
            float zmm3 = *arg3
            int32_t zmm4_1 = *(arg3 + 4)
            int32_t zmm5_1 = arg3[1].d
            
            if (arg6 != 0)
                int32_t var_68 = zmm0.d
                int32_t var_64_1 = zmm1
                int32_t var_60_1 = zmm2
                float var_5c = zmm3
                int32_t var_58_1 = zmm4_1
                int32_t var_54_1 = zmm5_1
                return sub_1427eeda0(rbx_1, &var_5c, &var_68, 0, 1)
            
            int32_t var_80 = zmm0.d
            int32_t var_7c_1 = zmm1
            int32_t var_78_1 = zmm2
            float var_74 = zmm3
            int32_t var_70_1 = zmm4_1
            int32_t var_6c_1 = zmm5_1
            return sub_1427ee9f0(rbx_1, &var_74, &var_80, 0, 1)
        
        void* rcx_2 = *(arg1 + 0x50)
        
        if (rcx_2 == 0)
            goto label_14225e2ff
        
        if (sub_14243ade0(rcx_2) == 0 || *(arg1 + 0x48) == 0)
            goto label_14225e2ff
        
        void* rbx_2 = *(arg1 + 0x110)
        void* var_88 = arg2
        result = sub_14221b270(arg2)
        
        if (result.b != 0)
            int32_t var_48_1 = arg3[1].d
            int32_t var_3c_1 = arg4[1].d
            int64_t var_50_1 = *arg3
            zmm0 = *arg4
            char var_36_1 = arg6
            char var_38_1 = 1
            bool z_1
            
            if (0 == *(rbx_2 + 0xac))
                *(rbx_2 + 0xac) = 0
                z_1 = true
            else
                *(rbx_2 + 0xac)
                z_1 = false
            
            uint32_t rcx_5 = (var_88 u>> 4).d
            int32_t r8_1 = (0x9e3779b9 - rcx_5) ^ rcx_5 << 8
            int32_t rdx_2 = neg.d(r8_1 + rcx_5) ^ r8_1 u>> 0xd
            int32_t rcx_8 = (rcx_5 - r8_1 - rdx_2) ^ rdx_2 u>> 0xc
            int32_t r8_4 = (r8_1 - rcx_8 - rdx_2) ^ rcx_8 << 0x10
            int32_t rdx_5 = (rdx_2 - r8_4 - rcx_8) ^ r8_4 u>> 5
            int32_t rcx_11 = (rcx_8 - r8_4 - rdx_5) ^ rdx_5 u>> 3
            int32_t r8_7 = (r8_4 - rcx_11 - rdx_5) ^ rcx_11 << 0xa
            void* rax_21 = sub_142258e30(zx.q(not(z_1)) * 0x50 + rbx_2, 
                (rdx_5 - r8_7 - rcx_11) ^ r8_7 u>> 0xf, &var_88)
            int64_t rdi_1 = sx.q(*(rax_21 + 8))
            int32_t rcx_15 = (rdi_1 + 1).d
            *(rax_21 + 8) = rcx_15
            
            if (rcx_15 s> *(rax_21 + 0xc))
                sub_1405c50f0(rax_21)
            
            int64_t rcx_17 = *rax_21
            result = zx.q(var_38_1.d)
            int128_t* rdx_10 = rdi_1 * 0x1c
            *(rdx_10 + rcx_17) = var_50_1.o
            *(rdx_10 + rcx_17 + 0x10) = zmm0
            *(rdx_10 + rcx_17 + 0x18) = result.d

return result
