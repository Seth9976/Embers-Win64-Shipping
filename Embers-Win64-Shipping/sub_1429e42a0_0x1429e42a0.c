// 函数: sub_1429e42a0
// 地址: 0x1429e42a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void* rbp = *(arg1 + 0x13d8)
void var_88
int32_t rax_3
int64_t r9_1
rax_3, r9_1 = sub_142a23290(&var_88, arg2, arg3, *(arg1 + 0x4ea8), *(arg1 + 0x4eb0))

if (rax_3 != 0)
    sub_1429da010(arg1 + 0x270, 2, "Failed to allocate bool decoder 0", r9_1)

int32_t rax_4

if (*(arg1 + 0x258) == 0)
    rax_4 = sub_1429e4ba0(&var_88)
else
    rax_4 = 0

*(arg1 + 0x5dc) = rax_4

if (rax_4 == 4)
    void* rbx_1 = rbp + 0x7a3
    char* rdi_1 = rbx_1 + 0xa
    uint64_t i_12 = zx.q(rax_4 - 2)
    uint64_t i
    
    do
        sub_142a2d030(&var_88, rdi_1)
        rdi_1 = &rdi_1[1]
        i = i_12
        i_12 -= 1
    while (i != 1)
    void* rdi_2 = rbx_1 + 6
    uint64_t i_23 = zx.q((i_12 + 2).d)
    uint64_t i_1
    
    do
        int64_t j_6 = 2
        int64_t j
        
        do
            sub_142a2d030(&var_88, rdi_2)
            rdi_2 += 1
            j = j_6
            j_6 -= 1
        while (j != 1)
        i_1 = i_23
        i_23 -= 1
    while (i_1 != 1)
    uint64_t i_13 = zx.q((i_23 + 2).d)
    uint64_t i_2
    
    do
        int64_t j_7 = 3
        int64_t j_1
        
        do
            sub_142a2d030(&var_88, rbx_1)
            rbx_1 += 1
            j_1 = j_7
            j_7 -= 1
        while (j_1 != 1)
        i_2 = i_13
        i_13 -= 1
    while (i_2 != 1)

sub_1429e4130(rbp, *(arg1 + 0x5dc), &var_88)
void* rbx_2 = rbp + 0x7af
int64_t i_19 = 3
int64_t i_3

do
    sub_142a2d030(&var_88, rbx_2)
    rbx_2 += 1
    i_3 = i_19
    i_19 -= 1
while (i_3 != 1)

if (*(arg1 + 0x5a8) != i_19.d && *(arg1 + 0x5b8) == i_19.b)
    void* rbx_3 = rbp + 0x776
    uint64_t i_14 = zx.q((i_19 + 7).d)
    uint64_t i_4
    
    do
        int64_t j_8 = 3
        int64_t j_2
        
        do
            sub_142a2d030(&var_88, rbx_3)
            rbx_3 += 1
            j_2 = j_8
            j_8 -= 1
        while (j_2 != 1)
        i_4 = i_14
        i_14 -= 1
    while (i_4 != 1)
    int64_t i_22 = 4
    
    if (*(arg1 + 0x6c4) == 4)
        int64_t rbx_4 = 0
        int64_t i_15 = 4
        int64_t i_5
        
        do
            int64_t j_9 = 2
            int64_t j_3
            
            do
                sub_142a2d030(&var_88, rbp + 0x76e + rbx_4)
                rbx_4 += 1
                j_3 = j_9
                j_9 -= 1
            while (j_3 != 1)
            i_5 = i_15
            i_15 -= 1
        while (i_5 != 1)
    
    void* rbx_5 = rbp + 0x78b
    int64_t i_20 = 4
    int64_t i_6
    
    do
        sub_142a2d030(&var_88, rbx_5)
        rbx_5 += 1
        i_6 = i_20
        i_20 -= 1
    while (i_6 != 1)
    int32_t rax_5 = sub_1429e46c0(arg1 + 0x270, &var_88)
    *(arg1 + 0x13d4) = rax_5
    
    if (rax_5 != 0)
        int32_t rax_6 = *(arg1 + 0x1318)
        
        if (rax_6 != *(arg1 + 0x131c))
            if (rax_6 != *(arg1 + 0x1320))
                *(arg1 + 0x13d0) = 0x201
            else
                *(arg1 + 0x13d0) = 0x102
            
            *(arg1 + 0x13d2) = 3
        else
            *(arg1 + 0x13d0) = 0x103
            *(arg1 + 0x13d2) = 2
    
    int64_t i_21 = 5
    void* r14_1 = *(arg1 + 0x13d8)
    
    if (*(arg1 + 0x13d4) == 2)
        char* rbx_6 = r14_1 + 0x78f
        int64_t i_16 = 5
        int64_t i_7
        
        do
            sub_142a2d030(&var_88, rbx_6)
            rbx_6 = &rbx_6[1]
            i_7 = i_16
            i_16 -= 1
        while (i_7 != 1)
    
    if (*(arg1 + 0x13d4) != 1)
        int64_t rbx_7 = 0
        int64_t i_17 = 5
        int64_t i_8
        
        do
            sub_142a2d030(&var_88, r14_1 + 0x794 + rbx_7)
            sub_142a2d030(&var_88, r14_1 + 0x795 + rbx_7)
            rbx_7 += 2
            i_8 = i_17
            i_17 -= 1
        while (i_8 != 1)
    
    if (*(arg1 + 0x13d4) != 0)
        void* rbx_8 = r14_1 + 0x79e
        int64_t i_9
        
        do
            sub_142a2d030(&var_88, rbx_8)
            rbx_8 += 1
            i_9 = i_21
            i_21 -= 1
        while (i_9 != 1)
    
    void* rbx_9 = rbp
    int64_t j_10
    int64_t i_10
    
    do
        j_10 = 9
        int64_t j_4
        
        do
            sub_142a2d030(&var_88, rbx_9)
            rbx_9 += 1
            j_4 = j_10
            j_10 -= 1
        while (j_4 != 1)
        i_10 = i_22
        i_22 -= 1
    while (i_10 != 1)
    uint64_t i_18 = zx.q((j_10 + 0x10).d)
    int64_t rbx_10 = 0
    uint64_t i_11
    
    do
        int64_t j_11 = 3
        int64_t j_5
        
        do
            sub_142a2d030(&var_88, rbp + 0x7e + rbx_10)
            rbx_10 += 1
            j_5 = j_11
            j_11 -= 1
        while (j_5 != 1)
        i_11 = i_18
        i_18 -= 1
    while (i_11 != 1)
    sub_1429e47e0(rbp + 0x7b2, *(arg1 + 0x5bc), &var_88)

int32_t var_7c
int32_t r14_2
r14_2.b = var_7c - 0x41 u<= 0x3fffffbe
__security_check_cookie(rax_1 ^ &var_b8)
return zx.q(r14_2)
