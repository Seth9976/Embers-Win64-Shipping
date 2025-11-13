// 函数: sub_141755690
// 地址: 0x141755690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x1d8))(arg2, &data_1439a9538)
int32_t arg_8
(*(*arg1 + 0xa0))(arg1, &arg_8)
sub_14152ff50(arg2, &arg1[2], sub_141755af0(arg1, arg2))
sub_1417558e0(arg2, &arg1[4])
int64_t r15 = arg1[7]
int32_t rax_2
int512_t zmm1_1
rax_2, zmm1_1 = sub_140b4e7c0(arg2, &data_1439a9538)
int64_t* result

if (rax_2 s>= 0x1d)
    int64_t* rcx_16 = arg2[1]
    void* rdx_7 = *rcx_16
    bool cond:1_1
    
    if (rdx_7 + 4 u> rcx_16[1])
        int32_t rax_7
        rax_7.b = r15 != 0
        arg_8 = rax_7
        result = (*(*arg2 + 0x150))(arg2, &arg_8, 4)
        cond:1_1 = arg_8 != 0
    else
        cond:1_1 = *rdx_7 != 0
        result = rdx_7 + 4
        *rcx_16 = result
    
    if (cond:1_1 != 0)
        if ((arg2[5].b & 1) != 0)
            void*** rax_9 = j_sub_140a82f30(0x288)
            void*** rbx_2 = rax_9
            
            if (rax_9 == 0)
                rbx_2 = nullptr
            else
                sub_141703350(rax_9)
                sub_141703070(&rbx_2[0x36])
            
            if (&arg1[7] != &arg_8)
                void*** rbp_2 = arg1[7]
                arg1[7] = rbx_2
                
                if (rbp_2 != 0)
                    sub_141705ba0(&rbp_2[0x36])
                    sub_141705c70(rbp_2)
                    zmm1_1 = j_sub_140a74f90(rbp_2)
            else if (rbx_2 != 0)
                sub_141705ba0(&rbx_2[0x36])
                sub_141705c70(rbx_2)
                zmm1_1 = j_sub_140a74f90(rbx_2)
        
        return sub_141708e70(arg2, arg1[7], zmm1_1)
else
    void*** rax_3 = j_sub_140a82f30(0x288)
    void*** rbx_1 = rax_3
    
    if (rax_3 == 0)
        rbx_1 = nullptr
    else
        sub_141703350(rax_3)
        sub_141703070(&rbx_1[0x36])
    
    if (&arg1[7] != &arg_8)
        void*** r14_1 = arg1[7]
        arg1[7] = rbx_1
        
        if (r14_1 != 0)
            sub_141705ba0(&r14_1[0x36])
            sub_141705c70(r14_1)
            zmm1_1 = j_sub_140a74f90(r14_1)
    else if (rbx_1 != 0)
        sub_141705ba0(&rbx_1[0x36])
        sub_141705c70(rbx_1)
        zmm1_1 = j_sub_140a74f90(rbx_1)
    
    sub_141708e70(arg2, arg1[7], zmm1_1)
    int64_t* rcx_14 = arg2[1]
    result = *rcx_14 + 4
    
    if (result u> rcx_14[1])
        int64_t rax_5 = *arg2
        int32_t rbp_1
        rbp_1.b = r15 != 0
        arg_8 = rbp_1
        return (*(rax_5 + 0x150))(arg2, &arg_8, 4)
    
    *rcx_14 = result

return result
