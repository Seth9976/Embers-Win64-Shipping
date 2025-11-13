// 函数: sub_140850d80
// 地址: 0x140850d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg4
uint32_t* r14 = arg2
uint64_t result

if (arg3 == data_143ce3878 || arg3 == data_143ce3880 || arg3 == data_143ce3870)
    int64_t rbp_1 = sx.q(arg1[1].d)
    int16_t rdi_2 = ((*arg2).w + 3) & 0xfffc
    int32_t rax = (rbp_1 + 1).d
    arg1[1].d = rax
    
    if (rax s> *(arg1 + 0xc))
        sub_1405a4d70(arg1)
    
    int64_t rax_1 = *arg1
    *(rax_1 + (rbp_1 << 3)) = rsi.w
    *(rax_1 + (rbp_1 << 3) + 2) = rdi_2
    *(rax_1 + (rbp_1 << 3) + 4) = 0x40004
    int64_t rcx = sx.q(arg1[1].d)
    int64_t rax_2 = *arg1
    result = zx.q(rsi + 4)
    *r14 = zx.d(*(rax_2 + (rcx << 3) - 2)) + zx.d(*(rax_2 + (rcx << 3) - 6))
else
    uint32_t rdx_5
    
    if (arg3 == data_143ce3888)
        int32_t rdi_3 = *arg2
        
        if (0x10 - (rdi_3 & 0xf) u< 0x10)
            rdi_3 = (rdi_3 + 0xf) & 0xfffffff0
        
        int64_t r15_1 = sx.q(arg1[1].d)
        int32_t rax_5 = (r15_1 + 1).d
        arg1[1].d = rax_5
        
        if (rax_5 s> *(arg1 + 0xc))
            sub_1405a4d70(arg1)
        
        int64_t rax_6 = *arg1
        *(rax_6 + (r15_1 << 3)) = rsi.w
        *(rax_6 + (r15_1 << 3) + 2) = rdi_3.w
        *(rax_6 + (r15_1 << 3) + 4) = 0x100008
        int64_t rcx_4 = sx.q(arg1[1].d)
        int64_t rax_7 = *arg1
        rdx_5 = zx.d(*(rax_7 + (rcx_4 << 3) - 2)) + zx.d(*(rax_7 + (rcx_4 << 3) - 6))
        result = zx.q(rsi + 8)
    else if (arg3 == data_143ce3890)
        int32_t rdi_5 = *arg2
        
        if (0x10 - (rdi_5 & 0xf) u< 0x10)
            rdi_5 = (rdi_5 + 0xf) & 0xfffffff0
        
        int64_t r15_2 = sx.q(arg1[1].d)
        int32_t rax_10 = (r15_2 + 1).d
        arg1[1].d = rax_10
        
        if (rax_10 s> *(arg1 + 0xc))
            sub_1405a4d70(arg1)
        
        int64_t rax_11 = *arg1
        *(rax_11 + (r15_2 << 3)) = rsi.w
        *(rax_11 + (r15_2 << 3) + 2) = rdi_5.w
        *(rax_11 + (r15_2 << 3) + 4) = 0x10000c
        int64_t rcx_8 = sx.q(arg1[1].d)
        int64_t rax_12 = *arg1
        rdx_5 = zx.d(*(rax_12 + (rcx_8 << 3) - 2)) + zx.d(*(rax_12 + (rcx_8 << 3) - 6))
        result = zx.q(rsi + 0xc)
    else if (arg3 == data_143ce3898 || arg3 == data_143ce38a8 || arg3 == data_143ce38a0)
        int64_t rbp_3 = sx.q(arg1[1].d)
        int16_t rdi_12 = ((*arg2).w + 0xf) & 0xfff0
        int32_t rax_19 = (rbp_3 + 1).d
        arg1[1].d = rax_19
        
        if (rax_19 s> *(arg1 + 0xc))
            sub_1405a4d70(arg1)
        
        int64_t rax_20 = *arg1
        *(rax_20 + (rbp_3 << 3)) = rsi.w
        *(rax_20 + (rbp_3 << 3) + 2) = rdi_12
        *(rax_20 + (rbp_3 << 3) + 4) = 0x100010
        int64_t rcx_16 = sx.q(arg1[1].d)
        int64_t rax_21 = *arg1
        rdx_5 = zx.d(*(rax_21 + (rcx_16 << 3) - 2)) + zx.d(*(rax_21 + (rcx_16 << 3) - 6))
        result = zx.q(rsi + 0x10)
    else
        int32_t rdi_9 = (*arg2 + 0xf) & 0xfffffff0
        
        if (arg3 != data_143ce38b0)
            *arg2 = rdi_9
            void* var_38 = arg3
            void* const i_1
            
            if (arg3 == 0)
                i_1 = nullptr
            else
                i_1 = *(arg3 + 0x50)
            
            int32_t var_28_1 = 0xffffffff
            int16_t var_24_1 = 0x101
            char var_22_1 = 0
            sub_1406328d0(&var_38)
            void* i_2
            
            for (void* const i = i_1; i != 0; i = i_2)
                sub_140d113c0()
                int64_t r8
                
                if ((data_143e1bfc8 & *(*(i + 8) + 0x10)) == 0)
                    sub_140d11680()
                    
                    if ((data_143e1be38 & *(*(i + 8) + 0x10)) == 0)
                        sub_140d11050()
                        r8 = data_143ce3878
                        
                        if ((data_143e1b9d8 & *(*(i + 8) + 0x10)) == 0)
                            r8 = *(i + 0x78)
                    else
                        r8 = data_143ce3880
                else
                    r8 = data_143ce3870
                
                rsi = sub_140850d80(arg1, r14, r8, zx.q(rsi))
                i_2 = *(i + 0x20)
                sub_1406328d0(&var_38)
            
            return zx.q(rsi)
        
        int64_t rbp_2 = sx.q(arg1[1].d)
        int32_t rax_14 = (rbp_2 + 1).d
        arg1[1].d = rax_14
        
        if (rax_14 s> *(arg1 + 0xc))
            sub_1405a4d70(arg1)
        
        int64_t rax_15 = *arg1
        *(rax_15 + (rbp_2 << 3)) = rsi.w
        *(rax_15 + (rbp_2 << 3) + 2) = rdi_9.w
        *(rax_15 + (rbp_2 << 3) + 4) = 0x400040
        int64_t rcx_9 = sx.q(arg1[1].d)
        int64_t rax_16 = *arg1
        rdx_5 = zx.d(*(rax_16 + (rcx_9 << 3) - 2)) + zx.d(*(rax_16 + (rcx_9 << 3) - 6))
        result = zx.q(rsi + 0x40)
    
    *r14 = rdx_5

return result
