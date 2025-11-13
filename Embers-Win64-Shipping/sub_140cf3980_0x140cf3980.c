// 函数: sub_140cf3980
// 地址: 0x140cf3980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int96_t result = (*(arg1 + 0x80)).12
int32_t rbp = arg2[1].d
int64_t* r14 = *(arg1 + 0x78)
int32_t r13 = *(arg1 + 0x90)
int32_t i = rbp - *(arg2 + 0x34)

if (rbp != *(arg2 + 0x34))
    int32_t rdi_1 = 0
    
    if ((r14[8] & 0x1040000000) == 0)
        int32_t rsi_1 = 1
        int64_t r15_1 = *arg2
        
        do
            if (rdi_1 s>= 0 && rdi_1 s< arg2[5].d)
                void* rax_1 = arg2[4]
                void* rcx = &arg2[2]
                
                if (rax_1 != 0)
                    rcx = rax_1
                
                int32_t rax_2 = rdi_1
                
                if (rdi_1 s< 0)
                    rax_2 = rdi_1 + 0x1f
                
                if ((*(rcx + (sx.q(rax_2 s>> 5) << 2)) & rsi_1) != 0)
                    if ((not.b((r14[8] u>> 0x24).b) & 1) != 0)
                        (*(*r14 + 0xe8))(r14, sx.q(*(r14 + 0x4c)) + r15_1)
                    
                    i -= 1
            
            r15_1 += zx.q(result:8.d)
            rsi_1 = rol.d(rsi_1, 1)
            rdi_1 += 1
        while (i != 0)
    
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) != 0)
        result = sub_140ce4fc0(arg2, 0, r13)
    
    arg2[6].d = 0xffffffff
    *(arg2 + 0x34) = 0
    arg2[5].d = 0
    
    if (*(arg2 + 0x2c) != 0)
        *(arg2 + 0x2c) = 0
        result = sub_140d0bc80(&arg2[2], 0)
    
    int64_t rcx_4 = sx.q(arg2[9].d)
    void* rdi_2 = &arg2[7]
    void* rax_8 = *(rdi_2 + 8)
    
    if (rcx_4 s> 0)
        if (rax_8 != 0)
            rdi_2 = rax_8
        
        __builtin_memset(rdi_2, 0xffffffff, rcx_4 << 2)

return result
