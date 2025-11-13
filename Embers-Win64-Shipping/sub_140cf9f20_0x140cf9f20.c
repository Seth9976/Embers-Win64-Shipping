// 函数: sub_140cf9f20
// 地址: 0x140cf9f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *(*arg3 + 8)
void* rax_1 = *(arg1 + 0x78)

if (rax_1 != 0)
    int32_t rcx
    
    if ((*(rax_1 + 0xb0) & 0x80000) != 0)
        rcx.b = sub_140b5b8a0(*(arg2 + 8), 0xa) == 0
    
    if ((*(rax_1 + 0xb0) & 0x80000) != 0
            && ((*(arg2 + 0xc) != 0 | rcx.b) != 0 || *(arg2 + 0x1c) != *(*(arg1 + 0x78) + 0x18)))
        int64_t* rdi_1 = *(*(arg1 + 0x78) + 0xb8)
        int64_t rbp_2 = sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4
        char rax_10 = (*(*rdi_1 + 0xf8))(rdi_1)
        char rax_12
        
        if (rax_10 != 0)
            rax_12 = (*(*rdi_1 + 0x108))(rdi_1, arg2, arg3, rbp_2)
        
        if (rax_10 != 0 && rax_12 != 0)
            return 2
        
        if ((*(*rdi_1 + 0xf0))(rdi_1) != 0
                && (*(*rdi_1 + 0x100))(rdi_1, arg2, *(*arg3 + 8), rbp_2) != 0)
            return 2
        
        return 1
    
    int32_t rcx_6
    rcx_6.b = *(arg2 + 0xc) == 0
    void arg_8
    
    if ((rcx_6.b & sub_140b5b8a0(*(arg2 + 8), 0xa)) != 0
            && *(arg2 + 0x1c) != *(*(arg1 + 0x78) + 0x18)
            && sub_140cf1200(&arg_8, r14, arg2, arg1) == 0)
        int32_t rcx_9
        rcx_9.b = *(arg2 + 0x20) == 0
        
        if ((rcx_9.b & sub_140b5b8a0(*(arg2 + 0x1c), 0x3b)) != 0)
            int64_t rdi_4 = *(*(arg1 + 0x78) + 0x18)
            int32_t rcx_10
            rcx_10.b = (rdi_4 u>> 0x20).d == 0
            
            if ((rcx_10.b & sub_140b5b8a0(rdi_4.d, 0x39)) != 0)
                int32_t* rdi_7 = sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4
                int64_t* r9_3 = *(*arg3 + 8)
                int64_t* rcx_11 = r9_3[1]
                int32_t* rdx_3 = *rcx_11
                int32_t var_28
                
                if (&rdx_3[1] u> rcx_11[1])
                    int32_t* rdx_4 = &var_28
                    
                    if ((*(r9_3 + 0x29) & 0x20) != 0)
                        sub_140b54070(r9_3, rdx_4, arg5)
                    else
                        (*(*r9_3 + 0x150))(r9_3, rdx_4, 4)
                else
                    var_28 = *rdx_3
                    int64_t* rax_31 = r9_3[1]
                    *rax_31 += 4
                
                int64_t* r9_4 = *(*arg3 + 8)
                int64_t* rcx_13 = r9_4[1]
                int32_t* rdx_5 = *rcx_13
                int32_t var_24
                
                if (&rdx_5[1] u> rcx_13[1])
                    int32_t* rdx_6 = &var_24
                    
                    if ((*(r9_4 + 0x29) & 0x20) != 0)
                        sub_140b54070(r9_4, rdx_6, arg5)
                    else
                        (*(*r9_4 + 0x150))(r9_4, rdx_6, 4)
                else
                    var_24 = *rdx_5
                    int64_t* rax_36 = r9_4[1]
                    *rax_36 += 4
                
                int64_t* r9_5 = *(*arg3 + 8)
                int64_t* rcx_15 = r9_5[1]
                int32_t* rdx_7 = *rcx_15
                int32_t var_20
                
                if (&rdx_7[1] u> rcx_15[1])
                    int32_t* rdx_8 = &var_20
                    
                    if ((*(r9_5 + 0x29) & 0x20) != 0)
                        sub_140b54070(r9_5, rdx_8, arg5)
                    else
                        (*(*r9_5 + 0x150))(r9_5, rdx_8, 4)
                else
                    var_20 = *rdx_7
                    int64_t* rax_41 = r9_5[1]
                    *rax_41 += 4
                
                *rdi_7 = var_28
                arg5.o = var_24
                rdi_7[1] = arg5.d
                rdi_7[2] = var_20
                return 2
        
        return 1

return 0
