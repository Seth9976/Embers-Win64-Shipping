// 函数: sub_1422cfad0
// 地址: 0x1422cfad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_20 = arg4
int64_t rbx = arg1
int64_t* r14 = arg3
char r15 = arg4
void var_1c8
sub_140bd5b60(&var_1c8, r14[0x17], 0)
int32_t i_1
int32_t i_3 = i_1
int32_t i_2 = 0
int64_t var_138
int32_t arg_40

if (i_3 s< arg_40)
    int64_t rsi_1 = arg8
    
    do
        int64_t* r12_3 = (sx.q(i_3) << 5) + *(rbx + 0x38)
        arg5 = sub_14217e090(arg6, arg7, i_3)
        int32_t var_1e0 = i_3 + 1
        (*(*r14 + 0x168))(r14, &var_1e0)
        
        if (r15 != 0)
            int64_t* rcx_3 = r14[1]
            i_1 = 0xabadf00d
            int32_t* rdx_3 = *rcx_3
            
            if (&rdx_3[1] u> rcx_3[1])
                int32_t* rdx_4 = &i_1
                
                if ((*(r14 + 0x29) & 0x20) != 0)
                    sub_140b54070(r14, rdx_4, arg5)
                else
                    (*(*r14 + 0x150))(r14, rdx_4, 4)
            else
                i_1 = *rdx_3
                *rcx_3 += 4
        
        int64_t* rbx_2 = sx.q(*(r12_3 + 0xc)) + rsi_1
        void* var_210
        int32_t var_208
        int32_t var_200
        int64_t var_1f8
        
        if (*(r12_3 + 0x1c) != 0)
            void** var_108
            sub_140bd5b60(&var_108, r14[0x17], 0)
            int64_t* rcx_15 = *r12_3
            int64_t var_50
            (*(*rcx_15 + 0x90))(rcx_15, &var_108, var_50, rbx_2, 0, var_210, var_208, var_200, 
                var_1f8)
            int32_t var_68
            int32_t var_1e4 = var_68
            (*(*r14 + 0x168))(r14, &var_1e4)
            int64_t var_78
            (*(*r14 + 0x158))(r14, var_78, zx.q(var_1e4))
            
            if (r15 != 0)
                sub_1422b3d30(r12_3, i_3, rbx_2, r14, arg5)
            
            if (var_78 != 0)
                sub_140a74f90(var_78)
            
            arg5 = sub_140b4cb40(&var_108)
        else
            int64_t rdi = *rbx_2
            sub_140b527a0(&var_1c8)
            int32_t var_1d8 = rbx_2[1].d
            sub_140b54c70(&var_1c8, &var_1d8)
            
            if (rbx_2[1].d s> 0)
                char r14_1 = arg_20
                int32_t i
                
                do
                    i = i_2 + 1
                    i_1 = i
                    sub_140b54c70(&var_1c8, &i_1)
                    var_1f8 = sx.q(zx.d(*(r12_3 + 0xa)) * i_2) + rdi
                    var_200 = zx.d(r12_3[1].w) - 1
                    var_208 = i_3 + 1
                    var_210 = arg7
                    sub_1422cfad0(arg1, arg2, &var_1c8, zx.q(r14_1), arg6, var_210, var_208, 
                        var_200, var_1f8)
                    i_2 = i
                while (i s< rbx_2[1].d)
                rsi_1 = arg8
                r14 = arg3
                r15 = arg_20
            
            i_2 = 0
            int32_t var_1d0 = 0
            sub_140b54c70(&var_1c8, &var_1d0)
            int32_t var_128
            int32_t var_1e8 = var_128
            (*(*r14 + 0x168))(r14, &var_1e8)
            (*(*r14 + 0x158))(r14, var_138, zx.q(var_1e8))
            i_3 = zx.d(r12_3[1].w) - 1
        rbx = arg1
        i_3 += 1
    while (i_3 s< arg_40)

int64_t rax_20 = *r14
arg_40 = 0
(*(rax_20 + 0x168))(r14, &arg_40)

if (r15 != 0)
    int64_t* rcx_22 = r14[1]
    arg_20.d = 0xabadf00d
    int32_t* rdx_17 = *rcx_22
    
    if (&rdx_17[1] u> rcx_22[1])
        int32_t* rdx_18 = &arg_20
        
        if ((*(r14 + 0x29) & 0x20) != 0)
            sub_140b54070(r14, rdx_18, arg5)
        else
            (*(*r14 + 0x150))(r14, rdx_18, 4)
    else
        arg_20.d = *rdx_17
        *rcx_22 += 4

if (var_138 != 0)
    sub_140a74f90(var_138)

return sub_140b4cb40(&var_1c8)
