// 函数: sub_140caf7d0
// 地址: 0x140caf7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_143e1d990
int64_t r14 = 0
int32_t r8 = arg1[1].d

if (data_143de5444 != 0)
    rax = 0

int32_t rbx_2 = r8 * arg2 + rax
int32_t rax_2 = *(arg1 + 0xc) - 1

if (arg2 s>= rax_2)
    r8 = arg1[2].d - rax_2 * r8

int32_t rax_4 = data_143e1d9b4
uint32_t result_1 = rbx_2 - 1 + r8
int64_t var_48 = 0
uint32_t result = rax_4 - 1
int32_t var_3c = 0
int64_t var_58 = 0
int32_t rsi = 0
int32_t var_4c = 0

if (result s<= result_1)
    result_1 = result

int32_t r8_2 = 0
int64_t r12 = 0
int32_t rdi = 0
int32_t r13 = 0

if (rbx_2 s<= result_1)
    do
        uint32_t rdx = zx.d(rbx_2.w)
        int32_t rax_5 = rbx_2
        
        if (rbx_2 s< 0)
            rax_5 = rbx_2 + 0xffff
            rdx -= 0x10000
        
        int64_t rdx_1 = sx.q(rdx) * 3
        int64_t rcx_2 = *(data_143e1d9a0 + (sx.q(rax_5 s>> 0x10) << 3))
        result = *(rcx_2 + (rdx_1 << 3) + 8) u>> 0x1c
        void* r15_1 = rcx_2 + (rdx_1 << 3)
        
        if ((result.b & 1) != 0)
            int64_t rbp_1 = sx.q(rsi)
            rsi = (rbp_1 + 1).d
            
            if (rsi s> r8_2)
                result = sub_1405a4d70(&var_48)
                r14 = var_48
            
            *(r14 + (rbp_1 << 3)) = r15_1
            
            if ((*(r15_1 + 0xb) & 1) != 0)
                int64_t rbp_2 = sx.q(rdi)
                rdi = (rbp_2 + 1).d
                
                if (rdi s> r13)
                    result = sub_1405a4d70(&var_58)
                    r13 = var_4c
                    r12 = var_58
                
                *(r12 + (rbp_2 << 3)) = r15_1
        
        r8_2 = var_3c
        rbx_2 += 1
    while (rbx_2 s<= result_1)
    
    if (rsi != 0)
        EnterCriticalSection(&data_143e1ae20)
        int32_t rax_10 = data_143e1ae18
        int32_t rdx_4 = rax_10 + rsi
        
        if (rdx_4 s> data_143e1ae1c)
            sub_1405c5570(&data_143e1ae10, rdx_4)
            rax_10 = data_143e1ae18
        
        memcpy(data_143e1ae10 + (sx.q(rax_10) << 3), r14, rsi << 3)
        data_143e1ae18 += rsi
        uint64_t* rbx_4 = *arg1
        
        if (rdi != 0)
            int32_t rax_12 = rbx_4[1].d
            int32_t rdx_6 = rax_12 + rdi
            
            if (rdx_6 s> *(rbx_4 + 0xc))
                sub_1405c5570(rbx_4, rdx_6)
                rax_12 = rbx_4[1].d
            
            memcpy(*rbx_4 + (sx.q(rax_12) << 3), r12, rdi << 3)
            rbx_4[1].d += rdi
        
        result = LeaveCriticalSection(&data_143e1ae20)
    
    if (r12 != 0)
        result = sub_140a74f90(r12)
    
    if (r14 != 0)
        return sub_140a74f90(r14)

return result
