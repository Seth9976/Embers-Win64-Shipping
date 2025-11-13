// 函数: sub_140fc4690
// 地址: 0x140fc4690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x11] = arg2
*arg1 = &data_142ef1c00
int64_t rbx = arg3
memset(arg1 + 0xa, 0, 0x7e)
arg1[1].w = 0
int64_t arg_8

if (rbx == 0 && arg2 != 0)
    rbx = *(*(*arg2 + 0x118))(arg2, &arg_8)

int64_t rdx_1 = data_143e2b868
arg_8 = rbx
int32_t arg_10
int64_t rax_3

if ((-0x8000000000000000 & rdx_1) == 0 || rbx != 0)
    rax_3 = *sub_140b63580(&data_143e2b868, &arg_10)
    rax_3.b = arg_8 == rax_3
else
    char* rdx_2 = rdx_1 & 0x7fffffffffffffff
    int64_t* rcx_2 = &arg_8
    
    if (data_143e2b874 != 0)
        rax_3 = sub_140b5b9d0(rcx_2, rdx_2)
    else
        rax_3 = sub_140b5b8c0(rcx_2, rdx_2)

if (rax_3.b == 0)
    int64_t rdx_4 = data_143e2b878
    arg_8 = rbx
    int64_t rax_5
    
    if ((-0x8000000000000000 & rdx_4) == 0 || rbx != 0)
        rax_5 = *sub_140b63580(&data_143e2b878, &arg_10)
        rax_5.b = arg_8 == rax_5
    else
        char* rdx_5 = rdx_4 & 0x7fffffffffffffff
        int64_t* rcx_3 = &arg_8
        
        if (data_143e2b884 != 0)
            rax_5 = sub_140b5b9d0(rcx_3, rdx_5)
        else
            rax_5 = sub_140b5b8c0(rcx_3, rdx_5)
    
    if (rax_5.b == 0)
        arg1[1].w = 0
    else
        arg1[1].w = 0x17
else
    arg1[1].w = 2

return arg1
