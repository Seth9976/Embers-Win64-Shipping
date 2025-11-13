// 函数: sub_140cb7650
// 地址: 0x140cb7650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = EnterCriticalSection(&arg1[0x13])

if (arg1[0x1a].b != 0)
    if (arg1 == -0x98)
        return result
    
    return LeaveCriticalSection(&arg1[0x13]) __tailcall

*(arg1 + 0xd4) += 1

if (arg1 != -0x98)
    LeaveCriticalSection(&arg1[0x13])

while (true)
    result = sub_140a2d3e0(&arg1[2])
    uint64_t* rdi_1 = nullptr
    
    if (result.d != 0)
        rdi_1 = *(*((zx.q(result.d) u>> 0xe << 3) + &data_143cf0bf8)
            + (zx.q(result.d) & 0x3fff) * 0x18 + 8)
        result = sub_140a24050(result.d)
    
    if (rdi_1 == 0)
        while (true)
            if (arg1[0x1a].b != 0)
                return result
            
            void*** r15_1 = nullptr
            result = EnterCriticalSection(&arg1[0x13])
            
            if (arg1[0x1a].b == 0)
                int32_t rax_1 = sub_140a2d3e0(&arg1[2])
                rdi_1 = nullptr
                
                if (rax_1 != 0)
                    rdi_1 = *(*((zx.q(rax_1) u>> 0xe << 3) + &data_143cf0bf8)
                        + (zx.q(rax_1) & 0x3fff) * 0x18 + 8)
                    sub_140a24050(rax_1)
                
                if (rdi_1 != 0)
                label_140cb77c2:
                    
                    if (arg1 != -0x98)
                        LeaveCriticalSection(&arg1[0x13])
                    
                    if (rdi_1 != 0)
                        break
                    
                    (*r15_1)[4](r15_1, 0xffffffff, 0)
                    sub_140a4fc50(r15_1)
                    result = sub_140a2d3e0(&arg1[2])
                    rdi_1 = nullptr
                    
                    if (result.d != 0)
                        rdi_1 = *(*((zx.q(result.d) u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(result.d) & 0x3fff) * 0x18 + 8)
                        result = sub_140a24050(result.d)
                    
                    if (rdi_1 != 0)
                        break
                    
                    continue
                else
                    if (arg1[0x19].d + 1 != *(arg1 + 0xd4))
                        void*** rax_4 = sub_140a491d0(0)
                        int64_t rbp_1 = sx.q(arg1[0x19].d)
                        r15_1 = rax_4
                        int32_t rcx_15 = (rbp_1 + 1).d
                        arg1[0x19].d = rcx_15
                        
                        if (rcx_15 s> *(arg1 + 0xcc))
                            sub_1405a4d70(&arg1[0x18])
                        
                        *(arg1[0x18] + (rbp_1 << 3)) = r15_1
                        goto label_140cb77c2
                    
                    arg1[0x1a].b = 1
                    int64_t* rdi_5 = arg1[0x18]
                    int64_t rbp_3 = 0
                    result = &rdi_5[arg1[0x19]]
                    uint64_t r14_3 = sx.q(arg1[0x19].d) << 3 u>> 3
                    
                    if (rdi_5 u> result)
                        r14_3 = 0
                    
                    if (r14_3 != 0)
                        do
                            int64_t* rcx_31 = *rdi_5
                            result = (*(*rcx_31 + 0x10))(rcx_31)
                            rbp_3 += 1
                            rdi_5 = &rdi_5[1]
                        while (rbp_3 != r14_3)
                    
                    arg1[0x19].d = 0
                    
                    if (*(arg1 + 0xcc) != 0)
                        result = sub_1405c5570(&arg1[0x18], 0)
            
            if (arg1 == -0x98)
                return result
            
            return LeaveCriticalSection(&arg1[0x13])
    
    int64_t* rcx_25 = *arg1
    int64_t* arg_10 = nullptr
    sub_140cc4b60(rcx_25, rdi_1, &arg_10)
    int64_t* rcx_26 = arg_10
    
    if (rcx_26 != 0)
        rcx_26[9].d -= 1
        
        if (rcx_26[9].d == 1)
            sub_140a2f6e0(rcx_26)
    
    int32_t rax_8 = *(rdi_1 + 0xc)
    void* rbp_2 = arg1[1]
    rdi_1[1].d = 0
    
    if (rax_8 s< 0 && rax_8 != 0)
        sub_1405c5570(rdi_1, 0)
    
    int32_t rax_9 = sub_140a20af0()
    uint64_t rcx_28 = zx.q(rax_9)
    
    if (rax_9 != 0)
        *(*((rcx_28 u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(rcx_28.d) & 0x3fff) * 0x18 + 8) = rdi_1
        sub_140ccd2c0(rbp_2, rcx_28.d)
    else
        *8 = rdi_1
        sub_140ccd2c0(rbp_2, rcx_28.d)
