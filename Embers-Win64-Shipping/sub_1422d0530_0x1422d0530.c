// 函数: sub_1422d0530
// 地址: 0x1422d0530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg4
int64_t* r14 = arg7
int32_t r13 = -1
void var_1c8
sub_140bd5b60(&var_1c8, r14[0x17], 0)
int64_t var_138
char arg_38

if (sub_1422cb580(arg8) != 0)
    int64_t rax_1 = arg1 + 0x38
    int64_t var_220_1 = rax_1
    bool cond:3_1
    
    do
        int64_t r8 = sx.q(arg8[6].d)
        int64_t* r12_3 = (r8 << 5) + *rax_1
        int64_t* rbx_2 = sx.q(arg8[7].d) + sx.q(*(r12_3 + 0xc)) + arg9
        arg5 = sub_14217e090(arg3, rdi, r8.d)
        int32_t var_238
        
        if (*(arg8 + 0x1c) s> 0 && *(arg8 + 0x34) != r13)
            if (r13 != 0xffffffff)
                int64_t rax_4 = *r14
                var_238 = 0
                (*(rax_4 + 0x168))(r14, &var_238)
                
                if (arg_38 != 0)
                    int64_t* rcx_4 = r14[1]
                    arg7.d = 0xabadf00d
                    int32_t* rdx_3 = *rcx_4
                    
                    if (&rdx_3[1] u> rcx_4[1])
                        int32_t* rdx_4 = &arg7
                        
                        if ((*(r14 + 0x29) & 0x20) != 0)
                            sub_140b54070(r14, rdx_4, arg5)
                        else
                            (*(*r14 + 0x150))(r14, rdx_4, 4)
                    else
                        arg7.d = *rdx_3
                        *rcx_4 += 4
            
            int32_t var_228 = *(arg8 + 0x34) + 1
            (*(*r14 + 0x168))(r14, &var_228)
            r13 = *(arg8 + 0x34)
        
        var_238 = arg8[6].d + 1
        (*(*r14 + 0x168))(r14, &var_238)
        
        if (arg_38 != 0)
            int64_t* rcx_8 = r14[1]
            arg7.d = 0xabadf00d
            int32_t* rdx_7 = *rcx_8
            
            if (&rdx_7[1] u> rcx_8[1])
                int32_t* rdx_8 = &arg7
                
                if ((*(r14 + 0x29) & 0x20) != 0)
                    sub_140b54070(r14, rdx_8, arg5)
                else
                    (*(*r14 + 0x150))(r14, rdx_8, 4)
            else
                arg7.d = *rdx_7
                *rcx_8 += 4
        
        void* var_260
        char var_258
        int64_t* var_250
        int64_t var_248
        
        if (*(r12_3 + 0x1c) != 0)
            int32_t rdi_2 = arg8[6].d
            void** var_108
            sub_140bd5b60(&var_108, r14[0x17], 0)
            int64_t* rcx_18 = *r12_3
            int64_t var_50
            (*(*rcx_18 + 0x90))(rcx_18, &var_108, var_50, rbx_2, 0, var_260, var_258, var_250, 
                var_248)
            int32_t var_68
            int32_t var_22c = var_68
            (*(*r14 + 0x168))(r14, &var_22c)
            int64_t var_78
            (*(*r14 + 0x158))(r14, var_78, zx.q(var_22c))
            
            if (arg_38 != 0)
                sub_1422b3d30(r12_3, rdi_2, rbx_2, r14, arg5)
            
            if (var_78 != 0)
                sub_140a74f90(var_78)
            
            arg5 = sub_140b4cb40(&var_108)
        else
            int64_t rdi_1 = *rbx_2
            arg7.d = rbx_2[1].d
            void* rax_18 = *arg8
            *(rax_18 + 8) += 1
            void* r8_1 = *(*arg8[2] + zx.q(*(r12_3 + 0x14)) * 0x10 - 8)
            int64_t var_218 = *arg8
            int64_t var_210_1 = var_220_1
            void* var_208_1 = r8_1
            int32_t var_200_1 = *(r8_1 + 8)
            uint32_t var_1fc_1 = zx.d(*(r12_3 + 0xa))
            int32_t var_1f8_1 = arg7.d
            int32_t var_1d0_1 = 0xffffffff
            int32_t var_1f4_1 = arg8[6].d + 1
            int32_t var_1f0_1 = zx.d(r12_3[1].w) - 1
            int64_t var_1d8_1 = arg8[8]
            sub_140b527a0(&var_1c8)
            sub_140b54c70(&var_1c8, &arg7)
            
            if (arg7.d u> 0)
                var_248 = rdi_1
                var_250 = &var_218
                var_258 = arg_38
                var_260 = &var_1c8
                sub_1422d0530(arg1, arg2, arg3, arg4, arg6, var_260, var_258, var_250, var_248)
            
            int32_t var_224 = 0
            sub_140b54c70(&var_1c8, &var_224)
            int32_t var_128
            int32_t var_230 = var_128
            (*(*r14 + 0x168))(r14, &var_230)
            (*(*r14 + 0x158))(r14, var_138, zx.q(var_230))
            void* rax_35 = *arg8
            *(rax_35 + 8) += 1
        rdi = arg4
        cond:3_1 = sub_1422cb580(arg8) != 0
        rax_1 = var_220_1
    while (cond:3_1)

arg7.d = 0
(*(*r14 + 0x168))(r14, &arg7)

if (arg_38 != 0)
    int64_t* rcx_26 = r14[1]
    arg_38.d = 0xabadf00d
    int32_t* rdx_22 = *rcx_26
    
    if (&rdx_22[1] u> rcx_26[1])
        int32_t* rdx_23 = &arg_38
        
        if ((*(r14 + 0x29) & 0x20) != 0)
            sub_140b54070(r14, rdx_23, arg5)
        else
            (*(*r14 + 0x150))(r14, rdx_23, 4)
    else
        arg_38.d = *rdx_22
        *rcx_26 += 4

if (var_138 != 0)
    sub_140a74f90(var_138)

return sub_140b4cb40(&var_1c8)
