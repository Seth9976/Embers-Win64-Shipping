// 函数: sub_1420cbe40
// 地址: 0x1420cbe40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result_1 = sub_1408d4dd0(arg1)
uint64_t result = result_1

if (result_1 == 0)
    result = 0
else
    void* rax = sub_140bdf2e0()
    void* rdx_1 = *(result + 0x10)
    int64_t rax_1 = sx.q(*(rax + 0x38))
    
    if (rax_1.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_1 << 3)) != rax + 0x30)
        result = 0
    else
        void* rax_3 = sub_140d41340()
        
        if (rax_3 == 0)
            result = 0
        else
            int64_t rax_4 = sx.q(*(rax_3 + 0x38))
            
            if (rax_4.d s> *(result + 0x38) || *(*(result + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                result = 0

int64_t rcx_2 = *(arg1 + 0x18)

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

return result
