// 函数: sub_140d2ee50
// 地址: 0x140d2ee50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r14 = arg4.b

if (data_143e1d7b4 != 0)
    sub_140af98a0("Unknown", 0x13b, 
        Illegal call to StaticFindObject() while serializing object data!", arg4)
    arg4 = sub_140afbb40()

uint32_t rax_1

if (data_143de5480 != 0)
    rax_1, arg4 = GetCurrentThreadId()
    rax_1.b = rax_1 == data_143de5470

if (data_143de5480 == 0 || rax_1.b != 0)
    bool z_1
    
    if (0 == data_143e1adfc)
        data_143e1adfc = 0
        z_1 = true
    else
        data_143e1adfc
        z_1 = false
    
    if (not(z_1))
        sub_140af98a0("Unknown", 0x140, 
            Illegal call to StaticFindObject() while collecting garbage!", arg4)
        sub_140afbb40()

void* rax_3 = arg2
int32_t rdx = 0
int32_t rcx = 0

if (arg2 == -1)
    rax_3 = nullptr

int64_t rsi
rsi.b = arg2 == -1
void* arg_10 = rax_3
uint64_t rbx_3

if (arg2 == -1)
    int16_t* var_38 = nullptr
    int32_t var_30_1 = 0
    int32_t var_2c_1 = 0
    
    if (arg3 != 0 && *arg3 != 0)
        int64_t rbx_4 = -1
        
        do
            rbx_4 += 1
        while (arg3[rbx_4] != 0)
        
        if (rbx_4.d + 1 s> 0)
            sub_1405947f0(&var_38, rbx_4.d + 1)
            rcx = var_2c_1
            rdx = var_30_1
        
        int32_t rax_7 = rdx + rbx_4.d + 1
        var_30_1 = rax_7
        
        if (rax_7 s> rcx)
            sub_140594770(&var_38)
        
        UnDecorator::getReferenceType(var_38, arg3, (rbx_4.d + 1) * 2)
    
    sub_140d304e0(&var_38, 0)
    int16_t* rdx_7 = &data_142d40450
    int16_t* rdi_1 = var_38
    
    if (var_30_1 != 0)
        rdx_7 = rdi_1
    
    void var_50
    rbx_3 = *sub_140b58260(&var_50, rdx_7, 1)
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
else
    int16_t* var_48 = nullptr
    int32_t var_40_1 = 0
    int32_t var_3c_1 = 0
    
    if (arg3 != 0 && *arg3 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg3[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_48, rbx_1.d + 1)
            rcx = var_3c_1
            rdx = var_40_1
        
        int32_t rax_4 = rdx + rbx_1.d + 1
        var_40_1 = rax_4
        
        if (rax_4 s> rcx)
            sub_140594770(&var_48)
        
        UnDecorator::getReferenceType(var_48, arg3, (rbx_1.d + 1) * 2)
    
    if (sub_140d2b810(&arg_10, &var_48, 0, 0, 0) == 0)
        int16_t* rcx_5 = var_48
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        return 0
    
    int16_t* rdx_4 = &data_142d40450
    
    if (var_40_1 != 0)
        rdx_4 = var_48
    
    void var_58
    uint64_t* rax_6 = sub_140b58260(&var_58, rdx_4, 1)
    int16_t* rcx_7 = var_48
    rbx_3 = *rax_6
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

int32_t var_68_1 = 0
return sub_140d2f0c0(arg1, arg_10, rbx_3, zx.q(r14), rsi.b, 0)
