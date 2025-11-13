// 函数: sub_14284f800
// 地址: 0x14284f800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (*(arg1 + 0x730) == 0)
    int64_t rax_1 = *(arg1 + 0x640)
    int64_t arg_8
    int32_t rax_3
    
    if (rax_1 != 0)
        uint64_t r8_1 = zx.q(*(arg1 + 0x648))
        arg_8 = rax_1
        int32_t* rax_2 = sub_1428adf40(nullptr, &arg_8, r8_1)
        rax_3 = sub_142851000(arg1 + 0x728, rax_2, 1)
        sub_1428ad210(rax_2)
    
    if (rax_1 != 0 && rax_3 s< 0)
        return 0
    
    int64_t rax_4 = *(arg1 + 0x660)
    int32_t rbp_1 = 0
    void* rdi_2 = nullptr
    void* r15_1 = nullptr
    int32_t* r14_1 = nullptr
    
    if (rax_4 != 0)
        int64_t rcx_2 = *(arg1 + 0x668)
        
        if (rcx_2 != 0)
            arg_8 = rax_4
            void* rax_5 = sub_1428af390(nullptr, &arg_8, rcx_2.d)
            r15_1 = rax_5
            
            if (rax_5 != 0)
                void* rax_6 = sub_1428af5b0(rax_5)
                rdi_2 = rax_6
                
                if (rax_6 != 0)
                    int32_t rbx_2 = 0
                    
                    if (sub_1428af550(rax_6) s> 0)
                        int32_t rax_11
                        
                        do
                            void* rax_8 = sub_1428af580(rdi_2, rbx_2)
                            
                            if (rax_8 != 0)
                                int32_t* rax_9 = sub_1428ac730(rax_8, 0x3ba, nullptr, nullptr)
                                r14_1 = rax_9
                                int32_t rax_10 = sub_142851000(arg1 + 0x728, rax_9, 3)
                                rbp_1 = rax_10
                                
                                if (rax_10 s< 0)
                                    break
                            
                            rbx_2 += 1
                            rax_11 = sub_1428af550(rdi_2)
                        while (rbx_2 s< rax_11)
    
    sub_1428ad210(r14_1)
    sub_1428af2e0(rdi_2)
    sub_1428af340(r15_1)
    
    if (rbp_1 s< 0)
        return 0
    
    void* rax_12 = *(arg1 + 0x508)
    
    if (rax_12 != 0)
        void* rcx_12 = *(rax_12 + 0xf8)
        
        if (rcx_12 != 0)
            int32_t* rax_13 = sub_1428ac7d0(rcx_12, 0x3b7, nullptr, nullptr)
            int32_t rax_14 = sub_142851000(arg1 + 0x728, rax_13, 2)
            sub_1428ad210(rax_13)
            
            if (rax_14 s< 0)
                return 0
    
    *(arg1 + 0x730) = 1

return *(arg1 + 0x728)
