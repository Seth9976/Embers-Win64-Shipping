// 函数: sub_142166410
// 地址: 0x142166410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2
void var_80
int64_t* rax = sub_140596d10(&var_80, arg2)
int64_t* rsi = rax
int64_t rax_1 = *(*(arg1 + 8) + 0x140)
void var_70
int64_t* rax_2 = sub_140596d10(&var_70, rsi)
void* r15 = data_143f5b298
int64_t* r14 = rax_2
int64_t rax_3 = *(arg1 + 8)
void var_60
int64_t* rax_4 = sub_140596d10(&var_60, r14)
int64_t r13
r13.b = 0
*(r15 + 0xa34) += 1
int32_t rcx_3 = *(r15 + 0xa28)
int32_t rax_5 = *(r15 + 0xa34)
int64_t rbp = sx.q(rcx_3 - 1)

if (rcx_3 - 1 s>= 0)
    int64_t rdi_2 = rbp << 4
    int64_t temp1_1
    
    do
        int64_t rax_6 = *(r15 + 0xa20)
        
        if (*(rdi_2 + rax_6 + 8) == 0)
            r13.b = 1
        else
            int64_t* rsi_1 = *(rdi_2 + rax_6)
            
            if (rsi_1 == 0)
                r13.b = 1
            else
                int32_t rbx_1 = rax_4[1].d
                int64_t r14_1 = *rax_4
                uint64_t var_90 = 0
                int32_t var_88_1 = rbx_1
                
                if (rbx_1 != 0)
                    sub_1405a4c70(&var_90, rbx_1, 0)
                    memcpy(var_90, r14_1, rbx_1 * 2)
                else
                    int32_t var_84_1 = 0
                
                if ((*(*rsi_1 + 0x50))(rsi_1, rax_1, rax_3, &var_90, rax_2) == 0)
                    r13.b = 1
        
        rdi_2 -= 0x10
        temp1_1 = rbp
        rbp -= 1
    while (temp1_1 - 1 s>= 0)
    rax_5 = *(r15 + 0xa34)
    rdi = arg2
    rsi = rax
    r14 = rax_2

int32_t result = rax_5 - 1
*(r15 + 0xa34) = result

if (r13.b != 0)
    result = sub_140599630(r15 + 0xa20, 0)

int64_t rcx_9 = *rax_4

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t rcx_10 = *r14

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

int64_t rcx_11 = *rsi

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int64_t rcx_12 = *rdi

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12)
