// 函数: sub_1413c9410
// 地址: 0x1413c9410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr
int32_t i = 0

if (arg1[2].d u> 0)
    do
        int96_t zmm0 = (*(arg1[1] + zx.q(i) * 0x10)).12
        int64_t* rsi_1 = zmm0.q
        int32_t rbx_1
        
        if (*(arg1 + 0x14) == 0)
            rbx_1 = 0
        else
            rbx_1 = rsi_1[0xf].d
        
        int32_t r12_1 = zmm0:8.d
        sub_141298c60(rsi_1, *arg1, r12_1, zx.d(*(rsi_1 + 0x7c)), rbx_1, 0)
        uint64_t rcx_7
        void* rdx_3
        
        if (*(rsi_1 + 0x7e) == 0)
            void** rbx_3 = *arg1
            rdx_3 = rbx_3[1]
            
            if (rdx_3 == 0 || *(rdx_3 + 0xa008) == 0x400)
                void* rbp_2 = rdx_3
                void* rax_11 = (rbx_3[2] + 7) & 0xfffffffffffffff8
                void* rcx_8 = rax_11 + 0xa010
                
                if (rcx_8 u> rbx_3[3])
                    sub_140b0e3d0(&rbx_3[2], 0xa018)
                    rax_11 = (rbx_3[2] + 7) & 0xfffffffffffffff8
                    rcx_8 = rax_11 + 0xa010
                
                rbx_3[2] = rcx_8
                rbx_3[1] = rax_11
                *(rax_11 + 0xa000) = 0
                *(rbx_3[1] + 0xa008) = 0
                rdx_3 = rbx_3[1]
                
                if (*rbx_3 == 0)
                    *rbx_3 = rdx_3
                
                if (rbp_2 != 0)
                    *(rbp_2 + 0xa000) = rdx_3
                    rdx_3 = rbx_3[1]
            
            uint64_t rcx_10 = zx.q(*(rdx_3 + 0xa008))
            *(rdx_3 + 0xa008) = (rcx_10 + 1).d
            rcx_7 = rcx_10 * 5
            *(rdx_3 + (rcx_7 << 3) + 4) = 0
            *(rdx_3 + (rcx_7 << 3) + 0xc) = 0
            *(rdx_3 + (rcx_7 << 3) + 0x14) = 0
            *(rdx_3 + (rcx_7 << 3) + 0x18) = 0
            *(rdx_3 + (rcx_7 << 3) + 0x20) = 0
            *(rdx_3 + (rcx_7 << 3)) = r12_1
            *(rdx_3 + (rcx_7 << 3) + 4) = zx.d(*(rsi_1 + 0x7c))
            *(rdx_3 + (rcx_7 << 3) + 8) = 1
            result = *(arg1 + 0x1c)
            *(rdx_3 + (rcx_7 << 3) + 0xc) = result
        else if (*(rsi_1 + 0x7f) != 0 || *(arg1 + 0x15) == 0)
            int64_t* rbx_2 = *arg1
            rdx_3 = rbx_2[1]
            
            if (rdx_3 == 0 || *(rdx_3 + 0xa008) == 0x400)
                void* rbp_1 = rdx_3
                void* rax_3 = (rbx_2[2] + 7) & 0xfffffffffffffff8
                void* rcx_4 = rax_3 + 0xa010
                
                if (rcx_4 u> rbx_2[3])
                    sub_140b0e3d0(&rbx_2[2], 0xa018)
                    rax_3 = (rbx_2[2] + 7) & 0xfffffffffffffff8
                    rcx_4 = rax_3 + 0xa010
                
                rbx_2[2] = rcx_4
                rbx_2[1] = rax_3
                *(rax_3 + 0xa000) = 0
                *(rbx_2[1] + 0xa008) = 0
                rdx_3 = rbx_2[1]
                
                if (*rbx_2 == 0)
                    *rbx_2 = rdx_3
                
                if (rbp_1 != 0)
                    *(rbp_1 + 0xa000) = rdx_3
                    rdx_3 = rbx_2[1]
            
            uint64_t rcx_6 = zx.q(*(rdx_3 + 0xa008))
            *(rdx_3 + 0xa008) = (rcx_6 + 1).d
            rcx_7 = rcx_6 * 5
            *(rdx_3 + (rcx_7 << 3) + 4) = 0
            *(rdx_3 + (rcx_7 << 3) + 0xc) = 0
            *(rdx_3 + (rcx_7 << 3) + 0x14) = 0
            *(rdx_3 + (rcx_7 << 3) + 0x18) = 0
            *(rdx_3 + (rcx_7 << 3) + 0x20) = 0
            *(rdx_3 + (rcx_7 << 3)) = r12_1
            *(rdx_3 + (rcx_7 << 3) + 4) = zx.d(*(rsi_1 + 0x7c))
            *(rdx_3 + (rcx_7 << 3) + 8) = 1
            result = arg1[3].d
            *(rdx_3 + (rcx_7 << 3) + 0xc) = result
        else
            result = sub_141298c60(rsi_1, *arg1, r12_1, zx.d(*(rsi_1 + 0x7c)), rbx_1, 1)
        i += 1
    while (i u< arg1[2].d)

return result
