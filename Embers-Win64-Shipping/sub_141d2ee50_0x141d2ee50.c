// 函数: sub_141d2ee50
// 地址: 0x141d2ee50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x18)
int64_t r15 = 0
int64_t rsi = 0
uint64_t r14_1 = sx.q(*(arg1 + 0x20)) << 3 u>> 3

if (rdi u> &rdi[sx.q(*(arg1 + 0x20))])
    r14_1 = 0

if (r14_1 != 0)
    do
        void*** rbx_1 = *rdi
        
        if (rbx_1 != 0)
            *rbx_1 = &data_142fc46f0
            sub_141706890(rbx_1)
            j_sub_140a74f90(rbx_1)
        
        rdi = &rdi[1]
        rsi += 1
    while (rsi != r14_1)

int64_t rsi_1 = 0
int64_t* rdi_1 = *(arg1 + 0x28)
uint64_t r14_3 = sx.q(*(arg1 + 0x30)) << 3 u>> 3

if (rdi_1 u> &rdi_1[sx.q(*(arg1 + 0x30))])
    r14_3 = 0

if (r14_3 != 0)
    do
        void*** rbx_2 = *rdi_1
        
        if (rbx_2 != 0)
            *rbx_2 = &data_142fc4870
            sub_141706890(rbx_2)
            j_sub_140a74f90(rbx_2)
        
        rdi_1 = &rdi_1[1]
        rsi_1 += 1
    while (rsi_1 != r14_3)

int64_t rsi_2 = 0
int64_t* rdi_2 = *(arg1 + 0x38)
uint64_t r14_5 = sx.q(*(arg1 + 0x40)) << 3 u>> 3

if (rdi_2 u> &rdi_2[sx.q(*(arg1 + 0x40))])
    r14_5 = 0

if (r14_5 != 0)
    do
        void*** rbx_3 = *rdi_2
        
        if (rbx_3 != 0)
            *rbx_3 = &data_142fc4eb0
            sub_141706890(rbx_3)
            j_sub_140a74f90(rbx_3)
        
        rdi_2 = &rdi_2[1]
        rsi_2 += 1
    while (rsi_2 != r14_5)

int64_t rdi_3 = 0
int64_t* rbx_4 = *(arg1 + 0x48)
uint64_t rsi_4 = sx.q(*(arg1 + 0x50)) << 3 u>> 3

if (rbx_4 u> &rbx_4[sx.q(*(arg1 + 0x50))])
    rsi_4 = 0

if (rsi_4 != 0)
    do
        int64_t* rcx_6 = *rbx_4
        
        if (rcx_6 != 0)
            (**rcx_6)(rcx_6, 1)
        
        rbx_4 = &rbx_4[1]
        rdi_3 += 1
    while (rdi_3 != rsi_4)

int64_t* i = *(arg1 + 0x58)

for (void* rsi_5 = &i[sx.q(*(arg1 + 0x60))]; i != rsi_5; i = &i[1])
    void*** rbx_5 = *i
    
    if (rbx_5 != 0)
        rbx_5[4] = &data_142fc4250
        rbx_5[8] = &data_142fc4220
        int64_t rcx_7 = rbx_5[9]
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        rbx_5[4] = &data_142fc4068
        int64_t rcx_8 = rbx_5[5]
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        int64_t rcx_9 = rbx_5[2]
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        sub_141706890(rbx_5)
        j_sub_140a74f90(rbx_5)

int64_t* rdi_4 = *(arg1 + 0x68)
void* result = &rdi_4[sx.q(*(arg1 + 0x70))]
uint64_t rsi_7 = sx.q(*(arg1 + 0x70)) << 3 u>> 3

if (rdi_4 u> result)
    rsi_7 = 0

if (rsi_7 != 0)
    do
        void*** rbx_6 = *rdi_4
        
        if (rbx_6 != 0)
            sub_141762300(rbx_6)
            result = j_sub_140a74f90(rbx_6)
        
        rdi_4 = &rdi_4[1]
        r15 += 1
    while (r15 != rsi_7)

int64_t rcx_14 = *(arg1 + 0xf8)

if (rcx_14 != 0)
    result = sub_140a74f90(rcx_14)

int64_t rcx_15 = *(arg1 + 0xa8)

if (rcx_15 != 0)
    result = sub_140a74f90(rcx_15)

int32_t i_3 = *(arg1 + 0xa0)
int64_t* rbx_7 = *(arg1 + 0x98)

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_16 = *rbx_7
        
        if (rcx_16 != 0)
            result = sub_140a74f90(rcx_16)
        
        rbx_7 = &rbx_7[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_7 = *(arg1 + 0x98)

if (rbx_7 != 0)
    result = sub_140a74f90(rbx_7)

int32_t i_4 = *(arg1 + 0x90)
int64_t* rbx_8 = *(arg1 + 0x88)

if (i_4 != 0)
    int32_t i_2
    
    do
        int64_t rcx_18 = *rbx_8
        
        if (rcx_18 != 0)
            result = sub_140a74f90(rcx_18)
        
        rbx_8 = &rbx_8[2]
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)
    rbx_8 = *(arg1 + 0x88)

if (rbx_8 != 0)
    result = sub_140a74f90(rbx_8)

int64_t rcx_20 = *(arg1 + 0x78)

if (rcx_20 != 0)
    result = sub_140a74f90(rcx_20)

int64_t rcx_21 = *(arg1 + 0x68)

if (rcx_21 != 0)
    result = sub_140a74f90(rcx_21)

int64_t rcx_22 = *(arg1 + 0x58)

if (rcx_22 != 0)
    result = sub_140a74f90(rcx_22)

int64_t rcx_23 = *(arg1 + 0x48)

if (rcx_23 != 0)
    result = sub_140a74f90(rcx_23)

int64_t rcx_24 = *(arg1 + 0x38)

if (rcx_24 != 0)
    result = sub_140a74f90(rcx_24)

int64_t rcx_25 = *(arg1 + 0x28)

if (rcx_25 != 0)
    result = sub_140a74f90(rcx_25)

int64_t rcx_26 = *(arg1 + 0x18)

if (rcx_26 == 0)
    return result

return sub_140a74f90(rcx_26) __tailcall
