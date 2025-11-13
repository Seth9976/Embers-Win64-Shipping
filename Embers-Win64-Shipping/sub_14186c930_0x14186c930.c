// 函数: sub_14186c930
// 地址: 0x14186c930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r15 = arg3
TEB* gsbase

if (data_143efac40 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143efac40)
    
    if (data_143efac40 == 0xffffffff)
        int64_t var_40_1 = 0
        data_143efac00 = 0
        data_143efac18 = 0
        data_143efac08 = 0.o
        __builtin_memset(&data_143efac20, 0, 0x11)
        data_143efac30:8 = 0
        _Init_thread_footer(&data_143efac40)

*r15 = 0
uint64_t r14
r14.b = 0
int32_t i = arg1[2].d
int64_t rdi = sx.q(arg1[1].d)

if (i != 0xffffffff)
    if (i s< rdi.d)
        int64_t rsi_1 = *arg1
        int32_t i_3 = i
        
        do
            int64_t rdx_2 = sx.q(i_3) << 6
            int64_t r10_1 = *(rdx_2 + rsi_1 + 0x28)
            
            if (r10_1 != 0)
                int64_t rax_7 = *(arg2 + 0x28)
                
                if (rax_7 != 0)
                    int64_t r8 = arg2[2].q
                    int64_t r9_1 = *(rdx_2 + rsi_1 + 0x20)
                    
                    if (r9_1 u<= rax_7 - 1 + r8 && r10_1 - 1 + r9_1 u>= r8)
                        break
            
            i = i_3 + 1
            arg1[2].d = i
            i_3 = i
        while (i s< rdi.d)
    
    int32_t i_1 = i
    
    if (*(arg2 + 8) == 1 && *(arg2 + 0xc) == 0 && arg2[1].d == 0 && *(arg2 + 0x14) u<= 0xff)
        int32_t rax_12 = arg1[2].d
        
        if (rax_12 s>= 0 && rax_12 s< rdi.d)
            arg1[1].d = rax_12
        
        int64_t rdi_1 = sx.q(arg1[1].d)
        int32_t rax_13 = (rdi_1 + 1).d
        arg1[1].d = rax_13
        
        if (rax_13 s> *(arg1 + 0xc))
            sub_1405c4fe0(arg1)
        
        int64_t result = *arg1
        int64_t rcx_5 = rdi_1 << 6
        *(rcx_5 + result) = *arg2
        *(rcx_5 + result + 0x10) = arg2[1]
        *(rcx_5 + result + 0x20) = arg2[2]
        *(rcx_5 + result + 0x30) = arg2[3]
        *r15 = 1
        result.b = 1
        return result
    
    char arg_8
    
    if (i_1 s< 0 || i_1 s>= rdi.d)
        int32_t rax_36 = (rdi + 1).d
        arg1[1].d = rax_36
        
        if (rax_36 s> *(arg1 + 0xc))
            sub_1405c4fe0(arg1)
        
        int64_t rax_37 = *arg1
        int64_t rcx_27 = rdi << 6
        arg_8 = 1
        *(rcx_27 + rax_37) = *arg2
        *(rcx_27 + rax_37 + 0x10) = arg2[1]
        *(rcx_27 + rax_37 + 0x20) = arg2[2]
        *(rcx_27 + rax_37 + 0x30) = arg2[3]
        int64_t rcx_28 = sx.q(arg1[1].d)
        arg1[2].d = (rcx_28 - 1).d
        
        if (arg2[3].b == 0)
            r14.b = 1
        else
            void* rcx_31 = ((rcx_28 - 2) << 6) + *arg1
            
            if (*(rcx_31 + 0x30) == 0 || *(rcx_31 + 0x28) + *(rcx_31 + 0x20) != arg2[2].q
                    || *(rcx_31 + 0x38) != *(arg2 + 0x38))
                r14 = 1
                *r15 = 0
            else
                r14 = 1
                *r15 = 1
    else if (arg2[3].b != 0)
        void* rcx_10 = *arg1 + (rdi << 6)
        
        if (*(rcx_10 - 0x20) != arg2[2].q || *(rcx_10 - 0x18) != *(arg2 + 0x28))
            arg_8 = 0
            
            if (i_1 s< rdi.d)
                int64_t r8_2 = sx.q(i_1) << 6
                
                do
                    int64_t rax_20 = *arg1
                    int128_t* rcx_11 = r8_2 + rax_20
                    
                    if (*(r8_2 + rax_20 + 0x30) == 0 || *(arg2 + 0x38) u< *(rcx_11 + 0x38))
                        *rcx_11 = data_143efac00.o
                        arg_8 = 1
                        rcx_11[1] = data_143efac08:8.o
                        rcx_11[2] = data_143efac20
                        rcx_11[3] = data_143efac30
                    
                    rdi = zx.q(arg1[1].d)
                    i_1 += 1
                    r8_2 += 0x40
                while (i_1 s< rdi.d)
            
            if (rdi.d != 0)
                void* rcx_12 = *arg1
                int32_t rsi_5 = 0
                int32_t r12_1 = 0
                int64_t r14_1 = sx.q(rdi.d)
                int64_t r13
                r13.b = (*(rcx_12 + 0x14) | *(rcx_12 + 0x10) | *(rcx_12 + 0xc) | *(rcx_12 + 8)) != 0
                int64_t rdi_2 = 0
                
                do
                    int64_t r9_2 = sx.q(rsi_5)
                    rdi_2 += 1
                    rsi_5 += 1
                    
                    if (rdi_2 s< r14_1)
                        void* rdx_7 = *arg1 + 0x10 + (rdi_2 << 6)
                        
                        do
                            int32_t rax_30
                            rax_30.b = (*(rdx_7 - 8) | *(rdx_7 - 4) | *(rdx_7 + 4) | *rdx_7) != 0
                            
                            if (zx.d(r13.b) != rax_30)
                                break
                            
                            rsi_5 += 1
                            rdi_2 += 1
                            rdx_7 += 0x40
                        while (rdi_2 s< r14_1)
                    
                    int32_t r15_2 = rsi_5 - r9_2.d
                    
                    if (r13.b != 0)
                        if (r12_1 != r9_2.d)
                            int64_t rax_31 = *arg1
                            memmove((sx.q(r12_1) << 6) + rax_31, (r9_2 << 6) + rax_31, r15_2 << 6)
                        
                        r12_1 += r15_2
                    
                    r13.b ^= 1
                while (rdi_2 s< r14_1)
                
                r15 = arg3
                rdi = zx.q(r12_1)
                arg1[1].d = r12_1
            
            r14 = zx.q(arg_8)
            
            if (r14.b != 0)
                int32_t rax_32 = (rdi + 1).d
                arg1[1].d = rax_32
                
                if (rax_32 s> *(arg1 + 0xc))
                    sub_1405c4fe0(arg1)
                
                int64_t rax_33 = *arg1
                int64_t rcx_20 = sx.q(rdi.d) << 6
                *(rcx_20 + rax_33) = *arg2
                *(rcx_20 + rax_33 + 0x10) = arg2[1]
                *(rcx_20 + rax_33 + 0x20) = arg2[2]
                *(rcx_20 + rax_33 + 0x30) = arg2[3]
                int64_t rcx_21 = sx.q(arg1[1].d)
                uint64_t rax_34 = zx.q((rcx_21 - 1).d)
                arg1[2].d = rax_34.d
                
                if (arg2[3].b != 0 && rax_34.d s> 0)
                    void* rcx_24 = ((rcx_21 - 2) << 6) + *arg1
                    
                    if (*(rcx_24 + 0x30) == 0 || *(rcx_24 + 0x28) + *(rcx_24 + 0x20) != arg2[2].q
                            || *(rcx_24 + 0x38) != *(arg2 + 0x38))
                        *r15 = 0
                    else
                        *r15 = 1
        else if (*(arg2 + 0x38) u< *(rcx_10 - 8))
            *(rcx_10 - 0x40) = *arg2
            *(rcx_10 - 0x30) = arg2[1]
            *(rcx_10 - 0x20) = arg2[2]
            *(rcx_10 - 0x10) = arg2[3]
            arg1[2].d = arg1[1].d - 1
            r14.b = 1
    else
        int64_t i_2 = sx.q(i_1)
        int64_t rcx_7 = i_2 << 6
        
        while (i_2 s< rdi)
            if (*(rcx_7 + *arg1 + 0x30) != 0)
                return zx.q(r14.b)
            
            i_2 += 1
            rcx_7 += 0x40
        
        int32_t rax_15 = (rdi + 1).d
        arg1[1].d = rax_15
        
        if (rax_15 s> *(arg1 + 0xc))
            sub_1405c4fe0(arg1)
        
        int64_t rax_16 = *arg1
        int64_t rsi_3 = rdi << 6
        *(rsi_3 + rax_16) = *arg2
        *(rsi_3 + rax_16 + 0x10) = arg2[1]
        *(rsi_3 + rax_16 + 0x20) = arg2[2]
        *(rsi_3 + rax_16 + 0x30) = arg2[3]
        r14.b = 1
else
    int32_t rax_2 = (rdi + 1).d
    arg1[1].d = rax_2
    
    if (rax_2 s> *(arg1 + 0xc))
        sub_1405c4fe0(arg1)
    
    int64_t rax_3 = *arg1
    int64_t rcx_2 = rdi << 6
    *(rcx_2 + rax_3) = *arg2
    *(rcx_2 + rax_3 + 0x10) = arg2[1]
    *(rcx_2 + rax_3 + 0x20) = arg2[2]
    *(rcx_2 + rax_3 + 0x30) = arg2[3]
    arg1[2].d = arg1[1].d - 1
    r14.b = 1

return zx.q(r14.b)
