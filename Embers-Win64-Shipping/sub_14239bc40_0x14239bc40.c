// 函数: sub_14239bc40
// 地址: 0x14239bc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg1 + 0xa8)
int32_t rax = *(rbp + 0x18)
void* rdi = rbp + 0x10
int32_t i = 0
int64_t r15 = arg3
void* arg_20 = rdi
int32_t* var_50 = nullptr
int64_t var_48 = 0

if (rax != 0)
    arg3, arg4 = sub_1405dadb0(&var_50, rax)
    rax = *(rdi + 8)

int32_t rbx = 0

if (rax s> 0)
    while (*(arg1 + 0xe0) == 0)
        char rax_3
        rax_3, arg3, arg4 = sub_1423b7c90(sx.q(rbx) * 0xd8 + *rdi, *(rbp + 0x1dc), arg3, arg4)
        
        if (rax_3 != 0)
            int64_t rdi_1 = sx.q(var_48.d)
            int32_t rax_4 = (rdi_1 + 1).d
            var_48.d = rax_4
            
            if (rax_4 s> var_48:4.d)
                arg3, arg4 = sub_1405a4cf0(&var_50)
            
            var_50[rdi_1] = rbx
            rdi = rbp + 0x10
        
        rbx += 1
        
        if (rbx s>= *(rdi + 8))
            break

int32_t* rcx_4 = var_50
void* var_58 = rdi
uint64_t result = sub_14237ba50(rcx_4, var_48.d, arg5, &var_58)
*(arg1 + 0xb8) = 0

if (*(arg1 + 0xbc) != 0)
    result = sub_1405dadb0(arg1 + 0xb0, 0)

*(arg1 + 0xc8) = 0

if (*(arg1 + 0xcc) != 0)
    result = sub_1405dadb0(arg1 + 0xc0, 0)

if (var_48.d s> 0)
    int32_t* r10_1 = var_50
    arg5.q = r10_1
    
    do
        result = zx.q(*(arg1 + 0xe0))
        
        if (result.b != 0)
            break
        
        int64_t r12_1 = sx.q(*r10_1)
        void* rcx_8 = r12_1 * 0xd8 + *rdi
        int32_t result_1
        int32_t r9_1
        
        if ((*(rcx_8 + 0xb4) & 0x20) != 0)
            r9_1 = *(rcx_8 + 0x60)
            result_1 = *(rcx_8 + 0x5c)
        
        int64_t rdi_2
        
        if ((*(rcx_8 + 0xb4) & 0x20) == 0 || r9_1 == result_1)
            result = sx.q(*(rcx_8 + 0x9c))
            int32_t rdx_5 = *(rcx_8 + 0x5c)
            bool cond:0_1 = result.d s<= rdx_5
            
            if (result.d s>= rdx_5)
                goto label_14239be17
            
            int64_t r8_1 = *(arg1 + 0x100)
            int64_t rbp_2
            bool cond:1_1
            
            if (r15 s>= r8_1)
                cond:0_1 = result.d s<= rdx_5
            label_14239be17:
                
                if (not(cond:0_1))
                    int64_t rdx_6 = *(arg1 + 0x100)
                    
                    if (r15 s< rdx_6)
                        rbp_2 = sx.q(*(rcx_8 + (result << 2) + 0x18)) + r15
                        cond:1_1 = rbp_2 s<= rdx_6
                        goto label_14239be30
            else
                rbp_2 = sx.q(*(rcx_8 + (result << 2) + 0x18)) + r15
                cond:1_1 = rbp_2 s<= r8_1
            label_14239be30:
                
                if (cond:1_1 || *(arg1 + 0xb8) == 0)
                    rdi_2 = sx.q(*(arg1 + 0xb8))
                    int32_t rax_7 = (rdi_2 + 1).d
                    bool cond:2_1 = rax_7 s<= *(arg1 + 0xbc)
                    *(arg1 + 0xb8) = rax_7
                    
                    if (not(cond:2_1))
                        sub_1405a4cf0(arg1 + 0xb0)
                        r10_1 = arg5.q
                    
                    result = *(arg1 + 0xb0)
                    r15 = rbp_2
                    *(result + (rdi_2 << 2)) = r12_1.d
                    rdi = arg_20
        else
            int32_t result_2 = *(rcx_8 + 0x9c)
            result = zx.q(result_2 + 1)
            
            if (result_1 s>= result.d)
                result = zx.q(result_1)
            
            if (r9_1 s<= result.d && result_1 s<= result_2)
                result_2 = result_1
            
            if (r9_1 s> result.d || r9_1 s< result_2)
                rdi_2 = sx.q(*(arg1 + 0xc8))
                int32_t rax_6 = (rdi_2 + 1).d
                *(arg1 + 0xc8) = rax_6
                
                if (rax_6 s> *(arg1 + 0xcc))
                    sub_1405a4cf0(arg1 + 0xc0)
                    r10_1 = arg5.q
                
                result = *(arg1 + 0xc0)
                *(result + (rdi_2 << 2)) = r12_1.d
                rdi = arg_20
        r10_1 = &r10_1[1]
        i += 1
        arg5.q = r10_1
    while (i s< var_48.d)

int32_t* rcx_11 = var_50

if (rcx_11 == 0)
    return result

return sub_140a74f90(rcx_11) __tailcall
