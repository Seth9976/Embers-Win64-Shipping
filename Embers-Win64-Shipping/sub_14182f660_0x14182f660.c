// 函数: sub_14182f660
// 地址: 0x14182f660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0)
    for (int64_t* i = arg2[2]; i != 0; i = arg2[2])
        int64_t r8_1 = *i
        int64_t rdx_2 = *arg2
        int64_t r9_5 = i[1] + r8_1
        
        if (r9_5 u< rdx_2)
            break
        
        if (rdx_2 u<= r8_1)
            r8_1 = rdx_2
        
        int64_t rdx_3 = rdx_2 + arg2[1]
        *arg2 = r8_1
        
        if (r9_5 u>= rdx_3)
            rdx_3 = r9_5
        
        arg2[1] = rdx_3 - r8_1
        void* rdx_5 = i[2]
        int64_t rcx_5 = i[3]
        
        if (rdx_5 == 0)
            *arg1 = rcx_5
        else
            *(rdx_5 + 0x18) = rcx_5
        
        void* rdx_6 = i[3]
        int64_t rcx_6 = i[2]
        
        if (rdx_6 == 0)
            arg1[1] = rcx_6
        else
            *(rdx_6 + 0x10) = rcx_6
        
        i[2] = 0
        i[3] = 0
        j_sub_140a74f90(i)
else
    int64_t* r8 = arg2[3]
    
    if (r8 != 0)
        while (true)
            int64_t r10_1 = *arg2
            int64_t rcx = *r8
            int64_t r9_2 = arg2[1] + r10_1
            
            if (rcx u> r9_2)
                break
            
            int64_t rdx = rcx
            
            if (r10_1 u<= rcx)
                rdx = r10_1
            
            int64_t rcx_1 = rcx + r8[1]
            *arg2 = rdx
            
            if (rcx_1 u>= r9_2)
                r9_2 = rcx_1
            
            arg2[1] = r9_2 - rdx
            void* rcx_2 = r8[2]
            int64_t rax = r8[3]
            
            if (rcx_2 == 0)
                *arg1 = rax
            else
                *(rcx_2 + 0x18) = rax
            
            void* rcx_3 = r8[3]
            int64_t rax_1 = r8[2]
            
            if (rcx_3 == 0)
                arg1[1] = rax_1
            else
                *(rcx_3 + 0x10) = rax_1
            
            r8[2] = 0
            r8[3] = 0
            j_sub_140a74f90(r8)
            r8 = arg2[3]
            
            if (r8 == 0)
                return 
