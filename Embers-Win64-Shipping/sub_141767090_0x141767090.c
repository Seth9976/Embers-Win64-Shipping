// 函数: sub_141767090
// 地址: 0x141767090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = *(arg1 + 0x50)
void* rdi = arg1
int128_t zmm6 = arg2
int64_t r10 = sx.q(arg3)
void* r9_2

if (arg3 s>= r11)
    r9_2 = arg1 + 0x58
else
    r9_2 = *(arg1 + 0x48) + ((r10 * 3 + 1) << 3)

void* var_98 = r9_2
int32_t rdx = -1
int32_t r13

if (arg3 s>= r11)
    r13 = -1
else
    r13 = *(*(rdi + 0x48) + r10 * 0x18)

if (arg3 s< r11)
    rdx = *(*(rdi + 0x48) + r10 * 0x18 + 4)

int64_t r12
r12.b = 0

if (rdx s>= 0)
    int64_t i_1 = sx.q(rdx) + 1
    int64_t i_2 = i_1
    int64_t* r14_1 = nullptr
    int64_t i
    
    do
        int32_t rbx_1 = 0
        
        if (r13 s>= 0)
            int64_t r15_1 = 0
            
            do
                void* r8 = *r9_2
                
                if (*(r14_1 + r8 + 8) != *(r14_1 + r8 + 0x34))
                    void* rdx_2 = r8 + 0x38 + r14_1
                    void* rax_6 = *(rdx_2 + 8)
                    
                    if (rax_6 != 0)
                        rdx_2 = rax_6
                    
                    int32_t j_1 = *(rdx_2 + (((sx.q(*(r14_1 + r8 + 0x48)) - 1) & r15_1) << 2))
                    int32_t j = j_1
                    
                    if (j_1 != 0xffffffff)
                        int64_t r8_1 = *(r14_1 + r8)
                        
                        do
                            int64_t rdx_4 = sx.q(j) << 5
                            
                            if (*(rdx_4 + r8_1) == rbx_1)
                                if (j != 0xffffffff)
                                    int32_t j_2 = j_1
                                    int32_t* r9_5
                                    
                                    if (j_1 != 0xffffffff)
                                        while (true)
                                            r9_5 = (sx.q(j_2) << 5) + r8_1
                                            
                                            if (*r9_5 == rbx_1)
                                                break
                                            
                                            j_2 = r9_5[6]
                                            
                                            if (j_2 == 0xffffffff)
                                                goto label_1417671ef
                                    
                                    if (j_1 == 0xffffffff || j_2 == 0xffffffff)
                                    label_1417671ef:
                                        r9_5 = nullptr
                                    
                                    if (r9_5[4] != 0)
                                        int32_t* rdx_7
                                        
                                        if (j_1 == 0xffffffff)
                                        label_14176721f:
                                            rdx_7 = nullptr
                                        else
                                            while (true)
                                                rdx_7 = (sx.q(j_1) << 5) + r8_1
                                                
                                                if (*rdx_7 == rbx_1)
                                                    break
                                                
                                                j_1 = rdx_7[6]
                                                
                                                if (j_1 == 0xffffffff)
                                                    goto label_14176721f_1
                                            
                                            if (j_1 == 0xffffffff)
                                            label_14176721f_1:
                                                rdx_7 = nullptr
                                        
                                        void* rdi_1 = *(rdi + 0x10)
                                        int32_t var_a8 = arg5
                                        int32_t var_b0 = arg4
                                        int32_t var_b8 = zmm6.d
                                        char arg_18
                                        char temp0_1 = arg_18
                                        arg_18 = 0
                                        int64_t rax_9
                                        rax_9.b = temp0_1
                                        
                                        if (*(rdi_1 + 0x68) s> 0)
                                            int32_t rcx_5 = rdx_7[4]
                                            int32_t* var_68_1 = &var_b8
                                            void* var_78 = &rdx_7[2]
                                            int32_t* var_60_1 = &var_b0
                                            void* var_70_1 = rdi_1
                                            int32_t* var_58_1 = &var_a8
                                            char* var_50_1 = &arg_18
                                            void** var_80_1 = &var_78
                                            int512_t (* var_88)(int64_t* arg1, int32_t* arg2) =
                                                sub_14176ff80
                                            zmm6 = sub_1417487a0(rcx_5, &var_88, 0, r9_5)
                                        
                                        if (*(rdi_1 + 0x90) != 0)
                                            void* rax_10 = *(rdi_1 + 0xa0)
                                            void* rcx_6 = rdi_1 + 0xb0
                                            int32_t var_a0 = var_b8
                                            
                                            if (rax_10 != 0)
                                                rcx_6 = rax_10
                                            
                                            (*(rdi_1 + 0x90))((*(*rcx_6 + 8))(rcx_6), &var_a0, 
                                                &rdx_7[2])
                                        
                                        char rax_13 = 0
                                        
                                        if (0 == arg_18)
                                            arg_18 = 0
                                        else
                                            rax_13 = arg_18
                                        
                                        rdi = arg1
                                        r12.b |= rax_13
                                    
                                    r9_2 = var_98
                                
                                break
                            
                            j = *(rdx_4 + r8_1 + 0x18)
                        while (j != 0xffffffff)
                
                rbx_1 += 1
                r15_1 += 1
            while (rbx_1 s<= r13)
            
            i_1 = i_2
        
        r14_1 = &r14_1[0xa]
        i = i_1
        i_1 -= 1
        i_2 = i_1
    while (i != 1)

return zx.q(r12.b)
