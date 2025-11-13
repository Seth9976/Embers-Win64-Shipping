// 函数: sub_14096e6b0
// 地址: 0x14096e6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax

if (*arg2 != 0 || *(arg2 + 0x40) == 0)
    rax = 1
else
    rax = 0

*(arg1 + 0x48) = rax
char rax_1 = sub_1409716f0(arg1, arg2)
int64_t* rcx = *(arg1 + 0x68)
int64_t rdx = *(arg1 + 0x80)
*(arg1 + 0xa0) = rax_1
void* i_4 = nullptr
int32_t i_7 = 0
(*(*rcx + 0x30))(rcx, rdx, &i_4)
void* i = i_4

for (void* rcx_3 = sx.q(i_7) * 0x30 + i; i != rcx_3; i += 0x30)
    if (*(i + 0x18) == 6)
        *(arg1 + 0xa0) = 5

int32_t i_5 = *(arg1 + 0x60)
void* rbx_1 = *(arg1 + 0x58)

if (i_5 != 0)
    int32_t i_1
    
    do
        int64_t rcx_4 = *(rbx_1 + 0x20)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        int64_t rcx_5 = *(rbx_1 + 0x10)
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        int64_t rcx_6 = *rbx_1
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        rbx_1 += 0x30
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)

*(arg1 + 0x60) = 0

if (*(arg1 + 0x64) != 0)
    sub_1405a5220(arg1 + 0x58, 0)

int64_t arg_10 = 0
sub_140d23f50(
    UInAppPurchaseRestoreCallbackProxy2::OnQueryReceiptsComplete - Iterating OutReceipts", 3)
void* i_9 = i_4
void* i_2 = sx.q(i_7) * 0x30 + i_9

if (i_9 != i_2)
    void* rdi = i_9 + 0x20
    
    do
        if (*(rdi - 8) == 6)
            int64_t rbx_2 = sx.q(*(arg1 + 0x60))
            int32_t rax_5 = (rbx_2 + 1).d
            *(arg1 + 0x60) = rax_5
            
            if (rax_5 s> *(arg1 + 0x64))
                sub_1405c4f50(arg1 + 0x58)
            
            int64_t* rbx_5 = rbx_2 * 0x30 + *(arg1 + 0x58)
            __builtin_memset(rbx_5, 0, 0x30)
            sub_140d23f50(UInAppPurchaseRestoreCallbackProxy2::OnQueryReceiptsComplete - Writing "
            "Receipt to savedreceipts", 3)
            int64_t* rcx_10 = *(*rdi + 0x30) + 0x18
            
            if (&rbx_5[2] != rcx_10)
                int32_t rbp_1 = rcx_10[1].d
                int64_t r12_1 = *rcx_10
                int32_t r8_3 = *(rbx_5 + 0x1c)
                rbx_5[3].d = rbp_1
                
                if (rbp_1 != 0 || r8_3 != 0)
                    sub_1405a4c70(&rbx_5[2], rbp_1, r8_3)
                    memcpy(rbx_5[2], r12_1, rbp_1 * 2)
                else
                    *(rbx_5 + 0x1c) = 0
            
            int64_t* rcx_14 = *(*rdi + 0x30) + 8
            
            if (rbx_5 != rcx_14)
                int32_t rbp_2 = rcx_14[1].d
                int64_t r14_2 = *rcx_14
                int32_t r8_6 = *(rbx_5 + 0xc)
                rbx_5[1].d = rbp_2
                
                if (rbp_2 != 0 || r8_6 != 0)
                    sub_1405a4c70(rbx_5, rbp_2, r8_6)
                    memcpy(*rbx_5, r14_2, rbp_2 * 2)
                else
                    *(rbx_5 + 0xc) = 0
            
            int64_t* rcx_18 = *(*rdi + 0x30) + 0x28
            
            if (&rbx_5[4] != rcx_18)
                int32_t rbx_6 = rcx_18[1].d
                int64_t rbp_3 = *rcx_18
                int32_t r8_9 = *(rbx_5 + 0x2c)
                rbx_5[5].d = rbx_6
                
                if (rbx_6 != 0 || r8_9 != 0)
                    sub_1405a4c70(&rbx_5[4], rbx_6, r8_9)
                    memcpy(rbx_5[4], rbp_3, rbx_6 * 2)
                else
                    *(rbx_5 + 0x2c) = 0
        
        rdi += 0x30
    while (rdi - 0x20 != i_2)

uint64_t result = sub_14096d730(arg1)
int32_t i_6 = i_7

if (i_6 != 0)
    void* rbx_8 = i_4 + 8
    int32_t i_3
    
    do
        result = sub_14091a940(rbx_8 + 0x18)
        int64_t rcx_23 = *rbx_8
        
        if (rcx_23 != 0)
            result = sub_140a74f90(rcx_23)
        
        *(rbx_8 - 8) = &data_142e1f570
        rbx_8 += 0x30
        i_3 = i_6
        i_6 -= 1
    while (i_3 != 1)

void* i_8 = i_4

if (i_8 == 0)
    return result

return sub_140a74f90(i_8)
