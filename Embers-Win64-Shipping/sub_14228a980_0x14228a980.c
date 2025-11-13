// 函数: sub_14228a980
// 地址: 0x14228a980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = arg1[1]
int64_t rcx = *rdx
bool cond:2

if (rcx + 4 u> rdx[1])
    int32_t rax_2
    rax_2.b = *arg2 != 0
    int32_t arg_8 = rax_2
    (*(*arg1 + 0x150))(arg1, &arg_8, 4)
    cond:2 = arg_8 != 0
else
    cond:2 = *rcx != 0
    *rdx = rcx + 4

if (cond:2 != 0)
    char* rbx_1
    
    if ((arg1[5].b & 1) == 0)
        rbx_1 = *arg2
    else
        char* rax_4
        int32_t r9_1
        rax_4, r9_1 = j_sub_140a82f30(0x160)
        rbx_1 = rax_4
        
        if (rax_4 == 0)
            rbx_1 = nullptr
            *arg2 = nullptr
        else
            *rax_4 = 0
            arg3 = sub_1422870b0(&rbx_1[0xc0], &data_143dbb1f8, 1048576f, 
                sub_1422870b0(&rax_4[0x20], &data_143dbb1f8, 1048576f, r9_1))
            *arg2 = rbx_1
    
    sub_14228bea0(arg1, rbx_1, arg3)

return arg1
