// 函数: sub_1410518d0
// 地址: 0x1410518d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg3

if (rcx != 0)
    (*(*rcx + 0x48))(rcx)
    rcx = *arg3

int64_t rax_2 = *rcx
void*** arg_18 = nullptr
int64_t rax_3 = (*(rax_2 + 8))(rcx)
int64_t* rcx_1 = *arg3
int64_t rdx = *rcx_1
void*** rax_5

if (rax_3 == 0)
    int64_t rax_6 = (*(rdx + 0x10))(rcx_1, rdx)
    int64_t* rcx_3 = *arg3
    int64_t rdx_2 = *rcx_3
    
    if (rax_6 != 0)
        rax_5 = sub_141039560(arg1, (*(rdx_2 + 0x10))(rcx_3, rdx_2))
        goto label_14105193f
    
    if ((*(rdx_2 + 0x20))(rcx_3, rdx_2) != 0)
        int64_t* rcx_5 = *arg3
        sub_1408c8cf0(&arg_18, sub_1410398a0(arg1, (*(*rcx_5 + 0x20))(rcx_5)))
    label_141051978:
        void*** rbx_1 = arg_18
        
        if (rbx_1 != 0)
            sub_1408c8cf0((*rbx_1)[9](rbx_1) + 0x190, *arg3)
            *arg2 = rbx_1
            return arg2
else
    rax_5 = sub_141039230(arg1, (*(rdx + 8))(rcx_1, rdx))
label_14105193f:
    arg_18 = rax_5
    
    if (rax_5 != 0)
        rax_5[1].d += 1
        goto label_141051978
*arg2 = nullptr
return arg2
