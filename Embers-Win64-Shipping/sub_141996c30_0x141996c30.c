// 函数: sub_141996c30
// 地址: 0x141996c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg2, 0, 0x14)

if (((arg4 - 2) & 0xfffffffd) == 0)
    int32_t r14_1 = arg3 * arg4
    int64_t* rdi_1 = *(arg1 + (zx.q(arg4) u>> 2 << 3))
    void*** rbx_1 = rdi_1[2]
    
    if (rbx_1 == 0 || *(rbx_1 + 0x24) + r14_1 u> rbx_1[4].d)
        int64_t rax_3 = sx.q(rdi_1[1].d)
        
        if (rax_3.d s<= 0)
        label_141996cc4:
            void*** rax_4 = j_sub_140a82f30(0x30)
            rbx_1 = rax_4
            
            if (rax_4 == 0)
                rbx_1 = nullptr
            else
                int32_t r8_1 = rdi_1[3].d
                rax_4[1].d = 0xffffffff
                int32_t rdx_2 = (r14_1 + 0xffff) & 0xffff0000
                *(rax_4 + 0xc) = 4
                int32_t rcx_4 = 0x10000
                rax_4[2] = 0
                rbx_1[3] = 0
                
                if (rdx_2 u>= 0x10000)
                    rcx_4 = rdx_2
                
                *rbx_1 = &data_14300a690
                rbx_1[4].d = rcx_4
                *(rbx_1 + 0x24) = 0
                rbx_1[5].d = r8_1
                *(rbx_1 + 0x2c) = 0
            
            int64_t rbp_1 = sx.q(rdi_1[1].d)
            int32_t rax_5 = (rbp_1 + 1).d
            rdi_1[1].d = rax_5
            
            if (rax_5 s> *(rdi_1 + 0xc))
                sub_140638870(rdi_1)
            
            *(*rdi_1 + (rbp_1 << 3)) = rbx_1
            (*rbx_1)[5](rbx_1)
        else
            void** r8 = *rdi_1
            int64_t rdx = 0
            
            while (true)
                rbx_1 = *r8
                
                if (*(rbx_1 + 0x24) + r14_1 u<= rbx_1[4].d)
                    break
                
                rdx += 1
                r8 = &r8[1]
                
                if (rdx s>= rax_3)
                    goto label_141996cc4
        
        if (rbx_1[3] == 0)
            int64_t* rcx_7 = data_143f0f180
            rbx_1[3] = (*(*rcx_7 + 0x110))(rcx_7, &data_143f02b98, rbx_1[2], 0, rbx_1[4].d, 1)
        
        rdi_1[2] = rbx_1
    
    int32_t rcx_8 = *(rbx_1 + 0x24)
    *arg2 = zx.q(rcx_8) + rbx_1[3]
    arg2[1] = rbx_1
    arg2[2].d = divu.dp.d(0:rcx_8, arg4)
    *(rbx_1 + 0x24) = rcx_8 + r14_1

return arg2
