// 函数: sub_14216e470
// 地址: 0x14216e470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
uint64_t result

if (arg2 != 0)
    if (rbx.d == 1)
        result.b = 0
        return result
    
    int64_t* rcx = *(*(arg1 + 0x310) + 0x148)
    
    if (rcx != 0)
        result = (*(*rcx + 0x368))(rcx)
    
    if (rcx == 0 || result.b != 0)
        result.b = 1
    
    if (result.b != 0)
        int64_t* rdi_1 = *(arg1 + 0x2e8)
        
        if (rdi_1[1].d == *(rdi_1 + 0x34))
        label_14216e517:
            int32_t var_18
            sub_14090a150(rdi_1, &var_18)
            int32_t rax_3 = var_18
            int32_t* var_10
            *var_10 = rbx.d
            *(var_10 + 4) = -2
            void arg_10
            sub_1414529f0(rdi_1, &arg_10, rbx.d, var_10, rax_3, nullptr)
        else
            void* rcx_1 = rdi_1[8]
            void* r8_1 = &rdi_1[7]
            
            if (rcx_1 != 0)
                r8_1 = rcx_1
            
            int32_t rax_2 = *(r8_1 + (((sx.q(rdi_1[9].d) - 1) & rbx) << 2))
            
            if (rax_2 == 0xffffffff)
                goto label_14216e517
            
            int64_t rdx_3 = *rdi_1
            
            while (true)
                int64_t rcx_3 = sx.q(rax_2) * 2
                
                if (*(rdx_3 + (rcx_3 << 3)) == rbx.d)
                    break
                
                rax_2 = *(rdx_3 + (rcx_3 << 3) + 8)
                
                if (rax_2 == 0xffffffff)
                    goto label_14216e517
            
            if (rax_2 == 0xffffffff)
                goto label_14216e517
        
        int64_t* r9_2 = *(arg1 + 0x2e8)
        *(r9_2 + 0x34)
        int32_t* rdx_12
        
        if (r9_2[1].d == *(r9_2 + 0x34))
        label_14216e5ad:
            rdx_12 = nullptr
        else
            void* rcx_6 = r9_2[8]
            void* r8_3 = &r9_2[7]
            
            if (rcx_6 != 0)
                r8_3 = rcx_6
            
            result = zx.q(*(r8_3 + (((sx.q(r9_2[9].d) - 1) & rbx) << 2)))
            
            if (result.d == 0xffffffff)
            label_14216e5ad_1:
                rdx_12 = nullptr
            else
                while (true)
                    rdx_12 = (sx.q(result.d) << 4) + *r9_2
                    
                    if (*rdx_12 == rbx.d)
                        break
                    
                    result = zx.q(rdx_12[2])
                    
                    if (result.d == 0xffffffff)
                        goto label_14216e5ad_2
                
                if (result.d == 0xffffffff)
                label_14216e5ad_2:
                    rdx_12 = nullptr
        
        if (rdx_12[1] != 0xffffffff)
            result.b = 0
            return result

result.b = 1
return result
