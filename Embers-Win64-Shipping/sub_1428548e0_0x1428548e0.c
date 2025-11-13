// 函数: sub_1428548e0
// 地址: 0x1428548e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbp = 0

if (arg2 != 0 && sub_142898c70(arg2) != 0)
    void* r14 = *(*(arg1 + 0x488) + 0x1e0)
    
    if (r14 == 0)
        r14 = *(*(arg1 + 0x598) + 0x20)
    
    int64_t* rax_4 = sub_14289e400()
    
    if (rax_4 == 0)
        sub_1428a5670((rax_4 + 0x14).d, 0xcf, (rax_4 + 0x41).d, "ssl\ssl_cert.c", 0x180)
        return 0
    
    int32_t rax_7 = sub_14289e160(rax_4, r14, sub_142898ea0(arg2, 0), arg2)
    
    if (rax_7 == 0)
        sub_1428a5670(rax_7 + 0x14, 0xcf, rax_7 + 0xb, "ssl\ssl_cert.c", 0x186)
        sub_14289e0e0(rax_4)
        return 0
    
    void* rax_8 = sub_1427ec4a0(rax_4)
    sub_14289a9e0(rax_8, sub_14284fcc0(arg1))
    sub_14289e5a0(rax_4, *(*(arg1 + 0x488) + 0x1c) & 0x30000)
    int32_t rcx_11 = 0
    int32_t rdx_4 = -1
    
    if (sub_1428a5c60(&data_143feae34, sub_142854b80) != 0)
        rcx_11 = data_143feae38
    
    if (rcx_11 != 0)
        rdx_4 = data_143b815c0
    
    if (sub_14284e7f0(rax_4, rdx_4, arg1) != 0)
        if (arg1 != -0xd8 && sub_142898c70(*(arg1 + 0xe0)) s> 0)
            sub_14289e540(rax_4, arg1 + 0xd8)
        
        char const* const rdx_6 = "ssl_server"
        
        if (*(arg1 + 0x38) != 0)
            rdx_6 = "ssl_client"
        
        sub_14289e550(rax_4, rdx_6)
        sub_1428ab680(rax_8, *(arg1 + 0xd0))
        int64_t rdx_8 = *(arg1 + 0x560)
        
        if (rdx_8 != 0)
            sub_14289a990(rax_4, rdx_8)
        
        void* rdx_9 = *(arg1 + 0x598)
        int64_t rax_13 = *(rdx_9 + 0x98)
        int32_t rax_14
        
        if (rax_13 == 0)
            rax_14 = sub_14289e8e0(rax_4)
        else
            rax_14 = rax_13(rax_4, *(rdx_9 + 0xa0))
        
        rbp = rax_14
        int32_t rax_15 = sub_14289e150(rax_4)
        int32_t* rcx_20 = *(arg1 + 0x5a0)
        *(arg1 + 0x5a8) = rax_15
        sub_142898cb0(rcx_20, sub_1428a2c50)
        *(arg1 + 0x5a0) = 0
        
        if (sub_14067b2f0(rax_4) != 0)
            int64_t rax_17 = sub_14289e120(rax_4)
            *(arg1 + 0x5a0) = rax_17
            
            if (rax_17 == 0)
                sub_1428a5670((rax_17 + 0x14).d, 0xcf, (rax_17 + 0x41).d, "ssl\ssl_cert.c", 0x1b6)
                rbp = 0
        
        sub_1428ab5b0(*(arg1 + 0xd0), rax_8)
    
    sub_14289e0e0(rax_4)
    return zx.q(rbp)

return 0
