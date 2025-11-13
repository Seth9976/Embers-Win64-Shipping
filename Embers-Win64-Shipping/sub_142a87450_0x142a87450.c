// 函数: sub_142a87450
// 地址: 0x142a87450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_a8 = -2
int32_t* r9 = arg3
void* rdx = arg1
int32_t r14 = 0
int64_t* i_4 = nullptr
int64_t* i_5 = nullptr
int32_t var_108 = 0
void var_f0
void* i_6 = &var_f0
int32_t r8 = 8
int32_t var_f8 = 8
char var_f4 = 0
int32_t var_98 = 0
void var_80
void* i_1 = &var_80
void* i_7 = &var_80
int32_t var_88 = 8
char var_84 = 0
uint64_t rdi
rdi.b = 0
char arg_20 = 0

if (*r9 s<= 0)
    int32_t rcx = 0
    void* i = *(rdx + 0x38)
    
    if (i != 0)
        do
            rcx += 1
            i = *(i + 8)
        while (i != 0)
        
        rdi = 0
        
        if (rcx != 0)
            rdi = 1
        
        arg_20 = rdi.b
    
    int32_t r12_1 = 0
    
    for (i_1 = *(rdx + 0x40); i_1 != 0; i_1 = *(i_1 + 0x10))
        r12_1 += 1
    
    int32_t rsi_1 = 0
    int32_t r10_1 = 2
    char* var_128
    int32_t* var_120
    
    if (r12_1 s> 0)
        while (true)
            char* rdi_1 = nullptr
            int64_t* i_3 = *(rdx + 0x40)
            int64_t* i_2 = i_3
            int32_t rdx_1 = 0
            
            if (i_3 != 0)
                do
                    if (rdx_1 == rsi_1)
                        rdi_1 = *i_2
                        break
                    
                    i_2 = i_2[2]
                    rdx_1 += 1
                while (i_2 != 0)
            
            char* rbx_1 = nullptr
            int32_t rax = 0
            
            while (i_3 != 0)
                if (rax == rsi_1)
                    rbx_1 = i_3[1]
                    break
                
                i_3 = i_3[2]
                rax += 1
            
            if (*rdi_1 != 0x75)
                if (var_108 == r8)
                    int32_t rax_1 = 2
                    
                    if (r8 == 8)
                        rax_1 = 4
                    
                    if (sub_142a5da90(&i_6, r8 * rax_1, r8) == 0)
                        goto label_142a8777a
                
                int64_t* i_12 = j_sub_142a7dd00(0x18)
                int64_t* i_10 = i_12
                
                if (i_12 == 0)
                    i_10 = nullptr
                else
                    __builtin_memset(i_10, 0, 0x18)
                
                int64_t rax_3 = sx.q(var_108)
                var_108 = rax_3.d + 1
                i_1 = i_6
                *(i_1 + (rax_3 << 3)) = i_10
                
                if (i_10 == 0)
                    goto label_142a8777a
                
                *i_10 = rdi_1
                i_10[1] = rbx_1
                
                if (i_4 != 0)
                    int64_t* i_14 = nullptr
                    int64_t* i_8 = i_4
                    
                    while (true)
                        char* rax_5 = rdi_1
                        
                        while (true)
                            char rcx_4 = *rax_5
                            char temp1_1 = *(rax_5 + *i_8 - rdi_1)
                            
                            if (rcx_4 != temp1_1)
                                i_1 = zx.q(sbb.d(rax_5.d, rax_5.d, rcx_4 u< temp1_1)) | 1
                                break
                            
                            rax_5 = &rax_5[1]
                            
                            if (rcx_4 == 0)
                                i_1 = nullptr
                                break
                        
                        int32_t temp3_1 = i_1.d
                        
                        if (temp3_1 s< 0)
                            if (i_14 != 0)
                                i_14[2] = i_10
                            else
                                i_4 = i_10
                                i_5 = i_10
                            
                            i_10[2] = i_8
                            goto label_142a876bc
                        
                        if (temp3_1 == 0)
                            break
                        
                        i_14 = i_8
                        i_8 = i_8[2]
                        
                        if (i_8 == 0)
                            i_14[2] = i_10
                            i_10[2] = 0
                            goto label_142a876bc
                    
                    goto label_142a876df
                
                i_10[2] = 0
                i_4 = i_10
                i_5 = i_10
            label_142a876bc:
                r9 = arg3
            else
                var_120 = r9
                var_128 = &arg_20
                i_1 = sub_142a88830(rbx_1, &i_5, &var_108, &var_98, var_128, var_120)
                r9 = arg3
                
                if (*r9 s> 0)
                    goto label_142a878df
                
                i_4 = i_5
            
            rsi_1 += 1
            r8 = var_f8
            rdx = arg1
            r10_1 = 2
            
            if (rsi_1 s>= r12_1)
                rdi = zx.q(arg_20)
                break
    
    if (*r9 s<= 0)
        char* rbx_2 = *(rdx + 0x48)
        i_1 = -ffffffffffffffff
        
        do
            i_1 += 1
        while (*(rbx_2 + i_1) != 0)
        
        if (i_1.d s<= 0)
        label_142a8780f:
            
            if (*r9 s<= 0)
                if (rdi.b != 0)
                    i_1 = (*(*arg2 + 8))(arg2, "_POSIX", 6, r9, var_128, var_120)
                    r9 = arg3
                
                if (*r9 s<= 0 && i_4 != 0)
                    rbx_2.b = 1
                    
                    do
                        int64_t rax_13 = *arg2
                        
                        if (rbx_2.b == 0)
                            (*(rax_13 + 8))(arg2, &data_143642128, 1)
                        else
                            (*(rax_13 + 8))(arg2, &data_143613e98, 1)
                            rbx_2.b = 0
                        
                        int64_t r8_2 = -1
                        
                        do
                            r8_2 += 1
                        while ((*i_4)[r8_2] != 0)
                        
                        (*(*arg2 + 8))(arg2)
                        (*(*arg2 + 8))(arg2, &data_14363e000, 1)
                        char* rdx_12 = i_4[1]
                        int64_t rcx_12 = -1
                        
                        do
                            rcx_12 += 1
                        while (rdx_12[rcx_12] != 0)
                        
                        i_1 = (*(*arg2 + 8))(arg2, rdx_12, zx.q(rcx_12.d))
                        i_4 = i_4[2]
                    while (i_4 != 0)
        else if (var_108 != r8)
        label_142a8773f:
            int64_t* i_13 = j_sub_142a7dd00(0x18)
            int64_t* i_11 = i_13
            
            if (i_13 == 0)
                i_11 = nullptr
            else
                __builtin_memset(i_11, 0, 0x18)
            
            int64_t rax_8 = sx.q(var_108)
            var_108 = rax_8.d + 1
            i_1 = i_6
            *(i_1 + (rax_8 << 3)) = i_11
            
            if (i_11 == 0)
                goto label_142a8777a
            
            *i_11 = &data_143641738
            i_11[1] = rbx_2
            
            if (i_4 == 0)
                i_11[2] = 0
                i_4 = i_11
            label_142a8780b:
                r9 = arg3
                goto label_142a8780f
            
            int64_t* i_15 = nullptr
            int64_t* i_9 = i_4
            
            while (true)
                void* const rax_10 = &data_143641738
                
                while (true)
                    char rcx_7 = *rax_10
                    char temp0_1 = *(rax_10 + *i_9 - &data_143641738)
                    
                    if (rcx_7 != temp0_1)
                        i_1 = zx.q(sbb.d(rax_10.d, rax_10.d, rcx_7 u< temp0_1)) | 1
                        break
                    
                    rax_10 += 1
                    
                    if (rcx_7 == 0)
                        i_1 = nullptr
                        break
                
                int32_t temp2_1 = i_1.d
                
                if (temp2_1 s< 0)
                    if (i_15 != 0)
                        i_15[2] = i_11
                    else
                        i_4 = i_11
                    
                    i_11[2] = i_9
                    goto label_142a8780b
                
                if (temp2_1 == 0)
                    break
                
                i_15 = i_9
                i_9 = i_9[2]
                
                if (i_9 == 0)
                    i_15[2] = i_11
                    i_11[2] = 0
                    goto label_142a8780b
            
        label_142a876df:
            i_1 = arg3
            *i_1 = 1
        else
            if (r8 == 8)
                r10_1 = 4
            
            if (sub_142a5da90(&i_6, r8 * r10_1, r8) != 0)
                goto label_142a8773f
            
        label_142a8777a:
            i_1 = arg3
            *i_1 = 7

label_142a878df:
int32_t rdi_2 = 0

if (var_98 s> 0)
    int64_t rsi_2 = 0
    
    do
        i_1 = i_7
        int64_t* rbx_3 = *(i_1 + rsi_2)
        
        if (rbx_3 != 0)
            if (*(rbx_3 + 0xc) != 0)
                sub_142a7dcd0(*rbx_3)
            
            i_1 = sub_142a47920(rbx_3)
        
        rdi_2 += 1
        rsi_2 += 8
    while (rdi_2 s< var_98)

if (var_84 != 0)
    i_1 = sub_142a7dcd0(i_7)

if (var_108 s> 0)
    int64_t rbx_4 = 0
    
    do
        i_1 = sub_142a47920(*(i_6 + rbx_4))
        r14 += 1
        rbx_4 += 8
    while (r14 s< var_108)

if (var_f4 == 0)
    return i_1

return sub_142a7dcd0(i_6)
