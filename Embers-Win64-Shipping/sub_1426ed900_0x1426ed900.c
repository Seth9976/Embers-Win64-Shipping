// 函数: sub_1426ed900
// 地址: 0x1426ed900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t arg_8 = *(*(arg1 + 0x10) + 0x18)
sub_140b63b70(&arg_8, arg2)
int16_t* r10 = *arg2
uint64_t r8 = sx.q(arg2[1].d)
int16_t* rcx_2 = r10
void* rdx = &r10[r8]

if (r10 != rdx)
    do
        if (*rcx_2 == 0x5f)
            int32_t rcx_4 = ((rcx_2 - r10) s>> 1).d
            
            if (rcx_4 != 0xffffffff)
                int32_t rcx_5 = 0x7fffffff
                int32_t rdi_1 = (r8 - 1).d
                
                if (sx.q(rcx_4 + 1) + 0x7fffffff s<= 0x7fffffff)
                    rcx_5 = rcx_4 - -0x80000000
                
                int32_t temp1_1 = r8.d
                int32_t rax_3 = (r8 - 1).d
                
                if (temp1_1 == 0)
                    rax_3 = -1
                
                if (temp1_1 == 0)
                    rdi_1 = -1
                
                if (temp1_1 == 0)
                    rax_3 = 0
                
                int32_t r9_1
                
                if (rcx_5 s>= 0)
                    r9_1 = rax_3
                    
                    if (rcx_5 s< rax_3)
                        r9_1 = rcx_5
                else
                    r9_1 = 0
                
                if (r8.d == 0)
                    rdi_1 = 0
                
                int32_t rdi_2 = rdi_1 - r9_1
                int32_t rax_4 = rax_3 - r9_1
                
                if (rax_3 - r9_1 s>= 0)
                    if (rax_4 s< rdi_2)
                        rdi_2 = rax_4
                    
                    if (rdi_2 != 0)
                        int32_t rax_6 = r8.d - rdi_2
                        
                        if (rax_6 != r9_1)
                            memmove(&r10[sx.q(r9_1)], &r10[sx.q(rdi_2 + r9_1)], (rax_6 - r9_1) * 2)
                            r8 = zx.q(arg2[1].d)
                        
                        r8 = zx.q(r8.d - rdi_2)
                        arg2[1].d = r8.d
                
                int32_t rdi_3 = (r8 - 1).d
                
                if (r8.d == 0)
                    rdi_3 = 0
                
                if (rcx_4 + 1 s>= 0)
                    if (rcx_4 + 1 s< rdi_3)
                        rdi_3 = rcx_4 + 1
                    
                    if (rdi_3 != 0)
                        int32_t rax_10 = r8.d
                        
                        if (rax_10 != rdi_3)
                            int64_t rcx_8 = *arg2
                            memmove(rcx_8, rcx_8 + (sx.q(rdi_3) << 1), (rax_10 - rdi_3) * 2)
                            r8 = zx.q(arg2[1].d)
                        
                        arg2[1].d = r8.d - rdi_3
            
            break
        
        rcx_2 = &rcx_2[1]
    while (rcx_2 != rdx)

int32_t rdx_3 = arg2[1].d
int32_t rax_13
rax_13.b = rdx_3 s<= 0
int32_t rdi_4 = rdx_3 - 1

if (rdx_3 s<= 0)
    rdi_4 = 0

int32_t rax_15 = rax_13 + 1 + rdx_3
arg2[1].d = rax_15

if (rax_15 s> *(arg2 + 0xc))
    sub_140594770(arg2)

int64_t rcx_10 = sx.q(rdi_4)
*(*arg2 + (rcx_10 << 1)) = 0x2e
*(*arg2 + (rcx_10 << 1) + 2) = 0
int64_t var_28
int64_t* rax_18 = sub_140b63b70(&arg_18, &var_28)
int32_t rcx_12 = rax_18[1].d
int32_t r8_6 = rcx_12 - 1

if (rcx_12 == 0)
    r8_6 = 0

sub_140a20ba0(arg2, *rax_18, r8_6)
int64_t rcx_14 = var_28

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

return arg2
