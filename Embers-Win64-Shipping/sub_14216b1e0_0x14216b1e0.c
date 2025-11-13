// 函数: sub_14216b1e0
// 地址: 0x14216b1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1 = arg3
int64_t* r10 = *(arg1 + 0x310)
int64_t rbx

if (arg3 == 0 || (arg3.b & 1) == 0)
    rbx.b = 1
else if (arg4 != 0)
    if (((*(sub_140d21d80(arg4) + 0x50) u>> 0x11).b & 1) == 0)
        rbx.b = 0
    else
        rbx.b = 1
else if (arg3 == 1)
    rbx.b = 0
else
    int32_t* rcx_11
    
    if (r10[1].d == *(r10 + 0x34))
    label_14216b30e:
        rcx_11 = nullptr
    else
        void* rcx_8 = r10[8]
        void* r9 = &r10[7]
        
        if (rcx_8 != 0)
            r9 = rcx_8
        
        int32_t rax_10 = *(r9 + (((sx.q(r10[9].d) - 1) & sx.q(arg3)) << 2))
        
        if (rax_10 == 0xffffffff)
        label_14216b30e_1:
            rcx_11 = nullptr
        else
            while (true)
                rcx_11 = sx.q(rax_10) * 0x38 + *r10
                
                if (*rcx_11 == arg3)
                    break
                
                rax_10 = rcx_11[0xc]
                
                if (rax_10 == 0xffffffff)
                    goto label_14216b30e_2
            
            if (rax_10 == 0xffffffff)
            label_14216b30e_2:
                rcx_11 = nullptr
    
    void* rax_11 = &rcx_11[2]
    
    if (rcx_11 == 0)
        rax_11 = nullptr
    
    if (rax_11 == 0 || (*(rax_11 + 0x20) & 1) == 0)
        rbx.b = 0
    else
        rbx.b = 1

if (sub_14217bbb0(*(arg1 + 0x310)) != 0)
    int64_t* rcx_4 = *(*(arg1 + 0x310) + 0x148)
    char rax_5
    
    if (rcx_4 != 0)
        rax_5 = (*(*rcx_4 + 0x368))(rcx_4)
    
    if ((rcx_4 == 0 || rax_5 != 0) && *(*(arg1 + 0x310) + 0x152) == 0 && rbx.b == 0)
        sub_1408d92c0(arg1 + 0x320, &result_1)

bool rdx_2 = (*(*arg2 + 0x168))(arg2, &result_1)
void* result = zx.q(result_1)
int64_t rcx_7

if (result.d != 0)
    void* r8 = *(arg1 + 0x310)
    rdx_2 = sbb.b(rdx_2, rdx_2, *(r8 + 0x150) != 0) & 4
    bool arg_8 = rdx_2
    
    if (result.d == 1)
        arg_8 = rdx_2 | result.b
    label_14216b3a2:
        int64_t* rcx_14 = arg2[1]
        char* rdx_7 = *rcx_14
        
        if (&rdx_7[1] u> rcx_14[1])
            result = (*(*arg2 + 0x150))(arg2, &arg_8, 1)
        else
            result = zx.q(*rdx_7)
            arg_8 = result.b
            *rcx_14 += 1
    else if (*(r8 + 0x152) != 0)
        bool rcx_12
        
        if (arg4 == 0)
            rcx_12 = *(arg5 + 8) s> 1 | rdx_2
        else
            rcx_12 = sub_14217beb0(arg1, arg4, &result_1) != 0 | (arg_8 & 0xfe)
        
        rbx.b *= 2
        arg_8 = (rcx_12 & 0xfd) | rbx.b
        goto label_14216b3a2
    
    if ((arg_8 & 1) != 0)
        int64_t var_60
        int64_t var_50
        int64_t* rbx_1
        
        if (arg4 == 0)
            rbx_1 = arg6
        else
            var_60 = *(arg4 + 0x18)
            sub_140b63b70(&var_60, &var_50)
            
            if (arg5 == &var_50)
                int64_t rcx_18 = var_50
                
                if (rcx_18 != 0)
                    sub_140a74f90(rcx_18)
                
                rbx_1 = *(arg4 + 0x20)
            else
                int64_t rcx_17 = *arg5
                
                if (rcx_17 != 0)
                    sub_140a74f90(rcx_17)
                
                *arg5 = var_50
                int64_t var_48
                *(arg5 + 8) = var_48.d
                *(arg5 + 0xc) = var_48:4.d
                rbx_1 = *(arg4 + 0x20)
        
        int32_t var_68
        int512_t zmm1_1 = sub_1421693f0(*(arg1 + 0x310), &var_68, rbx_1, nullptr)
        uint64_t r8_3 = zx.q(var_68)
        var_50 = 0
        int64_t var_48_1 = 0
        sub_14216b1e0(arg1, arg2, r8_3, rbx_1, &var_50, 0)
        int16_t* const r12_1 = &data_142d40450
        
        if (*(*(arg1 + 0x130) + 0x58) != 0)
            int16_t* rdx_12
            
            if (*(arg5 + 8) == 0)
                rdx_12 = &data_142d40450
            else
                rdx_12 = *arg5
            
            int64_t var_58
            zmm1_1 = sub_140b58260(&var_58, rdx_12, 1)
            int64_t rbx_2 = var_58
            void* r15_1 = *(*(arg1 + 0x130) + 0x58)
            int32_t rcx_25
            
            if (*(r15_1 + 0x380) == *(r15_1 + 0x3ac))
            label_14216b533:
                rcx_25 = 0
                var_60:4.d = 0
                var_60.d = 0
            else
                var_50 = rbx_2
                int32_t rax_24 = sub_140b5ead0(rbx_2.d) + var_50:4.d
                void* r8_4 = r15_1 + 0x3b0
                void* rcx_23 = *(r8_4 + 8)
                
                if (rcx_23 != 0)
                    r8_4 = rcx_23
                
                int32_t rax_26 = *(r8_4 + (((sx.q(*(r15_1 + 0x3c0)) - 1) & sx.q(rax_24)) << 2))
                
                if (rax_26 == 0xffffffff)
                    goto label_14216b533
                
                int64_t r8_5 = *(r15_1 + 0x378)
                int64_t rdx_16
                
                while (true)
                    rdx_16 = sx.q(rax_26)
                    int64_t rcx_24 = rdx_16 * 3
                    
                    if (*(r8_5 + (rcx_24 << 3)) == rbx_2)
                        break
                    
                    rax_26 = *(r8_5 + (rcx_24 << 3) + 0x10)
                    
                    if (rax_26 == 0xffffffff)
                        goto label_14216b533
                
                if (rax_26 == 0xffffffff)
                    goto label_14216b533
                
                void* rax_34 = r8_5 + rdx_16 * 0x18
                
                if (rax_34 == 0)
                    goto label_14216b533
                
                var_60 = *(rax_34 + 8)
                rcx_25 = var_60.d
            
            rcx_25.b = sub_140b5b8a0(rcx_25, 0) == 0
            
            if ((var_60:4.d != 0 | rcx_25.b) != 0)
                zmm1_1 = sub_140597da0(arg5, sub_140b63b70(&var_60, &var_50))
                int64_t rcx_28 = var_50
                
                if (rcx_28 != 0)
                    zmm1_1 = sub_140a74f90(rcx_28)
        
        int64_t* rcx_29 = data_143f5b298
        (*(*rcx_29 + 0x400))(rcx_29, *(*(arg1 + 0x130) + 0x58), arg5, 0)
        sub_140a1d9d0(arg2, arg5, zmm1_1)
        bool cond:1_1 = (arg_8 & 4) == 0
        int32_t arg_10 = 0
        
        if (not(cond:1_1))
            int32_t rax_30
            int512_t zmm1_2
            rax_30, zmm1_2 = sub_142168a70(*(arg1 + 0x310), arg4)
            int64_t* rcx_32 = arg2[1]
            arg_10 = rax_30
            int32_t* rdx_23 = *rcx_32
            
            if (&rdx_23[1] u> rcx_32[1])
                int32_t* rdx_24 = &arg_10
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg2, rdx_24, zmm1_2)
                else
                    (*(*arg2 + 0x150))(arg2, rdx_24, 4)
            else
                arg_10 = *rdx_23
                *rcx_32 += 4
        
        int64_t* r10_1 = *(arg1 + 0x310)
        int32_t* rdx_28
        
        if (r10_1[1].d == *(r10_1 + 0x34))
        label_14216b68d:
            rdx_28 = nullptr
        else
            void* rdx_25 = r10_1[8]
            void* r9_3 = &r10_1[7]
            int64_t result_2 = sx.q(result_1)
            
            if (rdx_25 != 0)
                r9_3 = rdx_25
            
            int32_t rax_38 = *(r9_3 + (((sx.q(r10_1[9].d) - 1) & result_2) << 2))
            
            if (rax_38 == 0xffffffff)
            label_14216b68d_1:
                rdx_28 = nullptr
            else
                while (true)
                    rdx_28 = sx.q(rax_38) * 0x38 + *r10_1
                    
                    if (*rdx_28 == result_2.d)
                        break
                    
                    rax_38 = rdx_28[0xc]
                    
                    if (rax_38 == 0xffffffff)
                        goto label_14216b68d_2
                
                if (rax_38 == 0xffffffff)
                label_14216b68d_2:
                    rdx_28 = nullptr
        
        void* rbx_3 = &rdx_28[2]
        
        if (rdx_28 == 0)
            rbx_3 = nullptr
        
        if (rbx_3 != 0)
            if (*(arg5 + 8) != 0)
                r12_1 = *arg5
            
            *(rbx_3 + 0xc) = *sub_140b58260(&var_50, r12_1, 1)
            *(rbx_3 + 8) = var_68
            *(rbx_3 + 0x20) ^= (arg_8 u>> 1 ^ *(rbx_3 + 0x20)) & 1
            *(rbx_3 + 0x20) ^= (*(rbx_3 + 0x20) ^ arg_8) & 2
            *(rbx_3 + 0x14) = arg_10
        
        result = *(arg1 + 0x310)
        
        if (*(result + 0x152) != 0)
            sub_141f77ab0(arg1 + 0x148, &var_60, &result_1, nullptr)
            result = sub_14215b400(arg1 + 0xe0, result_1, &result_1)
            *result += 1
    
    rcx_7 = *arg5
else
    result = arg5
    rcx_7 = *result

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
