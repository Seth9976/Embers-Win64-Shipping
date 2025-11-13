// 函数: sub_142697d30
// 地址: 0x142697d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x1d]
void* rax_1 = (*(*rcx + 0x150))(rcx)
void* const rbx_1

if (rax_1 == 0)
    rbx_1 = nullptr
else
    rbx_1 = *(rax_1 + 0x120)
    
    if (rbx_1 == 0)
        rbx_1 = nullptr
    else
        void* rax_2 = sub_14269bba0()
        void* rdx_1 = *(rbx_1 + 0x10)
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
            rbx_1 = nullptr

int32_t rax_5 = sub_14265a0b0(rbx_1)
uint64_t rcx_3 = arg1[0x1d]

if (rcx_3 == 0)
    rcx_3.b = 1
else
    rcx_3.b = not.b((*(rcx_3 + 0x474) u>> 5).b)
    
    if ((rcx_3.b & 1) != 0)
        rcx_3.b = 1
    else
        rcx_3.b = 0

int32_t r8_2 = 1

if (rcx_3.b != 0)
    r8_2 = arg1[0x16].d

int64_t var_18
int64_t* result = sub_14268e940(arg1, &var_18, r8_2 - rax_5)
int32_t var_10

if (var_10 s> 0)
    int64_t* rcx_6 = arg1[0x1d]
    result = (*(*rcx_6 + 0x780))(rcx_6, &var_18)

int64_t rcx_7 = var_18

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
