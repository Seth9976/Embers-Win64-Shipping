// 函数: sub_1428c3d90
// 地址: 0x1428c3d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

__chkstk(0x20)
void* rdx = *(arg2 + 0x18)
uint64_t rax = zx.q(*arg2)

if (rax.b != 0 && *arg1 == 0)
    return 

int64_t rbp_1

if (rdx != 0)
    rbp_1 = *(rdx + 0x18)

if (rdx == 0 || rbp_1 == 0)
    rbp_1 = 0

int64_t rcx = sx.q(rax.b)

if (rcx.d u> 6)
    return 

switch (rcx)
    case 0
        int32_t* rdx_1 = *(arg2 + 8)
        
        if (rdx_1 == 0)
            sub_1428c3ff0(arg1, arg2, zx.q(arg3))
        else
            sub_1428c4100(arg1, rdx_1)
    case 1, 6
        rax = sub_14291bca0(arg1, 0xffffffff, arg2)
        
        if (rax.d == 0)
            if (rbp_1 != 0)
                rax = rbp_1(zx.q((rax + 2).d), arg1, arg2, 0)
            
            if (rbp_1 == 0 || rax.d != 2)
                sub_14291bd90(arg1, arg2)
                rax = sx.q(*(arg2 + 0x10))
                int32_t i = 0
                int32_t* r14_3 = (rax << 5) + *(arg2 + 8)
                
                if (rax.d s> 0)
                    do
                        r14_3 -= 0x20
                        rax = sub_14291bb90(arg1, r14_3, 0)
                        
                        if (rax != 0)
                            sub_1428c4100(sub_14291bff0(arg1, rax), rax)
                        
                        i += 1
                    while (i s< *(arg2 + 0x10))
                
                if (rbp_1 != 0)
                    rbp_1(3, arg1, arg2, 0)
                
                if (arg3 == 0)
                    sub_1428a6780(*arg1)
                    *arg1 = 0
    case 2
        if (rbp_1 != 0)
            rax = rbp_1(2, arg1, arg2, 0)
        
        if (rbp_1 == 0 || rax.d != 2)
            rax = sub_14291bfe0(arg1, arg2)
            
            if (rax.d s>= 0 && rax.d s< *(arg2 + 0x10))
                int32_t* rbx_3 = (sx.q(rax.d) << 5) + *(arg2 + 8)
                sub_1428c4100(sub_14291bff0(arg1, rbx_3), rbx_3)
            
            if (rbp_1 != 0)
                rbp_1(3, arg1, arg2, 0)
            
            if (arg3 == 0)
                sub_1428a6780(*arg1)
                *arg1 = 0
    case 4
        if (rdx != 0)
            rax = *(rdx + 0x10)
            
            if (rax != 0)
                rax(arg1, arg2)
    case 5
        sub_1428c3ff0(arg1, arg2, zx.q(arg3))
