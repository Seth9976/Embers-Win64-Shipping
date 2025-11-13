// 函数: sub_1423759d0
// 地址: 0x1423759d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_140ce8e10(arg1, arg2)
(*(*arg2 + 0x1d8))(arg2, &data_1439a4b70)
(*(*arg2 + 0x1d8))(arg2, &data_1439a93f8)
(*(*arg2 + 0x1d8))(arg2, &data_1439a9478)
(*(*arg2 + 0x1d8))(arg2, &data_1439a4b70)
void arg_8
sub_141ff4780(&arg_8, arg2, 0, 0xd6)
int64_t* rdx_1 = arg2[1]
int64_t rcx_5 = *rdx_1
int32_t arg_10
bool cond:1

if (rcx_5 + 4 u> rdx_1[1])
    int32_t rax_6
    rax_6.b = arg2[0xe] != 0
    arg_10 = rax_6
    (*(*arg2 + 0x150))(arg2, &arg_10, 4)
    cond:1 = arg_10 != 0
else
    cond:1 = *rcx_5 != 0
    *rdx_1 = rcx_5 + 4

int64_t r14
r14.b = cond:1
(*(*arg2 + 0x130))(arg2, arg1 + 0x88)

if (arg2[8].d s>= 0xd8)
    (*(*arg2 + 0x130))(arg2, arg1 + 0x130)

(*(*arg2 + 0x1d8))(arg2, &data_1439a9418)

if ((arg2[5].b & 1) != 0)
    int32_t rax_11
    rax_11, zmm1 = sub_140b4e7c0(arg2, &data_1439a9418)
    
    if (rax_11 s< 1)
        void* rcx_11 = *(arg1 + 0x88)
        
        if (rcx_11 != 0)
            zmm1 = sub_142221760(rcx_11 + 0x120, data_143f3a598)

if (*(arg2 + 0x2a) s< 0)
    int64_t* rcx_13 = *(arg1 + 0x88)
    
    if (rcx_13 != 0)
        (*(*rcx_13 + 0xa0))(rcx_13, arg2)
    
    int64_t* rcx_14 = *(arg1 + 0x130)
    
    if (rcx_14 != 0)
        (*(*rcx_14 + 0xa0))(rcx_14, arg2)

sub_1409ac860(arg2, arg1 + 0xa8, zmm1)
sub_1408dc5a0(arg2, arg1 + 0xb8, zmm1)
void* const var_38

if (r14.b != 0 && sub_140d23dc0(arg1, 0x30) == 0 && *(arg2 + 0x2a) s>= 0 && (arg2[5].b & 1) != 0)
    int64_t* rax_15 = j_sub_140a82f30(0x68)
    int64_t* rbx_1 = rax_15
    
    if (rax_15 == 0)
        rbx_1 = nullptr
    else
        __builtin_memset(rax_15, 0, 0x20)
        __builtin_memset(rax_15 + 0x24, 0, 0x1c)
        *(rax_15 + 0x5c) = 0
        rax_15[0xc].b = 0
        arg_10 = 0
        int32_t rax_16 = arg_10
        rbx_1[4].d = rax_16
        *(rbx_1 + 0x24) = rax_16
        rbx_1[5].d = rax_16
        *(rbx_1 + 0x2c) = rax_16
        rbx_1[6].d = rax_16
        *(rbx_1 + 0x34) = rax_16
        rbx_1[7].d = rax_16
        *(rbx_1 + 0x3c) = rax_16
    
    if (arg1 + 0x50 != &arg_10)
        int64_t* rdx_10 = *(arg1 + 0x50)
        *(arg1 + 0x50) = rbx_1
        rbx_1 = nullptr
        sub_1423557c0(arg1 + 0x50, rdx_10)
    
    int512_t zmm1_1 = sub_1423557c0(&arg_10, rbx_1)
    char r8_3
    int512_t zmm0_1
    int512_t zmm1_2
    r8_3, zmm0_1, zmm1_2 = sub_1423749e0(*(arg1 + 0x50), arg2, arg1, r14.b, zmm1_1, var_38.b)
    zmm1 = sub_142376840(arg2, arg1, zmm0_1, zmm1_2, r8_3)

if (arg2[8].d s>= 0xeb)
    int64_t* rdx_14 = arg2[1]
    int64_t rcx_22 = *rdx_14
    bool cond:3_1
    
    if (rcx_22 + 4 u> rdx_14[1])
        int32_t rax_19
        rax_19.b = *(arg1 + 0xc8) != 0
        arg_10 = rax_19
        (*(*arg2 + 0x150))(arg2, &arg_10, 4)
        cond:3_1 = arg_10 != 0
    else
        cond:3_1 = *rcx_22 != 0
        *rdx_14 = rcx_22 + 4
    
    if (cond:3_1 != 0)
        if (*(arg1 + 0xc8) == 0)
            void* rax_21 = j_sub_140a82f30(0x890)
            void* rbx_2 = rax_21
            
            if (rax_21 == 0)
                rbx_2 = nullptr
            else
                sub_142350630(rax_21)
                *(rbx_2 + 0x534) = 0
                *(rbx_2 + 0x548) = -0x4010000000000000
                *(rbx_2 + 0x580) = 0x3ff0000000000000
                *(rbx_2 + 0x550) = 0
                *(rbx_2 + 0x558) = 1
                __builtin_memset(rbx_2 + 0x55c, 0, 0x24)
                *(rbx_2 + 0x588) = 0
                *(rbx_2 + 0x590) = 0
                __builtin_memset(rbx_2 + 0x598, 0, 0x14)
                *(rbx_2 + 0x5c8) = 0
                *(rbx_2 + 0x5d0) = 0
                *(rbx_2 + 0x538) = 0x3f800000
                *(rbx_2 + 0x5b8) = 0x3f800000
                *(rbx_2 + 0x5d8) = 0x3f800000
                *(rbx_2 + 0x5ac) = 0x3f800000
                *(rbx_2 + 0x540) = 0
                *(rbx_2 + 0x5c0) = 0
                __builtin_memset(rbx_2 + 0x5e0, 0, 0x65)
                *(rbx_2 + 0x5b4) = 0
            
            var_38 = rbx_2
            void*** rax_22 = j_sub_140a82f30(0x18)
            
            if (rax_22 == 0)
                rax_22 = nullptr
            else
                rax_22[1].d = 1
                *rax_22 = &data_143334720
                *(rax_22 + 0xc) = 1
                rax_22[2] = rbx_2
            
            int64_t* var_30_1 = rax_22
            int64_t* rbx_3
            
            if (arg1 + 0xc8 == &var_38)
            label_142375ea9:
                rbx_3 = var_30_1
            label_142375eae:
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t temp2_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp2_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
            else
                rbx_3 = var_30_1
                *(arg1 + 0xc8) = var_38
                int64_t* rsi_2 = *(arg1 + 0xd0)
                var_38 = nullptr
                
                if (rbx_3 == rsi_2)
                    goto label_142375eae
                
                var_30_1 = nullptr
                *(arg1 + 0xd0) = rbx_3
                
                if (rsi_2 != 0)
                    rsi_2[1].d -= 1
                    
                    if (rsi_2[1].d == 1)
                        (**rsi_2)(rsi_2)
                        int32_t temp3_1 = *(rsi_2 + 0xc)
                        *(rsi_2 + 0xc) -= 1
                        
                        if (temp3_1 == 1)
                            (*(*rsi_2 + 8))(rsi_2, 1)
                    
                    goto label_142375ea9
        
        zmm1 = sub_142352f80(arg2, *(arg1 + 0xc8), zmm1)

return sub_1423524b0(arg2, arg1 + 0x68, zmm1)
