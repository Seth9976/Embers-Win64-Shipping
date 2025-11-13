// 函数: sub_1429a72a0
// 地址: 0x1429a72a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax
int64_t rdx_1
rdx_1:rax = muls.dp.q(0x4924924924924925, arg2 - arg1)
uint64_t result = rdx_1 s>> 4 u>> 0x3f
int64_t rbp_2 = (arg2 - arg1) s/ 0x38
int64_t i = rbp_2 s>> 1

if (i s> 0)
    int64_t rsi_2 = (rbp_2 - 1) s>> 1
    void* rdi_2 = i * 0x38 + arg1
    
    do
        int128_t zmm0 = *(rdi_2 - 0x38)
        rdi_2 -= 0x38
        i -= 1
        int64_t i_2 = i
        int64_t i_1 = i
        int96_t var_48_1 = zmm0.12
        zmm0 = *(rdi_2 + 0x20)
        uint96_t var_38_1 = (*(rdi_2 + 0x10)).12
        int64_t var_18_1 = *(rdi_2 + 0x30)
        
        if (i s< rsi_2)
            do
                int64_t rdx_2 = i_1 * 2
                int64_t rcx = rdx_2 * 0x38
                i_1 = sbb.q(i_1, i_1, *(rcx + arg1 + 0x70) u< *(rcx + arg1 + 0x38)) + rdx_2 + 2
                int64_t* rdx_5 = i_2 * 0x38 + arg1
                i_2 = i_1
                int64_t* rcx_2 = i_1 * 0x38 + arg1
                *rdx_5 = *rcx_2
                rdx_5[1].b = rcx_2[1].b
                *(rdx_5 + 0xa) = *(rcx_2 + 0xa)
                rdx_5[2] = rcx_2[2]
                rdx_5[3].d = rcx_2[3].d
                rdx_5[4] = rcx_2[4]
                rdx_5[5] = rcx_2[5]
                rdx_5[6].d = rcx_2[6].d
                *(rdx_5 + 0x34) = *(rcx_2 + 0x34)
            while (i_1 s< rsi_2)
        
        if (i_1 == rsi_2 && (rbp_2.b & 1) == 0)
            void* rdx_6 = i_2 * 0x38
            void* rcx_4 = rbp_2 * 0x38 + arg1
            i_2 = rbp_2 - 1
            int64_t* rdx_7 = rdx_6 + arg1
            *rdx_7 = *(rcx_4 - 0x38)
            rdx_7[1].b = *(rcx_4 - 0x30)
            *(rdx_7 + 0xa) = *(rcx_4 - 0x2e)
            rdx_7[2] = *(rcx_4 - 0x28)
            rdx_7[3].d = *(rcx_4 - 0x20)
            rdx_7[4] = *(rcx_4 - 0x18)
            rdx_7[5] = *(rcx_4 - 0x10)
            rdx_7[6].d = *(rcx_4 - 8)
            *(rdx_7 + 0x34) = *(rcx_4 - 4)
        
        int64_t rbx_1 = var_48_1.q
        int64_t i_3 = (i_2 - 1) s>> 1
        
        while (i s< i_2)
            int64_t* rax_21 = i_3 * 0x38
            int64_t rcx_5 = *(rax_21 + arg1)
            
            if (rcx_5 u>= rbx_1)
                break
            
            void* rdx_8 = i_2 * 0x38
            i_2 = i_3
            int64_t* rdx_9 = rdx_8 + arg1
            i_3 = (i_3 - 1) s>> 1
            *rdx_9 = rcx_5
            rdx_9[1].b = *(rax_21 + arg1 + 8)
            *(rdx_9 + 0xa) = *(rax_21 + arg1 + 0xa)
            rdx_9[2] = *(rax_21 + arg1 + 0x10)
            rdx_9[3].d = *(rax_21 + arg1 + 0x18)
            rdx_9[4] = *(rax_21 + arg1 + 0x20)
            rdx_9[5] = *(rax_21 + arg1 + 0x28)
            rdx_9[6].d = *(rax_21 + arg1 + 0x30)
            *(rdx_9 + 0x34) = *(rax_21 + arg1 + 0x34)
        
        void* rcx_15 = i_2 * 0x38 + arg1
        *(rcx_15 + 8) = var_48_1:8.b
        *rcx_15 = rbx_1
        *(rcx_15 + 0xa) = var_48_1:0xa.w
        *(rcx_15 + 0x10) = var_38_1.q
        *(rcx_15 + 0x18) = var_38_1:8.d
        *(rcx_15 + 0x20) = zmm0.q
        *(rcx_15 + 0x28) = zmm0:8.q
        *(rcx_15 + 0x30) = var_18_1.d
        result = zx.q(var_18_1:4.d)
        *(rcx_15 + 0x34) = result.d
    while (i s> 0)

return result
