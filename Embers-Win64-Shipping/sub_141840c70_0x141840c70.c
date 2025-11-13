// 函数: sub_141840c70
// 地址: 0x141840c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = 0
int32_t rdx = 0
int32_t rbx = *(arg1 + 0x100)

if (*(arg1 + 0xc) != 0)
    rdx = rbx

void* rdi = arg1 + 0x160
sub_140cb9250(rdi, rdx)
void* rsi = arg1 + 0x1b0
sub_140aee920(rsi, rbx)
sub_1405e1ad0(arg1 + 0x200, 0)
void* rbp = *(arg1 + 0xf8)
void* rax_3 = sx.q(*(arg1 + 0x100)) * 0x60 + rbp
int128_t* i_1

if (rbp != rax_3)
    void* arg_18
    int64_t* var_60_1 = &arg_18
    
    do
        arg_18 = rbp
        void* var_68 = rbp
        void arg_10
        sub_141818c20(rsi, &arg_10, &var_68, nullptr)
        
        if (*(arg1 + 0xc) != 0)
            int128_t* rdx_3 = *(rbp + 0x48)
            arg_18 = rbp
            sub_141818450(rdi, rdx_3, &arg_18)
        
        int64_t rax_4 = sx.q(*(rbp + 0x40))
        
        if (rax_4.d != 0)
            int64_t* rbx_4 = *(rbp + 0x38)
            void* r14_3 = &rbx_4[rax_4 * 2]
            
            if (rbx_4 != r14_3)
                do
                    int32_t rax_13 = rbx_4[1].d
                    int16_t* rdx_9
                    
                    if (rax_13 == 0)
                        rdx_9 = &data_142d40450
                    else
                        rdx_9 = *rbx_4
                    
                    int32_t rcx_12 = rax_13 - 1
                    
                    if (rax_13 == 0)
                        rcx_12 = 0
                    
                    int64_t* rax_15 =
                        sub_14181a130(arg1 + 0x200, sub_1405969c0(rcx_12, rdx_9), rbx_4)
                    int64_t rsi_2 = sx.q(rax_15[1].d)
                    int32_t rcx_14 = (rsi_2 + 1).d
                    rax_15[1].d = rcx_14
                    
                    if (rcx_14 s> *(rax_15 + 0xc))
                        sub_1405a4d70(rax_15)
                    
                    rbx_4 = &rbx_4[2]
                    *(*rax_15 + (rsi_2 << 3)) = rbp
                while (rbx_4 != r14_3)
                
                rsi = arg1 + 0x1b0
                rdi = arg1 + 0x160
        else
            int64_t rsi_1 = sx.q(sub_1405969c0(0, &data_142d40450))
            void* rbx_3
            
            if (*(arg1 + 0x208) == *(arg1 + 0x234))
            label_141840e09:
                int32_t var_58
                sub_14098dfb0(arg1 + 0x200, &var_58)
                int32_t rax_8 = var_58
                int64_t* var_50
                __builtin_memset(var_50, 0, 0x20)
                var_50[4].d = 0xffffffff
                sub_141836b90(arg1 + 0x200, &i_1, rsi_1.d, var_50, rax_8, nullptr)
                rbx_3 = *(arg1 + 0x200) + sx.q(i_1.d) * 0x28
            else
                void* rdx_4 = *(arg1 + 0x240)
                void* r9_1 = arg1 + 0x238
                
                if (rdx_4 != 0)
                    r9_1 = rdx_4
                
                int32_t rbx_1 = *(r9_1 + (((sx.q(*(arg1 + 0x248)) - 1) & rsi_1) << 2))
                
                if (rbx_1 == 0xffffffff)
                    goto label_141840e09
                
                int64_t* rdx_5 = *(arg1 + 0x200)
                int64_t rdi_1
                
                while (true)
                    int64_t rcx_6 = sx.q(rbx_1) * 5
                    rdi_1 = rcx_6 << 3
                    int16_t* const rcx_7
                    
                    if (rdx_5[rcx_6 + 1].d == 0)
                        rcx_7 = &data_142d40450
                    else
                        rcx_7 = rdx_5[rcx_6]
                    
                    if (sub_140a54510(rcx_7, &data_142d40450) == 0)
                        break
                    
                    rdx_5 = *(arg1 + 0x200)
                    rbx_1 = rdx_5[rcx_6 + 4].d
                    
                    if (rbx_1 == 0xffffffff)
                        goto label_141840e09
                
                if (rbx_1 == 0xffffffff)
                    goto label_141840e09
                
                void* rbx_2 = *(arg1 + 0x200)
                rbx_3 = rbx_2 + rdi_1
                
                if (rbx_2 == neg.q(rdi_1))
                    goto label_141840e09
            
            int64_t rdi_2 = sx.q(*(rbx_3 + 0x18))
            int32_t rax_11 = (rdi_2 + 1).d
            *(rbx_3 + 0x18) = rax_11
            
            if (rax_11 s> *(rbx_3 + 0x1c))
                sub_1405a4d70(rbx_3 + 0x10)
            
            *(*(rbx_3 + 0x10) + (rdi_2 << 3)) = rbp
            rsi = arg1 + 0x1b0
            rdi = arg1 + 0x160
        
        rbp += 0x60
    while (rbp != rax_3)

sub_140cb9250(arg1 + 0x250, *(arg1 + 0xf0))
int128_t* i = *(arg1 + 0xe8)

for (void* rdi_6 = &i[sx.q(*(arg1 + 0xf0)) * 4]; i != rdi_6; i = &i[4])
    i_1 = i
    sub_141818450(arg1 + 0x250, i, &i_1)

*(arg1 + 0x2a0) = 0
*(arg1 + 0x2a8) = 0
int64_t rcx_18 = *(arg1 + 0xf8)
int64_t rdx_16 = sx.q(*(arg1 + 0x100)) * 0x60 + rcx_18

if (rcx_18 != rdx_16)
    int64_t rax_18 = 0
    
    do
        rax_18 += *(rcx_18 + 0x58)
        rcx_18 += 0x60
        *(arg1 + 0x2a0) = rax_18
    while (rcx_18 != rdx_16)

int64_t result = *(arg1 + 0xe8)
int64_t rcx_21 = (sx.q(*(arg1 + 0xf0)) << 6) + result

while (result != rcx_21)
    r12 += *(result + 0x38)
    result += 0x40
    *(arg1 + 0x2a8) = r12

return result
