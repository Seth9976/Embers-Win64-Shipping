// 函数: sub_14062d150
// 地址: 0x14062d150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_28

if (sub_14063cdd0(sub_140596d10(&var_28, arg1)) == 0)
    int64_t rcx_2 = *arg1
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    int64_t rcx_3 = *arg2
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    int32_t i_3 = arg3[1].d
    int64_t* rbx_1 = *arg3
    
    if (i_3 != 0)
        int32_t i
        
        do
            int64_t rcx_4 = *rbx_1
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            rbx_1 = &rbx_1[2]
            i = i_3
            i_3 -= 1
        while (i != 1)
        rbx_1 = *arg3
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    return 0

sub_140a20b00(arg1, U"\", 1)
int32_t rax_2 = arg2[1].d
int32_t r8 = rax_2 - 1

if (rax_2 == 0)
    r8 = 0

sub_140a20ba0(arg1, *arg2, r8)
int16_t* const r15 = &data_142d40450

if (arg4 == 0)
    int64_t* rax_3 = __crt_deferred_errno_cache::get(&data_143db7b00)
    arg1[1].d
    
    if ((*(*rax_3 + 0x70))() != 0)
        int64_t rcx_8 = *arg1
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        int64_t rcx_9 = *arg2
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        sub_140597000(arg3)
        uint64_t result
        result.b = 0
        return result

int64_t* i_1 = *arg3
void* rbp_3 = &i_1[sx.q(arg3[1].d) * 2]
int64_t var_38 = 0
int64_t var_30_1 = 0

for (; i_1 != rbp_3; i_1 = &i_1[2])
    int32_t rax_6 = i_1[1].d
    int32_t r8_1 = rax_6 - 1
    
    if (rax_6 == 0)
        r8_1 = 0
    
    sub_140a20ba0(&var_38, *i_1, r8_1)
    sub_140a20ba0(&var_38, &data_142d6acb4, 2)

if (arg1[1].d != 0)
    r15 = *arg1

sub_140a464c0()
char rax_7 = sub_140b27210(&var_38, r15, 0, &data_14399ea08, 0)
int64_t rcx_14 = var_38

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t rcx_15 = *arg1

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int64_t rcx_16 = *arg2

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int32_t i_4 = arg3[1].d
int64_t* rbx_2 = *arg3

if (i_4 != 0)
    int32_t i_2
    
    do
        int64_t rcx_17 = *rbx_2
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        rbx_2 = &rbx_2[2]
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)
    rbx_2 = *arg3

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

return zx.q(rax_7)
