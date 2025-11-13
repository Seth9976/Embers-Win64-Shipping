// 函数: sub_140e67c10
// 地址: 0x140e67c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x1a) != 0)
    char rax = (*(*arg1 + 0x50))()
    
    if (rax != 7)
        int64_t r9_1 = sx.q(*(arg2 + 0xc))
        int32_t rcx = arg1[0x16].d
        int32_t arg_8 = r9_1.d
        void* rdi_1
        
        if (rcx == *(arg1 + 0xdc))
        label_140e67cbb:
            void* rax_3
            rax_3, arg3 = sub_140e48310(&arg1[0x15], r9_1.d, &arg_8)
            rdi_1 = rax_3
        else
            void* rcx_1 = arg1[0x1d]
            void* r8_1 = &arg1[0x1c]
            
            if (rcx_1 != 0)
                r8_1 = rcx_1
            
            int32_t rax_2 = *(r8_1 + (((sx.q(arg1[0x1e].d) - 1) & r9_1) << 2))
            
            if (rax_2 == 0xffffffff)
                goto label_140e67cbb
            
            int32_t* rcx_5
            
            while (true)
                rcx_5 = sx.q(rax_2) * 0x60 + arg1[0x15]
                
                if (*rcx_5 == r9_1.d)
                    break
                
                rax_2 = rcx_5[0x16]
                
                if (rax_2 == 0xffffffff)
                    goto label_140e67cbb
            
            if (rax_2 == 0xffffffff || rcx_5 == 0)
                goto label_140e67cbb
            
            rdi_1 = &rcx_5[2]
        
        int32_t r15_1 = 0
        uint64_t r12_1 = zx.q(rax)
        char* rbx_3
        
        if (*(rdi_1 + 8) == *(rdi_1 + 0x34))
        label_140e67d3b:
            int32_t var_38
            sub_140a696e0(rdi_1, &var_38)
            int32_t rax_5 = var_38
            int32_t var_40_1 = 0
            char* var_30
            *var_30 = rax
            int128_t zmm0
            zmm0.q = (zx.o(0)).q
            *(var_30 + 8) = zmm0
            *(var_30 + 0x18) = 0xffffffff
            int32_t arg_18
            arg3 = sub_140e61b30(rdi_1, &arg_18, r12_1.d, var_30, rax_5, nullptr)
            rbx_3 = (sx.q(arg_18) << 5) + *rdi_1
        else
            void* rdx_4 = *(rdi_1 + 0x40)
            void* r9_2 = rdi_1 + 0x38
            
            if (rdx_4 != 0)
                r9_2 = rdx_4
            
            int32_t rax_4 = *(r9_2 + (((sx.q(*(rdi_1 + 0x48)) - 1) & r12_1) << 2))
            
            if (rax_4 == 0xffffffff)
                goto label_140e67d3b
            
            while (true)
                rbx_3 = (sx.q(rax_4) << 5) + *rdi_1
                
                if (*rbx_3 == rax)
                    break
                
                rax_4 = *(rbx_3 + 0x18)
                
                if (rax_4 == 0xffffffff)
                    goto label_140e67d3b
            
            if (rax_4 == 0xffffffff || rbx_3 == 0)
                goto label_140e67d3b
        
        int32_t rcx_10 = *(rbx_3 + 0x10)
        int64_t rax_6 = *arg1
        uint32_t zmm1[0x4] = __andps_xmmxud_memxud(*(arg2 + 0x38), data_142d3f770)
        
        if (rcx_10 - 1 s>= 0)
            r15_1 = rcx_10 - 1
        
        (*(rax_6 + 0x48))(arg1, zmm1, zx.q(r15_1))
        uint128_t zmm2 = zx.o(data_143dbb3b8)
        zmm1 = zmm2
        zmm1[0].q = zmm1[0].q f- *(rbx_3 + 8)
        
        if (not(zmm1[0].q f<= fconvert.d(arg3.d)))
            *(rbx_3 + 0x10) += 1
            *(rbx_3 + 8) = zmm2.q
            return zx.q(rax)

return 7
