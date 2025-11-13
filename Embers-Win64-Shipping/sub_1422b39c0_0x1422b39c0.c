// 函数: sub_1422b39c0
// 地址: 0x1422b39c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg4
int64_t* r14 = arg1

if (arg2 != 0)
    int64_t rcx = *(arg2[1] + 0x10)
    
    if (((rcx u>> 0x15).b & 1) != 0)
        int64_t rbx = sx.q(r14[1].d)
        int32_t rdi = *(arg2 + 0x4c)
        int32_t rax_4 = (rbx + 1).d
        r14[1].d = rax_4
        
        if (rax_4 s> *(r14 + 0xc))
            sub_1405c4e40(r14)
        
        int64_t r12_1 = rbx << 5
        int64_t* rsi_2 = *r14 + r12_1
        __builtin_memset(&rsi_2[1], 0, 0x18)
        *rsi_2 = arg2
        *(rsi_2 + 0xc) = arg3 + rdi
        *(rsi_2 + 0xa) = *(arg2[0xf] + 0x3c)
        *(rsi_2 + 0x14) = (rbp + 1).w
        *(rsi_2 + 0x16) = arg6.w
        int32_t rax_8 = sub_1422c66e0(arg2, arg9, arg8, arg7)
        rsi_2[3].d = rax_8
        sub_1422b39c0(r14, arg2[0xf], 0, 0, arg6, rax_8, 0, arg9)
        int64_t rbx_2 = sx.q(r14[1].d)
        int32_t rax_9 = (rbx_2 + 1).d
        r14[1].d = rax_9
        
        if (rax_9 s> *(r14 + 0xc))
            sub_1405c4e40(r14)
        
        void* rax_12 = (rbx_2 << 5) + *r14
        __builtin_memset(rax_12, 0, 0x20)
        *(rax_12 + 0x1c) = 1
        *(r12_1 + *r14 + 8) = r14[1].w
        return zx.q(rbp + 1)
    
    if (((rcx u>> 0x14).b & 1) != 0)
        void* rcx_8 = arg2[0xf]
        
        if (((*(rcx_8 + 0xb0) u>> 0xa).b & 1) == 0)
            void* i_2 = *(rcx_8 + 0x50)
            int64_t* r12_2 = nullptr
            void* var_50 = rcx_8
            int32_t i_6 = 0
            int32_t r13 = 0
            int64_t* var_60 = nullptr
            int32_t var_54 = 0
            int32_t var_40 = 0xffffffff
            int16_t var_3c = 0x101
            char var_3a = 0
            sub_1406328d0(&var_50)
            void* i = i_2
            
            if (i != 0)
                do
                    if ((0x80000000 & zx.q(*(i + 0x40))) == 0)
                        int64_t i_7 = sx.q(i_6)
                        i_6 = (i_7 + 1).d
                        
                        if (i_6 s> r13)
                            sub_1405a4d70(&var_60)
                            r13 = var_54
                            r12_2 = var_60
                        
                        r12_2[i_7] = i
                    
                    void* i_3 = *(i + 0x20)
                    sub_1406328d0(&var_50)
                    i = i_3
                while (i != 0)
                
                r14 = arg1
            
            sub_140bd47e0(r12_2, i_6, arg5)
            int32_t rax_18 = sub_1422c66e0(arg2, arg9, arg8, arg7)
            arg5.d = rax_18
            int32_t r9_2 = rax_18
            
            if (i_6 s> 0)
                uint64_t i_4 = zx.q(i_6)
                int64_t* rdi_2 = r12_2
                uint64_t i_5 = i_4
                uint64_t i_1
                
                do
                    int32_t j = 0
                    
                    if (*(*rdi_2 + 0x38) s> 0)
                        do
                            void* var_70_2 = arg9
                            int32_t j_1 = j
                            int32_t var_80_2 = r9_2
                            int32_t var_88_2 = arg6
                            j += 1
                            r9_2 = arg5.d
                            rbp = sub_1422b39c0(r14)
                        while (j s< *(*rdi_2 + 0x38))
                        
                        i_4 = i_5
                    
                    rdi_2 = &rdi_2[1]
                    i_1 = i_4
                    i_4 -= 1
                    i_5 = i_4
                while (i_1 != 1)
                r12_2 = var_60
            
            if (r12_2 != 0)
                sub_140a74f90(r12_2)
            
            return zx.q(rbp)

sub_1422b8980(r14, arg2, *(arg2 + 0x4c) + arg3, rbp.w + 1, arg6.w, arg7, arg8, arg9)
return zx.q(rbp + 1)
