// 函数: sub_14226e280
// 地址: 0x14226e280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return *(arg1 + 0x30)

int64_t* var_18
sub_1424373a0(arg2, &var_18)
int32_t var_10
int32_t rax_2 = var_10

while (true)
    int64_t* rdx_1 = var_18
    int64_t rcx
    
    if (rax_2 s< 0 || rax_2 s>= rdx_1[1].d)
        rcx.b = 0
    else
        rcx.b = 1
    
    if (rcx.b == 0)
        break
    
    void* result
    result, rcx = sub_140d3c6e0(*rdx_1 + (sx.q(rax_2) << 3))
    
    if (result != 0)
        void* const rbx_1 = *(result + 0x298)
        void* rax_4
        int64_t rax_5
        void* rdx_2
        
        if (rbx_1 != 0)
            rax_4, rcx = sub_142531230()
            rdx_2 = *(rbx_1 + 0x10)
            rax_5 = sx.q(*(rax_4 + 0x38))
        
        if (rbx_1 == 0 || rax_5.d s> *(rdx_2 + 0x38)
                || *(*(rdx_2 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
            rbx_1 = nullptr
        
        if (rbx_1 == arg1)
            return result
    
    rax_2 = var_10 + 1
    var_10 = rax_2

return 0
