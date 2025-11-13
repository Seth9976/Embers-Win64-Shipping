// 函数: sub_142007b90
// 地址: 0x142007b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sub_140b73b20(0)
int16_t* const rdi = &data_142d40450
int16_t* rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

if (sub_140a54510(rax, rdx) != 0)
    int16_t* rdx_1
    
    if (arg2[1].d == 0)
        rdx_1 = &data_142d40450
    else
        rdx_1 = *arg2
    
    if (data_143de54e8 != 0)
        rdi = data_143de54e0
    
    if (sub_140a54510(rdi, rdx_1) != 0 && sub_1405a71a0(&data_143de5500, arg2) == 0)
        int64_t* rcx_2 = *arg3
        return sub_14200e900(arg1, 
            You are not authorized to grant or deny remote access to other users.", 
            (*(*rcx_2 + 0x48))(rcx_2))

int32_t result = sub_1406daa50(&data_143de5500, &arg2[2])

if (result != 0xffffffff)
    return result

int64_t rbx_1 = sx.q(data_143de5508)
int32_t rax_6 = (rbx_1 + 1).d
bool cond:1_1 = rax_6 s<= data_143de550c
data_143de5508 = rax_6

if (not(cond:1_1))
    sub_1405a4f90(&data_143de5500)

return sub_140596d10((rbx_1 << 4) + data_143de5500, &arg2[2])
