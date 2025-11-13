// 函数: sub_140ce06f0
// 地址: 0x140ce06f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
void var_98
void* rsp_1 = &var_98
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int32_t var_68
uint64_t result = __security_cookie ^ &var_68
uint64_t result_1 = result
int64_t r9
int64_t var_50 = r9

if (arg2 != 0)
    result = *(arg1 + 0x78)
    
    if ((*(result + 0x40) & 0x8000080000) != 0)
        uint32_t count = *(result + 0x3c)
        int32_t r8 = *(arg1 + 0x80)
        uint32_t count_1 = count
        char var_34_1 = r8.b
        void* r13
        
        if (count != 0)
            int64_t rcx = sx.q(count + 0xf)
            int64_t rax_2 = rcx + 0xf
            
            if (rax_2 u<= rcx)
                rax_2 = 0xffffffffffffff0
            
            result = rax_2 & 0xfffffffffffffff0
            __chkstk(result)
            rsp_1 = &var_98 - result
            r13 = (rsp_1 + 0x3f) & 0xfffffffffffffff0
        else
            r13 = nullptr
        
        r8.b = not.b(r8.b)
        int32_t r15 = 0
        r8.b &= 1
        int32_t r12 = 0
        int32_t var_64_1 = r8
        int32_t r10_1 = 0
        
        while (true)
            int32_t rdx = arg2[1].d
            var_68 = r10_1
            
            if (r15 s>= rdx)
                break
            
            if (arg3 != 0)
                arg3[1]
                *arg3
            
            void* rdx_1
            
            if (rdx != 0)
                void* rcx_2 = *arg2
                
                if (r8.b == 0 && (rcx_2.b & 1) != 0)
                    rcx_2 = (rcx_2 s>> 1) + arg2
                
                rdx_1 = sx.q(r12) + rcx_2
            else
                rdx_1 = nullptr
            
            memmove(r13, rdx_1, count)
            *(rsp_1 + 0x20) = arg4
            (*(**(arg1 + 0x78) + 0x100))(nop)
            int32_t rax_8 = arg2[1].d
            
            if (r15 s>= rax_8)
                int64_t* rcx_9 = *(arg1 + 0x78)
                result.b = not.b((rcx_9[8] u>> 0x24).b)
                
                if ((result.b & 1) != 0)
                    result = (*(*rcx_9 + 0xe8))(rcx_9, r13)
            else if (rax_8 != 0)
                void* rcx_6 = *arg2
                
                if (var_64_1.b == 0 && (rcx_6.b & 1) != 0)
                    rcx_6 = (rcx_6 s>> 1) + arg2
                
                result = memmove(rcx_6 + sx.q(r12), r13, count)
            else
                result = memmove(nullptr, r13, count)
            
            count = count_1
            r15 += 1
            r8 = var_64_1
            r10_1 = var_68 + count
            r12 += count

__security_check_cookie(result_1 ^ &var_68)
return result
