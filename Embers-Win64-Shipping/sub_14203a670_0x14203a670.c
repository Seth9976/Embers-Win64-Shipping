// 函数: sub_14203a670
// 地址: 0x14203a670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0xc))
int64_t* rbx = *arg1
int32_t i_2 = arg1[1].d

if (arg2 s> result.d)
    if (i_2 != 0)
        int32_t i
        
        do
            int32_t rax_1 = rbx[1].d
            int64_t* rcx_3
            int64_t* r8_2
            
            if (rax_1 == 0)
                r8_2 = *rbx
                rcx_3 = nullptr
            else
                rcx_3 = *rbx
                r8_2 = rcx_3
            
            int64_t rax_2
            
            if (rcx_3 != 0)
                rax_2 = *rcx_3
            label_14203a740:
                (*(rax_2 + 0x38))(rcx_3, 0)
                int64_t rcx_4 = *rbx
                
                if (rcx_4 != 0)
                    *rbx = sub_140a84c80(rcx_4, 0, 0)
                
                rbx[1].d = 0
            else if (rax_1 != 0 && r8_2 != 0)
                rax_2 = *r8_2
                rcx_3 = r8_2
                goto label_14203a740
            int64_t rcx_5 = *rbx
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            rbx = &rbx[2]
            i = i_2
            i_2 -= 1
        while (i != 1)
        result = zx.q(*(arg1 + 0xc))
    
    arg1[1].d = 0
    
    if (result.d != arg2)
        return sub_1405a5410(arg1, arg2)
else
    if (i_2 != 0)
        int32_t i_1
        
        do
            result = zx.q(rbx[1].d)
            int64_t* rcx
            int64_t* r8_1
            
            if (result.d == 0)
                r8_1 = *rbx
                rcx = nullptr
            else
                rcx = *rbx
                r8_1 = rcx
            
            int64_t rax
            
            if (rcx != 0)
                rax = *rcx
            label_14203a6d2:
                result = (*(rax + 0x38))(rcx, 0)
                int64_t rcx_1 = *rbx
                
                if (rcx_1 != 0)
                    result = sub_140a84c80(rcx_1, 0, 0)
                    *rbx = result
                
                rbx[1].d = 0
            else if (result.d != 0 && r8_1 != 0)
                rax = *r8_1
                rcx = r8_1
                goto label_14203a6d2
            int64_t rcx_2 = *rbx
            
            if (rcx_2 != 0)
                result = sub_140a74f90(rcx_2)
            
            rbx = &rbx[2]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    arg1[1].d = 0

return result
