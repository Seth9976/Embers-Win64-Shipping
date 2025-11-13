// 函数: sub_141e86640
// 地址: 0x141e86640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg2
bool cond:0 = data_143de5480 == 0
uint32_t rax_1

if (not(cond:0))
    rax_1.b = GetCurrentThreadId() == data_143de5470

void** var_78

if ((cond:0 || rax_1.b != 0) && rbx == 0)
    int64_t* rax_2 = sub_142475900()
    void* rdx = rax_2[0x23]
    
    if (rdx == 0)
        int64_t rdx_1 = *rax_2
        (*(rdx_1 + 0x390))(rax_2, rdx_1)
        rdx = rax_2[0x23]
    
    int64_t var_68 = *(rdx + 0x80)
    int64_t var_60
    sub_140596d10(&var_60, rdx + 0x88)
    
    if (var_68 != 0)
        int64_t* rax_4 = sub_140d30800(&var_68, &var_78)
        int16_t* rbx_1
        
        if (rax_4[1].d == 0)
            rbx_1 = &data_142d40450
        else
            rbx_1 = *rax_4
        
        void* rax_6 = sub_140d2f6f0(sub_14259e080(), 0, rbx_1, 0, 0, 0, 1, 0)
        void** rcx_4 = var_78
        rbx = rax_6
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
    
    int64_t rcx_5 = var_60
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

if (sub_140a80ea0() != 0)
    arg1[0x41] = rbx
    return sub_141e86370(arg1, rbx)

void** const var_28_1 = &data_142d42ed8
var_78 = arg1
void* var_70_1 = rbx
int128_t zmm0 = var_78.o
int64_t (* var_48)(int64_t* arg1) = sub_141e76680
int64_t var_38_1 = 0
int128_t var_20_1 = zmm0
return sub_141e85cb0(&var_48, arg3)
