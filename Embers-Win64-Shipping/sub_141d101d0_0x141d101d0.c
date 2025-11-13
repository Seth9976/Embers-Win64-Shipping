// 函数: sub_141d101d0
// 地址: 0x141d101d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** r13

if (*(*(arg1 + 0xb8) + 0x20) == 0)
    r13 = nullptr
else
    r13 = sub_140a491d0(0)

uint64_t result_1 = 0
int32_t var_40 = 0
int64_t i_2 = sub_141d0b460(arg1, &result_1, arg3, r13)
void* rcx_1 = *(arg1 + 0xb8)
int64_t i = i_2

if (*(rcx_1 + 0x20) == 0)
    sub_141d0b7d0(rcx_1)

int32_t arg_8 = i.d
int64_t r15 = sx.q((i - 1).d)

do
    int32_t rsi_1 = 0
    int64_t rdi_1 = 0
    
    if (r15 s>= 0)
        int64_t* rbx_2 = result_1 + 0x10
        
        do
            void* rcx_3 = rbx_2[-2]
            bool z_1
            
            if (rcx_3 != 0)
                if (0 == *(rcx_3 + 0x20))
                    *(rcx_3 + 0x20) = 0
                    z_1 = true
                else
                    *(rcx_3 + 0x20)
                    z_1 = false
            
            if (rcx_3 == 0 || z_1)
                int64_t rax_8 = rbx_2[-1]
                
                if (rax_8 != 0)
                    memcpy(rbx_2[1] + arg2, *rbx_2 + *rax_8, (rbx_2[2]).d)
                    rbx_2[-1] = 0
                    i -= 1
                    rsi_1 += 1
            else
                memcpy(rbx_2[1] + arg2, **(rbx_2[-2] + 0x18) + *rbx_2, (rbx_2[2]).d)
                
                if (r15 == rdi_1)
                    int32_t rcx_7 = *rbx_2[-2]
                    
                    if (rcx_7 != *(arg1 + 0xcc))
                        *(arg1 + 0xcc) = rcx_7
                        memcpy(*(arg1 + 0xc0), **(rbx_2[-2] + 0x18), 0x10000)
                
                void* rcx_9 = rbx_2[-2]
                void* rdx_5 = *(arg1 + 0xb8)
                int32_t rax_6 = *(rcx_9 + 0x24)
                *(rcx_9 + 0x24) -= 1
                
                if (rax_6 == 1)
                    int64_t* rcx_10 = *(rdx_5 + 0x130)
                    
                    if (rcx_10 != 0)
                        (*(*rcx_10 + 0x10))(rcx_10)
                
                rbx_2[-2] = 0
                i -= 1
                rsi_1 += 1
            
            rdi_1 += 1
            rbx_2 = &rbx_2[5]
        while (rdi_1 s<= r15)
    
    if (r15 s< 0 || rsi_1 == 0)
        void* rcx_13 = *(arg1 + 0xb8)
        
        if (*(rcx_13 + 0x20) == 0)
            sub_141d0b7d0(rcx_13)
        else
            (*r13)[4](r13, 0xffffffff, 0)
while (i s> 0)

sub_140a4fc50(r13)
uint64_t result = arg3
*(arg1 + 0xb0) += result
int64_t r8_3 = sx.q(arg_8)

if (r8_3.d s< var_40)
    result = result_1
    uint64_t i_3 = zx.q(var_40 - r8_3.d)
    void* rbx_3 = result + r8_3 * 0x28
    uint64_t i_1
    
    do
        void* rcx_17 = *rbx_3
        
        if (rcx_17 != 0)
            void* rdx_10 = *(arg1 + 0xb8)
            result = zx.q(*(rcx_17 + 0x24))
            *(rcx_17 + 0x24) -= 1
            
            if (result.d == 1)
                int64_t* rcx_18 = *(rdx_10 + 0x130)
                
                if (rcx_18 != 0)
                    result = (*(*rcx_18 + 0x10))(rcx_18)
        
        rbx_3 += 0x28
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

uint64_t result_2 = result_1

if (result_2 == 0)
    return result

return sub_140a74f90(result_2)
