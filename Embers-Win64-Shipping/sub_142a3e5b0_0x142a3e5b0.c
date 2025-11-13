// 函数: sub_142a3e5b0
// 地址: 0x142a3e5b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result
int512_t zmm1
result, zmm1 = sub_142a38150(arg1, arg3, arg4)

if (result s< 0)
    return result

int64_t* rcx = *arg3

if ((*(*rcx + 0x10))(rcx) != 0)
    int64_t* rcx_1 = *arg3
    int64_t* rbx_1 = rcx_1[1]
    int64_t rax_4 = sub_142a38690((*(*rcx_1 + 8))(rcx_1), rbx_1, zmm1)
    int64_t rcx_4 = *(*(*rbx_1 + 0x78) + 0x28)
    int64_t rax_5
    int64_t rdx_3
    
    if (rax_4 != 0)
        rdx_3:rax_5 = sx.o(0x7fffffffffffffff)
    
    int64_t rcx_5
    
    if (rax_4 == 0 || rcx_4 s<= divs.dp.q(rdx_3:rax_5, rax_4))
        rcx_5 = rcx_4 * rax_4
    else
        rcx_5 = -1
    
    if (arg2 s> rcx_5)
        void* rcx_6 = arg1[1]
        int64_t rdx_5 = *(rcx_6 + 0xa0)
        void* r15_1 = rdx_5 + (sx.q(rbx_1[2].d) << 3)
        void* rbx_2 = r15_1
        void* rbp_1 = rdx_5 + (sx.q(*(rcx_6 + 0xa8)) << 3)
        
        if (r15_1 u< rbp_1)
            do
                int64_t rax_11 = (rbp_1 - rbx_2) s>> 3
                
                if (rax_11 s< 0)
                    rax_11 += 1
                
                int64_t rax_12 = rax_11 s>> 1
                int64_t* rdi_1 = *(rbx_2 + (rax_12 << 3))
                void* rsi_1 = rbx_2 + (rax_12 << 3)
                void var_38
                void arg_20
                int32_t rax_13 = sub_142a38c20(rdi_1, &var_38, &arg_20, zmm1)
                int64_t rax_14 = sx.q(rax_13)
                
                if (rax_13 s>= 0)
                    rax_14 = rdi_1[5]
                
                if (rax_14 s>= 0)
                    rax_14 = *(*(*rdi_1 + 0x78) + 0x28) * rdi_1[5]
                
                if (rax_14 s> arg2)
                    rbp_1 = rsi_1
                else
                    rbx_2 = rsi_1 + 8
            while (rbx_2 u< rbp_1)
        
        void* rbx_3 = rbx_2 - 8
        void* rax_17
        int512_t zmm1_1
        rax_17, zmm1_1 = sub_142a37f30(*(rbx_2 - 8), arg1, arg2, zmm1)
        *arg3 = rax_17
        int32_t rax_19
        
        if (rax_17 != 0)
            rax_19 = (*(*rax_17 + 0x10))(rax_17)
        
        if (rax_17 == 0 || rax_19 == 0)
            while (rbx_3 != r15_1)
                int64_t* rcx_11 = *(rbx_3 - 8)
                rbx_3 -= 8
                void* rax_20
                rax_20, zmm1_1 = sub_142a37f30(rcx_11, arg1, arg2, zmm1_1)
                *arg3 = rax_20
                
                if (rax_20 != 0 && (*(*rax_20 + 0x10))(rax_20) != 0)
                    return 0
            
            *arg3 = &arg1[0x12]

return 0
