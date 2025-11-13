// 函数: sub_142c2f080
// 地址: 0x142c2f080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = -2
uint64_t rbp
uint64_t arg_18 = rbp
void* rbx_2 = zx.q(((zx.d(*(arg1 + 9)) << 0x10) + (zx.d(*(arg1 + 0xa)) << 8)
    + (zx.d(*(arg1 + 8)) << 0x18) + zx.d(*(arg1 + 0xb))) * 0xc) + arg1 + 0x10
uint32_t r15_3 =
    (zx.d(*(arg1 + 0xd)) << 0x10) + (zx.d(*(arg1 + 0xe)) << 8) + (zx.d(*(arg1 + 0xc)) << 0x18)
uint64_t result = zx.q(*(arg1 + 0xf))
int32_t r15_4 = r15_3 + result.d
int32_t r14 = 0

if (r15_3 != neg.d(result.d))
    do
        if ((arg3 & ((zx.d(*(rbx_2 + 9)) << 0x10) + (zx.d(*(rbx_2 + 0xa)) << 8)
                + (zx.d(*(rbx_2 + 8)) << 0x18) + zx.d(*(rbx_2 + 0xb)))) != 0)
            int32_t rax_25
            
            if (not(test_bit(
                    (zx.d(*(rbx_2 + 5)) << 0x10) + (zx.d(*(rbx_2 + 6)) << 8)
                        + (zx.d(*(rbx_2 + 4)) << 0x18) + zx.d(*(rbx_2 + 7)), 
                    0x1d)))
                rax_25.b = (*(*(arg2 + 0x18) + 0x38) & 0xfffffffe) == 6
            
            if (test_bit(
                    (zx.d(*(rbx_2 + 5)) << 0x10) + (zx.d(*(rbx_2 + 6)) << 8)
                        + (zx.d(*(rbx_2 + 4)) << 0x18) + zx.d(*(rbx_2 + 7)), 
                    0x1d) || rax_25 == ((zx.d(*(rbx_2 + 5)) << 0x10) + (zx.d(*(rbx_2 + 6)) << 8)
                    + (zx.d(*(rbx_2 + 4)) << 0x18) + zx.d(*(rbx_2 + 7))) u>> 0x1f)
                uint32_t rax_32 = zx.d(*(rbx_2 + 6)) << 8
                
                if (not(test_bit(
                        (zx.d(*(rbx_2 + 5)) << 0x10) + (zx.d(*(rbx_2 + 6)) << 8)
                            + (zx.d(*(rbx_2 + 4)) << 0x18) + zx.d(*(rbx_2 + 7)), 
                        0x1c)))
                    int32_t rax_40
                    rax_40.b = (*(*(arg2 + 0x18) + 0x38) & 0xfffffffd) == 5
                    rbp.b = (((zx.d(*(rbx_2 + 5)) << 0x10) + rax_32 + (zx.d(*(rbx_2 + 4)) << 0x18)
                        + zx.d(*(rbx_2 + 7))) u>> 0x1e & 1) != rax_40
                else
                    rbp.b = (((zx.d(*(rbx_2 + 5)) << 0x10) + rax_32 + (zx.d(*(rbx_2 + 4)) << 0x18)
                        + zx.d(*(rbx_2 + 7))) u>> 0x1e).b & 1
                
                if (sub_142c22650(*(arg2 + 0x18), *(arg2 + 8), "start chain subtable %d", 
                        zx.q(*(arg2 + 0x60))) != 0)
                    if (rbp.b != 0)
                        sub_142bf5780(*(arg2 + 0x18))
                    
                    void* arg_8 = arg2 + 0x20
                    sub_142c18fb0(arg2 + 0x20, rbx_2)
                    sub_142c2b710(rbx_2, arg2)
                    void* rax_42 = *(arg2 + 0x48)
                    int64_t rcx_24 = *(rax_42 + 0x10)
                    *(arg2 + 0x28) = rcx_24
                    *(arg2 + 0x30) = zx.q(*(rax_42 + 0x18)) + rcx_24
                    
                    if (rbp.b != 0)
                        sub_142bf5780(*(arg2 + 0x18))
                    
                    sub_142c22650(*(arg2 + 0x18), *(arg2 + 8), "end chain subtable %d", 
                        zx.q(*(arg2 + 0x60)))
                    result = *(arg2 + 0x18)
                    
                    if (*(result + 0x58) == 0)
                        break
        
        result = zx.q(*(rbx_2 + 3))
        rbx_2 = rbx_2 + result
            + (((((zx.q(*rbx_2) << 8) + zx.q(*(rbx_2 + 1))) << 8) + zx.q(*(rbx_2 + 2))) << 8)
        *(arg2 + 0x60) += 1
        r14 += 1
    while (r14 u< r15_4)

return result
