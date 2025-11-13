// 函数: sub_142bcc510
// 地址: 0x142bcc510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x98)
int32_t r8 = *(arg2 + 0x13c)
int32_t* r10 = *(arg2 + 0x140)
int32_t rax_1 = 0
void* arg_20 = nullptr
int32_t r9 = 3
int64_t var_40 = 0

if (r8 == 0)
    goto label_142bcc5a2

int32_t* rcx = r10

while (*rcx != 1)
    rax_1 += 1
    rcx = &rcx[4]
    
    if (rax_1 u>= r8)
        goto label_142bcc5a2

int32_t rax_2 = *(arg1 + 0xc)
void* rbx_3 = &r10[zx.q(rax_1) * 4]
int32_t rdx = *(rbx_3 + 0xc)
int32_t rax_3

if (rax_2 u<= rdx)
    rax_3 = sub_142b970b0(arg1, rdx - rax_2)

int32_t arg_18
int32_t r13

if (rax_2 u> rdx || rax_3 != 0)
    r9 = 0x53
label_142bcc5a2:
    arg_18 = r9
    r13 = 0
    
    if (r9 == 0)
        goto label_142bcc5b9
else
    r13 = *(rbx_3 + 8)
    arg_18 = 0
label_142bcc5b9:
    int32_t rax_4 = sub_142b96dd0(arg1, &arg_18)
    
    if (arg_18 == 0 && (rax_4 & 0xffffff00) == 0)
        int32_t* rdx_3 = &arg_18
        int32_t rsi_2 = rax_4 & 4
        int32_t rax_5
        
        if (rsi_2 == 0)
            rax_5 = sub_142b96dd0(arg1, rdx_3)
        else
            rax_5 = sub_142b96d30(arg1, rdx_3)
        
        uint64_t r12_1 = zx.q(rax_5)
        
        if (arg_18 == 0)
            if (r12_1.d u<= r13 u/ 9)
                int32_t i = r12_1.d
                
                if (r12_1.d u> 0x100)
                    i = 0x100
                
                *(arg2 + 0x19c) = i
                void* rax_7 = sub_142b99a90(rax, 0xc, 0, i, 0, &arg_18)
                void* r14_1 = rax_7
                arg_20 = rax_7
                
                if (arg_18 == 0)
                    uint64_t rbx_4 = 0
                    
                    if (i != 0)
                        do
                            uint64_t rcx_5 = rbx_4 * 3
                            
                            if (rsi_2 == 0)
                                int32_t rax_10 =
                                    sub_142b96aa0(arg1, &data_143688078, arg_20 + (rcx_5 << 2))
                                arg_18 = rax_10
                                
                                if (rax_10 != 0)
                                    goto label_142bcc880
                                
                                r14_1 = arg_20
                            else
                                int32_t rax_8 =
                                    sub_142b96aa0(arg1, &data_143688090, r14_1 + (rcx_5 << 2))
                                arg_18 = rax_8
                                
                                if (rax_8 != 0)
                                    goto label_142bcc880
                            
                            rbx_4 = zx.q(rbx_4.d + 1)
                        while (rbx_4.d u< i)
                    
                    int32_t rax_13 = sub_142b970b0(arg1, (r12_1.d - i) * 9)
                    arg_18 = rax_13
                    int32_t rax_15
                    int32_t rax_16
                    
                    if (rax_13 == 0)
                        rax_15 = r12_1.d & 3
                        
                        if (rax_15 != 0)
                            rax_16 = sub_142b970b0(arg1, 4 - rax_15)
                            arg_18 = rax_16
                    
                    if (rax_13 == 0 && (rax_15 == 0 || rax_16 == 0))
                        int32_t* rdx_8 = &arg_18
                        uint32_t rax_17
                        
                        if (rsi_2 == 0)
                            rax_17 = sub_142b96dd0(arg1, rdx_8)
                        else
                            rax_17 = sub_142b96d30(arg1, rdx_8)
                        
                        uint32_t r14_2 = rax_17
                        
                        if (arg_18 == 0)
                            if (r14_2 u<= r13 - (r12_1 * 9).d)
                                if (r14_2 u> 0x1000100)
                                    r14_2 = 0x1000100
                                
                                int64_t rax_19
                                int512_t zmm0_1
                                rax_19, zmm0_1 = sub_142b99a90(rax, 1, 0, r14_2 + 1, 0, &arg_18)
                                var_40 = rax_19
                                
                                if (arg_18 == 0)
                                    int32_t rax_20 = sub_142b96990(arg1, rax_19, r14_2, zmm0_1)
                                    arg_18 = rax_20
                                    
                                    if (rax_20 == 0)
                                        void* rax_21 = sub_142b99a90(rax, 0x18, 0, i, 0, &arg_18)
                                        
                                        if (arg_18 == 0)
                                            int32_t rsi_3 = 0
                                            *(arg2 + 0x1a0) = rax_21
                                            
                                            if (i != 0)
                                                int64_t* rdi_1 = rax_21 + 0x10
                                                void* rbx_6 = arg_20 + 8
                                                
                                                while (true)
                                                    int64_t rax_22 = sx.q(*(rbx_6 - 8))
                                                    
                                                    if (rax_22.d s>= 0 && rax_22.d u<= r14_2)
                                                        rdi_1[-2] = sub_142b99bb0(rax, 
                                                            rax_22 + var_40, &arg_18)
                                                        
                                                        if (arg_18 != 0)
                                                            goto label_142bcc880
                                                        
                                                        rdi_1[-1].b = *(rbx_6 - 4)
                                                        
                                                        if (*(rbx_6 - 4) == 0)
                                                            *rdi_1 = *rbx_6
                                                        label_142bcc857:
                                                            rsi_3 += 1
                                                            rbx_6 += 0xc
                                                            rdi_1 = &rdi_1[3]
                                                            
                                                            if (rsi_3 u>= i)
                                                                break
                                                            
                                                            continue
                                                        else
                                                            int64_t rax_25 = sx.q(*rbx_6)
                                                            
                                                            if (rax_25.d s>= 0
                                                                    && rax_25.d u<= r14_2)
                                                                *rdi_1 = sub_142b99bb0(rax, 
                                                                    rax_25 + var_40, &arg_18)
                                                                
                                                                if (arg_18 != 0)
                                                                    goto label_142bcc880
                                                                
                                                                goto label_142bcc857
                                                    
                                                    arg_18 = 9
                                                    goto label_142bcc880
                                            
                                            arg_18 = 0
                            else
                                arg_18 = 8
                    else
                        arg_18 = 0x53
            else
                arg_18 = 8
label_142bcc880:
sub_142b99980(rax, arg_20)
sub_142b99980(rax, var_40)
return zx.q(arg_18)
