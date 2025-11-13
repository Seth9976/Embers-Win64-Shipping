// 函数: sub_1428da120
// 地址: 0x1428da120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t rbp = sx.q(arg4)
int64_t i_3 = sub_142921500(arg1, arg2, arg3, rbp.d)
int32_t r10 = arg5
int64_t i_2 = i_3

if (r10 == 0)
    return i_3

int64_t* rbx_1 = &arg1[rbp]
void* rdi_1 = &arg2[rbp]
void* rsi_1 = &arg3[rbp]

if (r10 s>= 0)
    if (i_2 != 0)
        int64_t i
        
        do
            int64_t rcx_4 = *rdi_1
            *rbx_1 = rcx_4 - i_2
            int64_t i_4 = 0
            
            if (rcx_4 == 0)
                i_4 = i_2
            
            if (r10 - 1 s<= 0)
                return i_4
            
            int64_t rcx_5 = *(rdi_1 + 8)
            i_2 = 0
            rbx_1[1] = rcx_5 - i_4
            
            if (rcx_5 == 0)
                i_2 = i_4
            
            int64_t i_5 = i_2
            
            if (r10 - 2 s<= 0)
                return i_2
            
            int64_t rcx_6 = *(rdi_1 + 0x10)
            i_2 = 0
            rbx_1[2] = rcx_6 - i_5
            
            if (rcx_6 == 0)
                i_2 = i_5
            
            if (r10 - 3 s<= 0)
                return i_2
            
            int64_t rcx_7 = *(rdi_1 + 0x18)
            rbx_1[3] = rcx_7 - i_2
            i = 0
            
            if (rcx_7 == 0)
                i = i_2
            
            r10 -= 4
            i_2 = i
            
            if (r10 s<= 0)
                return i_2
            
            rdi_1 += 0x20
            rbx_1 = &rbx_1[4]
        while (i != 0)
    
    if (r10 s> 0)
        int32_t i_1 = r10 - 1
        *rbx_1 = *rdi_1
        
        if (i_1 s> 0)
            void* rdx_1 = rdi_1 + 0x10
            void* rcx_8 = &rbx_1[2]
            
            do
                *(rcx_8 - 8) = *(rdx_1 - 8)
                
                if (i_1 - 1 s<= 0)
                    break
                
                *rcx_8 = *rdx_1
                
                if (i_1 - 2 s<= 0)
                    break
                
                *(rcx_8 + 8) = *(rdx_1 + 8)
                
                if (i_1 - 3 s<= 0)
                    break
                
                int64_t rax_22 = *(rcx_8 + rdi_1 - rbx_1 + 0x10)
                rcx_8 += 0x20
                rdx_1 += 0x20
                i_1 -= 4
                *(rcx_8 - 0x10) = rax_22
            while (i_1 s> 0)
else
    while (true)
        int64_t rcx = *rsi_1
        *rbx_1 = neg.q(rcx + i_2)
        
        if (rcx != 0)
            i_2 = 1
        
        if (r10 + 1 s>= 0)
            break
        
        int64_t rcx_1 = *(rsi_1 + 8)
        rbx_1[1] = neg.q(rcx_1 + i_2)
        
        if (rcx_1 != 0)
            i_2 = 1
        
        if (r10 + 2 s>= 0)
            break
        
        int64_t rcx_2 = *(rsi_1 + 0x10)
        rbx_1[2] = neg.q(rcx_2 + i_2)
        
        if (rcx_2 != 0)
            i_2 = 1
        
        int32_t r10_3 = r10 + 3
        
        if (r10 + 3 s>= 0)
            break
        
        int64_t rcx_3 = *(rsi_1 + 0x18)
        rbx_1[3] = neg.q(rcx_3 + i_2)
        
        if (rcx_3 != 0)
            i_2 = 1
        
        r10 = r10_3 + 1
        
        if (r10_3 + 1 s>= 0)
            break
        
        rsi_1 += 0x20
        rbx_1 = &rbx_1[4]

return i_2
