// 函数: sub_1407bb6e0
// 地址: 0x1407bb6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_20 = arg4
int32_t rax = 0

if (0 == arg1[0xa])
    arg1[0xa] = 0
else
    rax = arg1[0xa]

if (arg2 != 0)
    int32_t rbx_2 = *arg1 - rax
    
    if (rbx_2 s> 0)
        void var_58
        int64_t* rax_1 = sub_140789ce0(&var_58, nullptr, 0xff)
        
        if (arg2 s<= rbx_2)
            rbx_2 = arg2
        
        void* rdx = *rax_1
        *(rdx + 0x10) = *arg3
        void* rcx_2 = arg3[1]
        *(rdx + 0x18) = rcx_2
        
        if (rcx_2 != 0)
            *(rcx_2 + 8) += 1
        
        *(rdx + 0x20) = rbx_2 - 1
        void* rcx_3 = *rax_1
        int64_t* rdi_1 = *(rcx_3 + 0x30)
        
        if (rdi_1 != 0)
            rdi_1[9].d += 1
        
        sub_1407c9b70(rcx_3, rax_1[1], rax_1[2].d, 1)
        
        if (rdi_1 != 0)
            rdi_1[9].d -= 1
            
            if (rdi_1[9].d == 1)
                sub_140a2f6e0(rdi_1)
        
        arg4 = arg_20

int64_t r13 = *(arg1 + 0x10)
char rdx_2 = *(arg1 + 0x32)
int32_t rcx_5 = arg1[1]
int32_t result = *arg1
int32_t var_60 = rcx_5
int32_t result_1 = result
char arg_10 = rdx_2
int64_t r12

if (r13 == 0)
    r12 = result_1.q
else
    r12 = *(arg1 + 0x18)

int32_t rbp = result - 1

while (true)
    int32_t rbx_4 = arg1[0xa]
    arg1[0xa] += 1
    
    if (rdx_2 != 0)
        if (arg4 != 0)
            if (rbx_4 s> rbp)
                rbx_4 = rbp
        else if (rbx_4 s>= rbp)
            result.b = 0
            return result
    
    if (rbx_4 s< result)
        int32_t rsi_1 = rcx_5
        
        if (rbx_4 == rbp)
            rsi_1 = arg1[2] + rcx_5
        
        int32_t rdi_2 = 0
        
        if (rsi_1 s> 0)
            do
                int32_t var_68 = rbx_4 * rcx_5 + rdi_2
                r13(r12, &var_68)
                rdi_2 += 1
            while (rdi_2 s< rsi_1)
            
            rcx_5 = var_60
            rdx_2 = arg_10
        
        int32_t rax_4 = arg1[0xb]
        arg1[0xb] += 1
        
        if (rax_4 + 1 == result_1)
            result.b = 1
            return result
        
        result = result_1
    
    if (rbx_4 s>= rbp)
        result.b = 0
        return result
    
    arg4 = arg_20
