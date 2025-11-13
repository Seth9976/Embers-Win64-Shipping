// 函数: sub_141824340
// 地址: 0x141824340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x29) & 1) == 0)
    int64_t rax_2 = (*(*arg1 + 0x20))()
    int64_t* rdx = arg1[1]
    int32_t arg_20 = arg2[1].d
    int32_t arg_18 = 0
    char arg_8 = 0
    int32_t* r8_1 = *rdx
    
    if (&r8_1[1] u> rdx[1])
        int32_t* rdx_1 = &arg_18
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_1, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_1, 4)
    else
        arg_18 = *r8_1
        *rdx += 4
    
    int64_t* rcx_3 = arg1[1]
    char* rdx_2 = *rcx_3
    
    if (&rdx_2[1] u> rcx_3[1])
        (*(*arg1 + 0x150))(arg1, &arg_8, 1)
    else
        arg_8 = *rdx_2
        *rcx_3 += 1
    
    int64_t* rcx_5 = arg1[1]
    int32_t* rdx_4 = *rcx_5
    
    if (&rdx_4[1] u> rcx_5[1])
        int32_t* rdx_5 = &arg_20
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_5, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_5, 4)
    else
        arg_20 = *rdx_4
        *rcx_5 += 4
    
    int64_t rsi_1 = sx.q(arg2[1].d)
    int32_t i_1 = arg_20 - rsi_1.d
    int32_t rax_11 = rsi_1.d + i_1
    arg2[1].d = rax_11
    
    if (rax_11 s> *(arg2 + 0xc))
        sub_1405c4fe0(arg2)
    
    void* rax_14 = (rsi_1 << 6) + *arg2
    
    if (i_1 != 0)
        int32_t i
        
        do
            __builtin_memset(rax_14, 0, 0x2d)
            *(rax_14 + 0x30) = 0x100000
            *(rax_14 + 0x38) = 0
            rax_14 += 0x40
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if ((*(arg1 + 0x29) & 1) == 0)
        int32_t* rdi_2 = *arg2
        uint64_t rax_15 = sx.q(arg2[1].d)
        void* rsi_4 = &rdi_2[rax_15 * 0x10]
        
        if (rdi_2 != rsi_4)
            do
                sub_1409ac860(arg1, rdi_2, arg3)
                rdi_2 = &rdi_2[0x10]
            while (rdi_2 != rsi_4)
            
            rax_15 = zx.q(arg2[1].d)
            rdi_2 = *arg2
        
        void* rbp_3 = &rdi_2[sx.q(rax_15.d) * 0x10]
        
        if (rdi_2 != rbp_3)
            void* rsi_5 = &rdi_2[4]
            
            do
                int64_t* rcx_9 = arg1[1]
                int64_t* rdx_8 = *rcx_9
                
                if (&rdx_8[1] u<= rcx_9[1])
                    *rsi_5 = *rdx_8
                    int64_t* rax_18 = arg1[1]
                    *rax_18 += 8
                else if ((*(arg1 + 0x29) & 0x20) != 0)
                    sub_140b540d0(arg1, rsi_5, arg3)
                else
                    (*(*arg1 + 0x150))(arg1, rsi_5, 8)
                
                rdi_2 = &rdi_2[0x10]
                rsi_5 += 0x40
            while (rdi_2 != rbp_3)
            
            rax_15 = zx.q(arg2[1].d)
            rdi_2 = *arg2
        
        void* rsi_8 = &rdi_2[sx.q(rax_15.d) * 0x10]
        
        if (rdi_2 != rsi_8)
            do
                sub_140b31010(arg1, &rdi_2[6])
                rdi_2 = &rdi_2[0x10]
            while (rdi_2 != rsi_8)
            
            rax_15 = zx.q(arg2[1].d)
            rdi_2 = *arg2
        
        void* rsi_11 = &rdi_2[sx.q(rax_15.d) * 0x10]
        
        if (rdi_2 != rsi_11)
            do
                int64_t* rcx_12 = arg1[1]
                char* rdx_11 = *rcx_12
                
                if (&rdx_11[1] u> rcx_12[1])
                    (*(*arg1 + 0x150))(arg1, &rdi_2[0xb], 1)
                else
                    rdi_2[0xb].b = *rdx_11
                    int64_t* rax_22 = arg1[1]
                    *rax_22 += 1
                
                rdi_2 = &rdi_2[0x10]
            while (rdi_2 != rsi_11)
            
            rax_15 = zx.q(arg2[1].d)
            rdi_2 = *arg2
        
        void* rbp_6 = &rdi_2[sx.q(rax_15.d) * 0x10]
        
        if (rdi_2 != rbp_6)
            void* rsi_12 = &rdi_2[0xc]
            
            do
                int64_t* rcx_14 = arg1[1]
                int32_t* rdx_13 = *rcx_14
                
                if (&rdx_13[1] u<= rcx_14[1])
                    *rsi_12 = *rdx_13
                    int64_t* rax_26 = arg1[1]
                    *rax_26 += 4
                else if ((*(arg1 + 0x29) & 0x20) != 0)
                    sub_140b54070(arg1, rsi_12, arg3)
                else
                    (*(*arg1 + 0x150))(arg1, rsi_12, 4)
                
                rdi_2 = &rdi_2[0x10]
                rsi_12 += 0x40
            while (rdi_2 != rbp_6)
            
            rax_15 = zx.q(arg2[1].d)
            rdi_2 = *arg2
        
        void* rbp_9 = &rdi_2[sx.q(rax_15.d) * 0x10]
        
        if (rdi_2 != rbp_9)
            void* rsi_13 = &rdi_2[0xe]
            
            do
                int64_t* rcx_16 = arg1[1]
                int64_t* rdx_15 = *rcx_16
                
                if (&rdx_15[1] u<= rcx_16[1])
                    *rsi_13 = *rdx_15
                    int64_t* rax_30 = arg1[1]
                    *rax_30 += 8
                else if ((*(arg1 + 0x29) & 0x20) != 0)
                    sub_140b540d0(arg1, rsi_13, arg3)
                else
                    (*(*arg1 + 0x150))(arg1, rsi_13, 8)
                
                rdi_2 = &rdi_2[0x10]
                rsi_13 += 0x40
            while (rdi_2 != rbp_9)
    
    if ((*(arg1 + 0x29) & 1) == 0 && (arg1[5].b & 2) != 0)
        int64_t rax_33 = (*(*arg1 + 0x20))(arg1)
        int64_t r8_2 = *arg1
        arg_18 = rax_33.d - rax_2.d
        (*(r8_2 + 0x178))(arg1, rax_2, r8_2)
        int64_t* rdx_18 = arg1[1]
        int32_t* r8_3 = *rdx_18
        
        if (&r8_3[1] u> rdx_18[1])
            int32_t* rdx_19 = &arg_18
            
            if ((*(arg1 + 0x29) & 0x20) != 0)
                sub_140b54070(arg1, rdx_19, arg3)
            else
                (*(*arg1 + 0x150))(arg1, rdx_19, 4)
        else
            arg_18 = *r8_3
            *rdx_18 += 4
        
        (*(*arg1 + 0x178))(arg1, rax_33)
    
    (*(*arg1 + 0x178))(arg1, zx.q(arg_18) + rax_2)

return arg1
