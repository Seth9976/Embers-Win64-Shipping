// 函数: sub_14225eb10
// 地址: 0x14225eb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_140962f60(arg2)
int64_t* rbx = *result

if (rbx != 0)
    result = (*(*rbx + 0x20))(rbx, "PxRigidBody")
    int64_t* rdi_1 = nullptr
    
    if (result.b != 0)
        rdi_1 = rbx
    
    if (rdi_1 != 0)
        if (arg8 == 0)
            return sub_14225ed40(rdi_1, arg3, arg4, arg5, arg6, arg7)
        
        void* rcx_2 = *(arg1 + 0x50)
        
        if (rcx_2 == 0)
            return sub_14225ed40(rdi_1, arg3, arg4, arg5, arg6, arg7)
        
        if (sub_14243ade0(rcx_2) == 0 || *(arg1 + 0x48) == 0)
            return sub_14225ed40(rdi_1, arg3, arg4, arg5, arg6, arg7)
        
        void* rbx_1 = *(arg1 + 0x110)
        void* var_48 = arg2
        result = sub_14221b270(arg2)
        
        if (result.b != 0)
            int32_t var_38_1 = arg3[1].d
            char var_2c_1 = arg6
            int64_t var_40_1 = *arg3
            char var_2b_1 = arg7
            float var_34_1 = arg4[0]
            int32_t var_30_1 = arg5.d
            bool z_1
            
            if (0 == *(rbx_1 + 0xac))
                *(rbx_1 + 0xac) = 0
                z_1 = true
            else
                *(rbx_1 + 0xac)
                z_1 = false
            
            uint32_t rcx_5 = (var_48 u>> 4).d
            int32_t r8_1 = (0x9e3779b9 - rcx_5) ^ rcx_5 << 8
            int32_t rdx_2 = neg.d(r8_1 + rcx_5) ^ r8_1 u>> 0xd
            int32_t rcx_8 = (rcx_5 - r8_1 - rdx_2) ^ rdx_2 u>> 0xc
            int32_t r8_4 = (r8_1 - rcx_8 - rdx_2) ^ rcx_8 << 0x10
            int32_t rdx_5 = (rdx_2 - r8_4 - rcx_8) ^ r8_4 u>> 5
            int32_t rcx_11 = (rcx_8 - r8_4 - rdx_5) ^ rdx_5 u>> 3
            int32_t r8_7 = (r8_4 - rcx_11 - rdx_5) ^ rcx_11 << 0xa
            void* rax_21 = sub_142258e30(zx.q(not(z_1)) * 0x50 + rbx_1, 
                (rdx_5 - r8_7 - rcx_11) ^ r8_7 u>> 0xf, &var_48)
            int64_t rdi_2 = sx.q(*(rax_21 + 0x28))
            int32_t rcx_15 = (rdi_2 + 1).d
            *(rax_21 + 0x28) = rcx_15
            
            if (rcx_15 s> *(rax_21 + 0x2c))
                sub_1405a4df0(rax_21 + 0x20)
            
            result = *(rax_21 + 0x20)
            int64_t rcx_17 = rdi_2 * 3
            *(result + (rcx_17 << 3)) = var_40_1.o
            result[rcx_17 + 2] = var_30_1.q

return result
