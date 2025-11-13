// 函数: sub_142c3d350
// 地址: 0x142c3d350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg3
int64_t rax = sub_142c3ae60(arg2, arg1, 6)

if (rax == 0)
    return rax

int16_t rbx = (*(rdi + 0x10)).w
uint64_t rax_1

if (sub_142c3ae60(arg2, arg1 + 4, 2) == 0)
    rax_1.b = 0
else
    *(arg1 + 5) = rbx.b
    int16_t rax_2 = rbx u>> 8
    *(arg1 + 4) = rax_2.b
    
    if (sub_142c3ae60(arg2, arg1 + 4, ((zx.q((zx.d(rax_2.b) << 8) + zx.d(rbx.b)) << 1) + 2).d) == 0)
        rax_1.b = 0
    else
        uint64_t rbx_1 = 0
        void var_40
        
        if (*(rdi + 0x10) u<= 0)
        label_142c3d52b:
            char* rcx_11 = *(arg2 + 0x18)
            int64_t var_38_2 = *(rdi + 8)
            uint16_t rdx_7 = rcx_11.w - arg1.w
            int32_t var_30_2 = *(rdi + 0x10)
            *(arg1 + 3) = rdx_7.b
            *(arg1 + 2) = (rdx_7 u>> 8).b
            return sub_142c3cad0(rcx_11, arg2, &var_40)
        
        while (true)
            int128_t* const rax_4
            
            if (rbx_1.d u< *(arg4 + 0x10))
                rax_4 = *(arg4 + 8) + (rbx_1 << 2)
            else
                rax_4 = &data_14369a5d0
            
            int32_t rdi_1 = *rax_4
            int32_t rcx_3 = rdi_1
            
            if (*(arg6 + 0x10) u< rdi_1)
                rcx_3 = *(arg6 + 0x10)
            
            int32_t var_48_1 = rcx_3
            int32_t rcx_4 = rdi_1
            
            if (*(arg5 + 0x10) u< rdi_1)
                rcx_4 = *(arg5 + 0x10)
            
            int32_t var_30_1 = rcx_4
            int64_t var_50_1 = *(arg6 + 8)
            int64_t var_38_1 = *(arg5 + 8)
            void* r8_4
            
            if (rbx_1.d u< (zx.d(*(arg1 + 4)) << 8) + zx.d(*(arg1 + 5)))
                r8_4 = &(arg1 + 4)[(zx.q(rbx_1.d) + 1) << 1]
            else
                r8_4 = &data_144017550
                data_144017550.w = 0
            
            char* rcx_8 = *(arg2 + 0x18)
            uint16_t rdx_4 = rcx_8.w - arg1.w
            *(r8_4 + 1) = rdx_4.b
            *r8_4 = (rdx_4 u>> 8).b
            void var_58
            
            if (sub_142c3d070(rcx_8, arg2, &var_40, &var_58, arg7).b == 0)
                rax_1.b = 0
                break
            
            int32_t rcx_9 = *(arg5 + 0x10)
            uint64_t rax_11 = zx.q(rdi_1)
            
            if (rdi_1 u> rcx_9)
                rax_11 = zx.q(rcx_9)
            
            *(arg5 + 8) += rax_11 * 2
            *(arg5 + 0x10) = rcx_9 - rax_11.d
            int32_t rax_13 = *(arg6 + 0x10)
            
            if (rdi_1 u> rax_13)
                rdi_1 = rax_13
            
            rbx_1 = zx.q(rbx_1.d + 1)
            *(arg6 + 0x10) = rax_13 - rdi_1
            rdi = arg3
            *(arg6 + 8) += zx.q(rdi_1) << 2
            
            if (rbx_1.d u>= *(rdi + 0x10))
                goto label_142c3d52b

return rax_1
