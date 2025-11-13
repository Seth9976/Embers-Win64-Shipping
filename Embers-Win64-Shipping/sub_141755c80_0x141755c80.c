// 函数: sub_141755c80
// 地址: 0x141755c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[1]
void*** rsi = nullptr
void**** rdi = arg2
int64_t rcx = *r8
int32_t arg_8
bool cond:1

if (rcx + 4 u> r8[1])
    int32_t rax_2
    rax_2.b = *arg2 != 0
    arg_8 = rax_2
    (*(*arg1 + 0x150))(arg1, &arg_8, 4)
    cond:1 = arg_8 != 0
else
    cond:1 = *rcx != 0
    *r8 = rcx + 4

arg2.b = cond:1

if (arg2.b != 0)
    if ((arg1[5].b & 1) == 0)
        void*** rax_11 = *rdi
        char rax_12 = rax_11[1].b
        
        if (rax_12 u<= 2 || rax_12 == 6)
            int64_t* rcx_9 = arg1[1]
            char* r8_1 = *rcx_9
            
            if (&r8_1[1] u> rcx_9[1])
                (*(*arg1 + 0x150))(arg1, &rax_11[1], 1)
            else
                rax_11[1].b = *r8_1
                int64_t* rax_15 = arg1[1]
                *rax_15 += 1
    else
        int64_t* rcx_2 = arg1[1]
        char* rdx_1 = *rcx_2
        
        if (&rdx_1[1] u> rcx_2[1])
            (*(*arg1 + 0x150))(arg1, &arg_8, 1)
        else
            arg_8.b = *rdx_1
            *rcx_2 += 1
        
        uint32_t rcx_4 = zx.d(arg_8.b)
        void*** rax_9
        void*** rcx_8
        
        if (rcx_4 == 0)
            rax_9 = j_sub_140a82f30(0x20)
            
            if (rax_9 == 0)
            label_141755e08:
                rax_9 = nullptr
                goto label_141755e0b
            
            rax_9[1].d = 0x1010000
            *rax_9 = &data_142fc46f0
            *(rax_9 + 0xc) = 1
        label_141755e0b:
            rcx_8 = *rdi
            *rdi = rax_9
        label_141755e11:
            
            if (rcx_8 != 0)
                (**rcx_8)(rcx_8, 1)
        else
            if (rcx_4 == 1)
                rax_9 = j_sub_140a82f30(0x28)
                
                if (rax_9 == 0)
                    goto label_141755e08
                
                rax_9[1].d = 0x1010101
                *rax_9 = &data_142fc4870
                *(rax_9 + 0xc) = 1
                __builtin_memcpy(&rax_9[2], 
                    "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\x"
                "ff\xff\x7f\xff", 
                    0x18)
                goto label_141755e0b
            
            if (rcx_4 == 2)
                rax_9 = j_sub_140a82f30(0x28)
                
                if (rax_9 == 0)
                    goto label_141755e08
                
                rax_9[1].d = 0x1000202
                *rax_9 = &data_142fc47b8
                *(rax_9 + 0xc) = 0
                goto label_141755e0b
            
            if (rcx_4 == 6)
                void*** rax_7 = j_sub_140a82f30(0xb8)
                
                if (rax_7 != 0)
                    rsi = sub_141703f10(rax_7)
                
                rcx_8 = *rdi
                *rdi = rsi
                goto label_141755e11
    
    void*** rcx_11 = *rdi
    (*rcx_11)[0x12](rcx_11, arg1)

return arg1
