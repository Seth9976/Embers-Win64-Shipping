// 函数: sub_1407481d0
// 地址: 0x1407481d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

sub_140596eb0(&arg2[2])
int32_t rax_1 = arg2[1].d
int64_t* rcx_1

if (rax_1 == 0)
    rcx_1 = nullptr
else
    rcx_1 = *arg2

if (rcx_1 != 0)
label_14074820a:
    (*(*rcx_1 + 0x38))(rcx_1, 0)
    int64_t rcx_2 = *arg2
    
    if (rcx_2 != 0)
        *arg2 = sub_140a84c80(rcx_2, 0, 0)
    
    arg2[1].d = 0
else if (rax_1 != 0)
    rcx_1 = *arg2
    
    if (rcx_1 != 0)
        goto label_14074820a

int64_t rcx_3 = *arg2

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

j_sub_140a74f90(arg2)
