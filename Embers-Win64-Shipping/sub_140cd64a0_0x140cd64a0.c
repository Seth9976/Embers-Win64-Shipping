// 函数: sub_140cd64a0
// 地址: 0x140cd64a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = arg2[1].d - *(arg2 + 0x34)
int64_t* r9 = *(*arg1 + 8)
int64_t* rcx = r9[1]
int32_t* rdx = *rcx

if (&rdx[1] u> rcx[1])
    int32_t* rdx_1 = &arg_8
    
    if ((*(r9 + 0x29) & 0x20) != 0)
        sub_140b54070(r9, rdx_1, arg3)
    else
        (*(*r9 + 0x150))(r9, rdx_1, 4)
else
    arg_8 = *rdx
    int64_t* rax_5 = r9[1]
    *rax_5 += 4

void* rax_8

if ((*(*(*arg1 + 8) + 0x28) & 1) == 0)
    void* var_58
    int512_t zmm1_1 = sub_1407453e0(&var_58, arg2)
    void* var_48
    rax_8 = var_48
    int32_t i_1
    
    for (int32_t i = i_1; i s< *(rax_8 + 0x18); i = i_1)
        void* rdi_3 = sx.q(i) * 0x60 + *var_58
        int64_t* rcx_24 = *(*arg1 + 8)
        (*(*rcx_24 + 0x108))(rcx_24, rdi_3)
        zmm1_1 = sub_140cd6810(arg1, rdi_3 + 8, zmm1_1)
        
        if ((*(*(*arg1 + 8) + 0x28) & 1) != 0)
            int64_t rcx_27 = *(rdi_3 + 0x48)
            
            if (rcx_27 != 0)
                *(rdi_3 + 0x48) = sub_140a84c80(rcx_27, 0, 0)
            
            *(rdi_3 + 0x50) = 0
            zmm1_1 = sub_1405b67e0(rdi_3 + 8, *(rdi_3 + 0x10) - *(rdi_3 + 0x3c), 0)
        
        int32_t var_4c
        int32_t var_40 = var_40 & not.d(var_4c)
        void var_50
        sub_14059bdd0(&var_50)
        rax_8 = var_48
else
    int512_t zmm1
    rax_8, zmm1 = sub_140cda6f0(arg2, arg_8)
    int32_t r12_1 = 0
    
    if (arg_8 s> 0)
        void* rax_25
        
        do
            int32_t rdx_3 = *(arg2 + 0x34)
            int64_t rsi_1
            
            if (rdx_3 == 0)
                rsi_1 = zx.q(arg2[1].d)
                int32_t rax_10 = (rsi_1 + 1).d
                arg2[1].d = rax_10
                
                if (rax_10 s> *(arg2 + 0xc))
                    sub_14090a6a0(arg2)
                
                int32_t rbp_1 = arg2[5].d
                sub_1405a4980(&arg2[2], rbp_1 + 1)
                arg2[5].d += 1
                void* rcx_10 = &arg2[2]
                void* rax_11 = arg2[4]
                
                if (rax_11 != 0)
                    rcx_10 = rax_11
                
                int32_t rax_12 = rbp_1
                
                if (rbp_1 s< 0)
                    rax_12 = rbp_1 + 0x1f
                
                void* rdx_6 = rcx_10 + (sx.q(rax_12 s>> 5) << 2)
                *rdx_6 &= not.d(1 << (rbp_1.b & 0x1f))
            else
                rsi_1 = sx.q(arg2[6].d)
                int64_t r9_1 = *arg2
                int64_t r8_1 = sx.q(*(rsi_1 * 0x60 + r9_1 + 4))
                arg2[6].d = r8_1.d
                *(arg2 + 0x34) = rdx_3 - 1
                
                if (rdx_3 != 1)
                    *(r8_1 * 0x60 + r9_1) = 0xffffffff
            
            void* rax_17 = arg2[4]
            void* rcx_12 = &arg2[2]
            
            if (rax_17 != 0)
                rcx_12 = rax_17
            
            int32_t rax_18 = rsi_1.d
            
            if (rsi_1.d s< 0)
                rax_18 = (rsi_1 + 0x1f).d
            
            void* r8_2 = rcx_12 + (sx.q(rax_18 s>> 5) << 2)
            *r8_2 |= 1 << (rsi_1.b & 0x1f)
            int32_t* rdx_9 = *arg2 + sx.q(rsi_1.d) * 0x60
            void* rcx_17 = &rdx_9[6]
            *rdx_9 = 0xffffffff
            __builtin_memset(&rdx_9[1], 0, 0x50)
            *(rdx_9 + 0x10) = 0
            *(rdx_9 + 0x48) = 0
            *(rdx_9 + 0x50) = 0
            *(rcx_17 + 0x1c) = 0x80
            void* rax_22 = *(rcx_17 + 0x10)
            
            if (rax_22 != 0)
                rcx_17 = rax_22
            
            __builtin_memset(rcx_17, 0, 0x1c)
            rdx_9[0xe] = 0xffffffff
            rdx_9[0x16] = 0xffffffff
            int64_t* rcx_18 = *(*arg1 + 8)
            (*(*rcx_18 + 0x108))(rcx_18)
            zmm1 = sub_140cd6810(arg1, &rdx_9[2], zmm1)
            rax_25 = *arg1
            
            if ((*(*(rax_25 + 8) + 0x28) & 1) != 0)
                int64_t rcx_21 = *(rdx_9 + 0x48)
                
                if (rcx_21 != 0)
                    *(rdx_9 + 0x48) = sub_140a84c80(rcx_21, 0, 0)
                
                rdx_9[0x14] = 0
                rax_25, zmm1 = sub_1405b67e0(&rdx_9[2], rdx_9[4] - rdx_9[0xf], 0)
            
            r12_1 += 1
        while (r12_1 s< arg_8)
        
        return rax_25

return rax_8
