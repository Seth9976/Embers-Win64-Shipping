// 函数: sub_142bb3ab0
// 地址: 0x142bb3ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = *(arg2 + 0x30)
int32_t arg_10
int32_t rax = (*(arg1 + 0x2a0))(arg1, 0x63767420, arg2, &arg_10)
int64_t rbx = 0
int32_t arg_8 = rax

if (rax != 0)
    *(arg1 + 0x3d0) = 0
    *(arg1 + 0x3d8) = 0
    return 0

uint32_t r9_2 = arg_10 u>> 1
*(arg1 + 0x3d0) = r9_2
int64_t rax_2
int512_t zmm0
rax_2, zmm0 = sub_142b99a90(rdi, 2, 0, r9_2, 0, &arg_8)
*(arg1 + 0x3d8) = rax_2
int32_t rax_3 = arg_8

if (rax_3 == 0)
    rax_3 = sub_142b96500(arg2, *(arg1 + 0x3d0) * 2)
    arg_8 = rax_3
    
    if (rax_3 == 0)
        uint64_t rax_4 = zx.q(*(arg1 + 0x3d0))
        uint16_t* rdi_1 = *(arg1 + 0x3d8)
        uint64_t r14_2 = ((rax_4 << 1) + 1) u>> 1
        
        if (rdi_1 u> &rdi_1[rax_4])
            r14_2 = 0
        
        if (r14_2 != 0)
            do
                rbx += 1
                *rdi_1 = sub_142b967c0(arg2)
                rdi_1 = &rdi_1[1]
            while (rbx u< r14_2)
        
        sub_142b96620(arg2)
        
        if (*(arg1 + 0x409) == 0)
            return arg_8
        
        return sub_142bb3f50(arg1, arg2, zmm0)

return rax_3
