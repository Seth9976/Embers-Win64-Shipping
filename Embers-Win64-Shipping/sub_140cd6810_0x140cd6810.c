// 函数: sub_140cd6810
// 地址: 0x140cd6810
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
        void* rdi_3 = (sx.q(i) << 5) + *var_58
        int64_t* rcx_16 = *(*arg1 + 8)
        (*(*rcx_16 + 0x140))(rcx_16, rdi_3)
        zmm1_1 = sub_140a1d9d0(*(*arg1 + 8), rdi_3 + 8, zmm1_1)
        int32_t var_4c
        int32_t var_40 = var_40 & not.d(var_4c)
        void var_50
        sub_14059bdd0(&var_50)
        rax_8 = var_48
else
    int512_t zmm1
    rax_8, zmm1 = sub_1407547c0(arg2, arg_8)
    int32_t r15_1 = 0
    
    if (arg_8 s> 0)
        int64_t* rax_27
        
        do
            int32_t rcx_4 = *(arg2 + 0x34)
            int64_t rsi_1
            
            if (rcx_4 == 0)
                rsi_1 = zx.q(arg2[1].d)
                int32_t rax_14 = (rsi_1 + 1).d
                arg2[1].d = rax_14
                
                if (rax_14 s> *(arg2 + 0xc))
                    sub_1405c4e40(arg2)
                
                int32_t rbp_1 = arg2[5].d
                sub_1405a4980(&arg2[2], rbp_1 + 1)
                arg2[5].d += 1
                void* rcx_7 = &arg2[2]
                void* rax_15 = arg2[4]
                
                if (rax_15 != 0)
                    rcx_7 = rax_15
                
                int32_t rax_16 = rbp_1
                
                if (rbp_1 s< 0)
                    rax_16 = rbp_1 + 0x1f
                
                void* rdx_6 = rcx_7 + (sx.q(rax_16 s>> 5) << 2)
                *rdx_6 &= not.d(1 << (rbp_1.b & 0x1f))
            else
                rsi_1 = sx.q(arg2[6].d)
                uint64_t r8_1 = *arg2
                int64_t rdx_3 = sx.q(*((rsi_1 << 5) + r8_1 + 4))
                arg2[6].d = rdx_3.d
                *(arg2 + 0x34) = rcx_4 - 1
                
                if (rcx_4 != 1)
                    *((rdx_3 << 5) + r8_1) = 0xffffffff
            
            void* rax_21 = arg2[4]
            void* rcx_9 = &arg2[2]
            
            if (rax_21 != 0)
                rcx_9 = rax_21
            
            int32_t rax_22 = rsi_1.d
            
            if (rsi_1.d s< 0)
                rax_22 = (rsi_1 + 0x1f).d
            
            void* r8_2 = rcx_9 + (sx.q(rax_22 s>> 5) << 2)
            *r8_2 |= 1 << (rsi_1.b & 0x1f)
            int64_t rdx_10 = (sx.q(rsi_1.d) << 5) + *arg2
            __builtin_memset(rdx_10, 0, 0x18)
            *(rdx_10 + 0x10) = 0
            *(rdx_10 + 0x18) = 0xffffffff
            int64_t* rcx_12 = *(*arg1 + 8)
            (*(*rcx_12 + 0x140))(rcx_12)
            rax_27, zmm1 = sub_140a1d9d0(*(*arg1 + 8), rdx_10 + 8, zmm1)
            r15_1 += 1
        while (r15_1 s< arg_8)
        
        return rax_27

return rax_8
