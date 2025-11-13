// 函数: sub_142884a90
// 地址: 0x142884a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t r14 = 0
void* rsi = nullptr

if (*(arg1 + 0x18) == 0 && *(arg1 + 0x20) == 0)
    return 1

int64_t* rax_1 = sub_14289a500(&data_143507b90)

if (rax_1 != 0 && sub_142899cf0(rax_1, 0x6c, 3, arg2) s> 0)
    void* rax_3 = sub_1428c6f90(rax_1, nullptr, 0, nullptr, arg3)
    rsi = rax_3
    
    if (rax_3 != 0)
        int64_t* rcx_2 = *(arg1 + 0x18)
        
        if (rcx_2 != 0)
            r14 = sub_14284dc40(rcx_2, 3, 0, rax_3)
        
        void* rcx_3 = *(arg1 + 0x20)
        
        if (rcx_3 != 0)
            r14 = sub_14284eae0(rcx_3, 3, 0, rsi)

sub_1428c1620(rsi)
sub_142899e70(rax_1)
int32_t rdi
rdi.b = r14 s> 0
return zx.q(rdi)
