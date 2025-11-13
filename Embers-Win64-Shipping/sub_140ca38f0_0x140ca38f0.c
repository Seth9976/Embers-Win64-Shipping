// 函数: sub_140ca38f0
// 地址: 0x140ca38f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a93e8)
sub_140ce8e10(arg1, arg2)
(*(*arg2 + 0x1d8))(arg2, &data_1439a9418)
int32_t rax_2
int512_t zmm1
rax_2, zmm1 = sub_140b4e7c0(arg2, &data_1439a9418)

if (rax_2 s< 0x1d)
    (*(*arg2 + 0x130))(arg2, arg1 + 0x28)

if ((arg2[5].b & 1) == 0)
    sub_140bd6e60(arg2, arg1 + 0x40, zmm1)
else
    uint64_t var_38
    
    if (arg2[8].d s>= 0x1cf)
        int32_t rax_8
        rax_8, zmm1 = sub_140b4e7c0(arg2, &data_1439a93e8)
        
        if (rax_8 s>= 2)
            sub_140bd6e60(arg2, arg1 + 0x40, zmm1)
        else
            var_38 = 0
            int32_t var_30_2 = 0
            sub_140bd6c30(arg2, &var_38, zmm1)
            int64_t rsi_2 = sx.q(var_30_2)
            *(arg1 + 0x48) = 0
            
            if (rsi_2.d s> *(arg1 + 0x4c))
                sub_1405a5410(arg1 + 0x40, rsi_2.d)
            
            uint64_t r15_2 = var_38
            uint64_t r14_2 = r15_2
            int64_t r12_2 = r15_2 + rsi_2 * 0xc
            
            if (r15_2 != r12_2)
                do
                    int64_t rsi_3 = sx.q(*(arg1 + 0x48))
                    int32_t rax_9 = (rsi_3 + 1).d
                    *(arg1 + 0x48) = rax_9
                    
                    if (rax_9 s> *(arg1 + 0x4c))
                        sub_1405a4f90(arg1 + 0x40)
                    
                    int64_t* rdx_12 = (rsi_3 << 4) + *(arg1 + 0x40)
                    *rdx_12 = *r14_2
                    uint64_t rax_11 = zx.q(*(r14_2 + 8))
                    r14_2 += 0xc
                    rdx_12[1] = rax_11
                while (r14_2 != r12_2)
            
            if (r15_2 != 0)
                sub_140a74f90(r15_2)
    else
        var_38 = 0
        int32_t var_30_1 = 0
        sub_1409ad9b0(arg2, &var_38, zmm1)
        uint64_t rcx_6 = var_38
        int64_t r15_1 = 0
        uint64_t r14_1 = rcx_6
        int64_t rax_5 = rcx_6 + (sx.q(var_30_1) << 3)
        
        if (rcx_6 != rax_5)
            do
                int64_t rsi_1 = sx.q(*(arg1 + 0x48))
                int64_t r12_1 = r15_1
                r15_1 += 1
                int32_t rax_6 = (rsi_1 + 1).d
                *(arg1 + 0x48) = rax_6
                
                if (rax_6 s> *(arg1 + 0x4c))
                    sub_1405a4f90(arg1 + 0x40)
                
                int64_t rax_7 = *r14_1
                r14_1 += 8
                int64_t* rdx_6 = (rsi_1 << 4) + *(arg1 + 0x40)
                *rdx_6 = rax_7
                rdx_6[1] = r12_1
            while (r14_1 != rax_5)
            
            rcx_6 = var_38
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)

uint32_t rbp
char arg_10

if (arg2[8].d s>= 0x186)
    int64_t* rcx_14 = arg2[1]
    arg_10 = *(arg1 + 0x50)
    char* rdx_16 = *rcx_14
    
    if (&rdx_16[1] u> rcx_14[1])
        (*(*arg2 + 0x150))(arg2, &arg_10, 1)
    else
        arg_10 = *rdx_16
        *rcx_14 += 1
    
    rbp = zx.d(arg_10)
else
    int64_t* rdx_14 = arg2[1]
    int32_t* r8_1 = *rdx_14
    
    if (&r8_1[1] u> rdx_14[1])
        int32_t rax_14
        rax_14.b = arg_10 != 0
        arg_10.d = rax_14
        (*(*arg2 + 0x150))(arg2, &arg_10, 4)
        rbp.b = arg_10.d != 0
    else
        bool cond:2_1 = *r8_1 != 0
        *rdx_14 = &r8_1[1]
        rbp.b = cond:2_1
*(arg1 + 0x50) = rbp
char result = arg2[5].b

if ((result & 3) == 0)
    return result

if ((arg2[6].d & 0x1000) != 0 && (result & 1) != 0)
    sub_140ca28e0(arg1)

return sub_140bd7fe0(arg1)
