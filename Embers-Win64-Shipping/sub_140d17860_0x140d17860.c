// 函数: sub_140d17860
// 地址: 0x140d17860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r12 = arg4
void* const rsi = arg3
int32_t rdi = arg2
int32_t* rbx = arg1

if (arg2 == *arg1)
    return 

int32_t r8 = data_143e1d9b4
int64_t r9 = data_143e1d9a0
uint64_t r13_1 = zx.q(arg6)
int64_t r14_1 = 0

while (*(rsi + 0xc) == 0)
    uint64_t rax = zx.q(*(r12 + 0xc))
    
    if (rax.d s<= data_143e1d994)
        break
    
    void* const rdx_1
    
    if (rax.d s>= r8)
        rdx_1 = nullptr
    else
        uint32_t rcx = zx.d(rax.w)
        
        if (rax.d s< 0)
            rax = zx.q(rax.d + 0xffff)
            rcx -= 0x10000
        
        rdx_1 = *(r9 + (sx.q(rax.d s>> 0x10) << 3)) + sx.q(rcx) * 0x18
    
    if (((*(rdx_1 + 8) u>> 0x1e).b & 1) != 0)
        break
    
    int64_t r15_1 = sx.q(arg5[1].d)
    int32_t rax_5 = (r15_1 + 1).d
    arg5[1].d = rax_5
    
    if (rax_5 s> *(arg5 + 0xc))
        sub_1405a4d70(arg5)
    
    *(*arg5 + (r15_1 << 3)) = r12
    *(rsi + 0xc) = *rbx
    void* rsi_1 = *(rbx + 8)
    int64_t r15_2 = sx.q(*(rsi_1 + 0x10))
    int32_t rax_9 = (r15_2 + 1).d
    *(rsi_1 + 0x10) = rax_9
    
    if (rax_9 s> *(rsi_1 + 0x14))
        sub_1405a4cf0(rsi_1 + 8)
    
    *(*(rsi_1 + 8) + (r15_2 << 2)) = rdi
    
    if (r13_1.b == 0)
        break
    
    int64_t* rdi_1 = r12[4]
    int32_t arg_8
    int32_t arg_10
    int64_t* r15_3
    
    if (rdi_1 == 0)
        r15_3 = arg5
    else
        int32_t r8_1 = *(rdi_1 + 0xc)
        void* const rsi_2
        
        if (r8_1 s>= data_143e1d9b4)
            rsi_2 = nullptr
        else
            uint32_t rdx_4 = zx.d(r8_1.w)
            int32_t rax_10 = r8_1
            
            if (r8_1 s< 0)
                rax_10 = r8_1 + 0xffff
                rdx_4 -= 0x10000
            
            rsi_2 = *(data_143e1d9a0 + (sx.q(rax_10 s>> 0x10) << 3)) + sx.q(rdx_4) * 0x18
        
        int32_t rax_14 = *(rsi_2 + 0xc)
        
        if (rax_14 == *rbx)
            r15_3 = arg5
        else
            char rcx_7 = *(rsi_2 + 0xb) & 1
            
            if (rcx_7 != 0 || rax_14 != 0)
                if (rcx_7 == 0)
                    r8_1 = rax_14
                
                bool cond:0_1 = r8_1 s>= data_143e1d9b4
                arg_10 = r8_1
                void* const rax_28
                
                if (cond:0_1)
                    rax_28 = nullptr
                else
                    uint32_t rax_25 = zx.d(r8_1.w)
                    
                    if (r8_1 s< 0)
                        r8_1 += 0xffff
                        rax_25 -= 0x10000
                    
                    rax_28 = *(data_143e1d9a0 + (sx.q(r8_1 s>> 0x10) << 3)) + sx.q(rax_25) * 0x18
                
                r13_1 = sx.q(not.d(*(rax_28 + 0xc))) * 0x50 + data_143e1d678
                sub_1408d92c0(*(rbx + 8) + 0x18, &arg_10)
                sub_1408d92c0(r13_1 + 0x38, rbx)
                int64_t rsi_3 = 0
                int32_t* rdi_2 = *(r13_1 + 0x18)
                uint64_t r15_5 = sx.q(*(r13_1 + 0x20)) << 2 u>> 2
                
                if (rdi_2 u> &rdi_2[sx.q(*(r13_1 + 0x20))])
                    r15_5 = 0
                
                if (r15_5 != 0)
                    do
                        int32_t rax_34 = *rdi_2
                        arg_8 = rax_34
                        
                        if (rax_34 != *rbx)
                            sub_1408d92c0(*(rbx + 8) + 0x18, &arg_8)
                        
                        rdi_2 = &rdi_2[1]
                        rsi_3 += 1
                    while (rsi_3 != r15_5)
                
                int64_t rsi_4 = 0
                int32_t* rdi_3 = *(r13_1 + 0x28)
                uint64_t r15_7 = sx.q(*(r13_1 + 0x30)) << 2 u>> 2
                
                if (rdi_3 u> &rdi_3[sx.q(*(r13_1 + 0x30))])
                    r15_7 = 0
                
                if (r15_7 != 0)
                    do
                        int64_t* rcx_22 = *(rbx + 8) + 0x28
                        arg_8 = *rdi_3
                        sub_1408d92c0(rcx_22, &arg_8)
                        rsi_4 += 1
                        rdi_3 = &rdi_3[1]
                    while (rsi_4 != r15_7)
                
                r15_3 = arg5
            else if (r8_1 s<= data_143e1d994)
                r15_3 = arg5
            else
                char rax_16 = (*(*rdi_1 + 0x20))(rdi_1)
                void* const rax_21
                int32_t r10_1
                
                if (rax_16 != 0 && (rdi_1[1].d & 0x1400) == 0)
                    r10_1 = *(rdi_1 + 0xc)
                    
                    if (r10_1 s>= data_143e1d9b4)
                        rax_21 = nullptr
                    else
                        uint32_t rdx_6 = zx.d(r10_1.w)
                        int32_t rax_17 = r10_1
                        
                        if (r10_1 s< 0)
                            rax_17 = r10_1 + 0xffff
                            rdx_6 -= 0x10000
                        
                        rax_21 =
                            *(data_143e1d9a0 + (sx.q(rax_17 s>> 0x10) << 3)) + sx.q(rdx_6) * 0x18
                
                if (rax_16 == 0 || (rdi_1[1].d & 0x1400) != 0
                        || ((*(rax_21 + 8) u>> 0x1e).b & 1) != 0)
                    int64_t* rcx_13 = *(rbx + 8) + 0x28
                    arg_10 = *(rdi_1 + 0xc)
                    sub_1408d92c0(rcx_13, &arg_10)
                    r15_3 = arg5
                else
                    r15_3 = arg5
                    sub_140d17860(rbx, zx.q(r10_1), rsi_2, rdi_1, r15_3, 1)
    
    int64_t* rdi_4 = r12[2]
    
    if (((*(rdi_4 + 0xcc) u>> 7).b & 1) != 0)
        break
    
    if (rdi_4 != 0)
        int32_t r8_4 = *(rdi_4 + 0xc)
        void* const rsi_5
        
        if (r8_4 s>= data_143e1d9b4)
            rsi_5 = nullptr
        else
            uint32_t rdx_15 = zx.d(r8_4.w)
            int32_t rax_39 = r8_4
            
            if (r8_4 s< 0)
                rax_39 = r8_4 + 0xffff
                rdx_15 -= 0x10000
            
            rsi_5 = *(data_143e1d9a0 + (sx.q(rax_39 s>> 0x10) << 3)) + sx.q(rdx_15) * 0x18
        
        int32_t rax_43 = *(rsi_5 + 0xc)
        
        if (rax_43 != *rbx)
            char rcx_25 = *(rsi_5 + 0xb) & 1
            
            if (rcx_25 != 0 || rax_43 != 0)
                if (rcx_25 == 0)
                    r8_4 = rax_43
                
                bool cond:1_1 = r8_4 s>= data_143e1d9b4
                arg_10 = r8_4
                void* const rax_57
                
                if (cond:1_1)
                    rax_57 = nullptr
                else
                    uint32_t rax_54 = zx.d(r8_4.w)
                    
                    if (r8_4 s< 0)
                        r8_4 += 0xffff
                        rax_54 -= 0x10000
                    
                    rax_57 = *(data_143e1d9a0 + (sx.q(r8_4 s>> 0x10) << 3)) + sx.q(rax_54) * 0x18
                
                r13_1 = sx.q(not.d(*(rax_57 + 0xc))) * 0x50 + data_143e1d678
                sub_1408d92c0(*(rbx + 8) + 0x18, &arg_10)
                sub_1408d92c0(r13_1 + 0x38, rbx)
                int64_t rsi_6 = 0
                int32_t* rdi_5 = *(r13_1 + 0x18)
                uint64_t r15_9 = sx.q(*(r13_1 + 0x20)) << 2 u>> 2
                
                if (rdi_5 u> &rdi_5[sx.q(*(r13_1 + 0x20))])
                    r15_9 = 0
                
                if (r15_9 != 0)
                    do
                        int32_t rax_63 = *rdi_5
                        arg_8 = rax_63
                        
                        if (rax_63 != *rbx)
                            sub_1408d92c0(*(rbx + 8) + 0x18, &arg_8)
                        
                        rdi_5 = &rdi_5[1]
                        rsi_6 += 1
                    while (rsi_6 != r15_9)
                
                int64_t rsi_7 = 0
                int32_t* rdi_6 = *(r13_1 + 0x28)
                uint64_t r15_11 = sx.q(*(r13_1 + 0x30)) << 2 u>> 2
                
                if (rdi_6 u> &rdi_6[sx.q(*(r13_1 + 0x30))])
                    r15_11 = 0
                
                if (r15_11 != 0)
                    do
                        int64_t* rcx_40 = *(rbx + 8) + 0x28
                        arg_8 = *rdi_6
                        sub_1408d92c0(rcx_40, &arg_8)
                        rsi_7 += 1
                        rdi_6 = &rdi_6[1]
                    while (rsi_7 != r15_11)
            else if (r8_4 s> data_143e1d994)
                char rax_45 = (*(*rdi_4 + 0x20))(rdi_4)
                void* const rax_50
                int32_t r10_2
                
                if (rax_45 != 0 && (rdi_4[1].d & 0x1400) == 0)
                    r10_2 = *(rdi_4 + 0xc)
                    
                    if (r10_2 s>= data_143e1d9b4)
                        rax_50 = nullptr
                    else
                        uint32_t rdx_17 = zx.d(r10_2.w)
                        int32_t rax_46 = r10_2
                        
                        if (r10_2 s< 0)
                            rax_46 = r10_2 + 0xffff
                            rdx_17 -= 0x10000
                        
                        rax_50 =
                            *(data_143e1d9a0 + (sx.q(rax_46 s>> 0x10) << 3)) + sx.q(rdx_17) * 0x18
                
                if (rax_45 == 0 || (rdi_4[1].d & 0x1400) != 0
                        || ((*(rax_50 + 8) u>> 0x1e).b & 1) != 0)
                    int64_t* rcx_31 = *(rbx + 8) + 0x28
                    arg_10 = *(rdi_4 + 0xc)
                    sub_1408d92c0(rcx_31, &arg_10)
                else
                    sub_140d17860(rbx, zx.q(r10_2), rsi_5, rdi_4, r15_3, 1)
    
    r12 = *(r12[2] + 0x20)
    
    if (r12 == 0)
        break
    
    int32_t r8_7 = *(r12 + 0xc)
    
    if (r8_7 s>= data_143e1d9b4)
        rsi = nullptr
    else
        uint32_t rdx_26 = zx.d(r8_7.w)
        int32_t rax_67 = r8_7
        
        if (r8_7 s< 0)
            rax_67 = r8_7 + 0xffff
            rdx_26 -= 0x10000
        
        rsi = *(data_143e1d9a0 + (sx.q(rax_67 s>> 0x10) << 3)) + sx.q(rdx_26) * 0x18
    
    rax = zx.q(*(rsi + 0xc))
    
    if (rax.d == *rbx)
        break
    
    char rcx_43 = *(rsi + 0xb) & 1
    
    if (rcx_43 == 0 && rax.d == 0)
        if (r8_7 s<= data_143e1d994)
            break
        
        if ((*(*r12 + 0x20))(r12) != 0 && (r12[1].d & 0x1400) == 0)
            rdi = *(r12 + 0xc)
            r8 = data_143e1d9b4
            r9 = data_143e1d9a0
            void* const rdx_29
            
            if (rdi s>= r8)
                rdx_29 = nullptr
            else
                uint32_t rcx_45 = zx.d(rdi.w)
                int32_t rax_73 = rdi
                
                if (rdi s< 0)
                    rax_73 = rdi + 0xffff
                    rcx_45 -= 0x10000
                
                rdx_29 = *(r9 + (sx.q(rax_73 s>> 0x10) << 3)) + sx.q(rcx_45) * 0x18
            
            if (((*(rdx_29 + 8) u>> 0x1e).b & 1) == 0)
                r13_1.b = 1
                
                if (rdi == *rbx)
                    break
                
                continue
        
        int64_t* rcx_48 = *(rbx + 8) + 0x28
        arg_10 = *(r12 + 0xc)
        sub_1408d92c0(rcx_48, &arg_10)
        break
    
    if (rcx_43 == 0)
        r8_7 = rax.d
    
    bool cond:2_1 = r8_7 s>= data_143e1d9b4
    arg_10 = r8_7
    void* const rax_86
    
    if (cond:2_1)
        rax_86 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r8_7)
        uint32_t rdx_32 = zx.d(temp0_1)
        int32_t rax_81 = temp1_1 + rdx_32
        rax_86 =
            *(data_143e1d9a0 + (sx.q(rax_81 s>> 0x10) << 3)) + sx.q(zx.d(rax_81.w) - rdx_32) * 0x18
    
    void* r13_8 = sx.q(not.d(*(rax_86 + 0xc))) * 0x50 + data_143e1d678
    sub_1408d92c0(*(rbx + 8) + 0x18, &arg_10)
    sub_1408d92c0(r13_8 + 0x38, rbx)
    int64_t rsi_8 = 0
    int32_t* rdi_7 = *(r13_8 + 0x18)
    uint64_t r15_13 = sx.q(*(r13_8 + 0x20)) << 2 u>> 2
    
    if (rdi_7 u> &rdi_7[sx.q(*(r13_8 + 0x20))])
        r15_13 = 0
    
    if (r15_13 != 0)
        do
            int32_t rax_92 = *rdi_7
            arg_8 = rax_92
            
            if (rax_92 != *rbx)
                sub_1408d92c0(*(rbx + 8) + 0x18, &arg_8)
            
            rdi_7 = &rdi_7[1]
            rsi_8 += 1
        while (rsi_8 != r15_13)
    
    int32_t* rdi_8 = *(r13_8 + 0x28)
    uint64_t rsi_10 = sx.q(*(r13_8 + 0x30)) << 2 u>> 2
    
    if (rdi_8 u> &rdi_8[sx.q(*(r13_8 + 0x30))])
        rsi_10 = 0
    
    if (rsi_10 != 0)
        do
            int64_t* rcx_59 = *(rbx + 8) + 0x28
            arg_8 = *rdi_8
            sub_1408d92c0(rcx_59, &arg_8)
            r14_1 += 1
            rdi_8 = &rdi_8[1]
        while (r14_1 != rsi_10)
    
    break
