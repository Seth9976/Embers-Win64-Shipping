// 函数: sub_1427da4a0
// 地址: 0x1427da4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg4
sub_1427e5da0(arg1, *arg3)
int32_t* rax = arg1[5]
int32_t arg_8
int32_t* r12 = &arg_8
arg_8 = 0x1c5

if (rax != 0)
    r12 = rax

void* i

for (i = *r15; i != 0; i = *r15)
    sub_1427e5da0(arg1, i)
    int32_t rax_1 = arg3[3](arg1[2], zx.q(r15[1].d))
    void* rax_2 = *arg1
    char const* const rbp_1
    
    if (*(rax_2 + 0x10) == 0)
        rbp_1 = "bad__repx__name"
    else
        rbp_1 = *(*(rax_2 + 8) + zx.q(*(rax_2 + 0x10) - 1) * 0x10)
    
    char const (** rbx_1)[0x8] = &data_143b7af50
    int64_t* rsi_1 = arg1[1]
    
    if (data_143b7af50 != 0)
        do
            if (rbx_1[1].d == rax_1)
                (*(*rsi_1 + 0x10))(rsi_1, rbp_1, *rbx_1)
            
            rbx_1 = &rbx_1[2]
        while (*rbx_1 != 0)
    
    void* rdx_7 = *arg1
    
    if (*(rdx_7 + 0x10) != 0)
        if (*(*(rdx_7 + 8) + zx.q(*(rdx_7 + 0x10) - 1) * 0x10 + 8) != 0)
            int64_t* rcx_7 = arg1[1]
            (*(*rcx_7 + 0x20))(rcx_7, rdx_7)
        
        void* rax_6 = *arg1
        *(rax_6 + 0x10) -= 1
    
    *r12 += 1
    r15 = &r15[2]

void* rdx_8 = *arg1

if (*(rdx_8 + 0x10) != 0)
    if (*(*(rdx_8 + 8) + zx.q(*(rdx_8 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_11 = arg1[1]
        (*(*rcx_11 + 0x20))(rcx_11, rdx_8)
    
    i = *arg1
    *(i + 0x10) -= 1

return i
