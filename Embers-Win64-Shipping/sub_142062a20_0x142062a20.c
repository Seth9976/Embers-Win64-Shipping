// 函数: sub_142062a20
// 地址: 0x142062a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (*(arg1 + 0xb8) != 0)
    void* rax_1 = *(arg1 + 0xb0)
    void* rdx = arg1 + 0x10
    int64_t r8_1 = sx.q(*(arg1 + 0xb8))
    
    if (rax_1 != 0)
        rdx = rax_1
    
    int64_t rcx = r8_1 * 5
    uint128_t zmm1 = *(rdx + (rcx << 3) - 0x18)
    uint128_t var_48 = *(rdx + (rcx << 3) - 0x28)
    uint64_t var_28_1 = *(rdx + (rcx << 3) - 8)
    *(arg1 + 0xb8) = (r8_1 - 1).d
    uint128_t var_38_1 = zmm1
    sub_142066760(arg1 + 0x10)
    
    if (_mm_bsrli_si128(zmm1, 8).q == 0)
        void* rax_4 = *(arg1 + 0x110)
        void* rcx_2 = arg1 + 0x100
        int64_t rdx_1 = sx.q(*(arg1 + 0x118))
        
        if (rax_4 != 0)
            rcx_2 = rax_4
        
        int64_t rdi_1 = *(rcx_2 + (rdx_1 << 3) - 8)
        *(arg1 + 0x118) = (rdx_1 - 1).d
        sub_1420666d0(arg1 + 0x100)
        var_38_1:8.q = rdi_1
    
    sub_142059e30(&var_48, arg2, arg1 + 0x120, 8)
    sub_14206aa50(&var_48, arg2, *(arg1 + 0x130))
    *(var_38_1.q + 0x38) = 0xffffffff
    int64_t rdi_2 = sx.q(*(arg1 + 0x118))
    int32_t rax_7 = (rdi_2 + 1).d
    *(arg1 + 0x118) = rax_7
    
    if (rax_7 s> *(arg1 + 0x11c))
        sub_1408092e0(arg1 + 0x100, rdi_2.d)
    
    void* rax_8 = *(arg1 + 0x110)
    void* rdx_5 = arg1 + 0x100
    
    if (rax_8 != 0)
        rdx_5 = rax_8
    
    *(rdx_5 + (rdi_2 << 3)) = var_38_1:8.q

return sub_142066200(arg1) __tailcall
