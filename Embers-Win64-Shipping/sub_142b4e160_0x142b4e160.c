// 函数: sub_142b4e160
// 地址: 0x142b4e160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg2 == 0 || *arg2 == 0)
    return 0

int32_t arg_8 = 0
void** rbp = nullptr
uint64_t i_2 = 0
int32_t arg_18 = 0
char** rax = sub_142a625a0(arg1, arg2, nullptr, &arg_8)

if (arg_8 s> 0)
    return 0

void** rax_2 = sub_142a7dd00(0x10)
int64_t r14
r14.b = 1

if (rax_2 != 0)
    void** rdi_1 = rax_2
    int64_t i_3 = 2
    int64_t i
    
    do
        char* rdx = *(&data_143ccb640 - rax_2 + rdi_1)
        arg_8 = 0
        void* rax_3 = sub_142a63dd0(rax, rdx, &arg_18, &arg_8)
        
        if (arg_8 s> 0 || arg_18 == 0)
            *rdi_1 = nullptr
        else
            *rdi_1 = rax_3
            r14.b = 0
        
        rdi_1 = &rdi_1[1]
        i = i_3
        i_3 -= 1
    while (i != 1)
    
    if (r14.b == 0)
        char** rax_4 = sub_142a625a0(rax, "parseRegions", nullptr, &arg_8)
        char** r13
        r13.b = 0
        
        if (arg_8 s<= 0)
            int32_t i_4 = sub_142a63b10(rax_4)
            i_2 = zx.q(i_4)
            
            if (i_4 s> 0)
                void** rax_5 = sub_142a7dd00(sx.q(i_2.d) << 3)
                rbp = rax_5
                
                if (rax_5 != 0)
                    if (i_2.d s> 0)
                        __builtin_memset(rax_5, 0, zx.q(i_2.d) << 3)
                    
                    int32_t rsi_1 = 0
                    char** rdi_3 = rbp
                    
                    if (i_2.d s> 0)
                        while (true)
                            arg_8 = 0
                            void* rax_6 = sub_142a63b20(rax_4, rsi_1, &arg_18, &arg_8)
                            
                            if (arg_8 s<= 0)
                                char* rax_7 = sub_142a7dd00(sx.q(arg_18 + 1))
                                *rdi_3 = rax_7
                                
                                if (rax_7 != 0)
                                    sub_142a8d6e0(rax_6, rax_7, arg_18)
                                    char* rax_8 = *rdi_3
                                    rsi_1 += 1
                                    rdi_3 = &rdi_3[1]
                                    *(sx.q(arg_18) + rax_8) = 0
                                    
                                    if (rsi_1 s>= i_2.d)
                                        break
                                    
                                    continue
                            
                            r13.b = 1
                            break
        
        sub_142a5f860(rax_4)
        sub_142a5f860(rax)
        
        if (r13.b == 0)
            struct icu_64::TZDBNames::VTable** result = j_sub_142a7dd00(0x20)
            arg_8.q = result
            
            if (result != 0)
                result[1] = rax_2
                *result = &icu_64::TZDBNames::`vftable'
                result[2] = rbp
                result[3].d = i_2.d
                return result
        else
            sub_142a7dcd0(rax_2)
            
            if (rbp != 0)
                void** rdi_4 = rbp
                
                if (i_2.d s> 0)
                    uint64_t i_1
                    
                    do
                        sub_142a7dcd0(*rdi_4)
                        rdi_4 = &rdi_4[1]
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
                
                sub_142a7dcd0(rbp)
    else
        sub_142a7dcd0(rax_2)

return nullptr
