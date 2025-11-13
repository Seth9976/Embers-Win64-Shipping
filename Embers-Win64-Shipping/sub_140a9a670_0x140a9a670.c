// 函数: sub_140a9a670
// 地址: 0x140a9a670
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

int64_t* result

if ((*(*(*arg1 + 8) + 0x28) & 1) == 0)
    int64_t* var_58
    int512_t zmm1_2 = sub_1407453e0(&var_58, arg2)
    int64_t* result_1
    result = result_1
    int32_t i_1
    
    for (int32_t i = i_1; i s< result[3].d; i = i_1)
        uint64_t* rdi_1 = *var_58 + sx.q(i) * 0x48
        zmm1_2 = sub_140a9a920(arg1, &rdi_1[2], sub_140a1d9d0(*(*arg1 + 8), rdi_1, zmm1_2))
        int32_t var_4c
        int32_t var_40 = var_40 & not.d(var_4c)
        void var_50
        sub_14059bdd0(&var_50)
        result = result_1
else
    result = sub_140aa9190(arg2, arg_8)
    int32_t r12_1 = 0
    
    if (arg_8 s> 0)
        do
            int32_t rdx_3 = *(arg2 + 0x34)
            int64_t rsi_1
            
            if (rdx_3 == 0)
                rsi_1 = zx.q(arg2[1].d)
                int32_t rax_9 = (rsi_1 + 1).d
                arg2[1].d = rax_9
                
                if (rax_9 s> *(arg2 + 0xc))
                    sub_140775520(arg2)
                
                int32_t rbp_1 = arg2[5].d
                sub_1405a4980(&arg2[2], rbp_1 + 1)
                arg2[5].d += 1
                void* rcx_8 = &arg2[2]
                void* rax_10 = arg2[4]
                
                if (rax_10 != 0)
                    rcx_8 = rax_10
                
                int32_t rax_11 = rbp_1
                
                if (rbp_1 s< 0)
                    rax_11 = rbp_1 + 0x1f
                
                void* rdx_6 = rcx_8 + (sx.q(rax_11 s>> 5) << 2)
                *rdx_6 &= not.d(1 << (rbp_1.b & 0x1f))
            else
                rsi_1 = sx.q(arg2[6].d)
                int64_t r9_1 = *arg2
                int64_t r8_1 = sx.q(*(r9_1 + rsi_1 * 0x48 + 4))
                arg2[6].d = r8_1.d
                *(arg2 + 0x34) = rdx_3 - 1
                
                if (rdx_3 != 1)
                    *(r9_1 + r8_1 * 0x48) = 0xffffffff
            
            void* rax_16 = arg2[4]
            void* rcx_10 = &arg2[2]
            
            if (rax_16 != 0)
                rcx_10 = rax_16
            
            int32_t rax_17 = rsi_1.d
            
            if (rsi_1.d s< 0)
                rax_17 = (rsi_1 + 0x1f).d
            
            void* r8_2 = rcx_10 + (sx.q(rax_17 s>> 5) << 2)
            *r8_2 |= 1 << (rsi_1.b & 0x1f)
            int64_t rdx_8 = *arg2
            int64_t rcx_13 = sx.q(rsi_1.d) * 9
            *(rdx_8 + (rcx_13 << 3)) = 0
            *(rdx_8 + (rcx_13 << 3) + 8) = 0
            uint64_t* r15_1 = rdx_8 + (rcx_13 << 3)
            r15_1[2].d = 4
            int512_t zmm1 = sub_1405d9400()
            r15_1[4] = data_143cd6fd8
            void* rcx_15 = data_143cd6fe0
            r15_1[5] = rcx_15
            
            if (rcx_15 != 0)
                *(rcx_15 + 8) += 1
            
            r15_1[6].d = data_143cd6fe8
            r15_1[7].b = 1
            r15_1[8].d = 0xffffffff
            result = sub_140a9a920(arg1, &r15_1[2], sub_140a1d9d0(*(*arg1 + 8), r15_1, zmm1))
            r12_1 += 1
        while (r12_1 s< arg_8)

return result
