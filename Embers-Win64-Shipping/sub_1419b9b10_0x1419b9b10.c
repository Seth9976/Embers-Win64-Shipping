// 函数: sub_1419b9b10
// 地址: 0x1419b9b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = data_143db18d0

if (rcx == 0)
    sub_140a53c40()
    rcx = data_143db18d0

(*(*rcx + 0xf0))(rcx, 0, 0)
int32_t i_1 = 0
int64_t result = 0
bool z

if (0 == data_143f0fdf1)
    data_143f0fdf1 = 0
    z = true
else
    result.b = data_143f0fdf1
    z = false

if (not(z))
    char temp0_1 = data_143f0fdf1
    data_143f0fdf1 = 0
    int64_t rax_1
    rax_1.b = temp0_1
    int64_t* rcx_1 = data_143f138f8
    result = (*(*rcx_1 + 0x18))(rcx_1)
    int64_t* rcx_2 = data_143f138f8
    
    if (rcx_2 != 0)
        result = (*(*rcx_2 + 0x20))(rcx_2, 1)
    
    int64_t* rcx_3 = data_143f13900
    data_143f138f8 = 0
    
    if (rcx_3 != 0)
        result = (*(*rcx_3 + 0x28))(rcx_3, 1)
    
    data_143f13900 = 0

if (data_143f138f4 == 0)
    return result

int64_t* rax_5 = sub_1419a2d10()
data_14399fa38()
sub_1419a21e0(0)

if (data_143f138f4 != 0)
    if (data_143db7ab0 != 0)
        void var_58
        int64_t* rax_6 = sub_14199c720(&var_58, nullptr, 2)
        *(*rax_6 + 0x10) = 0
        void* rcx_6 = *rax_6
        int32_t r8_1 = rax_6[2].d
        int64_t* rdx_1 = rax_6[1]
        int64_t* r14_1 = *(rcx_6 + 0x18)
        int64_t* arg_18 = r14_1
        
        if (r14_1 != 0)
            r14_1[9].d += 1
        
        sub_1419ae8f0(rcx_6, rdx_1, r8_1, 1)
        sub_1405a6220(sub_140a242a0(), &arg_18)
        data_143db7ab0 = 0
        data_143db7ab8 = 0
        
        if (r14_1 != 0)
            r14_1[9].d -= 1
            
            if (r14_1[9].d == 1)
                sub_140a2f6e0(r14_1)
    
    int32_t rbx_1 = data_14399e5dc
    data_143f01c92 = 0
    data_143f01c93 = 0
    data_143f01c94 = 0
    data_143f138f4 = 0
    void var_40
    int64_t* rax_9 = sub_14059a440(&var_40, nullptr, 2)
    *(*rax_9 + 0x10) = rbx_1
    void* rcx_11 = *rax_9
    int32_t r8_3 = rax_9[2].d
    int64_t* rdx_3 = rax_9[1]
    int64_t* i_2 = *(rcx_11 + 0x18)
    int64_t* i = i_2
    
    if (i_2 != 0)
        i_2[9].d += 1
    
    sub_1405a5db0(rcx_11, rdx_3, r8_3, 1)
    int64_t* rax_10 = sub_140a242a0()
    int64_t r8_4 = *rax_10
    
    if ((*(r8_4 + 0x20))(rax_10, 2, r8_4) == 0)
        sub_1405a6220(sub_140a242a0(), &i)
    label_1419b9d3f:
        
        if (i_2 != 0)
            i_2[9].d -= 1
            
            if (i_2[9].d == 1)
                sub_140a2f6e0(i_2)
    else if (i_2 != 0)
        do
            int64_t rax_12 = 0
            
            if (0 == i_2[1])
                i_2[1] = 0
            else
                rax_12 = i_2[1]
            
            if (((rax_12 u>> 0x1a).b & 1) != 0)
                break
            
            sub_140b73230(zx.o(0))
        while (i != 0)
        
        goto label_1419b9d3f
    
    int64_t* rcx_15 = data_143db7aa8
    (*(*rcx_15 + 0x18))(rcx_15)
    int64_t* rcx_16 = data_143db7aa8
    
    if (rcx_16 != 0)
        (*(*rcx_16 + 0x20))(rcx_16, 1)
    
    data_143db7aa8 = 0
    sub_141976900(&data_143f02b88)
    int64_t* rcx_17 = data_143f1af48
    
    if (rcx_17 != 0)
        (*(*rcx_17 + 0x28))(rcx_17, 1)
    
    data_143f1af48 = 0

if (rax_5 != 0)
    if (rax_5[1].d s> 0)
        int64_t* rbx_2 = nullptr
        
        do
            int64_t* rcx_18 = *(rbx_2 + *rax_5)
            
            if (rcx_18 != 0)
                (**rcx_18)(rcx_18, 1)
            
            i_1 += 1
            rbx_2 = &rbx_2[1]
        while (i_1 s< rax_5[1].d)
    
    int64_t rcx_19 = *rax_5
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    j_sub_140a74f90(rax_5)

return data_14399fa40()
