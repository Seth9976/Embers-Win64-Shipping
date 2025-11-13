// 函数: sub_140d77fc0
// 地址: 0x140d77fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg2[1].d
int64_t rbx = *arg2
HANDLE result = nullptr
int16_t* var_38 = nullptr
sub_1405a4c70(&var_38, sbb.d(arg1, arg1, rdi != 0) + 5 + rdi, 0)
memcpy(var_38, rbx, rdi * 2)
int32_t rcx_4 = sub_140a20ba0(&var_38, u".ani", 4)
int32_t rdi_1 = arg2[1].d
int64_t rbx_1 = *arg2
int16_t* name_1 = nullptr
sub_1405a4c70(&name_1, sbb.d(rcx_4, rcx_4, rdi_1 != 0) + 5 + rdi_1, 0)
memcpy(name_1, rbx_1, rdi_1 * 2)
sub_140a20ba0(&name_1, u".cur", 4)
int16_t* const name_5 = &data_142d40450
int16_t* const rdx_6 = &data_142d40450
int64_t var_28 = 0

if (rdi != 0)
    rdx_6 = var_38

int32_t var_20 = 0
char rax_4 = sub_140b1ef70(&var_28, rdx_6, 2)
int16_t* name_4 = name_1
char rax_5

if (rax_4 == 0)
    int16_t* const name_6 = &data_142d40450
    
    if (rdi_1 != 0)
        name_6 = name_4
    
    rax_5 = sub_140b1ef70(&var_28, name_6, 2)

if (rax_4 != 0 || rax_5 != 0)
    sub_140b12360(&name_1, sub_140b73e20(), u"Cursor-", u".temp")
    int16_t* const name_3 = &data_142d40450
    int64_t var_18 = var_28
    
    if (rdi_1 != 0)
        name_3 = name_1
    
    int32_t var_10_1 = var_20
    var_18.o = var_18.o
    sub_140a464c0()
    
    if (sub_140b27070(&var_18, name_3, &data_14399ea08, 0) != 0)
        int16_t* name = &data_142d40450
        
        if (rdi_1 != 0)
            name = name_1
        
        result = LoadImageW(nullptr, name, IMAGE_CURSOR, 0, 0, LR_LOADFROMFILE)
        sub_140a464c0()
        
        if (rdi_1 != 0)
            name_5 = name_1
        
        (*(data_14399ea08 + 0x30))(&data_14399ea08, name_5, 0, 0, 0)
    
    int16_t* name_2 = name_1
    
    if (name_2 != 0)
        sub_140a74f90(name_2)

int64_t rcx_13 = var_28

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

if (name_4 != 0)
    sub_140a74f90(name_4)

if (var_38 != 0)
    sub_140a74f90(var_38)

return result
