// 函数: sub_1423b06c0
// 地址: 0x1423b06c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int64_t* r14 = arg2
void* rbp = arg4
int64_t rdi = sx.q(arg3)
void* r13 = arg1
int64_t** r15_1 = *(*arg2 + 0xd0) + 0x18
int64_t** var_60 = r15_1
sub_1423b5090(arg1, arg7, arg5, arg6)
int64_t rsi = sx.q(r14[2].d)
void* r12 = r13 + 0x10
int64_t rbx = sx.q(*(r12 + 0x78))
void* var_70 = r12
int32_t rax_1 = (rbx + rsi).d
*(r12 + 0x78) = rax_1

if (rax_1 s> *(r12 + 0x7c))
    sub_1423b4cf0(r12, rbx.d)

void* rax_2 = *(r12 + 0x70)
void* rcx_1 = r12

if (rax_2 != 0)
    rcx_1 = rax_2

memset(rcx_1 + (rbx << 3), 0, rsi << 3)
void* rax_3 = *(r13 + 0xe0)
void* rbx_1 = r13 + 0x90

if (rax_3 != 0)
    rbx_1 = rax_3

void* rax_5 = rbx_1 + sx.q(*(r13 + 0xe8)) * 0x28
void* var_58 = rax_5

if (rbx_1 != rax_5)
    int64_t rsi_1 = rdi
    int64_t var_80_1 = rdi
    
    do
        if (rdi.d s>= *(rbx_1 + 0x20))
            int64_t rcx_5 = rsi_1 * 0x28
            int64_t var_78_1 = rcx_5
            
            while (rdi.d s<= *(rbx_1 + 0x24))
                if (rdi.d s>= r14[2].d)
                    break
                
                if (rsi_1 s< 0)
                    break
                
                if (rdi.d s>= *(rbp + 0x238))
                    break
                
                void* rax_6 = *(rbp + 0x230)
                void* r13_1 = rbp
                
                if (rax_6 != 0)
                    r13_1 = rax_6
                
                void* r13_2 = r13_1 + rcx_5
                
                if (*(rbx_1 + 0x10) == 0)
                    int64_t* rax_7 = __crt_deferred_errno_cache::get(&data_143db7b00)
                    *(rbx_1 + 8)
                    int64_t* rax_9 = (*(*rax_7 + 0x118))()
                    int64_t* rcx_6 = *(rbx_1 + 0x10)
                    int64_t* rdx_2 = rcx_6
                    
                    if (rcx_6 != rax_9)
                        *(rbx_1 + 0x10) = rax_9
                        rdx_2 = rax_9
                        
                        if (rcx_6 != 0)
                            (**rcx_6)(rcx_6, 1)
                            rdx_2 = *(rbx_1 + 0x10)
                    
                    if (rdx_2 == 0)
                        break
                
                int64_t rcx_7 = rsi_1 << 3
                int64_t* rax_13 = (*r15_1)[rsi_1] + 0x10
                
                if (*(r13_2 + 8) != 0 && sub_140bc7f20(rax_13) s> zx.q(*(r13_2 + 8)))
                    break
                
                int32_t* rax_16 = *(arg7 + 8)
                *rax_16 += 1
                int64_t* r15_2 = *(rbx_1 + 0x10)
                void* r12_1 = *(r12 + 0x70)
                int64_t r14_1 = *r15_2
                int32_t rbp_1
                rbp_1.b = *(arg1 + 0xf0) != 0
                int64_t rax_18 = sub_140bc7f20(rax_13)
                int64_t rax_21 = (*(r14_1 + 0x10))(r15_2, sub_140bc7eb0(rax_13) + *(rbx_1 + 0x18), 
                    rax_18, zx.q(rbp_1 + 1), arg1 + 0x100, *r13_2, rax_13, var_80_1, var_78_1, 
                    var_70, rcx_7, var_60, var_58)
                void* rdx_5 = var_70
                
                if (r12_1 != 0)
                    rdx_5 = r12_1
                
                void* rdx_6 = rdx_5 + rcx_7
                int64_t* rcx_13 = *rdx_6
                
                if (rcx_13 != rax_21)
                    *rdx_6 = rax_21
                    
                    if (rcx_13 != 0)
                        (**rcx_13)(rcx_13, 1)
                
                rdi = zx.q(arg_18 + 1)
                rsi_1 = var_80_1 + 1
                rbp = arg4
                rcx_5 = var_78_1 + 0x28
                r14 = arg2
                r15_1 = var_60
                r12 = var_70
                arg_18 = rdi.d
                var_80_1 = rsi_1
                var_78_1 = rcx_5
                
                if (rdi.d s< *(rbx_1 + 0x20))
                    break
            
            rax_5 = var_58
        
        rbx_1 += 0x28
    while (rbx_1 != rax_5)
    
    r13 = arg1

*(r13 + 8) = 2
return zx.q(rdi.d)
