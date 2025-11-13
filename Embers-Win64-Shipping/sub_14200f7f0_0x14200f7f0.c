// 函数: sub_14200f7f0
// 地址: 0x14200f7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a93f8)
int512_t zmm1 = sub_140ce8e10(arg1, arg2)
uint64_t result

if ((arg2[5].b & 1) == 0)
    int32_t rdi_2
    
    if (*(arg1 + 0x41) == 2 || arg2[0xe] == 0)
        rdi_2 = 1
    else
        rdi_2 = 0
    
    uint64_t* rdx_6 = arg2[1]
    uint64_t rcx_12 = *rdx_6
    bool cond:0_1
    
    if (rcx_12 + 4 u> rdx_6[1])
        int64_t rax_15 = *arg2
        int32_t arg_18 = rdi_2
        result = (*(rax_15 + 0x150))(arg2, &arg_18, 4)
        cond:0_1 = arg_18 != 0
    else
        cond:0_1 = *rcx_12 != 0
        result = rcx_12 + 4
        *rdx_6 = result
    
    if (cond:0_1 != 0)
        return sub_14200f6b0(*(arg1 + 0x48), arg2, zmm1)
else
    int64_t var_38
    int64_t* rax_2 = (*(*(arg1 + 0x28) + 0x38))(arg1 + 0x28, &var_38)
    
    if (arg1 + 0x30 != rax_2)
        int64_t rcx_3 = *(arg1 + 0x30)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        *(arg1 + 0x30) = *rax_2
        *rax_2 = 0
        *(arg1 + 0x38) = rax_2[1].d
        *(arg1 + 0x3c) = *(rax_2 + 0xc)
        rax_2[1] = 0
    
    int64_t rcx_5 = var_38
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    result, zmm1 = sub_140b4e7c0(arg2, &data_1439a93f8)
    
    if (result.d s>= 0xe)
        uint64_t* rcx_7 = arg2[1]
        uint64_t rdx_2 = *rcx_7
        bool cond:1_1
        
        if (rdx_2 + 4 u> rcx_7[1])
            int64_t rax_6 = *arg2
            int32_t arg_10 = 0
            result = (*(rax_6 + 0x150))(arg2, &arg_10, 4)
            cond:1_1 = arg_10 != 0
        else
            cond:1_1 = *rdx_2 != 0
            result = rdx_2 + 4
            *rcx_7 = result
        
        if (cond:1_1 != 0)
            if (*(*(arg1 + 0x48) + 8) s> 0)
                void*** rax_8 = j_sub_140a82f30(0x20)
                
                if (rax_8 == 0)
                    rax_8 = nullptr
                else
                    rax_8[1].d = 1
                    *rax_8 = &data_142df7bd8
                    *(rax_8 + 0xc) = 1
                    rax_8[2] = 0
                    rax_8[3] = 0
                
                int64_t rcx_9 = *(arg1 + 0x48)
                *(arg1 + 0x48) = &rax_8[2]
                int64_t* rdi_1 = *(arg1 + 0x50)
                int64_t var_48_2 = rcx_9
                *(arg1 + 0x50) = rax_8
                int64_t* var_40_2 = rdi_1
                
                if (rdi_1 != 0)
                    rdi_1[1].d -= 1
                    
                    if (rdi_1[1].d == 1)
                        (**rdi_1)(rdi_1)
                        int32_t rbp_1 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (rbp_1 == 1)
                            (*(*rdi_1 + 8))(rdi_1, zx.q(rbp_1))
            
            return sub_14200f6b0(*(arg1 + 0x48), arg2, zmm1)

return result
