// 函数: sub_142293940
// 地址: 0x142293940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28 = 0xffffffff
int64_t var_38 = 0
int32_t var_30 = 0
sub_140d3cc80(sub_1425be5e0(), &var_38, 1, 0x10, 0)
int32_t rdx_1 = var_30
int32_t i = var_28 + 1
int64_t r8_1 = var_38
int32_t i_4 = i

if (i s< rdx_1)
    while (*(r8_1 + (sx.q(i) << 3)) == 0)
        int32_t i_5 = i + 1
        i_4 = i_5
        i = i_5
        
        if (i_5 s>= rdx_1)
            break

void var_54
void* var_50
int64_t* var_48

while (i s>= 0)
    if (i s>= rdx_1)
        break
    
    void* r9 = *(r8_1 + (sx.q(i) << 3))
    var_50 = r9
    
    if (*(r9 + 0x1b0) != 0)
        bool cond:0_1 = *(r9 + 0x468) != 0
        var_48 = &var_50
        bool var_58 = cond:0_1
        bool* var_40_1 = &var_58
        sub_142284760(arg1, &var_54, &var_48, nullptr)
        int32_t rbx_1 = 0
        
        if (sub_141abb820(var_50) s> 0)
            int32_t rax_5
            
            do
                sub_1420eb5d0(sub_142436b10(var_50, rbx_1))
                rbx_1 += 1
                rax_5 = sub_141abb820(var_50)
            while (rbx_1 s< rax_5)
        
        void* rcx_8 = var_50
        int64_t* rax_6 = *(rcx_8 + 0x468)
        
        if (rax_6 != 0)
            sub_14218b5e0(rax_6)
            *(var_50 + 0x468) = 0
            rcx_8 = var_50
        
        int64_t* rcx_9 = *(rcx_8 + 0x1b0)
        (*(*rcx_9 + 0x228))(rcx_9)
        *(var_50 + 0x1b0) = 0
        i = i_4
        rdx_1 = var_30
        r8_1 = var_38
    
    int32_t i_6 = i + 1
    i_4 = i_6
    i = i_6
    
    if (i_6 s< rdx_1)
        while (*(r8_1 + (sx.q(i) << 3)) == 0)
            int32_t i_7 = i + 1
            i_4 = i_7
            i = i_7
            
            if (i_7 s>= rdx_1)
                break

if (r8_1 != 0)
    sub_140a74f90(r8_1)

sub_14210d4f0(arg2)
void** i_1 = data_143f1da58

if (i_1 != 0)
    var_48 = &var_50
    
    do
        void* rax_11 = i_1[2]
        var_50 = rax_11
        void* var_40_2 = rax_11 + 0x28
        sub_140bd29a0(arg4, &var_54, &var_48, nullptr)
        i_1 = *i_1
    while (i_1 != 0)

void** i_2 = data_143f1da60

if (i_2 != 0)
    var_48 = &var_50
    
    do
        void* rax_13 = i_2[2]
        var_50 = rax_13
        void* var_40_3 = rax_13 + 0x10
        sub_142284920(arg5, &var_54, &var_48, nullptr)
        i_2 = *i_2
    while (i_2 != 0)

void** i_3 = data_143f1da48

if (i_3 != 0)
    var_48 = &var_50
    
    do
        void* rax_15 = i_3[2]
        var_50 = rax_15
        void* var_40_4 = rax_15 + 0x20
        sub_1422845f0(arg6, &var_54, &var_48, nullptr)
        i_3 = *i_3
    while (i_3 != 0)

sub_1422e1a50()
sub_140e6ade0(data_143e29f28)
sub_1419dc540()
int64_t* rax_17 = sub_1419a2d10()

if (rax_17 != 0)
    sub_141993d50(rax_17)
    j_sub_140a74f90(rax_17)

int64_t* rcx_19 = *(data_143f5b298 + 0x780)
int64_t result = (*(*rcx_19 + 0x10))(rcx_19)
data_143f3f3b0 = 0
return result
