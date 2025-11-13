// 函数: sub_1429075d0
// 地址: 0x1429075d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18 = arg3
__chkstk(0x68)
int64_t* r13 = arg1
int64_t r14 = sx.q(arg2)
int32_t rbx = 1 << arg5.b
void* rdi = arg3
int64_t* result = sub_142890e60(r13, r14.d)

if (result == 0)
    return result

int64_t r11 = r14

if (arg5 s> 3)
    int32_t rdx_11 = arg4 s>> (arg5.b - 2)
    int32_t i_3 = 1 << (arg5.b - 2)
    int64_t i_2 = sx.q(i_3)
    int32_t rcx_9 = rdx_11 ^ 1
    int32_t rcx_13 = rdx_11 ^ 2
    int32_t rdx_12 = rdx_11 ^ 3
    int64_t rcx_21 = neg.q(zx.q(neg.d((rdx_12 - 1) u>> 0x1f & not.d(rdx_12) u>> 0x1f)) & 1)
    int64_t var_70_1 = rcx_21
    
    if (r14.d s> 0)
        int64_t r15_1 = 0
        int64_t rax_23 = sx.q(rbx) << 3
        int64_t var_48_1 = rax_23
        int64_t var_78_1 = 0
        
        do
            int64_t rbx_1 = 0
            int32_t r10_2 = 0
            
            if (i_2 s> 0)
                void* r9_3 = (i_2 << 4) + rdi
                int64_t i_1 = i_2
                int64_t i
                
                do
                    int64_t rax_26 = *(r9_3 + (i_2 << 3))
                    r9_3 += 8
                    int32_t r8_2 = r10_2 ^ (arg4 & (i_3 - 1))
                    int64_t rdx_17 = (*((neg.q(i_2) << 3) + r9_3 - 8)
                        & neg.q(zx.q(neg.d((rcx_9 - 1) u>> 0x1f & not.d(rcx_9) u>> 0x1f)) & 1)) | (
                        *(r9_3 - 8)
                        & neg.q(zx.q(neg.d((rcx_13 - 1) u>> 0x1f & not.d(rcx_13) u>> 0x1f)) & 1))
                        | (rax_26 & rcx_21)
                    r10_2 += 1
                    int64_t rcx_31 =
                        neg.q(zx.q(neg.d((r8_2 - 1) u>> 0x1f & not.d(r8_2) u>> 0x1f)) & 1) & ((
                        *(r9_3 + neg.q(i_2) * 0x10 - 8)
                        & neg.q(zx.q(neg.d(not.d(rdx_11) u>> 0x1f & (rdx_11 - 1) u>> 0x1f)) & 1))
                        | rdx_17)
                    rbx_1 |= rcx_31
                    rcx_21 = var_70_1
                    i = i_1
                    i_1 -= 1
                while (i != 1)
                rdi = arg_18
                r15_1 = var_78_1
                r13 = arg1
                r11 = r14
                rax_23 = var_48_1
            
            rdi += rax_23
            arg_18 = rdi
            *(*r13 + (r15_1 << 3)) = rbx_1
            r15_1 += 1
            rcx_21 = var_70_1
            var_78_1 = r15_1
        while (r15_1 s< r11)
        
        r14 = zx.q(arg2)
else if (r14.d s> 0)
    int64_t r10_1 = 0
    
    do
        int64_t r9 = 0
        int32_t rax = 0
        
        if (rbx s> 0)
            void* r8 = rdi
            
            do
                r8 += 8
                int32_t rdx_2 = rax ^ arg4
                rax += 1
                r9 |=
                    neg.q(zx.q(neg.d(not.d(rdx_2) u>> 0x1f & (rdx_2 - 1) u>> 0x1f)) & 1) & *(r8 - 8)
            while (rax s< rbx)
        
        rdi += sx.q(rbx) << 3
        *(*r13 + (r10_1 << 3)) = r9
        r10_1 += 1
    while (r10_1 s< r14)

r13[1].d = r14.d
return 1
