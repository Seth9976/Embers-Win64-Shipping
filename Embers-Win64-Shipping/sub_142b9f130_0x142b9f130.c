// 函数: sub_142b9f130
// 地址: 0x142b9f130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r14 = zx.q(*(arg1 + 0x18))
int32_t rbp = *(arg1 + 0x1c)
char r15 = *(arg1 + 0x20)
void* arg_8

if (strcmp(arg2, "glyph-to-script-map") == 0)
    void* rdi_1 = *arg3
    int32_t rdx = 0
    
    if (rdi_1 != 0)
        void* rax_2 = *(rdi_1 + 0xb8)
        arg_8 = rax_2
        
        if (rax_2 == 0)
            int32_t rax_3 = sub_142ba2090(rdi_1, &arg_8, arg1)
            rdx = rax_3
            rax_2 = arg_8
            
            if (rax_3 == 0)
                *(rdi_1 + 0xb8) = rax_2
                *(rdi_1 + 0xc0) = sub_142ba1ea0
        
        if (rdx == 0)
            arg3[1] = *(rax_2 + 0x10)
        
        return rdx
    
    return 0x23

int32_t rax_1

if (strcmp(arg2, "fallback-script") != 0)
    rax_1 = strcmp(arg2, "default-script")
    
    if (rax_1 != 0)
        uint64_t rdx_2 = 0
        
        if (strcmp(arg2, "increase-x-height") == 0)
            void* rdi_2 = *arg3
            
            if (rdi_2 != 0)
                void* rax_8 = *(rdi_2 + 0xb8)
                arg_8 = rax_8
                
                if (rax_8 == 0)
                    int32_t rax_9 = sub_142ba2090(rdi_2, &arg_8, arg1)
                    rdx_2 = zx.q(rax_9)
                    rax_8 = arg_8
                    
                    if (rax_9 == 0)
                        *(rdi_2 + 0xb8) = rax_8
                        *(rdi_2 + 0xc0) = sub_142ba1ea0
                
                if (rdx_2.d == 0)
                    arg3[1].d = *(rax_8 + 0x18)
                
                return rdx_2.d
            
            return 0x23
        
        while (true)
            char rax_11 = arg2[rdx_2]
            rdx_2 += 1
            
            if (rax_11 != *(rdx_2 + 0x14367f61f))
                break
            
            if (rdx_2 == 8)
                *arg3 = r15
                return 0
        
        if (strcmp(arg2, "darkening-parameters") != 0)
            if (strcmp(arg2, "no-stem-darkening") != 0)
                return 0xc
            
            *arg3 = *(arg1 + 0x21)
            return 0
        
        *arg3 = *(arg1 + 0x24)
        *(arg3 + 4) = *(arg1 + 0x28)
        arg3[1].d = *(arg1 + 0x2c)
        *(arg3 + 0xc) = *(arg1 + 0x30)
        arg3[2].d = *(arg1 + 0x34)
        *(arg3 + 0x14) = *(arg1 + 0x38)
        arg3[3].d = *(arg1 + 0x3c)
        *(arg3 + 0x1c) = *(arg1 + 0x40)
        return 0
    
    *arg3 = rbp
else
    rax_1 = 0
    *arg3 = *((&data_143680ad0)[r14] + 8)

return rax_1
