// 函数: sub_1421a4ae0
// 地址: 0x1421a4ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = 0
*(arg1 + 0x68) = 0

if (*(arg1 + 0x6c) != 0)
    sub_1405c5570(arg1 + 0x60, 0)

*(arg1 + 0x78) = 0

if (*(arg1 + 0x7c) != 0)
    sub_1405c5570(arg1 + 0x70, 0)

*(arg1 + 0x88) = 0

if (*(arg1 + 0x8c) != 0)
    sub_1405c5570(arg1 + 0x80, 0)

*(arg1 + 0x98) = 0

if (*(arg1 + 0x9c) != 0)
    sub_1405c5570(arg1 + 0x90, 0)

*(arg1 + 0xa8) = 0

if (*(arg1 + 0xac) != 0)
    sub_1405c5570(arg1 + 0xa0, 0)

uint64_t result = 0xffffffff
int32_t result_1 = 0xffffffff
*(arg1 + 0x58) = 0

if (*(arg1 + 0x40) s> 0)
    int64_t* rbx_1 = nullptr
    int64_t* arg_10 = nullptr
    
    do
        int32_t result_4 = result.d
        void* rbx_2 = *(rbx_1 + *(arg1 + 0x38))
        
        if (rbx_2 == 0)
            result = zx.q(result_1)
        else
            char rax_1 = *(rbx_2 + 0x28)
            
            if ((rax_1 & 1) != 0)
                int64_t rbp_1 = sx.q(*(arg1 + 0x78))
                void* rcx_5 = arg1 + 0x70
                int32_t rax_2 = (rbp_1 + 1).d
                *(rcx_5 + 8) = rax_2
                
                if (rax_2 s> *(rcx_5 + 0xc))
                    sub_1405a4d70(rcx_5)
                    rcx_5 = arg1 + 0x70
                
                *(*rcx_5 + (rbp_1 << 3)) = rbx_2
                rax_1 = *(rbx_2 + 0x28)
            
            if ((rax_1 & 6) != 0)
                void* rcx_7 = arg1 + 0x80
                int64_t rbp_2 = sx.q(*(rcx_7 + 8))
                int32_t rax_3 = (rbp_2 + 1).d
                *(rcx_7 + 8) = rax_3
                
                if (rax_3 s> *(rcx_7 + 0xc))
                    sub_1405a4d70(rcx_7)
                    rcx_7 = arg1 + 0x80
                
                *(*rcx_7 + (rbp_2 << 3)) = rbx_2
            
            void* rax_4 = sub_142557000()
            void* rdx_3 = *(rbx_2 + 0x10)
            int64_t rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_5.d s> *(rdx_3 + 0x38) || *(*(rdx_3 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                void* rax_7 = sub_1425568c0()
                void* rdx_4 = *(rbx_2 + 0x10)
                int64_t rax_8 = sx.q(*(rax_7 + 0x38))
                int64_t rbp_3
                
                if (rax_8.d s> *(rdx_4 + 0x38) || *(*(rdx_4 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
                    void* rax_11 = sub_1425555a0()
                    void* rdx_6 = *(rbx_2 + 0x10)
                    int64_t rax_12 = sx.q(*(rax_11 + 0x38))
                    
                    if (rax_12.d s> *(rdx_6 + 0x38)
                            || *(*(rdx_6 + 0x30) + (rax_12 << 3)) != rax_11 + 0x30)
                        void* rax_15 = sub_142553910()
                        void* rdx_8 = *(rbx_2 + 0x10)
                        int64_t rax_16 = sx.q(*(rax_15 + 0x38))
                        
                        if (rax_16.d s> *(rdx_8 + 0x38)
                                || *(*(rdx_8 + 0x30) + (rax_16 << 3)) != rax_15 + 0x30)
                            void* rax_18 = sub_142553cc0()
                            void* rdx_9 = *(rbx_2 + 0x10)
                            int64_t rax_19 = sx.q(*(rax_18 + 0x38))
                            
                            if (rax_19.d s<= *(rdx_9 + 0x38)
                                    && *(*(rdx_9 + 0x30) + (rax_19 << 3)) == rax_18 + 0x30)
                                rbp_3 = sx.q(*(arg1 + 0xa8))
                                int32_t rax_21 = (rbp_3 + 1).d
                                *(arg1 + 0xa8) = rax_21
                                
                                if (rax_21 s> *(arg1 + 0xac))
                                    sub_1405a4d70(arg1 + 0xa0)
                                
                                *(*(arg1 + 0xa0) + (rbp_3 << 3)) = rbx_2
                        else
                            *(arg1 + 0x58) = rbx_2
                    else
                        rbp_3 = sx.q(*(arg1 + 0x98))
                        int32_t rax_14 = (rbp_3 + 1).d
                        *(arg1 + 0x98) = rax_14
                        
                        if (rax_14 s> *(arg1 + 0x9c))
                            sub_1405a4d70(arg1 + 0x90)
                        
                        *(*(arg1 + 0x90) + (rbp_3 << 3)) = rbx_2
                else
                    rbp_3 = sx.q(*(arg1 + 0x68))
                    int32_t rax_10 = (rbp_3 + 1).d
                    *(arg1 + 0x68) = rax_10
                    
                    if (rax_10 s> *(arg1 + 0x6c))
                        sub_1405a4d70(arg1 + 0x60)
                    
                    *(*(arg1 + 0x60) + (rbp_3 << 3)) = rbx_2
                result = zx.q(result_1)
            else
                *(arg1 + 0x48) = rbx_2
                result = zx.q(rsi.d)
                
                if ((*(rbx_2 + 0x28) & 3) != 0)
                    result = zx.q(result_4)
                
                result_1 = result.d
        
        rsi = zx.q(rsi.d + 1)
        rbx_1 = &arg_10[1]
        arg_10 = rbx_1
    while (rsi.d s< *(arg1 + 0x40))
    
    rsi = *(arg1 + 0x58)

if (rsi != 0)
    int64_t* r8_6 = *(arg1 + 0x38)
    int64_t r9_1 = sx.q(*(arg1 + 0x40))
    int64_t* rdx_11 = r8_6
    void* rcx_18 = &r8_6[r9_1]
    
    if (r8_6 != rcx_18)
        do
            if (*rdx_11 == rsi)
                int32_t rdx_13 = ((rdx_11 - r8_6) s>> 3).d
                
                if (rdx_13 != 0xffffffff)
                    void* rcx_19 = &r8_6[sx.q(rdx_13)]
                    memmove(rcx_19, rcx_19 + 8, (r9_1.d - rdx_13 - 1) << 3)
                    *(arg1 + 0x40) -= 1
                
                break
            
            rdx_11 = &rdx_11[1]
        while (rdx_11 != rcx_18)
    
    int64_t rsi_1 = sx.q(*(arg1 + 0x40))
    int64_t rbp_4 = *(arg1 + 0x58)
    int32_t rax_23 = (rsi_1 + 1).d
    *(arg1 + 0x40) = rax_23
    
    if (rax_23 s> *(arg1 + 0x44))
        sub_1405a4d70(arg1 + 0x38)
    
    int64_t rdx_16 = *(arg1 + 0x38)
    memmove(rdx_16 + 8, rdx_16, (rsi_1 << 3).d)
    result = *(arg1 + 0x38)
    *result = rbp_4

int64_t result_5 = sx.q(result_1)

if (result_5.d != 0xffffffff)
    int32_t rcx_22 = *(arg1 + 0x40)
    int32_t rax_25 = rcx_22 - result_5.d
    
    if (rax_25 != 1)
        int64_t r9_4 = *(arg1 + 0x38)
        memmove(r9_4 + (result_5 << 3), r9_4 + (sx.q((result_5 + 1).d) << 3), (rax_25 - 1) << 3)
        rcx_22 = *(arg1 + 0x40)
    
    *(arg1 + 0x40) = rcx_22 - 1
    result = sub_1405c53d0(arg1 + 0x38)

void* rbx_4 = *(arg1 + 0x48)

if (rbx_4 != 0)
    void* rax_29 = sub_142559b40()
    void* rdx_19 = *(rbx_4 + 0x10)
    result = sx.q(*(rax_29 + 0x38))
    
    if (result.d s<= *(rdx_19 + 0x38))
        uint64_t result_2 = result
        result = *(rdx_19 + 0x30)
        
        if (*(result + (result_2 << 3)) == rax_29 + 0x30)
            void* rcx_25 = *(rbx_4 + 0x30)
            
            if (rcx_25 != 0)
                result = sub_142368cd0(rcx_25, 0, 0xffffffff)
                
                if (result.b != 0)
                    void* rsi_2 = *(arg1 + 0x20)
                    
                    if (rsi_2 != 0)
                        void* rax_30 = sub_142559820()
                        void* rdx_20 = *(rsi_2 + 0x10)
                        result = sx.q(*(rax_30 + 0x38))
                        
                        if (result.d s<= *(rdx_20 + 0x38))
                            uint64_t result_3 = result
                            result = *(rdx_20 + 0x30)
                            
                            if (*(result + (result_3 << 3)) == rax_30 + 0x30
                                    && (*(rbx_4 + 0x46) & 1) == 0)
                                void* rcx_26 = *(rbx_4 + 0x30)
                                int32_t* r8_15 = ***(rcx_26 + 0x50) + 0x10
                                int32_t* rax_32 = *(r8_15 + 0x18)
                                
                                if (rax_32 != 0)
                                    r8_15 = rax_32
                                
                                result = sub_1423657b0(rcx_26, *r8_15)
                                
                                if (result != 0)
                                    *(*(arg1 + 0x30) + 0x30) = result

return result
