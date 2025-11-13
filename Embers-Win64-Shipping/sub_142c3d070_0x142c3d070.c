// 函数: sub_142c3d070
// 地址: 0x142c3d070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_142c3ae60(arg2, arg1, 2)

if (rax == 0)
    return rax

int16_t rbx = (*(arg3 + 0x10)).w
uint64_t rax_1

if (sub_142c3ae60(arg2, arg1, 2) != 0)
    arg1[1] = rbx.b
    int16_t rax_2 = rbx u>> 8
    *arg1 = rax_2.b
    
    if (sub_142c3ae60(arg2, arg1, ((zx.q((zx.d(rax_2.b) << 8) + zx.d(rbx.b)) << 1) + 2).d) != 0)
        int32_t rdx_3 = *(arg3 + 0x10)
        uint64_t rbx_1 = 0
        
        if (rdx_3 == 0)
        label_142c3d1f7:
            rax_1.b = 1
        else
            while (true)
                int128_t* const rax_4
                
                if (rbx_1.d u< *(arg4 + 0x10))
                    rax_4 = *(arg4 + 8) + (rbx_1 << 2)
                else
                    rax_4 = &data_14369a5d0
                
                int32_t rdi_1 = 0
                int32_t rax_7 = *rax_4 - 1
                
                if (rax_7 s> 0)
                    rdi_1 = rax_7
                
                int32_t rcx_3 = rdi_1
                int64_t var_40_1 = *(arg5 + 8)
                
                if (*(arg5 + 0x10) u< rdi_1)
                    rcx_3 = *(arg5 + 0x10)
                
                int32_t var_38_1 = rcx_3
                int128_t* const r10_1
                
                if (rbx_1.d u< rdx_3)
                    r10_1 = *(arg3 + 8) + (rbx_1 << 1)
                else
                    r10_1 = &data_14369a5d0
                
                void* r8_4
                
                if (rbx_1.d u< (zx.d(*arg1) << 8) + zx.d(arg1[1]))
                    r8_4 = &arg1[(zx.q(rbx_1.d) + 1) << 1]
                else
                    r8_4 = &data_144017550
                    data_144017550.w = 0
                
                int16_t* rcx_7 = *(arg2 + 0x18)
                uint16_t rdx_5 = rcx_7.w - arg1.w
                *(r8_4 + 1) = rdx_5.b
                *r8_4 = (rdx_5 u>> 8).b
                void var_48
                
                if (sub_142c3cfe0(rcx_7, arg2, *r10_1, &var_48).b == 0)
                    rax_1.b = 0
                    break
                
                int32_t rax_12 = *(arg5 + 0x10)
                
                if (rdi_1 u> rax_12)
                    rdi_1 = rax_12
                
                rbx_1 = zx.q(rbx_1.d + 1)
                *(arg5 + 0x10) = rax_12 - rdi_1
                *(arg5 + 8) += zx.q(rdi_1) * 2
                rdx_3 = *(arg3 + 0x10)
                
                if (rbx_1.d u>= rdx_3)
                    goto label_142c3d1f7
        
        return rax_1

rax_1.b = 0
return rax_1
