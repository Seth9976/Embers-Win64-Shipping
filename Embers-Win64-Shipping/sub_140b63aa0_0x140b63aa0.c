// 函数: sub_140b63aa0
// 地址: 0x140b63aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *arg1

if (rcx u> data_143e160b8)
    return 0

void* rdx_7

if (data_143e180c8 == data_143e18124)
    rdx_7 = nullptr
else
    uint32_t rax_2 = zx.d(rcx.w)
    void* rdx_3 = data_143e18528
    void* rax_9 = &data_143e18128
    
    if (rdx_3 != 0)
        rax_9 = rdx_3
    
    int32_t rax_10 = *(rax_9 + ((sx.q((rcx u>> 0x10) * 0x80001 + rax_2 * 0x10001 + (rax_2 u>> 4))
        & (sx.q(data_143e18530) - 1)) << 2))
    
    if (rax_10 == 0xffffffff)
        rdx_7 = nullptr
    else
        void* rdx_4 = data_143e180c0
        void* r8_7 = &data_143e160c0
        
        if (rdx_4 != 0)
            r8_7 = rdx_4
        
        while (true)
            rdx_7 = (sx.q(rax_10) << 4) + r8_7
            
            if (*rdx_7 == rcx)
                break
            
            rax_10 = *(rdx_7 + 8)
            
            if (rax_10 == 0xffffffff)
                return 0
        
        if (rax_10 == 0xffffffff)
            rdx_7 = nullptr

if (rdx_7 == 0)
    return nullptr

return rdx_7 + 4
