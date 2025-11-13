// 函数: sub_142b9a8f0
// 地址: 0x142b9a8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)
int64_t rbx = 0
int64_t* arg_8 = rcx
int32_t r12 = 0
uint64_t i_2 = zx.q(arg1[1])
uint64_t rdi = zx.q((i_2 * 2).d)
arg1[1] = rdi.d
*arg1 = rdi.d u/ 3
int32_t temp5 = rdi.d

if (temp5 s< 0)
    r12 = 6
else if (temp5 != 0)
    if (rdi.d s<= 0xfffffff)
        uint32_t rbp_1 = (rdi << 3).d
        int64_t rax_1 = (*(arg2 + 8))(arg2, zx.q(rbp_1))
        rbx = rax_1
        
        if (rax_1 == 0)
            r12 = 0x40
        else if (rdi.d s> 0)
            memset(rax_1, 0, sx.q(rbp_1))
        
        rcx = arg_8
    else
        r12 = 0xa

*(arg1 + 0x20) = rbx

if (r12 == 0)
    int64_t* r14_1 = rcx
    
    if (i_2.d != 0)
        uint64_t i_1 = i_2
        uint64_t i
        
        do
            int64_t* rax_2 = *r14_1
            
            if (rax_2 != 0)
                int64_t rdi_1 = *(arg1 + 0x20)
                int64_t arg_18 = *rax_2
                uint64_t rdx_3 = zx.q(modu.dp.d(0:((*(arg1 + 0x10))(&arg_18)), arg1[1]))
                int64_t* rbx_1 = rdi_1 + (rdx_3 << 3)
                
                if (*(rdi_1 + (rdx_3 << 3)) != 0)
                    do
                        if ((*(arg1 + 0x18))(*rbx_1, &arg_18) != 0)
                            break
                        
                        rbx_1 -= 8
                        
                        if (rbx_1 u< rdi_1)
                            rbx_1 = rdi_1 + (zx.q(arg1[1] - 1) << 3)
                    while (*rbx_1 != 0)
                
                *rbx_1 = *r14_1
            
            r14_1 = &r14_1[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rcx = arg_8
    
    if (rcx != 0)
        (*(arg2 + 0x10))(arg2, rcx)

return zx.q(r12)
