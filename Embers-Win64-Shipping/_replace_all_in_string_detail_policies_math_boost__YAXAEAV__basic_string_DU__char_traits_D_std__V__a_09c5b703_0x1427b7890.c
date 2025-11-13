// 函数: ?replace_all_in_string@detail@policies@math@boost@@YAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBD1@Z
// 地址: 0x1427b7890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[8] = 0
int64_t* rbp = nullptr
int32_t i_4 = arg1[7].d
int64_t rdi = arg1[6]
int64_t* var_28 = nullptr
int32_t i_6 = i_4

if (i_4 != 0)
    sub_1405a4b40(&var_28, i_4, 0)
    rbp = var_28
    void* rdi_1 = rdi - rbp
    void* rbx_1 = &rbp[3]
    int32_t i
    
    do
        *(rbx_1 - 0x18) = *(rdi_1 + rbx_1 - 0x18)
        sub_140596d10(rbx_1 - 0x10, rdi_1 - 0x10 + rbx_1)
        sub_140596d10(rbx_1, rdi_1 + rbx_1)
        *(rbx_1 + 0x10) = *(rdi_1 + rbx_1 + 0x10)
        rbx_1 += 0x30
        i = i_4
        i_4 -= 1
    while (i != 1)
    i_4 = i_6

int64_t* rbx_2 = rbp
void* rdi_4 = &rbp[sx.q(i_4) * 6]

if (rbp != rdi_4)
    do
        (*(*arg1 + 0x288))(arg1, *rbx_2)
        rbx_2 = &rbx_2[6]
    while (rbx_2 != rdi_4)

int32_t result = *(arg1 + 0x3c)
void* rbx_3 = arg1[6]
int32_t i_5 = arg1[7].d

if (result s< 0)
    if (i_5 != 0)
        void* rbx_5 = rbx_3 + 8
        int32_t i_1
        
        do
            int64_t rcx_6 = *(rbx_5 + 0x10)
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            int64_t rcx_7 = *rbx_5
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            rbx_5 += 0x30
            i_1 = i_5
            i_5 -= 1
        while (i_1 != 1)
        result = *(arg1 + 0x3c)
    
    arg1[7].d = 0
    
    if (result != 0)
        result = sub_1405a5220(&arg1[6], 0)
else
    if (i_5 != 0)
        void* rbx_4 = rbx_3 + 8
        int32_t i_2
        
        do
            int64_t rcx_4 = *(rbx_4 + 0x10)
            
            if (rcx_4 != 0)
                result = sub_140a74f90(rcx_4)
            
            int64_t rcx_5 = *rbx_4
            
            if (rcx_5 != 0)
                result = sub_140a74f90(rcx_5)
            
            rbx_4 += 0x30
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
    
    arg1[7].d = 0

arg1[9] = 0

if (arg1[0x15].b != 0)
    (*(*arg1 + 0x278))(arg1, &data_143f88a90)
    (*(*arg1 + 0x278))(arg1, &data_143f88aa0)
    (*(*arg1 + 0x278))(arg1, &data_143f88ab0)
    result = (*(*arg1 + 0x278))(arg1, &data_143f88ac0)

if (i_4 != 0)
    void* rbx_6 = &rbp[1]
    int32_t i_3
    
    do
        int64_t rcx_13 = *(rbx_6 + 0x10)
        
        if (rcx_13 != 0)
            result = sub_140a74f90(rcx_13)
        
        int64_t rcx_14 = *rbx_6
        
        if (rcx_14 != 0)
            result = sub_140a74f90(rcx_14)
        
        rbx_6 += 0x30
        i_3 = i_4
        i_4 -= 1
    while (i_3 != 1)

if (rbp == 0)
    return result

return sub_140a74f90(rbp)
