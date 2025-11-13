// 函数: sub_1422d3d80
// 地址: 0x1422d3d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1[1].d)
int32_t rax = (rbx + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405c4e40(arg1)

int64_t rcx_1 = rbx << 5
__builtin_memset(rcx_1 + *arg1, 0, 0x20)
char arg_40
char rbp_1 = arg_40
int128_t* result = *arg1 + rcx_1
*result = *arg3
result[1].d = *(arg1[2] + 0xa0)
char arg_38

if (arg_38 != 0)
    int64_t* rbx_1 = arg1[2]
    arg_38.d = zx.d(arg6)
    (*(*rbx_1 + 0x168))(rbx_1, &arg_38)
    
    if (rbp_1 != 0)
        int64_t* rcx_4 = rbx_1[1]
        arg_40.d = 0xabadf00d
        int32_t* rdx_2 = *rcx_4
        
        if (&rdx_2[1] u> rcx_4[1])
            int32_t* rdx_3 = &arg_40
            
            if ((*(rbx_1 + 0x29) & 0x20) != 0)
                sub_140b54070(rbx_1, rdx_3, arg5)
            else
                (*(*rbx_1 + 0x150))(rbx_1, rdx_3, 4)
        else
            arg_40.d = *rdx_2
            *rcx_4 += 4

*(result + 0x18) = *(arg1[2] + 0xa0)
int64_t* rcx_7 = *arg2
(*(*rcx_7 + 0x90))(rcx_7, arg1[2], 0, arg7, 0)
*(result + 0x1c) = *(arg1[2] + 0xa0) - *(result + 0x18)

if (rbp_1 != 0)
    sub_1422b3d30(arg2, arg4, arg7, arg1[2], arg5)

*(result + 0x14) = *(arg1[2] + 0xa0) - result[1].d
return result
