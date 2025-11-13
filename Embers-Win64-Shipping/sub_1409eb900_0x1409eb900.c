// 函数: sub_1409eb900
// 地址: 0x1409eb900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_38 = nullptr
int32_t i_2 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rbp = &var_38
int64_t var_18 = 0
int64_t var_10 = 0

if (rax_2 != 0)
    rbp = rax_2

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t* rax_4 = *(arg2 + 0x38)
int64_t* rsi = &var_18
uint64_t var_28 = 0
int64_t var_20 = 0

if (rax_4 != 0)
    rsi = rax_4

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_28, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

uint64_t* rax_6 = *(arg2 + 0x38)
uint64_t* r9 = &var_28

if (rax_6 != 0)
    r9 = rax_6

int64_t rax_7 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_7 != 0
*(arg2 + 0x20) = rdi + rax_7
int64_t result = sub_1409b4ab0(arg1, rbp, rsi, r9)
uint64_t rcx_4 = var_28

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = var_18

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int32_t i_1 = i_2

if (i_1 != 0)
    int64_t* rsi_2 = var_38 + 8
    int32_t i
    
    do
        int32_t j_1 = rsi_2[1].d
        void* rcx_6 = *rsi_2
        
        if (j_1 != 0)
            int64_t* rbx_1 = rcx_6 + 8
            int32_t j
            
            do
                int64_t rcx_7 = *rbx_1
                
                if (rcx_7 != 0)
                    result = sub_140a74f90(rcx_7)
                
                rbx_1 = &rbx_1[3]
                j = j_1
                j_1 -= 1
            while (j != 1)
            rcx_6 = *rsi_2
        
        if (rcx_6 != 0)
            result = sub_140a74f90(rcx_6)
        
        rsi_2 = &rsi_2[4]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* rcx_8 = var_38

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
