// 函数: sub_140ca8010
// 地址: 0x140ca8010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[9].d s> 0)
    sub_140ca2400(arg1)

int64_t rbx = 0

if (&arg1[8] != arg2)
    int64_t rbp_1 = sx.q(arg2[1].d)
    int64_t r14_1 = *arg2
    int32_t r8 = *(arg1 + 0x4c)
    arg1[9].d = rbp_1.d
    
    if (rbp_1.d != 0 || r8 != 0)
        sub_1405a4be0(&arg1[8], rbp_1.d, r8)
        memcpy(arg1[8], r14_1, (rbp_1 << 4).d)
    else
        *(arg1 + 0x4c) = 0

arg1[0xa].d = arg3
int64_t result

if (arg4 == 0)
    sub_140bd7fe0(arg1)
    result.b = 1
else if (sub_140bd9780(arg1) != 0)
    sub_140bd7fe0(arg1)
    result.b = 1
else
    int64_t var_38
    int64_t* rax_2 = sub_140bdc6b0(arg1, &var_38)
    int16_t* rcx_4 = *rax_2
    int32_t rdx_3 = rax_2[1].d
    int32_t rdx_4 = neg.d(rdx_3)
    *rax_2 = 0
    int32_t r8_3 = rax_2[1].d
    int16_t* var_58 = rcx_4
    int32_t rcx_5 = *(rax_2 + 0xc)
    int32_t rdx_7 = sbb.d(rdx_4, rdx_4, rdx_3 != 0) + 5 + r8_3
    int32_t var_4c_1 = rcx_5
    rax_2[1] = 0
    
    if (rdx_7 s> rcx_5)
        sub_1405947f0(&var_58, rdx_7)
    
    sub_140a20ba0(&var_58, u"_MAX", 4)
    int16_t* const r14_2 = &data_142d40450
    int16_t* rbp_2 = var_58
    var_58 = nullptr
    int16_t* const r8_4 = &data_142d40450
    
    if (r8_3 != 0)
        r8_4 = rbp_2
    
    int32_t var_50_1
    var_50_1.q = 0
    int64_t var_48
    int16_t** rax_5 = (*(*arg1 + 0x288))(arg1, &var_48, r8_4)
    
    if (rax_5[1].d != 0)
        r14_2 = *rax_5
    
    int64_t arg_8
    sub_140b58260(&arg_8, r14_2, 1)
    int64_t rcx_10 = var_48
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    if (rbp_2 != 0)
        sub_140a74f90(rbp_2)
    
    int64_t rcx_12 = var_38
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    if (sub_140be2dd0(arg_8, nullptr) == -1)
        int64_t i_1 = sx.q(arg1[9].d)
        
        if (i_1.d != 0)
            int64_t* rcx_15 = arg1[8] + 8
            rbx = *rcx_15
            
            if (i_1 s> 0)
                int64_t i
                
                do
                    int64_t rax_6 = *rcx_15
                    rcx_15 = &rcx_15[2]
                    
                    if (rax_6 s<= rbx)
                        rax_6 = rbx
                    
                    rbx = rax_6
                    i = i_1
                    i_1 -= 1
                while (i != 1)
        
        int64_t rbx_1 = sx.q(arg1[9].d)
        int32_t rax_7 = (rbx_1 + 1).d
        arg1[9].d = rax_7
        
        if (rax_7 s> *(arg1 + 0x4c))
            sub_1405a4f90(&arg1[8])
        
        int64_t* rcx_19 = (rbx_1 << 4) + arg1[8]
        *rcx_19 = arg_8
        rcx_19[1] = rbx + 1
        sub_140bd7fe0(arg1)
        result.b = 1
    else
        result.b = 0

return result
