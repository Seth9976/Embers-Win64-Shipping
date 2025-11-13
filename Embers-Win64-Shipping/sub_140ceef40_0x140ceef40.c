// 函数: sub_140ceef40
// 地址: 0x140ceef40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rdi = *(arg1 + 0x10)
int32_t rbp = rdi[1].d
int32_t i

if ((not.b(*(arg1 + 0x30)) & 1) != 0)
    if (rbp != 0)
        int32_t* rax_11 = arg2[2]
        i = *rax_11
        
        if (i s>= rbp)
            *rax_11 = 0
            i = *arg2[2]
        
        int64_t* r14_2 = **arg2
        
        do
            if (i s>= 0 && i s< rdi[5].d)
                void* rax_14 = rdi[4]
                void* r8_3 = &rdi[2]
                
                if (rax_14 != 0)
                    r8_3 = rax_14
                
                int32_t i_3 = i
                
                if (i s< 0)
                    i_3 = i + 0x1f
                
                if (test_bit(*(r8_3 + (sx.q(i_3 s>> 5) << 2)), i & 0x1f)
                        && (*(*r14_2 + 0x80))(r14_2, arg2[1], sx.q(*(*arg2 + 0x2c) * i) + *rdi, 0)
                        != 0)
                    return zx.q(i)
            
            int32_t i_4 = i + 1
            i = 0
            
            if (i_4 != rbp)
                i = i_4
        while (i != *arg2[2])
else if (rbp != 0)
    int32_t* rax_1 = arg2[2]
    i = *rax_1
    
    if (i s>= rbp)
        *rax_1 = 0
        i = *arg2[2]
    
    int64_t* r14_1 = **arg2
    
    do
        if (i s>= 0 && i s< rdi[3].d)
            void* rcx = rdi[2]
            
            if ((rcx.b & 1) != 0)
                rcx = (rcx s>> 1) + &rdi[2]
            
            int32_t i_1 = i
            
            if (i s< 0)
                i_1 = i + 0x1f
            
            if (test_bit(*(rcx + (sx.q(i_1 s>> 5) << 2)), i & 0x1f))
                void* rdx_2 = *rdi
                
                if ((rdx_2.b & 1) != 0)
                    rdx_2 = (rdx_2 s>> 1) + rdi
                
                if ((*(*r14_1 + 0x80))(r14_1, arg2[1], sx.q(*(*arg2 + 0x2c) * i) + rdx_2, 0) != 0)
                    return zx.q(i)
        
        int32_t i_2 = i + 1
        i = 0
        
        if (i_2 != rbp)
            i = i_2
    while (i != *arg2[2])
return -1
