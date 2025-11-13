// 函数: sub_140bb0fd0
// 地址: 0x140bb0fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = *(arg1 + 0x110)
int64_t* rcx = *(arg1 + 0x90)
uint64_t rdi = arg5
uint64_t r12 = rdi
int64_t r15
r15.b = (*(*rcx + 0x18))(rcx).b == 0
uint64_t result

if (r14 == 1)
label_140bb10e9:
    *(arg1 + 0xf0) = arg2
    result = arg3
    *(arg1 + 0xf8) = arg3
    
    if (arg4 != 0 && r14 != 1 && r15.b == 0)
        int64_t rcx_7 = data_1439a9898
        
        if (arg3 s< rcx_7)
            *(arg1 + 0xf8) = rcx_7
            int64_t rax_4 = sub_140bbce60(arg1)
            int64_t r8_2 = *(arg1 + 0xf0)
            int64_t rdx_2 = *(arg1 + 0xf8) + r8_2
            
            if (rdx_2 s<= rax_4)
                rax_4 = rdx_2
            
            result = rax_4 - r8_2
            *(arg1 + 0xf8) = result
    
    if (result s> 0)
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        
        if (rdi == 0 || r15.b == 0)
            void* r8_3
            
            if (data_143de5452 == 0 || r14 != 1)
                r8_3 = nullptr
            else
                r8_3 = arg1 + 0x1d0
            
            int32_t rax_6 = data_143e1a334
            uint64_t r9
            
            if (rax_6 s>= 0)
                r9 = 5
                
                if (rax_6 s< 5)
                    r9 = zx.q(rax_6)
            else
                r9 = 0
            
            int64_t* rcx_11 = *(arg1 + 0x90)
            r12 = (*(*rcx_11 + 0x10))(rcx_11, *(arg1 + 0xf0) - *(arg1 + 0x108), *(arg1 + 0xf8), r9, 
                r8_3, 0)
        else
            rdi = 0
        
        *(arg1 + 0xb8) = r12
        
        if (rdi != 0)
            (**rdi)(rdi, 1)
        
        if (r14 == 1 || *(*(arg1 + 0xb8) + 0x61) == 0)
            result.b = 0
        else
            sub_140b9d850(arg1)
            result.b = 1
    else
        *(arg1 + 0x29) |= 1
        result.b = 1
else
    int64_t r8
    
    if (arg3 != 0)
        r8 = arg3 + arg2
    
    if (arg3 != 0 && (arg2 s< *(arg1 + 0xe0) || r8 s> *(arg1 + 0xe8)))
        int64_t* rdx = *(arg1 + 0xb8)
        
        if (rdx != 0)
            int64_t rcx_1 = *(arg1 + 0xf0)
            
            if (arg2 s>= rcx_1 && r8 s<= rcx_1 + *(arg1 + 0xf8))
                char rsi_1 = *(rdx + 0x61)
                bool cond:0_1 = rsi_1 != 0
                
                if (rsi_1 != 0)
                    sub_140b9d850(arg1)
                    cond:0_1 = rsi_1 != 0
                
                void* rbx
                rbx.b = cond:0_1
                
                if (rdi != 0)
                    int64_t r8_1 = *rdi
                    (*r8_1)(rdi, 1, r8_1)
                
                return zx.q(rbx.b)
            
            if (*(rdx + 0x63) == 0)
                *(rdx + 0x63) = 1
                rdx[0xc].b = 1
                
                if (*(rdx + 0x61) == 0)
                    (*(*rdx + 0x10))(rdx)
            
            sub_140b9d7f0(arg1)
            *(arg1 + 0xc0) = *(arg1 + 0xb8)
            *(arg1 + 0xb8) = 0
        
        goto label_140bb10e9
    
    if (rdi != 0)
        (**rdi)(rdi, 1)
    
    result.b = 1

return result
