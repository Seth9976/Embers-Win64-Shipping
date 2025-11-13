// 函数: sub_140d80fe0
// 地址: 0x140d80fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_7 = arg1[0x14].d
int64_t rsi = arg1[0x13]
void* r15 = nullptr
void* var_38 = nullptr
int32_t i_8 = i_7
int32_t i_13 = i_7

if (i_7 != 0)
    sub_1407c35c0(&var_38, i_7, 0)
    r15 = var_38
    int64_t* rsi_1 = rsi - r15
    void* rcx_1 = r15 + 0x10
    int32_t i
    
    do
        *(rcx_1 - 0x10) = *(rsi_1 + rcx_1 - 0x10)
        void* rax_2 = *(rsi_1 + rcx_1 - 8)
        *(rcx_1 - 8) = rax_2
        
        if (rax_2 != 0)
            *(rax_2 + 0xc) += 1
        
        *rcx_1 = *(rsi_1 + rcx_1)
        *(rcx_1 + 8) = *(rsi_1 + rcx_1 + 8)
        *(rcx_1 + 0x10) = *(rsi_1 + rcx_1 + 0x10)
        *(rcx_1 + 0x18) = *(rsi_1 + rcx_1 + 0x18)
        *(rcx_1 + 0x20) = *(rsi_1 + rcx_1 + 0x20)
        *(rcx_1 + 0x24) = *(rsi_1 + rcx_1 + 0x24)
        *(rcx_1 + 0x28) = *(rsi_1 + rcx_1 + 0x28)
        rcx_1 += 0x40
        i = i_7
        i_7 -= 1
    while (i != 1)
    i_8 = arg1[0x14].d
    i_7 = i_13

if (i_8 != 0)
    int64_t* rsi_3 = arg1[0x13] + 8
    int32_t i_1
    
    do
        int64_t* rcx_2 = *rsi_3
        
        if (rcx_2 != 0)
            int32_t temp2_1 = *(rcx_2 + 0xc)
            *(rcx_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rcx_2 + 8))(rcx_2, 1)
        
        rsi_3 = &rsi_3[8]
        i_1 = i_8
        i_8 -= 1
    while (i_1 != 1)

arg1[0x14].d = 0

if (*(arg1 + 0xa4) != 0)
    sub_1405a52a0(&arg1[0x13], 0)

if (i_7 s> 0)
    void* rsi_4 = r15
    uint64_t i_9 = zx.q(i_7)
    uint64_t i_2
    
    do
        sub_140d81300(arg1, rsi_4)
        rsi_4 += 0x40
        i_2 = i_9
        i_9 -= 1
    while (i_2 != 1)

if (*(arg1 + 0xf9) != 0 && (0x8000 & GetKeyState(0xa0)) == 0)
    *(arg1 + 0xf9) = 0
    int64_t* rcx_5 = arg1[3]
    (*(*rcx_5 + 0x20))(rcx_5, 0xa0, 0, 0)

if (*(arg1 + 0xfa) != 0 && (0x8000 & GetKeyState(0xa1)) == 0)
    *(arg1 + 0xfa) = 0
    int64_t* rcx_6 = arg1[3]
    (*(*rcx_6 + 0x20))(rcx_6, 0xa1, 0, 0)

if (i_7 != 0)
    void* rsi_5 = r15 + 8
    int32_t i_3
    
    do
        int64_t* rcx_7 = *rsi_5
        
        if (rcx_7 != 0)
            int32_t temp5_1 = *(rcx_7 + 0xc)
            *(rcx_7 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rcx_7 + 8))(rcx_7, 1)
        
        rsi_5 += 0x40
        i_3 = i_7
        i_7 -= 1
    while (i_3 != 1)

if (r15 != 0)
    sub_140a74f90(r15)

var_38 = nullptr
int32_t var_48 = 0
int64_t result = sub_140d6f0b0(&var_38, arg1[0x15], arg1[0x16].d, 0, 0)
int32_t i_11 = arg1[0x16].d

if (i_11 != 0)
    void* rbx_1 = arg1[0x15] + 0x10
    int32_t i_4
    
    do
        result = sub_140a3c0a0(rbx_1)
        rbx_1 += 0x48
        i_4 = i_11
        i_11 -= 1
    while (i_4 != 1)

arg1[0x16].d = 0

if (*(arg1 + 0xb4) != 0)
    result = sub_140775c70(&arg1[0x15], 0)

int32_t i_12 = i_13
void* r14_2 = var_38
bool cond:0 = i_12 == 0

if (i_12 s> 0)
    int32_t* rbx_2 = r14_2 + 0x38
    uint64_t i_10 = zx.q(i_12)
    uint64_t i_5
    
    do
        int32_t rcx_12 = rbx_2[-0xe]
        void arg_8
        
        if (rcx_12 == 0)
            void* var_40_2 = &arg_8
            var_48.q = *(rbx_2 + 4)
            result = sub_140d80730(arg1, *(rbx_2 - 0x30), &rbx_2[-0xa], zx.q(*rbx_2))
        else if (rcx_12 == 1)
            *(rbx_2 + 4)
            var_48.q = &arg_8
            result = sub_140d809e0(arg1, *(rbx_2 - 0x30), zx.q(*rbx_2))
        else if (rcx_12 == 2)
            result = sub_140d808e0(arg1, *(rbx_2 - 0x30))
        else if (rcx_12 == 3)
            *rbx_2
            void* var_40_1 = &arg_8
            var_48.q = *(rbx_2 + 4)
            result = sub_140d80af0(arg1, *(rbx_2 - 0x30), &rbx_2[-0xa])
        rbx_2 = &rbx_2[0x12]
        i_5 = i_10
        i_10 -= 1
    while (i_5 != 1)
    cond:0 = i_12 == 0

if (not(cond:0))
    void* rbx_3 = r14_2 + 0x10
    int32_t i_6
    
    do
        result = sub_140a3c0a0(rbx_3)
        rbx_3 += 0x48
        i_6 = i_12
        i_12 -= 1
    while (i_6 != 1)

if (r14_2 == 0)
    return result

return sub_140a74f90(r14_2)
