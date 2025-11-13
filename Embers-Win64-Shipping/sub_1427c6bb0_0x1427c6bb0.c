// 函数: sub_1427c6bb0
// 地址: 0x1427c6bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx = arg1[1]

if (arg1[2] - rbx s>= 5)
    goto label_1427c6c00

char* result = sub_1427c7500(arg1)

if (result.b != 0)
    rbx = arg1[1]
label_1427c6c00:
    
    while (true)
        char rax_2 = *rbx
        char* result_1 = &rbx[1]
        int64_t rax_15
        
        if ((rax_2 & 3) != 0)
            uint8_t (* r10_1)[0x10] = arg2[1]
            uint32_t rdx_5 = zx.d(*(&data_1434cbe40 + (zx.q(rax_2) << 1)))
            uint64_t rax_18 = zx.q(rdx_5) u>> 0xb
            void* r8_4 = &(*r10_1)[zx.q(rdx_5.b)]
            rbx = &result_1[rax_18]
            uint64_t rflags_2
            int32_t temp0_2
            temp0_2, rflags_2 = _bzhi_u32(*result_1, (rax_18 << 3).d)
            uint64_t r11_3 = zx.q(temp0_2) + (zx.q(rdx_5) & 0x700)
            result = r11_3 - 1
            
            if (r10_1 - *arg2 u<= result)
                break
            
            int64_t r9_1 = arg2[2]
            
            if (r8_4 u> r9_1)
                break
            
            rax_15 = sub_1427c7240(r10_1 - r11_3, r10_1, r8_4, r9_1)
        else
            int128_t* rcx = arg2[1]
            uint64_t r14_3 = zx.q((zx.d(rax_2) u>> 2) + 1)
            
            if (r14_3 u<= 0x10 && arg1[2] - result_1 u>= 0x15 && arg2[2] - rcx u>= 0x10)
                rbx = &result_1[r14_3]
                *rcx = *result_1
                arg2[1] = rcx + r14_3
                continue
            
            if (r14_3 u>= 0x3d)
                int64_t rdx = r14_3 - 0x3c
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = __bzhi_gpr32d_memd_gpr32d(*result_1, (rdx << 3).d)
                r14_3 = zx.q(temp0_1 + 1)
                result_1 = &result_1[rdx]
            
            void* rdi_2 = arg1[2] - result_1
            
            while (rdi_2 u< r14_3)
                void* r15_1 = arg2[1]
                result = arg2[2] - r15_1
                
                if (result u< rdi_2)
                    return result
                
                memcpy(r15_1, result_1, rdi_2.d)
                r14_3 -= rdi_2
                arg2[1] = r15_1 + rdi_2
                int64_t* rcx_2 = *arg1
                (*(*rcx_2 + 0x18))(rcx_2, zx.q(arg1[3].d))
                int64_t* rcx_3 = *arg1
                void* arg_8
                result = (*(*rcx_3 + 0x10))(rcx_3, &arg_8)
                rdi_2 = arg_8
                result_1 = result
                arg1[3].d = rdi_2.d
                
                if (rdi_2 == 0)
                    return result
                
                arg1[2] = result + rdi_2
            
            int64_t rdi_3 = arg2[1]
            result = arg2[2] - rdi_3
            
            if (result u< r14_3)
                break
            
            memcpy(rdi_3, result_1, r14_3.d)
            rax_15 = rdi_3 + r14_3
            rbx = &result_1[r14_3]
        
        arg2[1] = rax_15
        
        if (arg1[2] - rbx s< 5)
            arg1[1] = rbx
            result = sub_1427c7500(arg1)
            
            if (result.b == 0)
                break
            
            rbx = arg1[1]

return result
