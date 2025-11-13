// 函数: sub_142bb2210
// 地址: 0x142bb2210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = *(arg1 + 0x30)
int32_t arg_10 = 0

if (arg3 u> arg2)
    return 0

int64_t result = sub_142b99a90(r12, 4, 0, arg3, 0, &arg_10)

if (arg_10 != 0)
    return 0

int32_t rbx = 0

if (arg3 != 0)
    do
        uint32_t rax_3 = zx.d(sub_142b96700(arg1))
        int32_t rdi_1 = 0
        int32_t rbp_2 = rax_3 & 0x3f
        
        if (rax_3.b s< 0)
            do
                if (rbx u>= arg3)
                label_142bb2314:
                    
                    if (rdi_1 u> rbp_2)
                        break
                    
                    sub_142b99980(r12, result)
                    return 0
                
                uint64_t rax_4 = zx.q(rbx)
                rdi_1 += 1
                rbx += 1
                *(result + (rax_4 << 2)) = 0
            while (rdi_1 u<= rbp_2)
        else if ((rax_3.b & 0x40) == 0)
            do
                if (rbx u>= arg3)
                    goto label_142bb2314
                
                rdi_1 += 1
                uint64_t rax_8 = zx.q(rbx)
                rbx += 1
                *(result + (rax_8 << 2)) = sx.d(sub_142b96700(arg1)) << 0x10
            while (rdi_1 u<= rbp_2)
        else
            do
                if (rbx u>= arg3)
                    goto label_142bb2314
                
                rdi_1 += 1
                uint64_t rax_6 = zx.q(rbx)
                rbx += 1
                *(result + (rax_6 << 2)) = sx.d(sub_142b967c0(arg1)) << 0x10
            while (rdi_1 u<= rbp_2)
    while (rbx u< arg3)

return result
