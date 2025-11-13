// 函数: sub_1414020c0
// 地址: 0x1414020c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 8) s< 3)
    return 

int64_t rbx_1 = data_143ec9208
int64_t rcx
int32_t rdi_1

if (data_143de5480 == 0)
    rdi_1 = 0
    rcx = 0
else
    rdi_1 = 0
    rcx.b = GetCurrentThreadId().d != data_143de5470

if (*(rbx_1 + (rcx << 2)) == 0)
    return 

char rax_1 = sub_140a80f40()

if (rax_1 != 0)
    sub_140865470(arg1 + 0x1078, 0)
    sub_140774790(arg1 + 0x10c8)
else if (data_143f138f4 != rax_1)
label_14140216d:
    void var_68
    int64_t* rax_3 = sub_1413d9e20(&var_68, nullptr, 0xff)
    *(*rax_3 + 0x10) = arg1
    void* rcx_3 = *rax_3
    int32_t r8 = rax_3[2].d
    int64_t* rdx = rax_3[1]
    int64_t* rbx_2 = *(rcx_3 + 0x20)
    int64_t* arg_20 = rbx_2
    int32_t* rbp_1 = &rbx_2[9]
    
    if (rbx_2 != 0)
        *rbp_1 += 1
        rbx_2 = arg_20
    
    sub_1405a5630(rcx_3, rdx, r8, 1)
    
    if (rbx_2 != 0)
        int32_t rax_4 = *rbp_1
        *rbp_1 -= 1
        
        if (rax_4 == 1)
            sub_140a2f6e0(arg_20)
else if (data_143de5480 == rax_1)
    sub_140865470(arg1 + 0x1078, 0)
    sub_140774790(arg1 + 0x10c8)
else
    uint32_t rax_2
    rax_2.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_2.b == 0)
        goto label_14140216d
    
    sub_140865470(arg1 + 0x1078, 0)
    sub_140774790(arg1 + 0x10c8)

int32_t rbx_4

if (arg3 == 0)
    rbx_4 = 0
else
    rbx_4 = *(arg1 + 0x1108) - *(arg1 + 0x1134)

sub_1413d1970(rbx_4, arg2)
int64_t* var_50
sub_1407453e0(&var_50, arg1 + 0x1100)
void* var_40
int32_t i_1

for (int32_t i = i_1; i s< *(var_40 + 0x18); i = i_1)
    if (rbx_4 s> 0x14)
        int32_t rcx_9 = 1
        int32_t rdx_5 = rbx_4 s/ 5
        
        if (rdx_5 s>= 1)
            rcx_9 = rdx_5
        
        if (mods.dp.d(sx.q(rdi_1), rcx_9) == 0)
            sub_140b29c50(data_143ddb418, rdi_1, rbx_4)
    
    rdi_1 += 1
    sub_1413d34d0(arg1, *(*var_50 + (sx.q(i) << 3)))
    int32_t var_44
    int32_t var_38 = var_38 & not.d(var_44)
    void var_48
    sub_14059bdd0(&var_48)

if (rbx_4 s> 0x14)
    sub_140b137c0(data_143ddb418)
