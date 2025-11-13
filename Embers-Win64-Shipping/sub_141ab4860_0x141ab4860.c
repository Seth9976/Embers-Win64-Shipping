// 函数: sub_141ab4860
// 地址: 0x141ab4860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x238) = 0

if (*(arg1 + 0x23c) s<= 0xffffffff)
    sub_1405c55e0(arg1 + 0x230, 0)

int64_t r13 = sx.q(sub_14078ee20(arg2, arg1 + 0xc8))
int32_t i_1 = sub_14078ee20(arg2, arg1 + 0xd8)
int32_t i = i_1

if (r13.d != 0xffffffff && i_1 != 0xffffffff)
    if (i_1 != r13.d)
        do
            if (i == 0xffffffff)
                int32_t rax_5 = *(arg1 + 0x23c)
                *(arg1 + 0x238) = 0
                
                if (rax_5 s< 0 && rax_5 != 0)
                    sub_1405c55e0(arg1 + 0x230, 0)
                
                break
            
            int64_t rbp_1 = sx.q(*(arg1 + 0x238))
            int32_t rax_2 = (rbp_1 + 1).d
            int64_t r12_1 = sx.q(i) * 0xc
            int64_t rbx_2 = *(r12_1 + *(arg2 + 0x20))
            *(arg1 + 0x238) = rax_2
            
            if (rax_2 s> *(arg1 + 0x23c))
                sub_1405c4d20(arg1 + 0x230)
            
            int64_t rdx_3 = *(arg1 + 0x230)
            memmove(rdx_3 + 0x14, rdx_3, (rbp_1 * 0x14).d)
            int64_t* rax_3 = *(arg1 + 0x230)
            *rax_3 = rbx_2
            rax_3[1].d = 0x7fffffff
            *(rax_3 + 0xc) = 0xffffffff
            rax_3[2].d = i
            i = *(r12_1 + *(arg2 + 0x20) + 8)
        while (i != r13.d)
    
    if (*(arg1 + 0x238) != 0)
        int64_t rsi = sx.q(*(arg1 + 0x238))
        int32_t rax_6 = (rsi + 1).d
        int64_t rbx_4 = *(*(arg2 + 0x20) + r13 * 0xc)
        *(arg1 + 0x238) = rax_6
        
        if (rax_6 s> *(arg1 + 0x23c))
            sub_1405c4d20(arg1 + 0x230)
        
        int64_t rdx_5 = *(arg1 + 0x230)
        memmove(rdx_5 + 0x14, rdx_5, (rsi * 0x14).d)
        int64_t* rax_7 = *(arg1 + 0x230)
        *rax_7 = rbx_4
        rax_7[1].d = 0x7fffffff
        *(rax_7 + 0xc) = 0xffffffff
        rax_7[2].d = r13.d
        int32_t rdx_6
        
        if (*(arg1 + 0xe9) == 0)
            rdx_6 = *(arg1 + 0xec)
            
            if (rdx_6 s<= 2)
                rdx_6 = 2
        else
            rdx_6 = *(arg1 + 0x238)
        
        sub_141acd8a0(arg1 + 0xf0, rdx_6, 1)

return sub_141a95e80(arg1, arg2) __tailcall
