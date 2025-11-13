// 函数: sub_1403da7f0
// 地址: 0x1403da7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = (*(arg1 + 0x154)).b

if ((rax & 1) == 0)
    png_error(arg1, "Missing IHDR before pCAL")
    noreturn

char* rdx_6

if ((rax & 4) != 0)
    rdx_6 = "Invalid pCAL after IDAT"
else
    if (arg2 == 0 || (*(arg2 + 9) & 4) == 0)
        png_free(arg1, *(arg1 + 0x4a0))
        void* rax_1 = png_malloc_warn(arg1, zx.q(arg3 + 1))
        *(arg1 + 0x4a0) = rax_1
        char const* const rdx_9
        
        if (rax_1 == 0)
            rdx_9 = "No memory for pCAL purpose"
        else
            uint64_t rbx_1 = zx.q(arg3)
            sub_1403cc480(arg1, rax_1, rbx_1)
            sub_1403be770(arg1, rax_1, rbx_1.d)
            int32_t rax_2 = sub_1403d8880(arg1, 0)
            int64_t rdx_4 = *(arg1 + 0x4a0)
            
            if (rax_2 != 0)
                goto label_1403da978
            
            *(rdx_4 + rbx_1) = 0
            void* r12_1 = *(arg1 + 0x4a0)
            char* rdi_2 = r12_1 + 9
            bool cond:0_1
            
            do
                cond:0_1 = rdi_2[-9] != 0
                rdi_2 = &rdi_2[1]
            while (cond:0_1)
            void* r12_2 = r12_1 + rbx_1
            char const* const rdx_5
            
            if (r12_2 u<= &rdi_2[2])
                rdx_5 = "Invalid pCAL data"
            label_1403da969:
                png_warning(arg1, rdx_5)
                rdx_4 = *(arg1 + 0x4a0)
            label_1403da978:
                int64_t result = png_free(arg1, rdx_4)
                *(arg1 + 0x4a0) = 0
                return result
            
            int32_t r13_1 = *(rdi_2 - 9)
            int32_t rbp_1 = *(rdi_2 - 5)
            uint32_t rbx_2 = zx.d(rdi_2[-1])
            int64_t r14
            r14.b = *rdi_2
            
            if (rbx_2 == 0 && r14.b != 2)
                rdx_5 = "Invalid pCAL parameters for equation type"
                goto label_1403da969
            
            uint64_t rcx_5 = zx.q(r14.b)
            
            if (rbx_2.b - 1 u<= 1 && rcx_5.b != 3)
                rdx_5 = "Invalid pCAL parameters for equation type"
                goto label_1403da969
            
            if (rbx_2.b == 3 && r14.b != 4)
                rdx_5 = "Invalid pCAL parameters for equation type"
                goto label_1403da969
            
            uint64_t var_50_1 = rcx_5
            
            if (rbx_2.b u>= 4)
                png_warning(arg1, "Unrecognized equation type for pCAL chunk")
                rcx_5 = var_50_1
            
            int32_t temp0_1 = _bswap(r13_1)
            int32_t temp0_2 = _bswap(rbp_1)
            bool cond:2_1
            
            do
                cond:2_1 = rdi_2[1] != 0
                rdi_2 = &rdi_2[1]
            while (cond:2_1)
            int64_t rax_8 = png_malloc_warn(arg1, rcx_5 << 3)
            
            if (rax_8 != 0)
                int64_t rdi_3
                
                if (r14.b == 0)
                label_1403daa3f:
                    rdi_3 = rax_8
                    png_set_pCAL(arg1, arg2, *(arg1 + 0x4a0), temp0_1, temp0_2, rbx_2, var_50_1.d, 
                        &rdi_2[1], rax_8)
                else
                    int64_t rdx_12 = 0
                    
                    while (true)
                        rdi_2 = &rdi_2[1]
                        *(rax_8 + (rdx_12 << 3)) = rdi_2
                        
                        if (rdi_2 u> r12_2)
                        label_1403daa4f:
                            rdi_3 = rax_8
                            png_warning(arg1, "Invalid pCAL data")
                            break
                        
                        while (*rdi_2 != 0)
                            rdi_2 = &rdi_2[1]
                            
                            if (rdi_2 u> r12_2)
                                goto label_1403daa4f
                        
                        rdx_12 += 1
                        
                        if (rdx_12 u>= var_50_1)
                            goto label_1403daa3f
                
                png_free(arg1, *(arg1 + 0x4a0))
                *(arg1 + 0x4a0) = 0
                return png_free(arg1, rdi_3) __tailcall
            
            png_free(arg1, *(arg1 + 0x4a0))
            *(arg1 + 0x4a0) = 0
            rdx_9 = "No memory for pCAL params"
        
        return png_warning(arg1, rdx_9) __tailcall
    
    rdx_6 = "Duplicate pCAL chunk"

png_warning(arg1, rdx_6)
return sub_1403d8880(arg1, arg3) __tailcall
