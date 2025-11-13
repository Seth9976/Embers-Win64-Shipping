// 函数: sub_141fe9fd0
// 地址: 0x141fe9fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d266d0(arg1)
uint64_t result = zx.q(*(arg1 + 8) u>> 0xa)

if ((result.b & 1) != 0)
    void* rax_1 = sub_142551420()
    void* r8_1 = *(*(arg1 + 0x20) + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(r8_1 + 0x38))
        result = *(r8_1 + 0x30)
    
    if (rax_2.d s<= *(r8_1 + 0x38) && *(result + (rax_2 << 3)) == rax_1 + 0x30)
        *(arg1 + 0x38) = 0x1e6930c2
        *(arg1 + 0x3c) = 0x1e6930c2
    else
        void* rax_3 = sub_14259fc50()
        void* rdx_3 = *(*(arg1 + 0x20) + 0x10)
        result = sx.q(*(rax_3 + 0x38))
        
        if (result.d s<= *(rdx_3 + 0x38))
            uint64_t result_1 = result
            result = *(rdx_3 + 0x30)
            
            if (*(result + (result_1 << 3)) == rax_3 + 0x30)
                *(arg1 + 0x38) = 0x1e6930c2
                *(arg1 + 0x3c) = 0x1e6930c2

return result
