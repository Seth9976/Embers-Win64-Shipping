// 函数: sub_140949350
// 地址: 0x140949350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1].d = 0
arg1[2] = 0
arg1[3].d = 0
arg1[4] = 0
InitializeCriticalSection(&arg1[7])
SetCriticalSectionSpinCount(&arg1[7], 0xfa0)
__builtin_memset(&arg1[0xc], 0, 0x20)
sub_141c30760(&arg1[0x10])
arg1[0x1e].d = 0
int32_t rax = sub_1424378d0()
int32_t rax_1 = sub_1424378b0()
void arg_8
int64_t rbx = *sub_140b58170(&arg_8, "Voice", 1)
j_sub_140b3db50()
int64_t* rax_3 = j_sub_140b407e0(&data_143de7d78, rbx)
void var_38
int64_t* rax_4 = (*(*rax_3 + 0x50))(rax_3, &var_38, zx.q(rax), zx.q(rax_1))

if (&arg1[0xe] != rax_4)
    arg1[0xe] = *rax_4
    *rax_4 = 0
    int64_t rcx_6 = rax_4[1]
    int64_t* rbx_1 = arg1[0xf]
    
    if (rcx_6 != rbx_1)
        rax_4[1] = 0
        arg1[0xf] = rcx_6
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

uint64_t rax_10 = zx.q(sub_1424370f0() * 2)
*arg1 = rax_10.d
*(arg1 + 4) = (rax_10 * 5).d
EnterCriticalSection(&arg1[7])
int32_t rdx_2 = *(arg1 + 4)
arg1[0xd].d = 0

if (*(arg1 + 0x6c) != rdx_2)
    sub_1405c5510(&arg1[0xc], rdx_2)

if (arg1 != -0x38)
    LeaveCriticalSection(&arg1[7])

return arg1
